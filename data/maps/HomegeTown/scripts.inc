# 1 "data/maps/HomegeTown/scripts.pory"

# 2 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_CAMPER, 2
# 3 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_PAROPEAT, 5
# 4 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_PRIMATIO, 4
# 5 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_SUBSTEE, 3
# 6 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 7 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_PROF, 6
# 8 "data/maps/HomegeTown/scripts.pory"
.set LOCALID_NICERIVAL, 8
# 9 "data/maps/HomegeTown/scripts.pory"

# 10 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MapScripts::
# 11 "data/maps/HomegeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HomegeTown_OnTransition
# 12 "data/maps/HomegeTown/scripts.pory"
	.byte 0
# 13 "data/maps/HomegeTown/scripts.pory"

# 14 "data/maps/HomegeTown/scripts.pory"
HomegeTown_OnTransition: 
# 15 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/HomegeTown/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 4
# 17 "data/maps/HomegeTown/scripts.pory"
	call_if_ge HomegeTown_EventScript_SetCamperPos
# 18 "data/maps/HomegeTown/scripts.pory"
	end
# 19 "data/maps/HomegeTown/scripts.pory"

# 20 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SetCamperPos::
# 21 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_CAMPER, 35, 21
# 22 "data/maps/HomegeTown/scripts.pory"
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/HomegeTown/scripts.pory"
	return
# 24 "data/maps/HomegeTown/scripts.pory"

# 25 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Camper:: 
# 26 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_Camper, MSGBOX_NPC
# 27 "data/maps/HomegeTown/scripts.pory"
	end
# 28 "data/maps/HomegeTown/scripts.pory"

# 29 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TownSign:: 
# 30 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_TownSign, MSGBOX_SIGN
# 31 "data/maps/HomegeTown/scripts.pory"
	end
# 32 "data/maps/HomegeTown/scripts.pory"

# 33 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabDoorBack:: 
# 34 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_LabDoorBack, MSGBOX_SIGN
# 35 "data/maps/HomegeTown/scripts.pory"
	end
# 36 "data/maps/HomegeTown/scripts.pory"

# 37 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_FatMan:: 
# 38 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_FatManTech, MSGBOX_NPC
# 39 "data/maps/HomegeTown/scripts.pory"
	end
# 40 "data/maps/HomegeTown/scripts.pory"

# 41 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerTop:: 
# 42 "data/maps/HomegeTown/scripts.pory"
	lockall
# 43 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 44 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 45 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 47 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 48 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 50 "data/maps/HomegeTown/scripts.pory"
	end
# 51 "data/maps/HomegeTown/scripts.pory"

# 52 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidTop:: 
# 53 "data/maps/HomegeTown/scripts.pory"
	lockall
# 54 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 55 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 56 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 58 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 59 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 61 "data/maps/HomegeTown/scripts.pory"
	end
# 62 "data/maps/HomegeTown/scripts.pory"

# 63 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidBot:: 
# 64 "data/maps/HomegeTown/scripts.pory"
	lockall
# 65 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 66 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 67 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 69 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 70 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 72 "data/maps/HomegeTown/scripts.pory"
	end
# 73 "data/maps/HomegeTown/scripts.pory"

# 74 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerBot:: 
# 75 "data/maps/HomegeTown/scripts.pory"
	lockall
# 76 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 77 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerBot
# 78 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 80 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_BotCamperReturnRight
# 81 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 83 "data/maps/HomegeTown/scripts.pory"
	end
# 84 "data/maps/HomegeTown/scripts.pory"

# 85 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_DangerousWithoutPokemon::
# 86 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SorryPalNoPokemon, MSGBOX_DEFAULT
# 87 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 88 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 89 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 90 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_GoTalkToProfForPokemon, MSGBOX_DEFAULT
# 92 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 93 "data/maps/HomegeTown/scripts.pory"
	return
# 94 "data/maps/HomegeTown/scripts.pory"

# 95 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedToHelpFindPokemonTrigger::
# 96 "data/maps/HomegeTown/scripts.pory"
	lockall
# 97 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_NeedToHelpFindPokemon, MSGBOX_DEFAULT
# 98 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 99 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 100 "data/maps/HomegeTown/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/HomegeTown/scripts.pory"
	case DIR_EAST, HomegeTown_EventScript_LabTriggerFromLeft
# 102 "data/maps/HomegeTown/scripts.pory"
	case DIR_WEST, HomegeTown_EventScript_LabTriggerFromRight
# 103 "data/maps/HomegeTown/scripts.pory"
	case DIR_NORTH, HomegeTown_EventScript_LabTriggerFromBottom
# 104 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 105 "data/maps/HomegeTown/scripts.pory"
	end
# 106 "data/maps/HomegeTown/scripts.pory"

# 107 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_NeedToHelpFindPokemon: 
# 108 "data/maps/HomegeTown/scripts.pory"
	.string "PROF. SEQUOIA needs me to help search\n"
# 109 "data/maps/HomegeTown/scripts.pory"
	.string "for the runaway Pokémon.\p"
# 110 "data/maps/HomegeTown/scripts.pory"
	.string "They can't be in his lab, so I should\n"
# 111 "data/maps/HomegeTown/scripts.pory"
	.string "check somewhere else."
# 112 "data/maps/HomegeTown/scripts.pory"

# 113 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromLeft::
# 114 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerLeft
# 115 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/HomegeTown/scripts.pory"
	end
# 117 "data/maps/HomegeTown/scripts.pory"

# 118 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromRight::
# 119 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerRight
# 120 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/HomegeTown/scripts.pory"
	end
# 122 "data/maps/HomegeTown/scripts.pory"

# 123 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromBottom::
# 124 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerDown
# 125 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/HomegeTown/scripts.pory"
	end
# 127 "data/maps/HomegeTown/scripts.pory"

# 128 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerLeft:
# 129 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 130 "data/maps/HomegeTown/scripts.pory"
	step_end
# 131 "data/maps/HomegeTown/scripts.pory"

# 132 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerRight:
# 133 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 134 "data/maps/HomegeTown/scripts.pory"
	step_end
# 135 "data/maps/HomegeTown/scripts.pory"

# 136 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerDown:
# 137 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 138 "data/maps/HomegeTown/scripts.pory"
	step_end
# 139 "data/maps/HomegeTown/scripts.pory"

# 140 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabStarterTrigger::
# 141 "data/maps/HomegeTown/scripts.pory"
	lockall
# 142 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 143 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 3
# 144 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 35
# 145 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 11
# 146 "data/maps/HomegeTown/scripts.pory"
	playbgm MUS_HELP, 0
# 147 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 148 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_StopThem, MSGBOX_DEFAULT
# 149 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 150 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 151 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerStepsAwayFromLabDoor
# 152 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 154 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PAROPEAT
# 155 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 35, 11
# 156 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PAROPEAT, HomegeTown_Movement_ParopeatRunaway
# 157 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 158 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PRIMATIO
# 159 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 35, 11
# 160 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PRIMATIO, HomegeTown_Movement_PrimatioRunaway
# 161 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 162 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_SUBSTEE
# 163 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 35, 11
# 164 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_SUBSTEE, HomegeTown_Movement_SubsteeRunaway
# 165 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 12, 28
# 167 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 34, 45
# 168 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 13, 38
# 169 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 170 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfRunsOutOfLab
# 171 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 173 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalWalksOutOfLab
# 174 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 176 "data/maps/HomegeTown/scripts.pory"
	delay 50
# 177 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfApproachesPlayerRival
# 178 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerLooksDown
# 180 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfNeedsHelp, MSGBOX_DEFAULT
# 181 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 182 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStepTalk
# 183 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 184 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RivalWhatever, MSGBOX_DEFAULT
# 185 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 186 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLetsGetMoving, MSGBOX_DEFAULT
# 187 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 188 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfStartsSearching
# 189 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStartsSearching
# 190 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 192 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 193 "data/maps/HomegeTown/scripts.pory"
	fadedefaultbgm
# 194 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_STARTERS 		@ Should show the starers in Overworld
# 195 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 196 "data/maps/HomegeTown/scripts.pory"
	end
# 197 "data/maps/HomegeTown/scripts.pory"

# 198 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Paropeat::
# 199 "data/maps/HomegeTown/scripts.pory"
	lockall
# 200 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 0
# 201 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PAROPEAT, 10, 3
# 202 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 203 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ParopeatIntro, MSGBOX_DEFAULT
# 204 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueParopeatYesNo, MSGBOX_YESNO
# 205 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 206 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 207 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedParopeat
# 208 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 209 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 210 "data/maps/HomegeTown/scripts.pory"
	release
# 211 "data/maps/HomegeTown/scripts.pory"
	end
# 212 "data/maps/HomegeTown/scripts.pory"

# 213 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Primatio::
# 214 "data/maps/HomegeTown/scripts.pory"
	lockall
# 215 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 1
# 216 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PRIMATIO, 10, 3
# 217 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 218 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_PrimatioIntro, MSGBOX_DEFAULT
# 219 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescuePrimatioYesNo, MSGBOX_YESNO
# 220 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 221 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 222 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedPrimatio
# 223 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 224 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 225 "data/maps/HomegeTown/scripts.pory"
	release
# 226 "data/maps/HomegeTown/scripts.pory"
	end
# 227 "data/maps/HomegeTown/scripts.pory"

# 228 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Substee::
# 229 "data/maps/HomegeTown/scripts.pory"
	lockall
# 230 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 2
# 231 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 232 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_SUBSTEE, 10, 3
# 233 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SubsteeIntro, MSGBOX_DEFAULT
# 234 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueSubsteeYesNo, MSGBOX_YESNO
# 235 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 236 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 237 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedSubstee
# 238 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 239 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 240 "data/maps/HomegeTown/scripts.pory"
	release
# 241 "data/maps/HomegeTown/scripts.pory"
	end
# 242 "data/maps/HomegeTown/scripts.pory"

# 243 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_Exclaim:
# 244 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 245 "data/maps/HomegeTown/scripts.pory"
	step_end
# 246 "data/maps/HomegeTown/scripts.pory"

# 247 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ParopeatRunaway:
# 248 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 249 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 250 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 251 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 252 "data/maps/HomegeTown/scripts.pory"
	jump_right
# 253 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 254 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 255 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 256 "data/maps/HomegeTown/scripts.pory"
	step_end
# 257 "data/maps/HomegeTown/scripts.pory"

# 258 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PrimatioRunaway:
# 259 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 260 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 261 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 262 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 263 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 264 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 265 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 266 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 267 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 268 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 269 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 270 "data/maps/HomegeTown/scripts.pory"
	step_end
# 271 "data/maps/HomegeTown/scripts.pory"

# 272 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SubsteeRunaway:
# 273 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 274 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 275 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 276 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 277 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 278 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 279 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 280 "data/maps/HomegeTown/scripts.pory"
	jump_up
# 281 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 282 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 283 "data/maps/HomegeTown/scripts.pory"
	step_end
# 284 "data/maps/HomegeTown/scripts.pory"

# 285 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfRunsOutOfLab:
# 286 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 287 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 288 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 289 "data/maps/HomegeTown/scripts.pory"
	face_down
# 290 "data/maps/HomegeTown/scripts.pory"
	step_end
# 291 "data/maps/HomegeTown/scripts.pory"

# 292 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalWalksOutOfLab:
# 293 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 294 "data/maps/HomegeTown/scripts.pory"
	step_end
# 295 "data/maps/HomegeTown/scripts.pory"

# 296 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerLooksDown:
# 297 "data/maps/HomegeTown/scripts.pory"
	face_down
# 298 "data/maps/HomegeTown/scripts.pory"
	step_end
# 299 "data/maps/HomegeTown/scripts.pory"

# 300 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfApproachesPlayerRival:
# 301 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 302 "data/maps/HomegeTown/scripts.pory"
	face_up
# 303 "data/maps/HomegeTown/scripts.pory"
	step_end
# 304 "data/maps/HomegeTown/scripts.pory"

# 305 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfStartsSearching:
# 306 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 307 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 308 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 309 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 310 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 311 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 312 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 313 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 314 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 316 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 317 "data/maps/HomegeTown/scripts.pory"

# 318 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStartsSearching:
# 319 "data/maps/HomegeTown/scripts.pory"
	delay_8
# 320 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 321 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 322 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 323 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 324 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 325 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 326 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 327 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 328 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 329 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 333 "data/maps/HomegeTown/scripts.pory"

# 334 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerTop:
# 335 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 336 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 337 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 338 "data/maps/HomegeTown/scripts.pory"
	step_end
# 339 "data/maps/HomegeTown/scripts.pory"

# 340 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_TopCamperReturnRight:
# 341 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 342 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 343 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 344 "data/maps/HomegeTown/scripts.pory"
	face_left
# 345 "data/maps/HomegeTown/scripts.pory"
	step_end
# 346 "data/maps/HomegeTown/scripts.pory"

# 347 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidTop:
# 348 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 349 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 350 "data/maps/HomegeTown/scripts.pory"
	step_end
# 351 "data/maps/HomegeTown/scripts.pory"

# 352 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidTopCamperReturnRight:
# 353 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 354 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 355 "data/maps/HomegeTown/scripts.pory"
	face_left
# 356 "data/maps/HomegeTown/scripts.pory"
	step_end
# 357 "data/maps/HomegeTown/scripts.pory"

# 358 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidBot:
# 359 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 360 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 361 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 362 "data/maps/HomegeTown/scripts.pory"
	step_end
# 363 "data/maps/HomegeTown/scripts.pory"

# 364 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidBotCamperReturnRight:
# 365 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 366 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 367 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 368 "data/maps/HomegeTown/scripts.pory"
	face_left
# 369 "data/maps/HomegeTown/scripts.pory"
	step_end
# 370 "data/maps/HomegeTown/scripts.pory"

# 371 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerBot:
# 372 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 373 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 374 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 375 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 376 "data/maps/HomegeTown/scripts.pory"
	step_end
# 377 "data/maps/HomegeTown/scripts.pory"

# 378 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_BotCamperReturnRight:
# 379 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 380 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 381 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 382 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 383 "data/maps/HomegeTown/scripts.pory"
	face_left
# 384 "data/maps/HomegeTown/scripts.pory"
	step_end
# 385 "data/maps/HomegeTown/scripts.pory"

# 386 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperPushPlayerFromRoute:
# 387 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 388 "data/maps/HomegeTown/scripts.pory"
	step_end
# 389 "data/maps/HomegeTown/scripts.pory"

# 390 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PushPlayerBackFromRoute:
# 391 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 392 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 393 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 394 "data/maps/HomegeTown/scripts.pory"
	step_end
# 395 "data/maps/HomegeTown/scripts.pory"

# 396 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerStepsAwayFromLabDoor:
# 397 "data/maps/HomegeTown/scripts.pory"
	face_left
# 398 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 399 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 400 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 401 "data/maps/HomegeTown/scripts.pory"
	step_end
# 402 "data/maps/HomegeTown/scripts.pory"

# 403 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStepTalk:
# 404 "data/maps/HomegeTown/scripts.pory"
	walk_in_place_down
# 405 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 406 "data/maps/HomegeTown/scripts.pory"

# 407 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_TownSign: 
# 408 "data/maps/HomegeTown/scripts.pory"
	.string "HOMEGE TOWN\n"
# 409 "data/maps/HomegeTown/scripts.pory"
	.string "“A small town full of ambition.”$"
# 410 "data/maps/HomegeTown/scripts.pory"

# 411 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_LabDoorBack: 
# 412 "data/maps/HomegeTown/scripts.pory"
	.string "It's locked.$"
# 413 "data/maps/HomegeTown/scripts.pory"

# 414 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_StopThem:
# 415 "data/maps/HomegeTown/scripts.pory"
.string "???: STOP THEM!$"
# 416 "data/maps/HomegeTown/scripts.pory"

# 417 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfNeedsHelp:
# 418 "data/maps/HomegeTown/scripts.pory"
.string "PROF. SEQUOIA: {RIVAL}, {PLAYER}, I need\n"
# 419 "data/maps/HomegeTown/scripts.pory"
.string "your help!\p"
# 420 "data/maps/HomegeTown/scripts.pory"
.string "We need to get these Pokémon back\n"
# 421 "data/maps/HomegeTown/scripts.pory"
.string "quickly!\p"
# 422 "data/maps/HomegeTown/scripts.pory"
.string "Will you two please help me find the\n"
# 423 "data/maps/HomegeTown/scripts.pory"
.string "runaway Pokémon?$"
# 424 "data/maps/HomegeTown/scripts.pory"

# 425 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RivalWhatever:
# 426 "data/maps/HomegeTown/scripts.pory"
.string "{RIVAL}: Yeah, sure. Whatever.$"
# 427 "data/maps/HomegeTown/scripts.pory"

# 428 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfLetsGetMoving:
# 429 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: Great, now let's get searching.\n"
# 430 "data/maps/HomegeTown/scripts.pory"
.string "They couldn't have gone far.\p"
# 431 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: After we find them, come back\n"
# 432 "data/maps/HomegeTown/scripts.pory"
.string "to my lab immediately!$"
# 433 "data/maps/HomegeTown/scripts.pory"

# 434 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ParopeatIntro:
# 435 "data/maps/HomegeTown/scripts.pory"
.string "This is PAROPEAT, the ECHO POKéMON.\n$"
# 436 "data/maps/HomegeTown/scripts.pory"

# 437 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PrimatioIntro:
# 438 "data/maps/HomegeTown/scripts.pory"
.string "This is PRIMATIO, the FEEDBACK\n"
# 439 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 440 "data/maps/HomegeTown/scripts.pory"

# 441 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SubsteeIntro:
# 442 "data/maps/HomegeTown/scripts.pory"
.string "This is SUBSTEE, the SUPPORTER\n"
# 443 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 444 "data/maps/HomegeTown/scripts.pory"

# 445 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueParopeatYesNo:
# 446 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PAROPEAT?$"
# 447 "data/maps/HomegeTown/scripts.pory"

# 448 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescuePrimatioYesNo:
# 449 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PRIMATIO?$"
# 450 "data/maps/HomegeTown/scripts.pory"

# 451 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueSubsteeYesNo:
# 452 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue SUBSTEE?$"
# 453 "data/maps/HomegeTown/scripts.pory"

# 454 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedParopeat::
# 455 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PAROPEAT
# 456 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 457 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 458 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 459 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 460 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 461 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PAROPEAT, 5, ITEM_NONE
# 462 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 463 "data/maps/HomegeTown/scripts.pory"
	end
# 464 "data/maps/HomegeTown/scripts.pory"

# 465 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedPrimatio::
# 466 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PRIMATIO
# 467 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 468 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 469 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 470 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 471 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 472 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PRIMATIO, 5, ITEM_NONE
# 473 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 474 "data/maps/HomegeTown/scripts.pory"
	end
# 475 "data/maps/HomegeTown/scripts.pory"

# 476 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedSubstee::
# 477 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUBSTEE
# 478 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 479 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 480 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 481 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 482 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 483 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_SUBSTEE, 5, ITEM_NONE
# 484 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 485 "data/maps/HomegeTown/scripts.pory"
	end
# 486 "data/maps/HomegeTown/scripts.pory"

# 487 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveStarter::
# 488 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 489 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 490 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 0
# 491 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedParopeat
# 492 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 1
# 493 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedPrimatio
# 494 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 2
# 495 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedSubstee
# 496 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveAndNickname
# 497 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 498 "data/maps/HomegeTown/scripts.pory"
	warp MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB, 255, 6, 5
# 499 "data/maps/HomegeTown/scripts.pory"
	waitstate
# 500 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 501 "data/maps/HomegeTown/scripts.pory"
	end
# 502 "data/maps/HomegeTown/scripts.pory"

# 503 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedParopeat::
# 504 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 505 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedParopeat
# 506 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 507 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 508 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PAROPEAT
# 509 "data/maps/HomegeTown/scripts.pory"
	return
# 510 "data/maps/HomegeTown/scripts.pory"

# 511 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedPrimatio::
# 512 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 513 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedPrimatio
# 514 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 515 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 516 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PRIMATIO
# 517 "data/maps/HomegeTown/scripts.pory"
	return
# 518 "data/maps/HomegeTown/scripts.pory"

# 519 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedSubstee::
# 520 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 521 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedSubstee
# 522 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 523 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 524 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_SUBSTEE
# 525 "data/maps/HomegeTown/scripts.pory"
	return
# 526 "data/maps/HomegeTown/scripts.pory"

# 527 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveAndNickname::
# 528 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 529 "data/maps/HomegeTown/scripts.pory"
	return
# 530 "data/maps/HomegeTown/scripts.pory"

# 531 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign::
# 532 "data/maps/HomegeTown/scripts.pory"
	lockall
# 533 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 534 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 535 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTianaHouseSign_2
# 536 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_1
# 537 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_1:
# 538 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 539 "data/maps/HomegeTown/scripts.pory"
	return
# 540 "data/maps/HomegeTown/scripts.pory"

# 541 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_2:
# 542 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_0
# 543 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTianaHouseSign_1
# 544 "data/maps/HomegeTown/scripts.pory"

# 545 "data/maps/HomegeTown/scripts.pory"

# 546 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_0:
# 547 "data/maps/HomegeTown/scripts.pory"
	.string "Tiana's house$"
# 548 "data/maps/HomegeTown/scripts.pory"

# 549 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_1:
# 550 "data/maps/HomegeTown/scripts.pory"
	.string "Matt's house$"
# 551 "data/maps/HomegeTown/scripts.pory"

# 552 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign::
# 553 "data/maps/HomegeTown/scripts.pory"
	lockall
# 554 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_RivalHouseSign_Text_0
# 555 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 556 "data/maps/HomegeTown/scripts.pory"
	return
# 557 "data/maps/HomegeTown/scripts.pory"

# 558 "data/maps/HomegeTown/scripts.pory"

# 559 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign_Text_0:
# 560 "data/maps/HomegeTown/scripts.pory"
	.string "{RIVAL}'s house$"
# 561 "data/maps/HomegeTown/scripts.pory"

# 562 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign::
# 563 "data/maps/HomegeTown/scripts.pory"
	lockall
# 564 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_PlayerHouseSign_Text_0
# 565 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 566 "data/maps/HomegeTown/scripts.pory"
	return
# 567 "data/maps/HomegeTown/scripts.pory"

# 568 "data/maps/HomegeTown/scripts.pory"

# 569 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign_Text_0:
# 570 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}'s house$"
# 571 "data/maps/HomegeTown/scripts.pory"

# 572 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk::
# 573 "data/maps/HomegeTown/scripts.pory"
	lockall
# 574 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 575 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 576 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTiana_Peptalk_2
# 577 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_8
# 578 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_3
# 579 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_1:
# 580 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_TEMP_1
# 581 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 582 "data/maps/HomegeTown/scripts.pory"
	return
# 583 "data/maps/HomegeTown/scripts.pory"

# 584 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_2:
# 585 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_5
# 586 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_1
# 587 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 588 "data/maps/HomegeTown/scripts.pory"

# 589 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_5:
# 590 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_0
# 591 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 592 "data/maps/HomegeTown/scripts.pory"

# 593 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_8:
# 594 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_2
# 595 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 596 "data/maps/HomegeTown/scripts.pory"

# 597 "data/maps/HomegeTown/scripts.pory"

# 598 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_0:
# 599 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 600 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 601 "data/maps/HomegeTown/scripts.pory"

# 602 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_1:
# 603 "data/maps/HomegeTown/scripts.pory"
	.string "???: I'm good enough, I'm smart\n"
# 604 "data/maps/HomegeTown/scripts.pory"
	.string "enough, and doggone it, people like me!$"
# 605 "data/maps/HomegeTown/scripts.pory"

# 606 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_2:
# 607 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 608 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 609 "data/maps/HomegeTown/scripts.pory"

# 610 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_3:
# 611 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 612 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 613 "data/maps/HomegeTown/scripts.pory"

# 614 "data/maps/HomegeTown/scripts.pory"

# 615 "data/maps/HomegeTown/scripts.pory"

# 616 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedParopeat:
# 617 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PAROPEAT!$"
# 618 "data/maps/HomegeTown/scripts.pory"

# 619 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedPrimatio:
# 620 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PRIMATIO!$"
# 621 "data/maps/HomegeTown/scripts.pory"

# 622 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedSubstee:
# 623 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued SUBSTEE!$"
# 624 "data/maps/HomegeTown/scripts.pory"

# 625 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_FatManTech: 
# 626 "data/maps/HomegeTown/scripts.pory"
	.string "The power of technology is astounding!\n"
# 627 "data/maps/HomegeTown/scripts.pory"
	.string "I can download and play roms on my PC,\l"
# 628 "data/maps/HomegeTown/scripts.pory"
	.string "and I don't even need to pay\l"
# 629 "data/maps/HomegeTown/scripts.pory"
	.string "anything!\p"
# 630 "data/maps/HomegeTown/scripts.pory"
	.string "...What do you mean that's not legal?$"
# 631 "data/maps/HomegeTown/scripts.pory"

# 632 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SorryPalNoPokemon: 
# 633 "data/maps/HomegeTown/scripts.pory"
	.string "Sorry, pal.$"
# 634 "data/maps/HomegeTown/scripts.pory"

# 635 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_GoTalkToProfForPokemon: 
# 636 "data/maps/HomegeTown/scripts.pory"
	.string "You don't have any Pokémon on you,\n"
# 637 "data/maps/HomegeTown/scripts.pory"
	.string "and there are some strong Pokémon\l"
# 638 "data/maps/HomegeTown/scripts.pory"
	.string "out there!\p"
# 639 "data/maps/HomegeTown/scripts.pory"
	.string "I heard the professor has Pokémon.\n"
# 640 "data/maps/HomegeTown/scripts.pory"
	.string "Go talk to him. If you're lucky, he might\l"
# 641 "data/maps/HomegeTown/scripts.pory"
	.string "give you one.$"
# 642 "data/maps/HomegeTown/scripts.pory"
	
# 643 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_Camper:
# 644 "data/maps/HomegeTown/scripts.pory"
	.string "Huh, so you got a Pokémon?\p"
# 645 "data/maps/HomegeTown/scripts.pory"
	.string "Wonder what I'm going to do with\n"
# 646 "data/maps/HomegeTown/scripts.pory"
	.string "my life now...$"
