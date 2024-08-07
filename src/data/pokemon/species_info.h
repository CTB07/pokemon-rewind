#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD(picTable, _size, shadow, _tracks, ...)                                    \
.overworldData = {                                                                          \
    .tileTag = TAG_NONE,                                                                    \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                         \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                             \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                               \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                              \
    .paletteSlot = PALSLOT_NPC_1,                                                           \
    .shadowSize = shadow,                                                                   \
    .inanimate = FALSE,                                                                     \
    .compressed = COMP,                                                                     \
    .tracks = _tracks,                                                                      \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64), \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),         \
    .anims = sAnimTable_Following,                                                          \
    .images = picTable,                                                                     \
    .affineAnims = gDummySpriteAffineAnimTable,                                             \
},                                                                                          \
    OVERWORLD_PAL(__VA_ARGS__)
#else
#define OVERWORLD(picTable, _size, shadow, _tracks, ...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

#if POKEMON_NAME_LENGTH >= 12
#define HANDLE_EXPANDED_SPECIES_NAME(_name, ...) _(DEFAULT(_name, __VA_ARGS__))
#else
#define HANDLE_EXPANDED_SPECIES_NAME(_name, ...) _(_name)
#endif

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_None,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .forceTeraType = type,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_TINY_MUSHROOM,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .safariZoneFleeRate = 0,
        .noFlip = FALSE,
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        //.frontPicFemale = gMonFrontPic_CircledQuestionMark,
        //.frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        //.backPicFemale = gMonBackPic_CircledQuestionMarkF,
        //.backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        //.paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        //.iconSpriteFemale = gMonIcon_QuestionMarkF,
        //.iconPalIndexFemale = 1,
        .enemyMonElevation = 0,
        .isLegendary = FALSE,
        .isMythical = FALSE,
        .isUltraBeast = FALSE,
        .isParadox = FALSE,
        .isTotem = FALSE,
        .isMegaEvolution = FALSE,
        .isPrimalReversion = FALSE,
        .isUltraBurst = FALSE,
        .isGigantamax = FALSE,
        .isTeraForm = FALSE,
        .isAlolanForm = FALSE,
        .isGalarianForm = FALSE,
        .isHisuianForm = FALSE,
        .isPaldeanForm = FALSE,
        .cannotBeTraded = FALSE,
        .allPerfectIVs = FALSE,
        .dexForceRequired = FALSE,   // This species will be taken into account for Pokédex ratings even if they have the "isMythical" flag set.
        .tmIlliterate = FALSE,   // This species will be unable to learn the universal moves.
        .isFrontierBanned = FALSE,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        .allPerfectIVs = TRUE,
    },
    */
   [SPECIES_PAROPEAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed   = 70,
        .baseSpAttack   = 65,
        .baseSpDefense   = 50,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 67,
        .evYield_Speed = 1,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_GRASS),
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_ECHO_CHAMBER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .speciesName = _("Paropeat"),
        //.cryId = CRY_PAROPEAT,
       .natDexNum = NATIONAL_DEX_PAROPEAT,
        .categoryName = _("Echo"),
       .height = 0,
       .weight = 0,
       .description = COMPOUND_STRING(
              "Paropeat mimic everything they hear.\n"
              "They repeat these phrases and sentences\n"
              "so often that the original meanings are\n"
              "usually lost forever."),
       .pokemonScale = 356,
       .pokemonOffset = 17,
       .trainerScale = 256,
       .trainerOffset = 0,
       .frontPic = gMonFrontPic_Paropeat,
       .frontPicSize = MON_COORDS_SIZE(64, 64),
       .frontPicYOffset = 8,
       .frontAnimFrames = sAnims_Paropeat,
      .backPic = gMonBackPic_Paropeat,
       .backPicSize = MON_COORDS_SIZE(64, 64),
       .backPicYOffset = 7,
       .palette = gMonPalette_Paropeat,
       .shinyPalette = gMonShinyPalette_Paropeat,
       .iconSprite = gMonIcon_Paropeat,
       .iconPalIndex = 1,
       //FOOTPRINT(Paropeat)
       .levelUpLearnset = sParopeatLevelUpLearnset,
       //.teachableLearnset = sParopeatTeachableLearnset,
       //.eggMoveLearnset = sParopeatEggMoveLearnset,
       .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MACAUMENT}),
    },
    [SPECIES_MACAUMENT] =
        {
            .baseHP        = 60,
            .baseAttack    = 70,
            .baseDefense   = 60,
            .baseSpeed   = 80,
            .baseSpAttack   = 75,
            .baseSpDefense   = 60,
            .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
            .catchRate = 45,
            .expYield = 110,
            .evYield_Speed = 1,
            .evYield_SpAttack = 1,
            .itemCommon = ITEM_NONE,
            .itemRare = ITEM_NONE,
            .genderRatio = PERCENT_FEMALE(12.5),
            .eggCycles = 20,
            .friendship = 70,
            .growthRate = GROWTH_MEDIUM_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_GRASS),
            .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_ECHO_CHAMBER},
            .bodyColor = BODY_COLOR_GREEN,
            .noFlip = FALSE,
            .speciesName = _("Macaument"),
            //.cryId = CRY_MACAUMENT,
        .natDexNum = NATIONAL_DEX_MACAUMENT,
            .categoryName = _("Dialogue"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
                "Paropeat mimic everything they hear.\n"
                "They repeat these phrases and sentences\n"
                "so often that the original meanings are\n"
                "usually lost forever."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Macaument,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Macaument,
        .backPic = gMonBackPic_Macaument,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .palette = gMonPalette_Macaument,
        .shinyPalette = gMonShinyPalette_Macaument,
        .iconSprite = gMonIcon_Macaument,
        .iconPalIndex = 1,
        //FOOTPRINT(Macaument)
        .levelUpLearnset = sMacaumentLevelUpLearnset,
        //.teachableLearnset = sMacaumentTeachableLearnset,
        //.eggMoveLearnset = sMacaumentEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARGUWINT}),
    },
    [SPECIES_ARGUWINT] =
        {
            .baseHP        = 70,
            .baseAttack    = 105,
            .baseDefense   = 60,
            .baseSpeed   = 110,
            .baseSpAttack   = 115,
            .baseSpDefense   = 75,
            .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
            .catchRate = 45,
            .expYield = 203,
            .evYield_Speed = 1,
            .evYield_SpAttack = 2,
            .itemCommon = ITEM_NONE,
            .itemRare = ITEM_NONE,
            .genderRatio = PERCENT_FEMALE(12.5),
            .eggCycles = 20,
            .friendship = 70,
            .growthRate = GROWTH_MEDIUM_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_GRASS),
            .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_ECHO_CHAMBER},
            .bodyColor = BODY_COLOR_GREEN,
            .noFlip = FALSE,
            .speciesName = _("Arguwint"),
            //.cryId = CRY_ARGUWINT,
        .natDexNum = NATIONAL_DEX_ARGUWINT,
            .categoryName = _("Scholar"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
                "Paropeat mimic everything they hear.\n"
                "They repeat these phrases and sentences\n"
                "so often that the original meanings are\n"
                "usually lost forever."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arguwint,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Arguwint,
        .backPic = gMonBackPic_Arguwint,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .palette = gMonPalette_Arguwint,
        .shinyPalette = gMonShinyPalette_Arguwint,
        .iconSprite = gMonIcon_Arguwint,
        .iconPalIndex = 1,
        //FOOTPRINT(Arguwint)
        .levelUpLearnset = sArguwintLevelUpLearnset,
        //.teachableLearnset = sArguwintTeachableLearnset,
        //.eggMoveLearnset = sArguwintEggMoveLearnset,

    },
};
