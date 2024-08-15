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

# 9 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MapScripts::
# 10 "data/maps/HomegeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HomegeTown_OnTransition
# 11 "data/maps/HomegeTown/scripts.pory"
	.byte 0
# 12 "data/maps/HomegeTown/scripts.pory"

# 13 "data/maps/HomegeTown/scripts.pory"
HomegeTown_OnTransition: 
# 14 "data/maps/HomegeTown/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 4
# 15 "data/maps/HomegeTown/scripts.pory"
	call_if_ge HomegeTown_EventScript_SetCamperPos
# 16 "data/maps/HomegeTown/scripts.pory"
	end
# 17 "data/maps/HomegeTown/scripts.pory"

# 18 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SetCamperPos::
# 19 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_CAMPER, 30, 16
# 20 "data/maps/HomegeTown/scripts.pory"
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/HomegeTown/scripts.pory"
	return
# 22 "data/maps/HomegeTown/scripts.pory"

# 23 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Camper:: 
# 24 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_Camper, MSGBOX_NPC
# 25 "data/maps/HomegeTown/scripts.pory"
	end
# 26 "data/maps/HomegeTown/scripts.pory"

# 27 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TownSign:: 
# 28 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/HomegeTown/scripts.pory"
	end
# 30 "data/maps/HomegeTown/scripts.pory"

# 31 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_FatMan:: 
# 32 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_FatManTech, MSGBOX_NPC
# 33 "data/maps/HomegeTown/scripts.pory"
	end
# 34 "data/maps/HomegeTown/scripts.pory"

# 35 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerTop:: 
# 36 "data/maps/HomegeTown/scripts.pory"
	lockall
# 37 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 38 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 39 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 41 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 42 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 44 "data/maps/HomegeTown/scripts.pory"
	end
# 45 "data/maps/HomegeTown/scripts.pory"

# 46 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidTop:: 
# 47 "data/maps/HomegeTown/scripts.pory"
	lockall
# 48 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 49 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 50 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 52 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 53 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 55 "data/maps/HomegeTown/scripts.pory"
	end
# 56 "data/maps/HomegeTown/scripts.pory"

# 57 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidBot:: 
# 58 "data/maps/HomegeTown/scripts.pory"
	lockall
# 59 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 60 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 61 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 63 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 64 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 66 "data/maps/HomegeTown/scripts.pory"
	end
# 67 "data/maps/HomegeTown/scripts.pory"

# 68 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerBot:: 
# 69 "data/maps/HomegeTown/scripts.pory"
	lockall
# 70 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 71 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerBot
# 72 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 74 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_BotCamperReturnRight
# 75 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 77 "data/maps/HomegeTown/scripts.pory"
	end
# 78 "data/maps/HomegeTown/scripts.pory"

# 79 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_DangerousWithoutPokemon::
# 80 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SorryPalNoPokemon, MSGBOX_DEFAULT
# 81 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 82 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 83 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 84 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_GoTalkToProfForPokemon, MSGBOX_DEFAULT
# 86 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 87 "data/maps/HomegeTown/scripts.pory"
	return
# 88 "data/maps/HomegeTown/scripts.pory"

# 89 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedToHelpFindPokemonTrigger::
# 90 "data/maps/HomegeTown/scripts.pory"
	lockall
# 91 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_NeedToHelpFindPokemon, MSGBOX_DEFAULT
# 92 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 93 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 94 "data/maps/HomegeTown/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/HomegeTown/scripts.pory"
	case DIR_EAST, HomegeTown_EventScript_LabTriggerFromLeft
# 96 "data/maps/HomegeTown/scripts.pory"
	case DIR_WEST, HomegeTown_EventScript_LabTriggerFromRight
# 97 "data/maps/HomegeTown/scripts.pory"
	case DIR_NORTH, HomegeTown_EventScript_LabTriggerFromBottom
# 98 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 99 "data/maps/HomegeTown/scripts.pory"
	end
# 100 "data/maps/HomegeTown/scripts.pory"

# 101 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_NeedToHelpFindPokemon: 
# 102 "data/maps/HomegeTown/scripts.pory"
	.string "PROF. SEQUOIA needs me to help search\n"
# 103 "data/maps/HomegeTown/scripts.pory"
	.string "for the runaway Pokémon.\p"
# 104 "data/maps/HomegeTown/scripts.pory"
	.string "They can't be in his lab, so I should\n"
# 105 "data/maps/HomegeTown/scripts.pory"
	.string "check somewhere else."
# 106 "data/maps/HomegeTown/scripts.pory"

# 107 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromLeft::
# 108 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerLeft
# 109 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/HomegeTown/scripts.pory"
	end
# 111 "data/maps/HomegeTown/scripts.pory"

# 112 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromRight::
# 113 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerRight
# 114 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/HomegeTown/scripts.pory"
	end
# 116 "data/maps/HomegeTown/scripts.pory"

# 117 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromBottom::
# 118 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerDown
# 119 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/HomegeTown/scripts.pory"
	end
# 121 "data/maps/HomegeTown/scripts.pory"

# 122 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerLeft:
# 123 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 124 "data/maps/HomegeTown/scripts.pory"
	step_end
# 125 "data/maps/HomegeTown/scripts.pory"

# 126 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerRight:
# 127 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 128 "data/maps/HomegeTown/scripts.pory"
	step_end
# 129 "data/maps/HomegeTown/scripts.pory"

# 130 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerDown:
# 131 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 132 "data/maps/HomegeTown/scripts.pory"
	step_end
# 133 "data/maps/HomegeTown/scripts.pory"

# 134 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabStarterTrigger::
# 135 "data/maps/HomegeTown/scripts.pory"
	lockall
# 136 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 137 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 3
# 138 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 29
# 139 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 6
# 140 "data/maps/HomegeTown/scripts.pory"
	playbgm MUS_HELP, 0
# 141 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 142 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_StopThem, MSGBOX_DEFAULT
# 143 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 144 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 145 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerStepsAwayFromLabDoor
# 146 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 148 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PAROPEAT
# 149 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 29, 6
# 150 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PAROPEAT, HomegeTown_Movement_ParopeatRunaway
# 151 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 152 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PRIMATIO
# 153 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 29, 6
# 154 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PRIMATIO, HomegeTown_Movement_PrimatioRunaway
# 155 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 156 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_SUBSTEE
# 157 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 29, 6
# 158 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_SUBSTEE, HomegeTown_Movement_SubsteeRunaway
# 159 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 28, 36
# 161 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 10, 38
# 162 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 6, 18
# 163 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 164 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfRunsOutOfLab
# 165 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 167 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalWalksOutOfLab
# 168 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 170 "data/maps/HomegeTown/scripts.pory"
	delay 50
# 171 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfApproachesPlayerRival
# 172 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerLooksDown
# 174 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfNeedsHelp, MSGBOX_DEFAULT
# 175 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 176 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStepTalk
# 177 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RivalWhatever, MSGBOX_DEFAULT
# 179 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 180 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLetsGetMoving, MSGBOX_DEFAULT
# 181 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 182 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfStartsSearching
# 183 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStartsSearching
# 184 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 186 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 187 "data/maps/HomegeTown/scripts.pory"
	fadedefaultbgm
# 188 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_STARTERS 		@ Should show the starers in Overworld
# 189 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 190 "data/maps/HomegeTown/scripts.pory"
	end
# 191 "data/maps/HomegeTown/scripts.pory"

# 192 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Paropeat::
# 193 "data/maps/HomegeTown/scripts.pory"
	lockall
# 194 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 0
# 195 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PAROPEAT, 10, 3
# 196 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 197 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ParopeatIntro, MSGBOX_DEFAULT
# 198 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueParopeatYesNo, MSGBOX_YESNO
# 199 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 200 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 201 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedParopeat
# 202 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 203 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 204 "data/maps/HomegeTown/scripts.pory"
	release
# 205 "data/maps/HomegeTown/scripts.pory"
	end
# 206 "data/maps/HomegeTown/scripts.pory"

# 207 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Primatio::
# 208 "data/maps/HomegeTown/scripts.pory"
	lockall
# 209 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 1
# 210 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PRIMATIO, 10, 3
# 211 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 212 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_PrimatioIntro, MSGBOX_DEFAULT
# 213 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescuePrimatioYesNo, MSGBOX_YESNO
# 214 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 215 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 216 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedPrimatio
# 217 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 218 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 219 "data/maps/HomegeTown/scripts.pory"
	release
# 220 "data/maps/HomegeTown/scripts.pory"
	end
# 221 "data/maps/HomegeTown/scripts.pory"

# 222 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Substee::
# 223 "data/maps/HomegeTown/scripts.pory"
	lockall
# 224 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 2
# 225 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 226 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_SUBSTEE, 10, 3
# 227 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SubsteeIntro, MSGBOX_DEFAULT
# 228 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueSubsteeYesNo, MSGBOX_YESNO
# 229 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 230 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 231 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedSubstee
# 232 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 233 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 234 "data/maps/HomegeTown/scripts.pory"
	release
# 235 "data/maps/HomegeTown/scripts.pory"
	end
# 236 "data/maps/HomegeTown/scripts.pory"

# 237 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_Exclaim:
# 238 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 239 "data/maps/HomegeTown/scripts.pory"
	step_end
# 240 "data/maps/HomegeTown/scripts.pory"

# 241 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ParopeatRunaway:
# 242 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 243 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 244 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 245 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 246 "data/maps/HomegeTown/scripts.pory"
	jump_right
# 247 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 248 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 249 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 250 "data/maps/HomegeTown/scripts.pory"
	step_end
# 251 "data/maps/HomegeTown/scripts.pory"

# 252 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PrimatioRunaway:
# 253 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 254 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 255 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 256 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 257 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 258 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 259 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 260 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 261 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 262 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 263 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 264 "data/maps/HomegeTown/scripts.pory"
	step_end
# 265 "data/maps/HomegeTown/scripts.pory"

# 266 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SubsteeRunaway:
# 267 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 268 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 269 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 270 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 271 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 272 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 273 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 274 "data/maps/HomegeTown/scripts.pory"
	jump_up
# 275 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 276 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 277 "data/maps/HomegeTown/scripts.pory"
	step_end
# 278 "data/maps/HomegeTown/scripts.pory"

# 279 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfRunsOutOfLab:
# 280 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 281 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 282 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 283 "data/maps/HomegeTown/scripts.pory"
	face_down
# 284 "data/maps/HomegeTown/scripts.pory"
	step_end
# 285 "data/maps/HomegeTown/scripts.pory"

# 286 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalWalksOutOfLab:
# 287 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 288 "data/maps/HomegeTown/scripts.pory"
	step_end
# 289 "data/maps/HomegeTown/scripts.pory"

# 290 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerLooksDown:
# 291 "data/maps/HomegeTown/scripts.pory"
	face_down
# 292 "data/maps/HomegeTown/scripts.pory"
	step_end
# 293 "data/maps/HomegeTown/scripts.pory"

# 294 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfApproachesPlayerRival:
# 295 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/HomegeTown/scripts.pory"
	face_up
# 297 "data/maps/HomegeTown/scripts.pory"
	step_end
# 298 "data/maps/HomegeTown/scripts.pory"

# 299 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfStartsSearching:
# 300 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 301 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 302 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 303 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 304 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 305 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 306 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 307 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 308 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 309 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 310 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 311 "data/maps/HomegeTown/scripts.pory"

# 312 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStartsSearching:
# 313 "data/maps/HomegeTown/scripts.pory"
	delay_8
# 314 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 315 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 316 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 317 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 318 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 319 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 320 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 321 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 322 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 323 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 324 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 327 "data/maps/HomegeTown/scripts.pory"

# 328 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerTop:
# 329 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 330 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 331 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 332 "data/maps/HomegeTown/scripts.pory"
	step_end
# 333 "data/maps/HomegeTown/scripts.pory"

# 334 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_TopCamperReturnRight:
# 335 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 336 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 337 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 338 "data/maps/HomegeTown/scripts.pory"
	face_left
# 339 "data/maps/HomegeTown/scripts.pory"
	step_end
# 340 "data/maps/HomegeTown/scripts.pory"

# 341 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidTop:
# 342 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 343 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 344 "data/maps/HomegeTown/scripts.pory"
	step_end
# 345 "data/maps/HomegeTown/scripts.pory"

# 346 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidTopCamperReturnRight:
# 347 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 348 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 349 "data/maps/HomegeTown/scripts.pory"
	face_left
# 350 "data/maps/HomegeTown/scripts.pory"
	step_end
# 351 "data/maps/HomegeTown/scripts.pory"

# 352 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidBot:
# 353 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 354 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 355 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 356 "data/maps/HomegeTown/scripts.pory"
	step_end
# 357 "data/maps/HomegeTown/scripts.pory"

# 358 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidBotCamperReturnRight:
# 359 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 360 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 361 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 362 "data/maps/HomegeTown/scripts.pory"
	face_left
# 363 "data/maps/HomegeTown/scripts.pory"
	step_end
# 364 "data/maps/HomegeTown/scripts.pory"

# 365 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerBot:
# 366 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 367 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 368 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 369 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 370 "data/maps/HomegeTown/scripts.pory"
	step_end
# 371 "data/maps/HomegeTown/scripts.pory"

# 372 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_BotCamperReturnRight:
# 373 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 374 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 375 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 376 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 377 "data/maps/HomegeTown/scripts.pory"
	face_left
# 378 "data/maps/HomegeTown/scripts.pory"
	step_end
# 379 "data/maps/HomegeTown/scripts.pory"

# 380 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperPushPlayerFromRoute:
# 381 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 382 "data/maps/HomegeTown/scripts.pory"
	step_end
# 383 "data/maps/HomegeTown/scripts.pory"

# 384 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PushPlayerBackFromRoute:
# 385 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 386 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 387 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 388 "data/maps/HomegeTown/scripts.pory"
	step_end
# 389 "data/maps/HomegeTown/scripts.pory"

# 390 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerStepsAwayFromLabDoor:
# 391 "data/maps/HomegeTown/scripts.pory"
	face_left
# 392 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 393 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 394 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 395 "data/maps/HomegeTown/scripts.pory"
	step_end
# 396 "data/maps/HomegeTown/scripts.pory"

# 397 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStepTalk:
# 398 "data/maps/HomegeTown/scripts.pory"
	walk_in_place_down
# 399 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 400 "data/maps/HomegeTown/scripts.pory"

# 401 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_TownSign: 
# 402 "data/maps/HomegeTown/scripts.pory"
	.string "HOMEGE TOWN\n"
# 403 "data/maps/HomegeTown/scripts.pory"
	.string "“A small town full of ambition.”$"
# 404 "data/maps/HomegeTown/scripts.pory"

# 405 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_StopThem:
# 406 "data/maps/HomegeTown/scripts.pory"
.string "???: STOP THEM!$"
# 407 "data/maps/HomegeTown/scripts.pory"

# 408 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfNeedsHelp:
# 409 "data/maps/HomegeTown/scripts.pory"
.string "PROF. SEQUOIA: {RIVAL}, {PLAYER}, I need\n"
# 410 "data/maps/HomegeTown/scripts.pory"
.string "your help!\p"
# 411 "data/maps/HomegeTown/scripts.pory"
.string "We need to get these Pokémon back\n"
# 412 "data/maps/HomegeTown/scripts.pory"
.string "quickly!\p"
# 413 "data/maps/HomegeTown/scripts.pory"
.string "Will you two please help me find the\n"
# 414 "data/maps/HomegeTown/scripts.pory"
.string "runaway Pokémon?$"
# 415 "data/maps/HomegeTown/scripts.pory"

# 416 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RivalWhatever:
# 417 "data/maps/HomegeTown/scripts.pory"
.string "{RIVAL}: Yeah, sure. Whatever.$"
# 418 "data/maps/HomegeTown/scripts.pory"

# 419 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfLetsGetMoving:
# 420 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: Great, now let's get searching.\n"
# 421 "data/maps/HomegeTown/scripts.pory"
.string "They couldn't have gone far.\p"
# 422 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: After we find them, come back\n"
# 423 "data/maps/HomegeTown/scripts.pory"
.string "to my lab immediately!$"
# 424 "data/maps/HomegeTown/scripts.pory"

# 425 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ParopeatIntro:
# 426 "data/maps/HomegeTown/scripts.pory"
.string "This is PAROPEAT, the ECHO POKéMON.\n$"
# 427 "data/maps/HomegeTown/scripts.pory"

# 428 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PrimatioIntro:
# 429 "data/maps/HomegeTown/scripts.pory"
.string "This is PRIMATIO, the FEEDBACK\n"
# 430 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 431 "data/maps/HomegeTown/scripts.pory"

# 432 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SubsteeIntro:
# 433 "data/maps/HomegeTown/scripts.pory"
.string "This is SUBSTEE, the SUPPORTER\n"
# 434 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 435 "data/maps/HomegeTown/scripts.pory"

# 436 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueParopeatYesNo:
# 437 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PAROPEAT?$"
# 438 "data/maps/HomegeTown/scripts.pory"

# 439 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescuePrimatioYesNo:
# 440 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PRIMATIO?$"
# 441 "data/maps/HomegeTown/scripts.pory"

# 442 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueSubsteeYesNo:
# 443 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue SUBSTEE?$"
# 444 "data/maps/HomegeTown/scripts.pory"

# 445 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedParopeat::
# 446 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PAROPEAT
# 447 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 448 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 449 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 450 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 451 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 452 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PAROPEAT, 5, ITEM_NONE
# 453 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 454 "data/maps/HomegeTown/scripts.pory"
	end
# 455 "data/maps/HomegeTown/scripts.pory"

# 456 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedPrimatio::
# 457 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PRIMATIO
# 458 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 459 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 460 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 461 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 462 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 463 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PRIMATIO, 5, ITEM_NONE
# 464 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 465 "data/maps/HomegeTown/scripts.pory"
	end
# 466 "data/maps/HomegeTown/scripts.pory"

# 467 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedSubstee::
# 468 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUBSTEE
# 469 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 470 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 471 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 472 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 473 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 474 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_SUBSTEE, 5, ITEM_NONE
# 475 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 476 "data/maps/HomegeTown/scripts.pory"
	end
# 477 "data/maps/HomegeTown/scripts.pory"

# 478 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveStarter::
# 479 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 480 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 481 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 0
# 482 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedParopeat
# 483 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 1
# 484 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedPrimatio
# 485 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 2
# 486 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedSubstee
# 487 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveAndNickname
# 488 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 489 "data/maps/HomegeTown/scripts.pory"
	warp MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB, 255, 6, 5
# 490 "data/maps/HomegeTown/scripts.pory"
	waitstate
# 491 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 492 "data/maps/HomegeTown/scripts.pory"
	end
# 493 "data/maps/HomegeTown/scripts.pory"

# 494 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedParopeat::
# 495 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 496 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedParopeat
# 497 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 498 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 499 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PAROPEAT
# 500 "data/maps/HomegeTown/scripts.pory"
	return
# 501 "data/maps/HomegeTown/scripts.pory"

# 502 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedPrimatio::
# 503 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 504 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedPrimatio
# 505 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 506 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 507 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PRIMATIO
# 508 "data/maps/HomegeTown/scripts.pory"
	return
# 509 "data/maps/HomegeTown/scripts.pory"

# 510 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedSubstee::
# 511 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 512 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedSubstee
# 513 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 514 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 515 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_SUBSTEE
# 516 "data/maps/HomegeTown/scripts.pory"
	return
# 517 "data/maps/HomegeTown/scripts.pory"

# 518 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveAndNickname::
# 519 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 520 "data/maps/HomegeTown/scripts.pory"
	return
# 521 "data/maps/HomegeTown/scripts.pory"

# 522 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedParopeat:
# 523 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PAROPEAT!$"
# 524 "data/maps/HomegeTown/scripts.pory"

# 525 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedPrimatio:
# 526 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PRIMATIO!$"
# 527 "data/maps/HomegeTown/scripts.pory"

# 528 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedSubstee:
# 529 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued SUBSTEE!$"
# 530 "data/maps/HomegeTown/scripts.pory"

# 531 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_FatManTech: 
# 532 "data/maps/HomegeTown/scripts.pory"
	.string "The power of technology is astounding!\n"
# 533 "data/maps/HomegeTown/scripts.pory"
	.string "I can download and play roms on my PC,\l"
# 534 "data/maps/HomegeTown/scripts.pory"
	.string "and I don't even need to pay\l"
# 535 "data/maps/HomegeTown/scripts.pory"
	.string "anything!\p"
# 536 "data/maps/HomegeTown/scripts.pory"
	.string "...What do you mean that's not legal?$"
# 537 "data/maps/HomegeTown/scripts.pory"

# 538 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SorryPalNoPokemon: 
# 539 "data/maps/HomegeTown/scripts.pory"
	.string "Sorry, pal.$"
# 540 "data/maps/HomegeTown/scripts.pory"

# 541 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_GoTalkToProfForPokemon: 
# 542 "data/maps/HomegeTown/scripts.pory"
	.string "You don't have any Pokémon on you,\n"
# 543 "data/maps/HomegeTown/scripts.pory"
	.string "and there are some strong Pokémon\l"
# 544 "data/maps/HomegeTown/scripts.pory"
	.string "out there!\p"
# 545 "data/maps/HomegeTown/scripts.pory"
	.string "I heard the professor has Pokémon.\n"
# 546 "data/maps/HomegeTown/scripts.pory"
	.string "Go talk to him. If you're lucky, he might\l"
# 547 "data/maps/HomegeTown/scripts.pory"
	.string "give you one.$"
# 548 "data/maps/HomegeTown/scripts.pory"
	
# 549 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_Camper:
# 550 "data/maps/HomegeTown/scripts.pory"
	.string "Huh, so you got a Pokémon?\p"
# 551 "data/maps/HomegeTown/scripts.pory"
	.string "Wonder what I'm going to do with\n"
# 552 "data/maps/HomegeTown/scripts.pory"
	.string "my life now...$"
