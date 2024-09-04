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
.set LOCALID_MOM, 9
# 10 "data/maps/HomegeTown/scripts.pory"

# 11 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MapScripts::
# 12 "data/maps/HomegeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HomegeTown_OnTransition
# 13 "data/maps/HomegeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HomegeTown_OnFrame
# 14 "data/maps/HomegeTown/scripts.pory"
	.byte 0
# 15 "data/maps/HomegeTown/scripts.pory"

# 16 "data/maps/HomegeTown/scripts.pory"
HomegeTown_OnTransition: 
# 17 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/HomegeTown/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 6
# 19 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_MomBattleSetup
# 20 "data/maps/HomegeTown/scripts.pory"
	call_if_ge HomegeTown_EventScript_SetCamperPos
# 21 "data/maps/HomegeTown/scripts.pory"
	end
# 22 "data/maps/HomegeTown/scripts.pory"

# 23 "data/maps/HomegeTown/scripts.pory"
HomegeTown_OnFrame:
# 24 "data/maps/HomegeTown/scripts.pory"
	map_script_2 VAR_HOMEGE_INTRO_STATE, 6, HomegeTown_EventScript_MomBattle
# 25 "data/maps/HomegeTown/scripts.pory"
	.2byte 0
# 26 "data/maps/HomegeTown/scripts.pory"

# 27 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SetCamperPos::
# 28 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_CAMPER, 35, 21
# 29 "data/maps/HomegeTown/scripts.pory"
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/HomegeTown/scripts.pory"
	return
# 31 "data/maps/HomegeTown/scripts.pory"

# 32 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomBattle::
# 33 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 34 "data/maps/HomegeTown/scripts.pory"
	lockall
# 35 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 36 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_SurprisedFaceMom
# 37 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomOverHere, MSGBOX_DEFAULT
# 38 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 39 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_WalkDownAndFaceMom
# 41 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0 
# 42 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomExcitedBattle, MSGBOX_DEFAULT
# 43 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 44 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 45 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft
# 46 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/HomegeTown/scripts.pory"
	trainerbattle_earlyrival TRAINER_HOMEGE_MOM, HomegeTown_Text_MomDefeated, HomegeTown_Text_MomVictory
# 48 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, HomegeTown_EventScript_WonMomBattle
# 50 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, HomegeTown_EventScript_LostMomBattle
# 51 "data/maps/HomegeTown/scripts.pory"
	end
# 52 "data/maps/HomegeTown/scripts.pory"

# 53 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomBattleSetup::
# 54 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_MOM
# 55 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 17, 19
# 56 "data/maps/HomegeTown/scripts.pory"
	return
# 57 "data/maps/HomegeTown/scripts.pory"

# 58 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_WonMomBattle::
# 59 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_WonMomPostBattle, MSGBOX_DEFAULT
# 60 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 61 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_EventScript_MomPostBattle
# 62 "data/maps/HomegeTown/scripts.pory"
	end
# 63 "data/maps/HomegeTown/scripts.pory"

# 64 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LostMomBattle::
# 65 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_LostMomPostBattle, MSGBOX_DEFAULT
# 66 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 67 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_EventScript_MomPostBattle
# 68 "data/maps/HomegeTown/scripts.pory"
	end
# 69 "data/maps/HomegeTown/scripts.pory"

# 70 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomPostBattle::
# 71 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 13
# 72 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 16
# 73 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 75 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_Movement_MomGoesInside
# 76 "data/maps/HomegeTown/scripts.pory"
	delay 30
# 77 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 78 "data/maps/HomegeTown/scripts.pory"
	waitmovement LOCALID_MOM, MAP_HOMEGE_TOWN
# 79 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 80 "data/maps/HomegeTown/scripts.pory"
	waitdooranim
# 81 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 82 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 0, 0
# 84 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_MOM
# 85 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 86 "data/maps/HomegeTown/scripts.pory"
	waitdooranim
# 87 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 7
# 88 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_MOM
# 89 "data/maps/HomegeTown/scripts.pory"
	end
# 90 "data/maps/HomegeTown/scripts.pory"

# 91 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomDefeated:
# 92 "data/maps/HomegeTown/scripts.pory"
	.string "...\n"
# 93 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}, I'm so proud of you.$"
# 94 "data/maps/HomegeTown/scripts.pory"

# 95 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomVictory:
# 96 "data/maps/HomegeTown/scripts.pory"
	.string "Ha, ha!\n"
# 97 "data/maps/HomegeTown/scripts.pory"
	.string "Looks like I've still got it!$"
# 98 "data/maps/HomegeTown/scripts.pory"

# 99 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_WonMomPostBattle:
# 100 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: {PLAYER}, you have grown so much\n"
# 101 "data/maps/HomegeTown/scripts.pory"
	.string "in the past 24 hours. I'm so excited\l"
# 102 "data/maps/HomegeTown/scripts.pory"
	.string "to see you grow, not only as a trainer\l"
# 103 "data/maps/HomegeTown/scripts.pory"
	.string "but as a person.$"
# 104 "data/maps/HomegeTown/scripts.pory"

# 105 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_LostMomPostBattle:
# 106 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: Hee hee!\p"
# 107 "data/maps/HomegeTown/scripts.pory"
	.string "Maybe next time, dear! Looks like\n"
# 108 "data/maps/HomegeTown/scripts.pory"
	.string "you've got some training to do!\p"
# 109 "data/maps/HomegeTown/scripts.pory"
	.string "Don't worry about the loss, I still\n"
# 110 "data/maps/HomegeTown/scripts.pory"
	.string "believe in you, {PLAYER}!$"
# 111 "data/maps/HomegeTown/scripts.pory"

# 112 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomPostBattle:
# 113 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: Anyhoo…\p"
# 114 "data/maps/HomegeTown/scripts.pory"
	.string "It's best you get on your way. I would\n"
# 115 "data/maps/HomegeTown/scripts.pory"
	.string "love to battle you again. Maybe when\l"
# 116 "data/maps/HomegeTown/scripts.pory"
	.string "you have a few badges under your belt.\p"
# 117 "data/maps/HomegeTown/scripts.pory"
	.string "Take care, {PLAYER}! Don't be afraid to\n"
# 118 "data/maps/HomegeTown/scripts.pory"
	.string "visit your mother every now and then!$"
# 119 "data/maps/HomegeTown/scripts.pory"

# 120 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SurprisedFaceMom:
# 121 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 122 "data/maps/HomegeTown/scripts.pory"
	face_right
# 123 "data/maps/HomegeTown/scripts.pory"
	step_end
# 124 "data/maps/HomegeTown/scripts.pory"

# 125 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_WalkDownAndFaceMom:
# 126 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 127 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 128 "data/maps/HomegeTown/scripts.pory"
	face_right
# 129 "data/maps/HomegeTown/scripts.pory"
	step_end
# 130 "data/maps/HomegeTown/scripts.pory"

# 131 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MomGoesInside:
# 132 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 133 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 134 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 135 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 136 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 137 "data/maps/HomegeTown/scripts.pory"
	step_end
# 138 "data/maps/HomegeTown/scripts.pory"

# 139 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Camper:: 
# 140 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_Camper, MSGBOX_NPC
# 141 "data/maps/HomegeTown/scripts.pory"
	end
# 142 "data/maps/HomegeTown/scripts.pory"

# 143 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TownSign:: 
# 144 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_TownSign, MSGBOX_SIGN
# 145 "data/maps/HomegeTown/scripts.pory"
	end
# 146 "data/maps/HomegeTown/scripts.pory"

# 147 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabDoorBack:: 
# 148 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_LabDoorBack, MSGBOX_SIGN
# 149 "data/maps/HomegeTown/scripts.pory"
	end
# 150 "data/maps/HomegeTown/scripts.pory"

# 151 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_FatMan:: 
# 152 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_FatManTech, MSGBOX_NPC
# 153 "data/maps/HomegeTown/scripts.pory"
	end
# 154 "data/maps/HomegeTown/scripts.pory"

# 155 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerTop:: 
# 156 "data/maps/HomegeTown/scripts.pory"
	lockall
# 157 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 158 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 159 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 161 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 162 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 164 "data/maps/HomegeTown/scripts.pory"
	end
# 165 "data/maps/HomegeTown/scripts.pory"

# 166 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidTop:: 
# 167 "data/maps/HomegeTown/scripts.pory"
	lockall
# 168 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 169 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 170 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 172 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 173 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 175 "data/maps/HomegeTown/scripts.pory"
	end
# 176 "data/maps/HomegeTown/scripts.pory"

# 177 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidBot:: 
# 178 "data/maps/HomegeTown/scripts.pory"
	lockall
# 179 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 180 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 181 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 183 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 184 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 186 "data/maps/HomegeTown/scripts.pory"
	end
# 187 "data/maps/HomegeTown/scripts.pory"

# 188 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerBot:: 
# 189 "data/maps/HomegeTown/scripts.pory"
	lockall
# 190 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 191 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerBot
# 192 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 194 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_BotCamperReturnRight
# 195 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 197 "data/maps/HomegeTown/scripts.pory"
	end
# 198 "data/maps/HomegeTown/scripts.pory"

# 199 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_DangerousWithoutPokemon::
# 200 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SorryPalNoPokemon, MSGBOX_DEFAULT
# 201 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 202 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 203 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 204 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_GoTalkToProfForPokemon, MSGBOX_DEFAULT
# 206 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 207 "data/maps/HomegeTown/scripts.pory"
	return
# 208 "data/maps/HomegeTown/scripts.pory"

# 209 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerTop:: 
# 210 "data/maps/HomegeTown/scripts.pory"
	lockall
# 211 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 212 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 213 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 215 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 216 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 218 "data/maps/HomegeTown/scripts.pory"
	end
# 219 "data/maps/HomegeTown/scripts.pory"

# 220 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerMid:: 
# 221 "data/maps/HomegeTown/scripts.pory"
	lockall
# 222 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 223 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 224 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 226 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 227 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 229 "data/maps/HomegeTown/scripts.pory"
	end
# 230 "data/maps/HomegeTown/scripts.pory"

# 231 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerBot:: 
# 232 "data/maps/HomegeTown/scripts.pory"
	lockall
# 233 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 234 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 235 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 237 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 238 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 240 "data/maps/HomegeTown/scripts.pory"
	end
# 241 "data/maps/HomegeTown/scripts.pory"

# 242 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SayByeToMom::
# 243 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SayByeToMom, MSGBOX_DEFAULT
# 244 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 245 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 246 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 247 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/HomegeTown/scripts.pory"
	return
# 249 "data/maps/HomegeTown/scripts.pory"

# 250 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedToHelpFindPokemonTrigger::
# 251 "data/maps/HomegeTown/scripts.pory"
	lockall
# 252 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_NeedToHelpFindPokemon, MSGBOX_DEFAULT
# 253 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 254 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 255 "data/maps/HomegeTown/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/HomegeTown/scripts.pory"
	case DIR_EAST, HomegeTown_EventScript_LabTriggerFromLeft
# 257 "data/maps/HomegeTown/scripts.pory"
	case DIR_WEST, HomegeTown_EventScript_LabTriggerFromRight
# 258 "data/maps/HomegeTown/scripts.pory"
	case DIR_NORTH, HomegeTown_EventScript_LabTriggerFromBottom
# 259 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 260 "data/maps/HomegeTown/scripts.pory"
	end
# 261 "data/maps/HomegeTown/scripts.pory"

# 262 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_NeedToHelpFindPokemon: 
# 263 "data/maps/HomegeTown/scripts.pory"
	.string "PROF. SEQUOIA needs me to help search\n"
# 264 "data/maps/HomegeTown/scripts.pory"
	.string "for the runaway Pokémon.\p"
# 265 "data/maps/HomegeTown/scripts.pory"
	.string "They can't be in his lab, so I should\n"
# 266 "data/maps/HomegeTown/scripts.pory"
	.string "check somewhere else."
# 267 "data/maps/HomegeTown/scripts.pory"

# 268 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromLeft::
# 269 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerLeft
# 270 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/HomegeTown/scripts.pory"
	end
# 272 "data/maps/HomegeTown/scripts.pory"

# 273 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromRight::
# 274 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerRight
# 275 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/HomegeTown/scripts.pory"
	end
# 277 "data/maps/HomegeTown/scripts.pory"

# 278 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromBottom::
# 279 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerDown
# 280 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/HomegeTown/scripts.pory"
	end
# 282 "data/maps/HomegeTown/scripts.pory"

# 283 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerLeft:
# 284 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 285 "data/maps/HomegeTown/scripts.pory"
	step_end
# 286 "data/maps/HomegeTown/scripts.pory"

# 287 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerRight:
# 288 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 289 "data/maps/HomegeTown/scripts.pory"
	step_end
# 290 "data/maps/HomegeTown/scripts.pory"

# 291 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerDown:
# 292 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 293 "data/maps/HomegeTown/scripts.pory"
	step_end
# 294 "data/maps/HomegeTown/scripts.pory"

# 295 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabStarterTrigger::
# 296 "data/maps/HomegeTown/scripts.pory"
	lockall
# 297 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 298 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 3
# 299 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 35
# 300 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 11
# 301 "data/maps/HomegeTown/scripts.pory"
	playbgm MUS_HELP, 0
# 302 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 303 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_StopThem, MSGBOX_DEFAULT
# 304 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 305 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 306 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerStepsAwayFromLabDoor
# 307 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 309 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PAROPEAT
# 310 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 35, 11
# 311 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PAROPEAT, HomegeTown_Movement_ParopeatRunaway
# 312 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 313 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PRIMATIO
# 314 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 35, 11
# 315 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PRIMATIO, HomegeTown_Movement_PrimatioRunaway
# 316 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 317 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_SUBSTEE
# 318 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 35, 11
# 319 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_SUBSTEE, HomegeTown_Movement_SubsteeRunaway
# 320 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 321 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 12, 27
# 322 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 34, 45
# 323 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 13, 38
# 324 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 325 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfRunsOutOfLab
# 326 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 328 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalWalksOutOfLab
# 329 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 330 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 331 "data/maps/HomegeTown/scripts.pory"
	delay 50
# 332 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfApproachesPlayerRival
# 333 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerLooksDown
# 335 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfNeedsHelp, MSGBOX_DEFAULT
# 336 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 337 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStepTalk
# 338 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 339 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RivalWhatever, MSGBOX_DEFAULT
# 340 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 341 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLetsGetMoving, MSGBOX_DEFAULT
# 342 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 343 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfStartsSearching
# 344 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStartsSearching
# 345 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 347 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 348 "data/maps/HomegeTown/scripts.pory"
	fadedefaultbgm
# 349 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_STARTERS 		@ Should show the starers in Overworld
# 350 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 351 "data/maps/HomegeTown/scripts.pory"
	end
# 352 "data/maps/HomegeTown/scripts.pory"

# 353 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Paropeat::
# 354 "data/maps/HomegeTown/scripts.pory"
	lockall
# 355 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 0
# 356 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PAROPEAT, 10, 3
# 357 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 358 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ParopeatIntro, MSGBOX_DEFAULT
# 359 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueParopeatYesNo, MSGBOX_YESNO
# 360 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 361 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 362 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedParopeat
# 363 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 364 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 365 "data/maps/HomegeTown/scripts.pory"
	release
# 366 "data/maps/HomegeTown/scripts.pory"
	end
# 367 "data/maps/HomegeTown/scripts.pory"

# 368 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Primatio::
# 369 "data/maps/HomegeTown/scripts.pory"
	lockall
# 370 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 1
# 371 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PRIMATIO, 10, 3
# 372 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 373 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_PrimatioIntro, MSGBOX_DEFAULT
# 374 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescuePrimatioYesNo, MSGBOX_YESNO
# 375 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 376 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 377 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedPrimatio
# 378 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 379 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 380 "data/maps/HomegeTown/scripts.pory"
	release
# 381 "data/maps/HomegeTown/scripts.pory"
	end
# 382 "data/maps/HomegeTown/scripts.pory"

# 383 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Substee::
# 384 "data/maps/HomegeTown/scripts.pory"
	lockall
# 385 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 2
# 386 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 387 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_SUBSTEE, 10, 3
# 388 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SubsteeIntro, MSGBOX_DEFAULT
# 389 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueSubsteeYesNo, MSGBOX_YESNO
# 390 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 391 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 392 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedSubstee
# 393 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 394 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 395 "data/maps/HomegeTown/scripts.pory"
	release
# 396 "data/maps/HomegeTown/scripts.pory"
	end
# 397 "data/maps/HomegeTown/scripts.pory"

# 398 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_Exclaim:
# 399 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 400 "data/maps/HomegeTown/scripts.pory"
	step_end
# 401 "data/maps/HomegeTown/scripts.pory"

# 402 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ParopeatRunaway:
# 403 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 404 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 405 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 406 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 407 "data/maps/HomegeTown/scripts.pory"
	jump_right
# 408 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 409 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 410 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 411 "data/maps/HomegeTown/scripts.pory"
	step_end
# 412 "data/maps/HomegeTown/scripts.pory"

# 413 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PrimatioRunaway:
# 414 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 415 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 416 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 417 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 418 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 419 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 420 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 421 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 422 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 423 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 424 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 425 "data/maps/HomegeTown/scripts.pory"
	step_end
# 426 "data/maps/HomegeTown/scripts.pory"

# 427 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SubsteeRunaway:
# 428 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 429 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 430 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 431 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 432 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 433 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 434 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 435 "data/maps/HomegeTown/scripts.pory"
	jump_up
# 436 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 437 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 438 "data/maps/HomegeTown/scripts.pory"
	step_end
# 439 "data/maps/HomegeTown/scripts.pory"

# 440 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfRunsOutOfLab:
# 441 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 442 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 443 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 444 "data/maps/HomegeTown/scripts.pory"
	face_down
# 445 "data/maps/HomegeTown/scripts.pory"
	step_end
# 446 "data/maps/HomegeTown/scripts.pory"

# 447 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalWalksOutOfLab:
# 448 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 449 "data/maps/HomegeTown/scripts.pory"
	step_end
# 450 "data/maps/HomegeTown/scripts.pory"

# 451 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerLooksDown:
# 452 "data/maps/HomegeTown/scripts.pory"
	face_down
# 453 "data/maps/HomegeTown/scripts.pory"
	step_end
# 454 "data/maps/HomegeTown/scripts.pory"

# 455 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfApproachesPlayerRival:
# 456 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 457 "data/maps/HomegeTown/scripts.pory"
	face_up
# 458 "data/maps/HomegeTown/scripts.pory"
	step_end
# 459 "data/maps/HomegeTown/scripts.pory"

# 460 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfStartsSearching:
# 461 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 462 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 463 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 464 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 465 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 466 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 467 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 468 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 469 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 470 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 471 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 472 "data/maps/HomegeTown/scripts.pory"

# 473 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStartsSearching:
# 474 "data/maps/HomegeTown/scripts.pory"
	delay_8
# 475 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 476 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 477 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 478 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 479 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 480 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 481 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 482 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 483 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 484 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 485 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 486 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 487 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 488 "data/maps/HomegeTown/scripts.pory"

# 489 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerTop:
# 490 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 491 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 492 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 493 "data/maps/HomegeTown/scripts.pory"
	step_end
# 494 "data/maps/HomegeTown/scripts.pory"

# 495 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_TopCamperReturnRight:
# 496 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 497 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 498 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 499 "data/maps/HomegeTown/scripts.pory"
	face_left
# 500 "data/maps/HomegeTown/scripts.pory"
	step_end
# 501 "data/maps/HomegeTown/scripts.pory"

# 502 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidTop:
# 503 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 504 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 505 "data/maps/HomegeTown/scripts.pory"
	step_end
# 506 "data/maps/HomegeTown/scripts.pory"

# 507 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidTopCamperReturnRight:
# 508 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 509 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 510 "data/maps/HomegeTown/scripts.pory"
	face_left
# 511 "data/maps/HomegeTown/scripts.pory"
	step_end
# 512 "data/maps/HomegeTown/scripts.pory"

# 513 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidBot:
# 514 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 515 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 516 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 517 "data/maps/HomegeTown/scripts.pory"
	step_end
# 518 "data/maps/HomegeTown/scripts.pory"

# 519 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidBotCamperReturnRight:
# 520 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 521 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 522 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 523 "data/maps/HomegeTown/scripts.pory"
	face_left
# 524 "data/maps/HomegeTown/scripts.pory"
	step_end
# 525 "data/maps/HomegeTown/scripts.pory"

# 526 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerBot:
# 527 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 528 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 529 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 530 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 531 "data/maps/HomegeTown/scripts.pory"
	step_end
# 532 "data/maps/HomegeTown/scripts.pory"

# 533 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_BotCamperReturnRight:
# 534 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 535 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 536 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 537 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 538 "data/maps/HomegeTown/scripts.pory"
	face_left
# 539 "data/maps/HomegeTown/scripts.pory"
	step_end
# 540 "data/maps/HomegeTown/scripts.pory"

# 541 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperPushPlayerFromRoute:
# 542 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 543 "data/maps/HomegeTown/scripts.pory"
	step_end
# 544 "data/maps/HomegeTown/scripts.pory"

# 545 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PushPlayerBackFromRoute:
# 546 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 547 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 548 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 549 "data/maps/HomegeTown/scripts.pory"
	step_end
# 550 "data/maps/HomegeTown/scripts.pory"

# 551 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerStepsAwayFromLabDoor:
# 552 "data/maps/HomegeTown/scripts.pory"
	face_left
# 553 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 554 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 555 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 556 "data/maps/HomegeTown/scripts.pory"
	step_end
# 557 "data/maps/HomegeTown/scripts.pory"

# 558 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStepTalk:
# 559 "data/maps/HomegeTown/scripts.pory"
	walk_in_place_down
# 560 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 561 "data/maps/HomegeTown/scripts.pory"

# 562 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_TownSign: 
# 563 "data/maps/HomegeTown/scripts.pory"
	.string "HOMEGE TOWN\n"
# 564 "data/maps/HomegeTown/scripts.pory"
	.string "“A small town full of ambition.”$"
# 565 "data/maps/HomegeTown/scripts.pory"

# 566 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_LabDoorBack: 
# 567 "data/maps/HomegeTown/scripts.pory"
	.string "It's locked.$"
# 568 "data/maps/HomegeTown/scripts.pory"

# 569 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_StopThem:
# 570 "data/maps/HomegeTown/scripts.pory"
.string "???: STOP THEM!$"
# 571 "data/maps/HomegeTown/scripts.pory"

# 572 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfNeedsHelp:
# 573 "data/maps/HomegeTown/scripts.pory"
.string "PROF. SEQUOIA: {RIVAL}, {PLAYER}, I need\n"
# 574 "data/maps/HomegeTown/scripts.pory"
.string "your help!\p"
# 575 "data/maps/HomegeTown/scripts.pory"
.string "We need to get these Pokémon back\n"
# 576 "data/maps/HomegeTown/scripts.pory"
.string "quickly!\p"
# 577 "data/maps/HomegeTown/scripts.pory"
.string "Will you two please help me find the\n"
# 578 "data/maps/HomegeTown/scripts.pory"
.string "runaway Pokémon?$"
# 579 "data/maps/HomegeTown/scripts.pory"

# 580 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RivalWhatever:
# 581 "data/maps/HomegeTown/scripts.pory"
.string "{RIVAL}: Yeah, sure. Whatever.$"
# 582 "data/maps/HomegeTown/scripts.pory"

# 583 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfLetsGetMoving:
# 584 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: Great, now let's get searching.\n"
# 585 "data/maps/HomegeTown/scripts.pory"
.string "They couldn't have gone far.\p"
# 586 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: After we find them, come back\n"
# 587 "data/maps/HomegeTown/scripts.pory"
.string "to my lab immediately!$"
# 588 "data/maps/HomegeTown/scripts.pory"

# 589 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ParopeatIntro:
# 590 "data/maps/HomegeTown/scripts.pory"
.string "This is PAROPEAT, the ECHO POKéMON.\n$"
# 591 "data/maps/HomegeTown/scripts.pory"

# 592 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PrimatioIntro:
# 593 "data/maps/HomegeTown/scripts.pory"
.string "This is PRIMATIO, the FEEDBACK\n"
# 594 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 595 "data/maps/HomegeTown/scripts.pory"

# 596 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SubsteeIntro:
# 597 "data/maps/HomegeTown/scripts.pory"
.string "This is SUBSTEE, the SUPPORTER\n"
# 598 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 599 "data/maps/HomegeTown/scripts.pory"

# 600 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueParopeatYesNo:
# 601 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PAROPEAT?$"
# 602 "data/maps/HomegeTown/scripts.pory"

# 603 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescuePrimatioYesNo:
# 604 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PRIMATIO?$"
# 605 "data/maps/HomegeTown/scripts.pory"

# 606 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueSubsteeYesNo:
# 607 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue SUBSTEE?$"
# 608 "data/maps/HomegeTown/scripts.pory"

# 609 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedParopeat::
# 610 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PAROPEAT
# 611 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 612 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 613 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 614 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 615 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 616 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PAROPEAT, 5, ITEM_NONE
# 617 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 618 "data/maps/HomegeTown/scripts.pory"
	end
# 619 "data/maps/HomegeTown/scripts.pory"

# 620 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedPrimatio::
# 621 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PRIMATIO
# 622 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 623 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 624 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 625 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 626 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 627 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PRIMATIO, 5, ITEM_NONE
# 628 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 629 "data/maps/HomegeTown/scripts.pory"
	end
# 630 "data/maps/HomegeTown/scripts.pory"

# 631 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedSubstee::
# 632 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUBSTEE
# 633 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 634 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 635 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 636 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 637 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 638 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_SUBSTEE, 5, ITEM_NONE
# 639 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 640 "data/maps/HomegeTown/scripts.pory"
	end
# 641 "data/maps/HomegeTown/scripts.pory"

# 642 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveStarter::
# 643 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 644 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 645 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 0
# 646 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedParopeat
# 647 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 1
# 648 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedPrimatio
# 649 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 2
# 650 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedSubstee
# 651 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveAndNickname
# 652 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 653 "data/maps/HomegeTown/scripts.pory"
	warp MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB, 255, 6, 5
# 654 "data/maps/HomegeTown/scripts.pory"
	waitstate
# 655 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 656 "data/maps/HomegeTown/scripts.pory"
	end
# 657 "data/maps/HomegeTown/scripts.pory"

# 658 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedParopeat::
# 659 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 660 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedParopeat
# 661 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 662 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 663 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PAROPEAT
# 664 "data/maps/HomegeTown/scripts.pory"
	return
# 665 "data/maps/HomegeTown/scripts.pory"

# 666 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedPrimatio::
# 667 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 668 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedPrimatio
# 669 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 670 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 671 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PRIMATIO
# 672 "data/maps/HomegeTown/scripts.pory"
	return
# 673 "data/maps/HomegeTown/scripts.pory"

# 674 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedSubstee::
# 675 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 676 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedSubstee
# 677 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 678 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 679 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_SUBSTEE
# 680 "data/maps/HomegeTown/scripts.pory"
	return
# 681 "data/maps/HomegeTown/scripts.pory"

# 682 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveAndNickname::
# 683 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 684 "data/maps/HomegeTown/scripts.pory"
	return
# 685 "data/maps/HomegeTown/scripts.pory"

# 686 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign::
# 687 "data/maps/HomegeTown/scripts.pory"
	lockall
# 688 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 689 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 690 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTianaHouseSign_2
# 691 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_1
# 692 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_1:
# 693 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 694 "data/maps/HomegeTown/scripts.pory"
	return
# 695 "data/maps/HomegeTown/scripts.pory"

# 696 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_2:
# 697 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_0
# 698 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTianaHouseSign_1
# 699 "data/maps/HomegeTown/scripts.pory"

# 700 "data/maps/HomegeTown/scripts.pory"

# 701 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_0:
# 702 "data/maps/HomegeTown/scripts.pory"
	.string "Tiana's house$"
# 703 "data/maps/HomegeTown/scripts.pory"

# 704 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_1:
# 705 "data/maps/HomegeTown/scripts.pory"
	.string "Matt's house$"
# 706 "data/maps/HomegeTown/scripts.pory"

# 707 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign::
# 708 "data/maps/HomegeTown/scripts.pory"
	lockall
# 709 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_RivalHouseSign_Text_0
# 710 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 711 "data/maps/HomegeTown/scripts.pory"
	return
# 712 "data/maps/HomegeTown/scripts.pory"

# 713 "data/maps/HomegeTown/scripts.pory"

# 714 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign_Text_0:
# 715 "data/maps/HomegeTown/scripts.pory"
	.string "{RIVAL}'s house$"
# 716 "data/maps/HomegeTown/scripts.pory"

# 717 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign::
# 718 "data/maps/HomegeTown/scripts.pory"
	lockall
# 719 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_PlayerHouseSign_Text_0
# 720 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 721 "data/maps/HomegeTown/scripts.pory"
	return
# 722 "data/maps/HomegeTown/scripts.pory"

# 723 "data/maps/HomegeTown/scripts.pory"

# 724 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign_Text_0:
# 725 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}'s house$"
# 726 "data/maps/HomegeTown/scripts.pory"

# 727 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk::
# 728 "data/maps/HomegeTown/scripts.pory"
	lockall
# 729 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 730 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 731 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTiana_Peptalk_2
# 732 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_8
# 733 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_3
# 734 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_1:
# 735 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_TEMP_1
# 736 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 737 "data/maps/HomegeTown/scripts.pory"
	return
# 738 "data/maps/HomegeTown/scripts.pory"

# 739 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_2:
# 740 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_5
# 741 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_1
# 742 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 743 "data/maps/HomegeTown/scripts.pory"

# 744 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_5:
# 745 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_0
# 746 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 747 "data/maps/HomegeTown/scripts.pory"

# 748 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_8:
# 749 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_2
# 750 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 751 "data/maps/HomegeTown/scripts.pory"

# 752 "data/maps/HomegeTown/scripts.pory"

# 753 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_0:
# 754 "data/maps/HomegeTown/scripts.pory"
	.string "???: I'm good enough, I'm smart\n"
# 755 "data/maps/HomegeTown/scripts.pory"
	.string "enough, and doggone it, people like me!$"
# 756 "data/maps/HomegeTown/scripts.pory"

# 757 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_1:
# 758 "data/maps/HomegeTown/scripts.pory"
	.string "???: I'm good enough, I'm smart\n"
# 759 "data/maps/HomegeTown/scripts.pory"
	.string "enough, and doggone it, people like me!$"
# 760 "data/maps/HomegeTown/scripts.pory"

# 761 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_2:
# 762 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 763 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 764 "data/maps/HomegeTown/scripts.pory"

# 765 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_3:
# 766 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 767 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 768 "data/maps/HomegeTown/scripts.pory"

# 769 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedParopeat:
# 770 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PAROPEAT!$"
# 771 "data/maps/HomegeTown/scripts.pory"

# 772 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedPrimatio:
# 773 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PRIMATIO!$"
# 774 "data/maps/HomegeTown/scripts.pory"

# 775 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedSubstee:
# 776 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued SUBSTEE!$"
# 777 "data/maps/HomegeTown/scripts.pory"

# 778 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_FatManTech: 
# 779 "data/maps/HomegeTown/scripts.pory"
	.string "The power of technology is astounding!\n"
# 780 "data/maps/HomegeTown/scripts.pory"
	.string "I can download and play roms on my PC,\l"
# 781 "data/maps/HomegeTown/scripts.pory"
	.string "and I don't even need to pay\l"
# 782 "data/maps/HomegeTown/scripts.pory"
	.string "anything!\p"
# 783 "data/maps/HomegeTown/scripts.pory"
	.string "...What do you mean that's not legal?$"
# 784 "data/maps/HomegeTown/scripts.pory"

# 785 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SorryPalNoPokemon: 
# 786 "data/maps/HomegeTown/scripts.pory"
	.string "Sorry, pal.$"
# 787 "data/maps/HomegeTown/scripts.pory"

# 788 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SayByeToMom:
# 789 "data/maps/HomegeTown/scripts.pory"
	.string "Shouldn't you say bye to your mom\n"
# 790 "data/maps/HomegeTown/scripts.pory"
	.string "before you leave?$"
# 791 "data/maps/HomegeTown/scripts.pory"

# 792 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_GoTalkToProfForPokemon: 
# 793 "data/maps/HomegeTown/scripts.pory"
	.string "You don't have any Pokémon on you,\n"
# 794 "data/maps/HomegeTown/scripts.pory"
	.string "and there are some strong Pokémon\l"
# 795 "data/maps/HomegeTown/scripts.pory"
	.string "out there!\p"
# 796 "data/maps/HomegeTown/scripts.pory"
	.string "I heard the professor has Pokémon.\n"
# 797 "data/maps/HomegeTown/scripts.pory"
	.string "Go talk to him. If you're lucky, he might\l"
# 798 "data/maps/HomegeTown/scripts.pory"
	.string "give you one.$"
# 799 "data/maps/HomegeTown/scripts.pory"
	
# 800 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_Camper:
# 801 "data/maps/HomegeTown/scripts.pory"
	.string "Can't believe you have a Pokémon.\p"
# 802 "data/maps/HomegeTown/scripts.pory"
	.string "Wonder what I'm going to do with\n"
# 803 "data/maps/HomegeTown/scripts.pory"
	.string "my life now...$"
# 804 "data/maps/HomegeTown/scripts.pory"

# 805 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomOverHere:
# 806 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: I'm over here, sweetie!$"
# 807 "data/maps/HomegeTown/scripts.pory"

# 808 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomExcitedBattle:
# 809 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: I can't wait to see what kind\n"
# 810 "data/maps/HomegeTown/scripts.pory"
	.string "of trainer you are, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
