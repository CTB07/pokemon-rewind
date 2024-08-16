# 1 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 2 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_PROF, 1
# 3 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_RIVAL, 6
# 4 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_PLAYER_BALL, 3
# 5 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_RIVAL_BALL, 2
# 6 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_PLAYER_STARTER, 4
# 7 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
.set LOCALID_RIVAL_STARTER, 5
# 8 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 9 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_MapScripts::
# 10 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HomegeTown_ProfessorSequoiasLab_OnWarp
# 11 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HomegeTown_ProfessorSequoiasLab_OnFrame
# 12 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.byte 0
# 13 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 14 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_OnFrame:
# 15 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	map_script_2 VAR_HOMEGE_INTRO_STATE, 4, HomegeTown_ProfessorSequoiasLab_EventScript_GiveStarterEvent
# 16 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.2byte 0
# 17 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 18 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_OnWarp:
# 19 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	map_script_2 VAR_HOMEGE_INTRO_STATE, 4, HomegeTown_ProfessorSequoiasLab_EventScript_SetPlayerPosHideStarters
# 20 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.2byte 0
# 21 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 22 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_SetPlayerPosHideStarters::
# 23 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	hideobjectat LOCALID_PLAYER_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 25 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	hideobjectat LOCALID_RIVAL_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 26 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_PLAYER_STARTER
# 27 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_RIVAL_STARTER
# 28 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 29 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 30 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_GiveStarterEvent::
# 31 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	lockall
# 32 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 5
# 33 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfAppreciatesRescue, MSGBOX_DEFAULT
# 34 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 35 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 36 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	call_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_ParopeatAttachedToPlayer
# 37 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 38 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	call_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_PrimatioAttachedToPlayer
# 39 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 40 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	call_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_SubsteeAttachedToPlayer
# 41 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_PlayerStepsAway
# 42 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalStepsAway
# 43 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	showobjectat LOCALID_PLAYER_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 44 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	showobjectat LOCALID_RIVAL_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 45 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 46 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 15
# 47 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	fadescreen 3
# 48 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_CLICK
# 49 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 15
# 50 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	hideobjectat LOCALID_PLAYER_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 51 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	hideobjectat LOCALID_RIVAL_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 52 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	addobject LOCALID_PLAYER_STARTER
# 53 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	addobject LOCALID_RIVAL_STARTER
# 54 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	fadescreen 2
# 55 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 20
# 56 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER_STARTER, HomegeTown_ProfessorSequoiasLab_Movement_StarterCurious
# 57 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL_STARTER, HomegeTown_ProfessorSequoiasLab_Movement_RivalStarterCurious
# 58 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 59 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_FaceDownStarter
# 60 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_FaceDownStarter
# 61 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 62 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_PlayerFaceRightStarter
# 63 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalFaceLeftStarter
# 64 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PLAYER_STARTER, HomegeTown_ProfessorSequoiasLab_Movement_StarterLoving
# 65 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL_STARTER, HomegeTown_ProfessorSequoiasLab_Movement_RivalStarterLoving
# 66 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 67 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry VAR_0x8004, 0
# 68 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 10
# 69 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry VAR_0x8005, 0
# 70 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 71 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_FaceUp
# 72 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_FaceUp
# 73 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfMentionsBond, MSGBOX_DEFAULT
# 74 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 75 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesUp
# 76 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfPonders, MSGBOX_DEFAULT
# 77 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 78 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesDown
# 79 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 80 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	bufferleadmonspeciesname 0
# 81 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	message HomegeTown_ProfessorSequoiasLab_Text_ProfLetsYouKeepStarter
# 82 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmessage
# 83 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitfanfare
# 85 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfAsksNickname, MSGBOX_YESNO
# 86 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_RESULT, YES
# 87 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	call_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_NicknameStarter
# 88 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	bufferspeciesname 1, VAR_0x8005
# 89 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfAsksRivalNickname, MSGBOX_DEFAULT
# 90 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalStepTalkUp
# 91 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 92 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalDoesNotWantNickname, MSGBOX_DEFAULT
# 93 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 94 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 10
# 95 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfLetsMoveOn, MSGBOX_DEFAULT
# 96 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_PLAYER_STARTER
# 97 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_RIVAL_STARTER
# 98 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	showobjectat LOCALID_PLAYER_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 99 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	showobjectat LOCALID_RIVAL_BALL, MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB
# 100 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay 10
# 101 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_PlayerPicksUpStarter
# 102 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalPicksUpStarter
# 103 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 104 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_PLAYER_BALL
# 105 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_RIVAL_BALL
# 106 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfGivesPokedex, MSGBOX_DEFAULT
# 107 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	message HomegeTown_ProfessorSequoiasLab_Text_ReceivedPokedex
# 109 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitfanfare
# 110 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 111 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 112 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 113 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	special EnableNationalPokedex
# 114 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 115 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesTowardsRival
# 116 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 117 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfGivesRivalPokedex, MSGBOX_DEFAULT
# 118 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 119 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_ProfessorSequoiasLab_Movement_ProfessorBackToPlayer
# 120 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 121 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfExplainsPokedex, MSGBOX_DEFAULT
# 122 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_ProfessorSequoiasLab_Movement_ProfessorFaceLeftFaceDown
# 123 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 124 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_ProfSendsYouOff, MSGBOX_DEFAULT
# 125 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 126 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	releaseall
# 127 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 128 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 129 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfAppreciatesRescue:
# 130 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: That was quite the\n"
# 131 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "adventure, wasn't it?\p"
# 132 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Thank you both so much\n"
# 133 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "for helping me rescue these Pokémon!\p"
# 134 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: I'll make sure they\n"
# 135 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "don't manage to slip out again.\p"
# 136 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "If you don't mind handing them back now,\n"
# 137 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "that would be much appreciated!\p"
# 138 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Then I could properly\n"
# 139 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "give both of you your first Pokémon!$"
# 140 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 141 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_ParopeatAttachedToPlayer::
# 142 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8004 SPECIES_PAROPEAT
# 143 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8005 SPECIES_PRIMATIO
# 144 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_PAROPEAT
# 145 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_PRIMATIO
# 146 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 147 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 148 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 149 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 150 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 151 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 152 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 153 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 154 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	return
# 155 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 156 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_PrimatioAttachedToPlayer::
# 157 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8004 SPECIES_PRIMATIO
# 158 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8005 SPECIES_SUBSTEE
# 159 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_PRIMATIO
# 160 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SUBSTEE
# 161 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 162 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 163 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 164 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 165 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 166 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 167 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 168 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 169 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	return
# 170 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 171 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_SubsteeAttachedToPlayer::
# 172 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8004 SPECIES_SUBSTEE
# 173 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8005 SPECIES_PAROPEAT
# 174 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SUBSTEE
# 175 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_PAROPEAT
# 176 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 177 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 178 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 179 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 180 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_PIN
# 181 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_Exclaim
# 182 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 183 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmoncry
# 184 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	return
# 185 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 186 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_Exclaim:
# 187 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 189 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 190 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_PlayerStepsAway:
# 191 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_right
# 192 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	lock_facing_direction
# 193 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 194 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	unlock_facing_direction
# 195 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 196 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 197 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalStepsAway:
# 198 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_left
# 199 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	lock_facing_direction
# 200 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 201 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	unlock_facing_direction
# 202 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 203 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 204 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_StarterCurious:
# 205 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_left
# 206 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	emote_question_mark
# 207 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_4
# 208 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_slow_down
# 209 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_slow_left
# 210 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_up
# 211 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 212 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 213 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalStarterCurious:
# 214 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_4
# 215 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_right
# 216 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	emote_question_mark
# 217 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_4
# 218 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_slow_down
# 219 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_slow_right
# 220 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_up
# 221 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 222 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 223 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_FaceUp:
# 224 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_up
# 225 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 226 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 227 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_FaceDownStarter:
# 228 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 229 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 230 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 231 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_PlayerFaceRightStarter:
# 232 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_16
# 233 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_4
# 234 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_right
# 235 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 236 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 237 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalFaceLeftStarter:
# 238 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_16
# 239 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_8
# 240 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_left
# 241 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 242 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 243 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_StarterLoving:
# 244 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 245 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_up
# 246 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_left
# 247 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	jump_in_place_left
# 248 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	jump_in_place_left
# 249 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 250 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 251 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalStarterLoving:
# 252 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_4
# 253 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 254 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_up
# 255 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_right
# 256 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	jump_in_place_right
# 257 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	jump_in_place_right
# 258 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 259 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 260 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesUp:
# 261 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_up
# 262 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 263 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 264 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesDown:
# 265 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 266 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 267 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 268 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfMentionsBond:
# 269 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Hmm, how interesting!\p"
# 270 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "In the short time that both of you were\n"
# 271 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "with the Pokémon you two rescued, they\l"
# 272 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "seem to have created a bond with both\l"
# 273 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "of you!$"
# 274 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 275 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfPonders:
# 276 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: ...\p"
# 277 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: It's final, then...$"
# 278 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 279 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfLetsYouKeepStarter:
# 280 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: I have made up my mind.\p"
# 281 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "I have decided to let you both keep the\n"
# 282 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Pokémon that you helped save.\p"
# 283 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"
# 284 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 285 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfAsksNickname:
# 286 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: {PLAYER}, would you like to\n"
# 287 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "name your {STR_VAR_1}?$"
# 288 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 289 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_NicknameStarter::
# 290 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_0x8004, 0
# 291 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 292 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	return
# 293 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 294 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfAsksRivalNickname:
# 295 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: How about you, {RIVAL}?\p"
# 296 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Would you like to nickname your\n"
# 297 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{STR_VAR_2}?$"
# 298 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 299 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalStepTalkUp:
# 300 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_in_place_up
# 301 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 302 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 303 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalDoesNotWantNickname:
# 304 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}: Nah.\p"
# 305 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "My {STR_VAR_2} is top tier the\n"
# 306 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "the way it is.\p"
# 307 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "A nickname would just be\n"
# 308 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "unnecessary.$"
# 309 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 310 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfLetsMoveOn:
# 311 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Right, let's move onto\n"
# 312 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "deeper discussion.$"
# 313 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 314 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_PlayerPicksUpStarter:
# 315 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 316 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_8
# 317 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_up
# 318 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 319 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 320 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalPicksUpStarter:
# 321 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 322 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_8
# 323 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_up
# 324 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 325 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 326 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfGivesPokedex:
# 327 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: As you two should know\n"
# 328 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "by now, you are both officially Pokémon\l"
# 329 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "trainers.\p"
# 330 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "What is a Pokémon trainer without a\n"
# 331 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PokéDex?\p"
# 332 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "It's absolutely necessary for all\n"
# 333 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "trainers to own one.$"
# 334 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 335 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ReceivedPokedex:
# 336 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 337 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 338 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_ProfessorMovesTowardsRival:
# 339 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 340 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 341 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 342 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 343 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfGivesRivalPokedex:
# 344 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Here's your PokéDex,\n"
# 345 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}.$"
# 346 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 347 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_ProfessorBackToPlayer:
# 348 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 349 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 350 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 351 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 352 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfExplainsPokedex:
# 353 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: This special device allows\n"
# 354 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "you to identify and collect data for\l"
# 355 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "various Pokémon species.\p"
# 356 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "The two of you will help me discover\n"
# 357 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "more Pokémon species throughout the\l"
# 358 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Vidioh region.\p"
# 359 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "You would be surprised how many species\n"
# 360 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "are still out there to discover!$"
# 361 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 362 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_ProfessorFaceLeftFaceDown:
# 363 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_left
# 364 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_16
# 365 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_16
# 366 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	delay_16
# 367 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 368 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 369 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 370 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_ProfSendsYouOff:
# 371 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "PROF. SEQUOIA: Well, that should be\n"
# 372 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "everything.\p"
# 373 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Be cautious on your journey, and\n"
# 374 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "occasionally come back to my lab so\l"
# 375 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "that I can check your PokéDex\l"
# 376 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "progress.\p"
# 377 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Take care, you two!$"
# 378 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 379 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger1::
# 380 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 381 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 0
# 382 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 383 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 384 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 385 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 386 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 387 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 388 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachOne
# 389 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 390 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 391 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 392 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 393 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 394 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 395 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 396 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 397 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 398 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 399 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 400 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 401 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger2::
# 402 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 403 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 1
# 404 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 405 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 406 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 407 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 408 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 409 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 410 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachTwo
# 411 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 412 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 413 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 414 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 415 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 416 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 417 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 418 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 419 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 420 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 421 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 422 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 423 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger3::
# 424 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 425 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 2
# 426 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 427 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 428 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 429 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 430 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 431 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 432 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachThree
# 433 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 434 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 435 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 436 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 437 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 438 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 439 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 440 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 441 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 442 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 443 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 444 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 445 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger4::
# 446 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 447 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 3
# 448 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 449 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 450 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 451 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 452 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 453 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 454 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachFour
# 455 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 456 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 457 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 458 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 459 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 460 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 461 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 462 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 463 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 464 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 465 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 466 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 467 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger5::
# 468 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 469 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 4
# 470 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 471 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 472 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 473 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 474 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 475 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 476 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachFive
# 477 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 478 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 479 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 480 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 481 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 482 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 483 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 484 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 485 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 486 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 487 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 488 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 489 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_Trigger6::
# 490 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_SEQUOIA_LAB_STATE 1
# 491 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setvar VAR_GENERAL 5
# 492 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 493 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 494 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 495 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalHey, MSGBOX_DEFAULT
# 496 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 497 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 498 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachSix
# 499 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 500 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing, MSGBOX_DEFAULT
# 501 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow, MSGBOX_DEFAULT
# 502 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 503 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 504 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio
# 505 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 506 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee
# 507 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 508 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat
# 509 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 510 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 511 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasParopeat::
# 512 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_LAB_PAROPEAT, HomegeTown_ProfessorSequoiasLab_Text_RivalDefeated, HomegeTown_ProfessorSequoiasLab_Text_RivalVictory
# 513 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitStart
# 514 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 515 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 516 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasPrimatio::
# 517 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_LAB_PRIMATIO, HomegeTown_ProfessorSequoiasLab_Text_RivalDefeated, HomegeTown_ProfessorSequoiasLab_Text_RivalVictory
# 518 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitStart
# 519 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 520 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 521 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalHasSubstee::
# 522 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_LAB_SUBSTEE, HomegeTown_ProfessorSequoiasLab_Text_RivalDefeated, HomegeTown_ProfessorSequoiasLab_Text_RivalVictory
# 523 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitStart
# 524 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 525 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 526 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalHey:
# 527 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Hey!$"
# 528 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 529 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalWhereYouGoing:
# 530 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}: Where do you think you're\n" 
# 531 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "going?$"
# 532 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	
# 533 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalBattleNow:
# 534 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "We're battling, {PLAYER}.\p"
# 535 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Right here.\n"
# 536 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Right now.$"
# 537 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 538 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachOne:
# 539 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 540 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 541 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 542 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 543 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 544 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 545 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 546 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachTwo:
# 547 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 548 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 549 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 550 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 551 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 552 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachThree:
# 553 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 554 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 555 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 556 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 557 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachFour:
# 558 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 559 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 560 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 561 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachFive:
# 562 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 563 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 564 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 565 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 566 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalApproachSix:
# 567 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 568 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 569 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 570 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	face_down
# 571 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 572 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 573 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalDefeated:
# 574 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Damn you, {PLAYER}!$"
# 575 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 576 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalVictory:
# 577 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Ha ha ha!\n"
# 578 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "That's all you got?$"
# 579 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 580 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitStart::
# 581 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	bufferspeciesname 1, VAR_0x8005
# 582 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalPostBattle, MSGBOX_DEFAULT
# 583 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 584 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 585 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 0
# 586 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitOne
# 587 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 1
# 588 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitTwoThree
# 589 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 2
# 590 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitTwoThree
# 591 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 3
# 592 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitFourFive
# 593 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 4
# 594 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitFourFive
# 595 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_GENERAL 5
# 596 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitSix
# 597 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 598 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 599 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitOne::
# 600 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalExitOne
# 601 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 602 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitEnd
# 603 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 604 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 605 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitTwoThree::
# 606 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalExitTwoThree
# 607 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 608 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitEnd
# 609 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 610 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 611 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitFourFive::
# 612 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalExitFourFive
# 613 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 614 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitEnd
# 615 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 616 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 617 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitSix::
# 618 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_ProfessorSequoiasLab_Movement_RivalExitSix
# 619 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	waitmovement 0
# 620 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitEnd
# 621 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 622 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 623 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalExitEnd::
# 624 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	playse SE_EXIT
# 625 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 626 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	setflag FLAG_LAB_INTRO_SEQUENCE
# 627 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	fadedefaultbgm
# 628 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 629 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 630 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalExitOne:
# 631 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 632 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 633 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 634 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 635 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 636 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 637 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 638 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 639 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 640 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 641 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalExitTwoThree:
# 642 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_right
# 643 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 644 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 645 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 646 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 647 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 648 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 649 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 650 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 651 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalExitFourFive:
# 652 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 653 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 654 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 655 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 656 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 657 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 658 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 659 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 660 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 661 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Movement_RivalExitSix:
# 662 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 663 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_left
# 664 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 665 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 666 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 667 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 668 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 669 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	walk_down
# 670 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	step_end
# 671 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 672 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalPostBattle:
# 673 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Heh, whatever.\p"
# 674 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "I'm going to get a head start\n"
# 675 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "by training my Pokémon.\p"
# 676 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "Later, loser.$"	
# 677 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 678 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 679 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToStarter::
# 680 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	lockall
# 681 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 0
# 682 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToPrimatio
# 683 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 1
# 684 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToSubstee
# 685 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	compare VAR_STARTER_MON 2
# 686 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	goto_if_eq HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToParopeat
# 687 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	releaseall
# 688 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 689 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 690 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToPrimatio::
# 691 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToPrimatio, MSGBOX_DEFAULT
# 692 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 693 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	releaseall
# 694 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 695 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 696 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToSubstee::
# 697 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToSubstee, MSGBOX_DEFAULT
# 698 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 699 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	releaseall
# 700 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 701 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 702 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_EventScript_RivalTalkingToParopeat::
# 703 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	msgbox HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToParopeat, MSGBOX_DEFAULT
# 704 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	closemessage
# 705 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	releaseall
# 706 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	end
# 707 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 708 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToPrimatio:
# 709 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}: You hear me, Primatio?\p"
# 710 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "We're going to dominate Vidioh.$"
# 711 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 712 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToSubstee:
# 713 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}: You hear me, Substee?\p"
# 714 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "We're going to dominate Vidioh.$"
# 715 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"

# 716 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
HomegeTown_ProfessorSequoiasLab_Text_RivalTalkingToParopeat:
# 717 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "{RIVAL}: You hear me, Paropeat?\p"
# 718 "data/maps/HomegeTown_ProfessorSequoiasLab/scripts.pory"
	.string "We're going to dominate Vidioh.$"
