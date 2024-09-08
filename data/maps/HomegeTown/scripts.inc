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
HomegeTown_EventScript_ProfLeavesSetupTop::
# 28 "data/maps/HomegeTown/scripts.pory"
	lock
# 29 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_AND_PROFESSOR
# 30 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 31 "data/maps/HomegeTown/scripts.pory"
	showobjectat LOCALID_PROF, MAP_HOMEGE_TOWN
# 32 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PROF, 31, 22
# 33 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 34 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 35 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesSetup
# 36 "data/maps/HomegeTown/scripts.pory"
	waitmovement LOCALID_PROF
# 37 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 38 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLeaves, MSGBOX_DEFAULT
# 39 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 40 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesAgain
# 41 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 43 "data/maps/HomegeTown/scripts.pory"
	addvar VAR_HOMEGE_INTRO_STATE, 1
# 44 "data/maps/HomegeTown/scripts.pory"
	release
# 45 "data/maps/HomegeTown/scripts.pory"
	end
# 46 "data/maps/HomegeTown/scripts.pory"

# 47 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ProfLeavesSetupMid::
# 48 "data/maps/HomegeTown/scripts.pory"
	lock
# 49 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_AND_PROFESSOR
# 50 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 51 "data/maps/HomegeTown/scripts.pory"
	showobjectat LOCALID_PROF, MAP_HOMEGE_TOWN
# 52 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PROF, 31, 23
# 53 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 54 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 55 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesSetup
# 56 "data/maps/HomegeTown/scripts.pory"
	waitmovement LOCALID_PROF
# 57 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 58 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLeaves, MSGBOX_DEFAULT
# 59 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 60 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesAgain
# 61 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 63 "data/maps/HomegeTown/scripts.pory"
	addvar VAR_HOMEGE_INTRO_STATE, 1
# 64 "data/maps/HomegeTown/scripts.pory"
	release
# 65 "data/maps/HomegeTown/scripts.pory"
	end
# 66 "data/maps/HomegeTown/scripts.pory"

# 67 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ProfLeavesSetupBot::
# 68 "data/maps/HomegeTown/scripts.pory"
	lock
# 69 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_AND_PROFESSOR
# 70 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 71 "data/maps/HomegeTown/scripts.pory"
	showobjectat LOCALID_PROF, MAP_HOMEGE_TOWN
# 72 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PROF, 31, 22
# 73 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 74 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 75 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesSetupBot
# 76 "data/maps/HomegeTown/scripts.pory"
	waitmovement LOCALID_PROF
# 77 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 78 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLeaves, MSGBOX_DEFAULT
# 79 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 80 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfLeavesAgain
# 81 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 83 "data/maps/HomegeTown/scripts.pory"
	addvar VAR_HOMEGE_INTRO_STATE, 1
# 84 "data/maps/HomegeTown/scripts.pory"
	release
# 85 "data/maps/HomegeTown/scripts.pory"
	end
# 86 "data/maps/HomegeTown/scripts.pory"

# 87 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfLeavesSetup:
# 88 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 89 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 90 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 91 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 92 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 93 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 94 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 95 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 96 "data/maps/HomegeTown/scripts.pory"
	face_up
# 97 "data/maps/HomegeTown/scripts.pory"
	step_end
# 98 "data/maps/HomegeTown/scripts.pory"

# 99 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfLeavesSetupBot:
# 100 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 101 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 102 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 103 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 104 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 105 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 106 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 107 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 108 "data/maps/HomegeTown/scripts.pory"
	face_down
# 109 "data/maps/HomegeTown/scripts.pory"
	step_end
# 110 "data/maps/HomegeTown/scripts.pory"
	
# 111 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfLeavesAgain:
# 112 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 113 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 114 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 115 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 116 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 117 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 118 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 119 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 120 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 121 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 122 "data/maps/HomegeTown/scripts.pory"
	step_end
# 123 "data/maps/HomegeTown/scripts.pory"

# 124 "data/maps/HomegeTown/scripts.pory"
	
# 125 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SetCamperPos::
# 126 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_CAMPER, 35, 21
# 127 "data/maps/HomegeTown/scripts.pory"
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
# 128 "data/maps/HomegeTown/scripts.pory"
	return
# 129 "data/maps/HomegeTown/scripts.pory"

# 130 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomBattle::
# 131 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/HomegeTown/scripts.pory"
	lockall
# 133 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 134 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_SurprisedFaceMom
# 135 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomOverHere, MSGBOX_DEFAULT
# 136 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 137 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_WalkDownAndFaceMom
# 139 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0 
# 140 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomExcitedBattle, MSGBOX_DEFAULT
# 141 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 142 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 143 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft
# 144 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/HomegeTown/scripts.pory"
	trainerbattle_earlyrival TRAINER_HOMEGE_MOM, HomegeTown_Text_MomDefeated, HomegeTown_Text_MomVictory
# 146 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 147 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, HomegeTown_EventScript_WonMomBattle
# 148 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, HomegeTown_EventScript_LostMomBattle
# 149 "data/maps/HomegeTown/scripts.pory"
	end
# 150 "data/maps/HomegeTown/scripts.pory"

# 151 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomBattleSetup::
# 152 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_MOM
# 153 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 17, 19
# 154 "data/maps/HomegeTown/scripts.pory"
	return
# 155 "data/maps/HomegeTown/scripts.pory"

# 156 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_WonMomBattle::
# 157 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_WonMomPostBattle, MSGBOX_DEFAULT
# 158 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 159 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_EventScript_MomPostBattle
# 160 "data/maps/HomegeTown/scripts.pory"
	end
# 161 "data/maps/HomegeTown/scripts.pory"

# 162 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LostMomBattle::
# 163 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_LostMomPostBattle, MSGBOX_DEFAULT
# 164 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 165 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_EventScript_MomPostBattle
# 166 "data/maps/HomegeTown/scripts.pory"
	end
# 167 "data/maps/HomegeTown/scripts.pory"

# 168 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_MomPostBattle::
# 169 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 13
# 170 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 16
# 171 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_MomPostBattle, MSGBOX_DEFAULT
# 172 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 173 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_Movement_MomGoesInside
# 174 "data/maps/HomegeTown/scripts.pory"
	delay 30
# 175 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 176 "data/maps/HomegeTown/scripts.pory"
	waitmovement LOCALID_MOM, MAP_HOMEGE_TOWN
# 177 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 178 "data/maps/HomegeTown/scripts.pory"
	waitdooranim
# 179 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 180 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/HomegeTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 0, 0
# 182 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_MOM
# 183 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 184 "data/maps/HomegeTown/scripts.pory"
	waitdooranim
# 185 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 7
# 186 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_MOM
# 187 "data/maps/HomegeTown/scripts.pory"
	end
# 188 "data/maps/HomegeTown/scripts.pory"

# 189 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomDefeated:
# 190 "data/maps/HomegeTown/scripts.pory"
	.string "...\n"
# 191 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}, I'm so proud of you.$"
# 192 "data/maps/HomegeTown/scripts.pory"

# 193 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomVictory:
# 194 "data/maps/HomegeTown/scripts.pory"
	.string "Ha, ha!\n"
# 195 "data/maps/HomegeTown/scripts.pory"
	.string "Looks like I've still got it!$"
# 196 "data/maps/HomegeTown/scripts.pory"

# 197 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_WonMomPostBattle:
# 198 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: {PLAYER}, you have grown so much\n"
# 199 "data/maps/HomegeTown/scripts.pory"
	.string "in the past 24 hours. I'm so excited\l"
# 200 "data/maps/HomegeTown/scripts.pory"
	.string "to see you grow, not only as a trainer\l"
# 201 "data/maps/HomegeTown/scripts.pory"
	.string "but as a person.$"
# 202 "data/maps/HomegeTown/scripts.pory"

# 203 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_LostMomPostBattle:
# 204 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: Hee hee!\p"
# 205 "data/maps/HomegeTown/scripts.pory"
	.string "Maybe next time, dear! Looks like\n"
# 206 "data/maps/HomegeTown/scripts.pory"
	.string "you've got some training to do!\p"
# 207 "data/maps/HomegeTown/scripts.pory"
	.string "Don't worry about the loss, I still\n"
# 208 "data/maps/HomegeTown/scripts.pory"
	.string "believe in you, {PLAYER}!$"
# 209 "data/maps/HomegeTown/scripts.pory"

# 210 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomPostBattle:
# 211 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: Anyhoo…\p"
# 212 "data/maps/HomegeTown/scripts.pory"
	.string "It's best you get on your way. I would\n"
# 213 "data/maps/HomegeTown/scripts.pory"
	.string "love to battle you again. Maybe when\l"
# 214 "data/maps/HomegeTown/scripts.pory"
	.string "you have a few badges under your belt.\p"
# 215 "data/maps/HomegeTown/scripts.pory"
	.string "Take care, {PLAYER}! Don't be afraid to\n"
# 216 "data/maps/HomegeTown/scripts.pory"
	.string "visit your mother every now and then!$"
# 217 "data/maps/HomegeTown/scripts.pory"

# 218 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SurprisedFaceMom:
# 219 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 220 "data/maps/HomegeTown/scripts.pory"
	face_right
# 221 "data/maps/HomegeTown/scripts.pory"
	step_end
# 222 "data/maps/HomegeTown/scripts.pory"

# 223 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_WalkDownAndFaceMom:
# 224 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 225 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 226 "data/maps/HomegeTown/scripts.pory"
	face_right
# 227 "data/maps/HomegeTown/scripts.pory"
	step_end
# 228 "data/maps/HomegeTown/scripts.pory"

# 229 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MomGoesInside:
# 230 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 231 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 232 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 233 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 234 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 235 "data/maps/HomegeTown/scripts.pory"
	step_end
# 236 "data/maps/HomegeTown/scripts.pory"

# 237 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Camper:: 
# 238 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_Camper, MSGBOX_NPC
# 239 "data/maps/HomegeTown/scripts.pory"
	end
# 240 "data/maps/HomegeTown/scripts.pory"

# 241 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TownSign:: 
# 242 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_TownSign, MSGBOX_SIGN
# 243 "data/maps/HomegeTown/scripts.pory"
	end
# 244 "data/maps/HomegeTown/scripts.pory"

# 245 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabDoorBack:: 
# 246 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_LabDoorBack, MSGBOX_SIGN
# 247 "data/maps/HomegeTown/scripts.pory"
	end
# 248 "data/maps/HomegeTown/scripts.pory"

# 249 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_FatMan:: 
# 250 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_FatManTech, MSGBOX_NPC
# 251 "data/maps/HomegeTown/scripts.pory"
	end
# 252 "data/maps/HomegeTown/scripts.pory"

# 253 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerTop:: 
# 254 "data/maps/HomegeTown/scripts.pory"
	lockall
# 255 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 256 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 257 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 259 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 260 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 262 "data/maps/HomegeTown/scripts.pory"
	end
# 263 "data/maps/HomegeTown/scripts.pory"

# 264 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidTop:: 
# 265 "data/maps/HomegeTown/scripts.pory"
	lockall
# 266 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 267 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 268 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 270 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 271 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 272 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 273 "data/maps/HomegeTown/scripts.pory"
	end
# 274 "data/maps/HomegeTown/scripts.pory"

# 275 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerMidBot:: 
# 276 "data/maps/HomegeTown/scripts.pory"
	lockall
# 277 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 278 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 279 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 281 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 282 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 284 "data/maps/HomegeTown/scripts.pory"
	end
# 285 "data/maps/HomegeTown/scripts.pory"

# 286 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedPokemonTriggerBot:: 
# 287 "data/maps/HomegeTown/scripts.pory"
	lockall
# 288 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 289 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerBot
# 290 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_DangerousWithoutPokemon
# 292 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_BotCamperReturnRight
# 293 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 295 "data/maps/HomegeTown/scripts.pory"
	end
# 296 "data/maps/HomegeTown/scripts.pory"

# 297 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_DangerousWithoutPokemon::
# 298 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SorryPalNoPokemon, MSGBOX_DEFAULT
# 299 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 300 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 301 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 302 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_GoTalkToProfForPokemon, MSGBOX_DEFAULT
# 304 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 305 "data/maps/HomegeTown/scripts.pory"
	return
# 306 "data/maps/HomegeTown/scripts.pory"

# 307 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerTop:: 
# 308 "data/maps/HomegeTown/scripts.pory"
	lockall
# 309 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 310 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerTop
# 311 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 313 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_TopCamperReturnRight
# 314 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 316 "data/maps/HomegeTown/scripts.pory"
	end
# 317 "data/maps/HomegeTown/scripts.pory"

# 318 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerMid:: 
# 319 "data/maps/HomegeTown/scripts.pory"
	lockall
# 320 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 321 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidTop
# 322 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 324 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidTopCamperReturnRight
# 325 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 327 "data/maps/HomegeTown/scripts.pory"
	end
# 328 "data/maps/HomegeTown/scripts.pory"

# 329 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_TalkToMomTriggerBot:: 
# 330 "data/maps/HomegeTown/scripts.pory"
	lockall
# 331 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 332 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperApproachPlayerMidBot
# 333 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_SayByeToMom
# 335 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_MidBotCamperReturnRight
# 336 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 337 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 338 "data/maps/HomegeTown/scripts.pory"
	end
# 339 "data/maps/HomegeTown/scripts.pory"

# 340 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_SayByeToMom::
# 341 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SayByeToMom, MSGBOX_DEFAULT
# 342 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 343 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_CAMPER, HomegeTown_Movement_CamperPushPlayerFromRoute
# 344 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PushPlayerBackFromRoute
# 345 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/HomegeTown/scripts.pory"
	return
# 347 "data/maps/HomegeTown/scripts.pory"

# 348 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_NeedToHelpFindPokemonTrigger::
# 349 "data/maps/HomegeTown/scripts.pory"
	lockall
# 350 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_NeedToHelpFindPokemon, MSGBOX_DEFAULT
# 351 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 352 "data/maps/HomegeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 353 "data/maps/HomegeTown/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/HomegeTown/scripts.pory"
	case DIR_EAST, HomegeTown_EventScript_LabTriggerFromLeft
# 355 "data/maps/HomegeTown/scripts.pory"
	case DIR_WEST, HomegeTown_EventScript_LabTriggerFromRight
# 356 "data/maps/HomegeTown/scripts.pory"
	case DIR_NORTH, HomegeTown_EventScript_LabTriggerFromBottom
# 357 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 358 "data/maps/HomegeTown/scripts.pory"
	end
# 359 "data/maps/HomegeTown/scripts.pory"

# 360 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_NeedToHelpFindPokemon: 
# 361 "data/maps/HomegeTown/scripts.pory"
	.string "PROF. SEQUOIA needs me to help search\n"
# 362 "data/maps/HomegeTown/scripts.pory"
	.string "for the runaway Pokémon.\p"
# 363 "data/maps/HomegeTown/scripts.pory"
	.string "They can't be in his lab, so I should\n"
# 364 "data/maps/HomegeTown/scripts.pory"
	.string "check somewhere else."
# 365 "data/maps/HomegeTown/scripts.pory"

# 366 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromLeft::
# 367 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerLeft
# 368 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/HomegeTown/scripts.pory"
	end
# 370 "data/maps/HomegeTown/scripts.pory"

# 371 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromRight::
# 372 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerRight
# 373 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/HomegeTown/scripts.pory"
	end
# 375 "data/maps/HomegeTown/scripts.pory"

# 376 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabTriggerFromBottom::
# 377 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_LabTriggerPushPlayerDown
# 378 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 379 "data/maps/HomegeTown/scripts.pory"
	end
# 380 "data/maps/HomegeTown/scripts.pory"

# 381 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerLeft:
# 382 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 383 "data/maps/HomegeTown/scripts.pory"
	step_end
# 384 "data/maps/HomegeTown/scripts.pory"

# 385 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerRight:
# 386 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 387 "data/maps/HomegeTown/scripts.pory"
	step_end
# 388 "data/maps/HomegeTown/scripts.pory"

# 389 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_LabTriggerPushPlayerDown:
# 390 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 391 "data/maps/HomegeTown/scripts.pory"
	step_end
# 392 "data/maps/HomegeTown/scripts.pory"

# 393 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_LabStarterTrigger::
# 394 "data/maps/HomegeTown/scripts.pory"
	lockall
# 395 "data/maps/HomegeTown/scripts.pory"
	playse SE_PIN
# 396 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 3
# 397 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8004, 35
# 398 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_0x8005, 11
# 399 "data/maps/HomegeTown/scripts.pory"
	playbgm MUS_HELP, 0
# 400 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_Exclaim
# 401 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_StopThem, MSGBOX_DEFAULT
# 402 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 403 "data/maps/HomegeTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 404 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerStepsAwayFromLabDoor
# 405 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 407 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PAROPEAT
# 408 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 35, 11
# 409 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PAROPEAT, HomegeTown_Movement_ParopeatRunaway
# 410 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 411 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PRIMATIO
# 412 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 35, 11
# 413 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PRIMATIO, HomegeTown_Movement_PrimatioRunaway
# 414 "data/maps/HomegeTown/scripts.pory"
	delay 10
# 415 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_SUBSTEE
# 416 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 35, 11
# 417 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_SUBSTEE, HomegeTown_Movement_SubsteeRunaway
# 418 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PAROPEAT, 12, 27
# 420 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_PRIMATIO, 34, 45
# 421 "data/maps/HomegeTown/scripts.pory"
	setobjectxy LOCALID_SUBSTEE, 13, 38
# 422 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_PROF
# 423 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfRunsOutOfLab
# 424 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 425 "data/maps/HomegeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 426 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalWalksOutOfLab
# 427 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 428 "data/maps/HomegeTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 429 "data/maps/HomegeTown/scripts.pory"
	delay 50
# 430 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfApproachesPlayerRival
# 431 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/HomegeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_Movement_PlayerLooksDown
# 433 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfNeedsHelp, MSGBOX_DEFAULT
# 434 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 435 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStepTalk
# 436 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 437 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RivalWhatever, MSGBOX_DEFAULT
# 438 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 439 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ProfLetsGetMoving, MSGBOX_DEFAULT
# 440 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 441 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_PROF, HomegeTown_Movement_ProfStartsSearching
# 442 "data/maps/HomegeTown/scripts.pory"
	applymovement LOCALID_RIVAL, HomegeTown_Movement_RivalStartsSearching
# 443 "data/maps/HomegeTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 445 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PROF
# 446 "data/maps/HomegeTown/scripts.pory"
	fadedefaultbgm
# 447 "data/maps/HomegeTown/scripts.pory"
	clearflag FLAG_HIDE_STARTERS 		@ Should show the starers in Overworld
# 448 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 449 "data/maps/HomegeTown/scripts.pory"
	end
# 450 "data/maps/HomegeTown/scripts.pory"

# 451 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Paropeat::
# 452 "data/maps/HomegeTown/scripts.pory"
	lockall
# 453 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 0
# 454 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PAROPEAT, 10, 3
# 455 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PAROPEAT, 0
# 456 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_ParopeatIntro, MSGBOX_DEFAULT
# 457 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueParopeatYesNo, MSGBOX_YESNO
# 458 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 459 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 460 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedParopeat
# 461 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 462 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 463 "data/maps/HomegeTown/scripts.pory"
	release
# 464 "data/maps/HomegeTown/scripts.pory"
	end
# 465 "data/maps/HomegeTown/scripts.pory"

# 466 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Primatio::
# 467 "data/maps/HomegeTown/scripts.pory"
	lockall
# 468 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 1
# 469 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_PRIMATIO, 10, 3
# 470 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_PRIMATIO, 0
# 471 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_PrimatioIntro, MSGBOX_DEFAULT
# 472 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescuePrimatioYesNo, MSGBOX_YESNO
# 473 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 474 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 475 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedPrimatio
# 476 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 477 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 478 "data/maps/HomegeTown/scripts.pory"
	release
# 479 "data/maps/HomegeTown/scripts.pory"
	end
# 480 "data/maps/HomegeTown/scripts.pory"

# 481 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_Substee::
# 482 "data/maps/HomegeTown/scripts.pory"
	lockall
# 483 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_STARTER_MON 2
# 484 "data/maps/HomegeTown/scripts.pory"
	playmoncry SPECIES_SUBSTEE, 0
# 485 "data/maps/HomegeTown/scripts.pory"
	showmonpic SPECIES_SUBSTEE, 10, 3
# 486 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_SubsteeIntro, MSGBOX_DEFAULT
# 487 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_Text_RescueSubsteeYesNo, MSGBOX_YESNO
# 488 "data/maps/HomegeTown/scripts.pory"
	waitmoncry
# 489 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, YES
# 490 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_RescuedSubstee
# 491 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 492 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 493 "data/maps/HomegeTown/scripts.pory"
	release
# 494 "data/maps/HomegeTown/scripts.pory"
	end
# 495 "data/maps/HomegeTown/scripts.pory"

# 496 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_Exclaim:
# 497 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 498 "data/maps/HomegeTown/scripts.pory"
	step_end
# 499 "data/maps/HomegeTown/scripts.pory"

# 500 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ParopeatRunaway:
# 501 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 502 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 503 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 504 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 505 "data/maps/HomegeTown/scripts.pory"
	jump_right
# 506 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 507 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 508 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 509 "data/maps/HomegeTown/scripts.pory"
	step_end
# 510 "data/maps/HomegeTown/scripts.pory"

# 511 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PrimatioRunaway:
# 512 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 513 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 514 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 515 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 516 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 517 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 518 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 519 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 520 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 521 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 522 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 523 "data/maps/HomegeTown/scripts.pory"
	step_end
# 524 "data/maps/HomegeTown/scripts.pory"

# 525 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_SubsteeRunaway:
# 526 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 527 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 528 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 529 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 530 "data/maps/HomegeTown/scripts.pory"
	jump_down
# 531 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 532 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 533 "data/maps/HomegeTown/scripts.pory"
	jump_up
# 534 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 535 "data/maps/HomegeTown/scripts.pory"
	jump_left
# 536 "data/maps/HomegeTown/scripts.pory"
	step_end
# 537 "data/maps/HomegeTown/scripts.pory"

# 538 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfRunsOutOfLab:
# 539 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 540 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 541 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 542 "data/maps/HomegeTown/scripts.pory"
	face_down
# 543 "data/maps/HomegeTown/scripts.pory"
	step_end
# 544 "data/maps/HomegeTown/scripts.pory"

# 545 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalWalksOutOfLab:
# 546 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 547 "data/maps/HomegeTown/scripts.pory"
	step_end
# 548 "data/maps/HomegeTown/scripts.pory"

# 549 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerLooksDown:
# 550 "data/maps/HomegeTown/scripts.pory"
	face_down
# 551 "data/maps/HomegeTown/scripts.pory"
	step_end
# 552 "data/maps/HomegeTown/scripts.pory"

# 553 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfApproachesPlayerRival:
# 554 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 555 "data/maps/HomegeTown/scripts.pory"
	face_up
# 556 "data/maps/HomegeTown/scripts.pory"
	step_end
# 557 "data/maps/HomegeTown/scripts.pory"

# 558 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_ProfStartsSearching:
# 559 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 561 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 562 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 563 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 564 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 565 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 566 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 567 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 568 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 569 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 570 "data/maps/HomegeTown/scripts.pory"

# 571 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStartsSearching:
# 572 "data/maps/HomegeTown/scripts.pory"
	delay_8
# 573 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 574 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 575 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 576 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 577 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 578 "data/maps/HomegeTown/scripts.pory"
	walk_fast_left
# 579 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 580 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 581 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 582 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 583 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 584 "data/maps/HomegeTown/scripts.pory"
	walk_fast_down
# 585 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 586 "data/maps/HomegeTown/scripts.pory"

# 587 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerTop:
# 588 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 589 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 590 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 591 "data/maps/HomegeTown/scripts.pory"
	step_end
# 592 "data/maps/HomegeTown/scripts.pory"

# 593 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_TopCamperReturnRight:
# 594 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 595 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 596 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 597 "data/maps/HomegeTown/scripts.pory"
	face_left
# 598 "data/maps/HomegeTown/scripts.pory"
	step_end
# 599 "data/maps/HomegeTown/scripts.pory"

# 600 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidTop:
# 601 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 602 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 603 "data/maps/HomegeTown/scripts.pory"
	step_end
# 604 "data/maps/HomegeTown/scripts.pory"

# 605 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidTopCamperReturnRight:
# 606 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 607 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 608 "data/maps/HomegeTown/scripts.pory"
	face_left
# 609 "data/maps/HomegeTown/scripts.pory"
	step_end
# 610 "data/maps/HomegeTown/scripts.pory"

# 611 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerMidBot:
# 612 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 613 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 614 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 615 "data/maps/HomegeTown/scripts.pory"
	step_end
# 616 "data/maps/HomegeTown/scripts.pory"

# 617 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_MidBotCamperReturnRight:
# 618 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 619 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 620 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 621 "data/maps/HomegeTown/scripts.pory"
	face_left
# 622 "data/maps/HomegeTown/scripts.pory"
	step_end
# 623 "data/maps/HomegeTown/scripts.pory"

# 624 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperApproachPlayerBot:
# 625 "data/maps/HomegeTown/scripts.pory"
	emote_exclamation_mark
# 626 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 627 "data/maps/HomegeTown/scripts.pory"
	walk_down
# 628 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 629 "data/maps/HomegeTown/scripts.pory"
	step_end
# 630 "data/maps/HomegeTown/scripts.pory"

# 631 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_BotCamperReturnRight:
# 632 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 633 "data/maps/HomegeTown/scripts.pory"
	walk_right
# 634 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 635 "data/maps/HomegeTown/scripts.pory"
	walk_up
# 636 "data/maps/HomegeTown/scripts.pory"
	face_left
# 637 "data/maps/HomegeTown/scripts.pory"
	step_end
# 638 "data/maps/HomegeTown/scripts.pory"

# 639 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_CamperPushPlayerFromRoute:
# 640 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 641 "data/maps/HomegeTown/scripts.pory"
	step_end
# 642 "data/maps/HomegeTown/scripts.pory"

# 643 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PushPlayerBackFromRoute:
# 644 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 645 "data/maps/HomegeTown/scripts.pory"
	walk_left
# 646 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 647 "data/maps/HomegeTown/scripts.pory"
	step_end
# 648 "data/maps/HomegeTown/scripts.pory"

# 649 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_PlayerStepsAwayFromLabDoor:
# 650 "data/maps/HomegeTown/scripts.pory"
	face_left
# 651 "data/maps/HomegeTown/scripts.pory"
	lock_facing_direction
# 652 "data/maps/HomegeTown/scripts.pory"
	walk_fast_right
# 653 "data/maps/HomegeTown/scripts.pory"
	unlock_facing_direction
# 654 "data/maps/HomegeTown/scripts.pory"
	step_end
# 655 "data/maps/HomegeTown/scripts.pory"

# 656 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Movement_RivalStepTalk:
# 657 "data/maps/HomegeTown/scripts.pory"
	walk_in_place_down
# 658 "data/maps/HomegeTown/scripts.pory"
	step_end	
# 659 "data/maps/HomegeTown/scripts.pory"

# 660 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_TownSign: 
# 661 "data/maps/HomegeTown/scripts.pory"
	.string "HOMEGE TOWN\n"
# 662 "data/maps/HomegeTown/scripts.pory"
	.string "“A small town full of ambition.”$"
# 663 "data/maps/HomegeTown/scripts.pory"

# 664 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_LabDoorBack: 
# 665 "data/maps/HomegeTown/scripts.pory"
	.string "It's locked.$"
# 666 "data/maps/HomegeTown/scripts.pory"

# 667 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_StopThem:
# 668 "data/maps/HomegeTown/scripts.pory"
.string "???: STOP THEM!$"
# 669 "data/maps/HomegeTown/scripts.pory"

# 670 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfNeedsHelp:
# 671 "data/maps/HomegeTown/scripts.pory"
.string "PROF. SEQUOIA: {RIVAL}, {PLAYER}, I need\n"
# 672 "data/maps/HomegeTown/scripts.pory"
.string "your help!\p"
# 673 "data/maps/HomegeTown/scripts.pory"
.string "We need to get these Pokémon back\n"
# 674 "data/maps/HomegeTown/scripts.pory"
.string "quickly!\p"
# 675 "data/maps/HomegeTown/scripts.pory"
.string "Will you two please help me find the\n"
# 676 "data/maps/HomegeTown/scripts.pory"
.string "runaway Pokémon?$"
# 677 "data/maps/HomegeTown/scripts.pory"

# 678 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RivalWhatever:
# 679 "data/maps/HomegeTown/scripts.pory"
.string "{RIVAL}: Yeah, sure. Whatever.$"
# 680 "data/maps/HomegeTown/scripts.pory"

# 681 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfLetsGetMoving:
# 682 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: Great, now let's get searching.\n"
# 683 "data/maps/HomegeTown/scripts.pory"
.string "They couldn't have gone far.\p"
# 684 "data/maps/HomegeTown/scripts.pory"
.string "SEQUOIA: After we find them, come back\n"
# 685 "data/maps/HomegeTown/scripts.pory"
.string "to my lab immediately!$"
# 686 "data/maps/HomegeTown/scripts.pory"

# 687 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ParopeatIntro:
# 688 "data/maps/HomegeTown/scripts.pory"
.string "This is PAROPEAT, the ECHO POKéMON.\n$"
# 689 "data/maps/HomegeTown/scripts.pory"

# 690 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PrimatioIntro:
# 691 "data/maps/HomegeTown/scripts.pory"
.string "This is PRIMATIO, the FEEDBACK\n"
# 692 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 693 "data/maps/HomegeTown/scripts.pory"

# 694 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SubsteeIntro:
# 695 "data/maps/HomegeTown/scripts.pory"
.string "This is SUBSTEE, the SUPPORTER\n"
# 696 "data/maps/HomegeTown/scripts.pory"
.string "POKéMON.$"
# 697 "data/maps/HomegeTown/scripts.pory"

# 698 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueParopeatYesNo:
# 699 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PAROPEAT?$"
# 700 "data/maps/HomegeTown/scripts.pory"

# 701 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescuePrimatioYesNo:
# 702 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue PRIMATIO?$"
# 703 "data/maps/HomegeTown/scripts.pory"

# 704 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_RescueSubsteeYesNo:
# 705 "data/maps/HomegeTown/scripts.pory"
.string "Will you rescue SUBSTEE?$"
# 706 "data/maps/HomegeTown/scripts.pory"

# 707 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedParopeat::
# 708 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PAROPEAT
# 709 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 710 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 711 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 712 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 713 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 714 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PAROPEAT, 5, ITEM_NONE
# 715 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 716 "data/maps/HomegeTown/scripts.pory"
	end
# 717 "data/maps/HomegeTown/scripts.pory"

# 718 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedPrimatio::
# 719 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PRIMATIO
# 720 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 721 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 722 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 723 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 724 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 725 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_PRIMATIO, 5, ITEM_NONE
# 726 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 727 "data/maps/HomegeTown/scripts.pory"
	end
# 728 "data/maps/HomegeTown/scripts.pory"

# 729 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_RescuedSubstee::
# 730 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUBSTEE
# 731 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PAROPEAT
# 732 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_PRIMATIO
# 733 "data/maps/HomegeTown/scripts.pory"
	removeobject LOCALID_SUBSTEE
# 734 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_HIDE_STARTERS
# 735 "data/maps/HomegeTown/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE 4
# 736 "data/maps/HomegeTown/scripts.pory"
	givemon SPECIES_SUBSTEE, 5, ITEM_NONE
# 737 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveStarter
# 738 "data/maps/HomegeTown/scripts.pory"
	end
# 739 "data/maps/HomegeTown/scripts.pory"

# 740 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveStarter::
# 741 "data/maps/HomegeTown/scripts.pory"
	hidemonpic
# 742 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 743 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 0
# 744 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedParopeat
# 745 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 1
# 746 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedPrimatio
# 747 "data/maps/HomegeTown/scripts.pory"
	compare VAR_STARTER_MON 2
# 748 "data/maps/HomegeTown/scripts.pory"
	call_if_eq HomegeTown_EventScript_ReceivedSubstee
# 749 "data/maps/HomegeTown/scripts.pory"
	call HomegeTown_EventScript_ReceiveAndNickname
# 750 "data/maps/HomegeTown/scripts.pory"
	closemessage
# 751 "data/maps/HomegeTown/scripts.pory"
	warp MAP_HOMEGE_TOWN_PROFESSOR_SEQUOIAS_LAB, 255, 6, 5
# 752 "data/maps/HomegeTown/scripts.pory"
	waitstate
# 753 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 754 "data/maps/HomegeTown/scripts.pory"
	end
# 755 "data/maps/HomegeTown/scripts.pory"

# 756 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedParopeat::
# 757 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 758 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedParopeat
# 759 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 760 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 761 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PAROPEAT
# 762 "data/maps/HomegeTown/scripts.pory"
	return
# 763 "data/maps/HomegeTown/scripts.pory"

# 764 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedPrimatio::
# 765 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 766 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedPrimatio
# 767 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 768 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 769 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_PRIMATIO
# 770 "data/maps/HomegeTown/scripts.pory"
	return
# 771 "data/maps/HomegeTown/scripts.pory"

# 772 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceivedSubstee::
# 773 "data/maps/HomegeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 774 "data/maps/HomegeTown/scripts.pory"
	message HomegeTown_Text_PlayerReceivedSubstee
# 775 "data/maps/HomegeTown/scripts.pory"
	waitmessage
# 776 "data/maps/HomegeTown/scripts.pory"
	waitfanfare
# 777 "data/maps/HomegeTown/scripts.pory"
	bufferspeciesname 0, SPECIES_SUBSTEE
# 778 "data/maps/HomegeTown/scripts.pory"
	return
# 779 "data/maps/HomegeTown/scripts.pory"

# 780 "data/maps/HomegeTown/scripts.pory"
HomegeTown_EventScript_ReceiveAndNickname::
# 781 "data/maps/HomegeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 782 "data/maps/HomegeTown/scripts.pory"
	return
# 783 "data/maps/HomegeTown/scripts.pory"

# 784 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign::
# 785 "data/maps/HomegeTown/scripts.pory"
	lockall
# 786 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 787 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 788 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTianaHouseSign_2
# 789 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_1
# 790 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_1:
# 791 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 792 "data/maps/HomegeTown/scripts.pory"
	return
# 793 "data/maps/HomegeTown/scripts.pory"

# 794 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_2:
# 795 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTianaHouseSign_Text_0
# 796 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTianaHouseSign_1
# 797 "data/maps/HomegeTown/scripts.pory"

# 798 "data/maps/HomegeTown/scripts.pory"

# 799 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_0:
# 800 "data/maps/HomegeTown/scripts.pory"
	.string "Tiana's house$"
# 801 "data/maps/HomegeTown/scripts.pory"

# 802 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTianaHouseSign_Text_1:
# 803 "data/maps/HomegeTown/scripts.pory"
	.string "Matt's house$"
# 804 "data/maps/HomegeTown/scripts.pory"

# 805 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign::
# 806 "data/maps/HomegeTown/scripts.pory"
	lockall
# 807 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_RivalHouseSign_Text_0
# 808 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 809 "data/maps/HomegeTown/scripts.pory"
	return
# 810 "data/maps/HomegeTown/scripts.pory"

# 811 "data/maps/HomegeTown/scripts.pory"

# 812 "data/maps/HomegeTown/scripts.pory"
HomegeTown_RivalHouseSign_Text_0:
# 813 "data/maps/HomegeTown/scripts.pory"
	.string "{RIVAL}'s house$"
# 814 "data/maps/HomegeTown/scripts.pory"

# 815 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign::
# 816 "data/maps/HomegeTown/scripts.pory"
	lockall
# 817 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_PlayerHouseSign_Text_0
# 818 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 819 "data/maps/HomegeTown/scripts.pory"
	return
# 820 "data/maps/HomegeTown/scripts.pory"

# 821 "data/maps/HomegeTown/scripts.pory"

# 822 "data/maps/HomegeTown/scripts.pory"
HomegeTown_PlayerHouseSign_Text_0:
# 823 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}'s house$"
# 824 "data/maps/HomegeTown/scripts.pory"

# 825 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk::
# 826 "data/maps/HomegeTown/scripts.pory"
	lockall
# 827 "data/maps/HomegeTown/scripts.pory"
	checkplayergender
# 828 "data/maps/HomegeTown/scripts.pory"
	compare VAR_RESULT, MALE
# 829 "data/maps/HomegeTown/scripts.pory"
	goto_if_eq HomegeTown_MattTiana_Peptalk_2
# 830 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_8
# 831 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_3
# 832 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_1:
# 833 "data/maps/HomegeTown/scripts.pory"
	setflag FLAG_TEMP_1
# 834 "data/maps/HomegeTown/scripts.pory"
	releaseall
# 835 "data/maps/HomegeTown/scripts.pory"
	return
# 836 "data/maps/HomegeTown/scripts.pory"

# 837 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_2:
# 838 "data/maps/HomegeTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomegeTown_MattTiana_Peptalk_5
# 839 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_1
# 840 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 841 "data/maps/HomegeTown/scripts.pory"

# 842 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_5:
# 843 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_0
# 844 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 845 "data/maps/HomegeTown/scripts.pory"

# 846 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_8:
# 847 "data/maps/HomegeTown/scripts.pory"
	msgbox HomegeTown_MattTiana_Peptalk_Text_2
# 848 "data/maps/HomegeTown/scripts.pory"
	goto HomegeTown_MattTiana_Peptalk_1
# 849 "data/maps/HomegeTown/scripts.pory"

# 850 "data/maps/HomegeTown/scripts.pory"

# 851 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_0:
# 852 "data/maps/HomegeTown/scripts.pory"
	.string "???: I'm good enough, I'm smart\n"
# 853 "data/maps/HomegeTown/scripts.pory"
	.string "enough, and doggone it, people like me!$"
# 854 "data/maps/HomegeTown/scripts.pory"

# 855 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_1:
# 856 "data/maps/HomegeTown/scripts.pory"
	.string "???: I'm good enough, I'm smart\n"
# 857 "data/maps/HomegeTown/scripts.pory"
	.string "enough, and doggone it, people like me!$"
# 858 "data/maps/HomegeTown/scripts.pory"

# 859 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_2:
# 860 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 861 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 862 "data/maps/HomegeTown/scripts.pory"

# 863 "data/maps/HomegeTown/scripts.pory"
HomegeTown_MattTiana_Peptalk_Text_3:
# 864 "data/maps/HomegeTown/scripts.pory"
	.string "This person is too focused to notice\n"
# 865 "data/maps/HomegeTown/scripts.pory"
	.string "you.$"
# 866 "data/maps/HomegeTown/scripts.pory"

# 867 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedParopeat:
# 868 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PAROPEAT!$"
# 869 "data/maps/HomegeTown/scripts.pory"

# 870 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedPrimatio:
# 871 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued PRIMATIO!$"
# 872 "data/maps/HomegeTown/scripts.pory"

# 873 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_PlayerReceivedSubstee:
# 874 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER} rescued SUBSTEE!$"
# 875 "data/maps/HomegeTown/scripts.pory"

# 876 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_FatManTech: 
# 877 "data/maps/HomegeTown/scripts.pory"
	.string "The power of technology is astounding!\n"
# 878 "data/maps/HomegeTown/scripts.pory"
	.string "I can download and play roms on my PC,\l"
# 879 "data/maps/HomegeTown/scripts.pory"
	.string "and I don't even need to pay\l"
# 880 "data/maps/HomegeTown/scripts.pory"
	.string "anything!\p"
# 881 "data/maps/HomegeTown/scripts.pory"
	.string "...What do you mean that's not legal?$"
# 882 "data/maps/HomegeTown/scripts.pory"

# 883 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SorryPalNoPokemon: 
# 884 "data/maps/HomegeTown/scripts.pory"
	.string "Sorry, pal.$"
# 885 "data/maps/HomegeTown/scripts.pory"

# 886 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_SayByeToMom:
# 887 "data/maps/HomegeTown/scripts.pory"
	.string "Shouldn't you say bye to your mom\n"
# 888 "data/maps/HomegeTown/scripts.pory"
	.string "before you leave?$"
# 889 "data/maps/HomegeTown/scripts.pory"

# 890 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_GoTalkToProfForPokemon: 
# 891 "data/maps/HomegeTown/scripts.pory"
	.string "You don't have any Pokémon on you,\n"
# 892 "data/maps/HomegeTown/scripts.pory"
	.string "and there are some strong Pokémon\l"
# 893 "data/maps/HomegeTown/scripts.pory"
	.string "out there!\p"
# 894 "data/maps/HomegeTown/scripts.pory"
	.string "I heard the professor has Pokémon.\n"
# 895 "data/maps/HomegeTown/scripts.pory"
	.string "Go talk to him. If you're lucky, he might\l"
# 896 "data/maps/HomegeTown/scripts.pory"
	.string "give you one.$"
# 897 "data/maps/HomegeTown/scripts.pory"
	
# 898 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_Camper:
# 899 "data/maps/HomegeTown/scripts.pory"
	.string "Can't believe you have a Pokémon.\p"
# 900 "data/maps/HomegeTown/scripts.pory"
	.string "Wonder what I'm going to do with\n"
# 901 "data/maps/HomegeTown/scripts.pory"
	.string "my life now...$"
# 902 "data/maps/HomegeTown/scripts.pory"

# 903 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomOverHere:
# 904 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: I'm over here, sweetie!$"
# 905 "data/maps/HomegeTown/scripts.pory"

# 906 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_MomExcitedBattle:
# 907 "data/maps/HomegeTown/scripts.pory"
	.string "Mom: I can't wait to see what kind\n"
# 908 "data/maps/HomegeTown/scripts.pory"
	.string "of trainer you are, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 909 "data/maps/HomegeTown/scripts.pory"

# 910 "data/maps/HomegeTown/scripts.pory"
HomegeTown_Text_ProfLeaves:
# 911 "data/maps/HomegeTown/scripts.pory"
	.string "{PLAYER}, I have matters to attend\n"
# 912 "data/maps/HomegeTown/scripts.pory"
	.string "to in Icovale. I'll see you there.$"
