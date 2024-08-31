# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
.set LOCALID_NICERIVAL, 6
# 3 "data/maps/Route1/scripts.pory"

# 4 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 5 "data/maps/Route1/scripts.pory"
	.byte 0
# 6 "data/maps/Route1/scripts.pory"

# 7 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSignHomege::
# 8 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSignHomege, MSGBOX_SIGN
# 9 "data/maps/Route1/scripts.pory"
	end
# 10 "data/maps/Route1/scripts.pory"

# 11 "data/maps/Route1/scripts.pory"
Route1_EventScript_TallGrassKid::
# 12 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TallGrassKid, MSGBOX_NPC
# 13 "data/maps/Route1/scripts.pory"
	end
# 14 "data/maps/Route1/scripts.pory"

# 15 "data/maps/Route1/scripts.pory"
Route1_EventScript_Ryan:: 
# 16 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_REWIND_RYAN, Route1_Text_RyanIntro, Route1_Text_RyanDefeated
# 17 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route1/scripts.pory"
	end
# 19 "data/maps/Route1/scripts.pory"

# 20 "data/maps/Route1/scripts.pory"
Route1_EventScript_Billy:: 
# 21 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_REWIND_BILLY, Route1_Text_BillyIntro, Route1_Text_BillyDefeated
# 22 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_Shizuku:: 
# 26 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_REWIND_SHIZUKU, Route1_Text_ShizukuIntro, Route1_Text_ShizukuDefeated
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ShizukuPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlgoTechGruntF1:: 
# 31 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ALGOTECH_GRUNT_F_1, Route1_Text_AlgoTechGruntF1Intro, Route1_Text_AlgoTechGruntF1Defeated
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AlgoTechGruntF1PostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route1/scripts.pory"
	end
# 34 "data/maps/Route1/scripts.pory"

# 35 "data/maps/Route1/scripts.pory"
Route1_EventScript_HomelessMan::
# 36 "data/maps/Route1/scripts.pory"
	lock
# 37 "data/maps/Route1/scripts.pory"
	faceplayer
# 38 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessScriptQuestion, MSGBOX_YESNO
# 39 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, 1
# 40 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_HomelessAnsweredYes
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessAnsweredNo, MSGBOX_DEFAULT
# 42 "data/maps/Route1/scripts.pory"
	release
# 43 "data/maps/Route1/scripts.pory"
	end
# 44 "data/maps/Route1/scripts.pory"

# 45 "data/maps/Route1/scripts.pory"
Route1_EventScript_HomelessAnsweredYes::
# 46 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessAnsweredYes, MSGBOX_DEFAULT
# 47 "data/maps/Route1/scripts.pory"
	release
# 48 "data/maps/Route1/scripts.pory"
	end
# 49 "data/maps/Route1/scripts.pory"

# 50 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger1::
# 51 "data/maps/Route1/scripts.pory"
	lockall
# 52 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 1
# 53 "data/maps/Route1/scripts.pory"
	checkplayergender
# 54 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 55 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 56 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 57 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 58 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 12
# 59 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 60 "data/maps/Route1/scripts.pory"
	end
# 61 "data/maps/Route1/scripts.pory"

# 62 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger2::
# 63 "data/maps/Route1/scripts.pory"
	lockall
# 64 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 2
# 65 "data/maps/Route1/scripts.pory"
	checkplayergender
# 66 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 67 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 68 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 69 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 70 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 13
# 71 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 72 "data/maps/Route1/scripts.pory"
	end
# 73 "data/maps/Route1/scripts.pory"

# 74 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger3::
# 75 "data/maps/Route1/scripts.pory"
	lockall
# 76 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 3
# 77 "data/maps/Route1/scripts.pory"
	checkplayergender
# 78 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 79 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 80 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 81 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 82 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 14
# 83 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 84 "data/maps/Route1/scripts.pory"
	end
# 85 "data/maps/Route1/scripts.pory"

# 86 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger4::
# 87 "data/maps/Route1/scripts.pory"
	lockall
# 88 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 4
# 89 "data/maps/Route1/scripts.pory"
	checkplayergender
# 90 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 91 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 92 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 93 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 94 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 15
# 95 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 96 "data/maps/Route1/scripts.pory"
	end
# 97 "data/maps/Route1/scripts.pory"

# 98 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaSetUp::
# 99 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 100 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 101 "data/maps/Route1/scripts.pory"
	return
# 102 "data/maps/Route1/scripts.pory"

# 103 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattSetUp::
# 104 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 105 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 106 "data/maps/Route1/scripts.pory"
	return
# 107 "data/maps/Route1/scripts.pory"

# 108 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendRival::
# 109 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HoldUp, MSGBOX_DEFAULT
# 110 "data/maps/Route1/scripts.pory"
	closemessage
# 111 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 112 "data/maps/Route1/scripts.pory"
	checkplayergender
# 113 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 114 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_TianaRival
# 115 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 116 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_MattRival
# 117 "data/maps/Route1/scripts.pory"
	end
# 118 "data/maps/Route1/scripts.pory"

# 119 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaRival::
# 120 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 121 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 122 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 123 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalGoesToPlayer
# 124 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 125 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaIntro, MSGBOX_DEFAULT
# 126 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceLeft
# 127 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 128 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ThanksForWaiting, MSGBOX_DEFAULT
# 129 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceRight
# 130 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 131 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaIntroTwo, MSGBOX_DEFAULT
# 132 "data/maps/Route1/scripts.pory"
	closemessage
# 133 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkLeft
# 134 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AlwaysWantedToSayThis, MSGBOX_DEFAULT
# 136 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkRight
# 137 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaChallenge, MSGBOX_DEFAULT
# 139 "data/maps/Route1/scripts.pory"
	closemessage
# 140 "data/maps/Route1/scripts.pory"
	switch VAR_STARTER_MON
# 141 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_StartTianaBattleSubstee
# 142 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_StartTianaBattleParopeat
# 143 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_StartTianaBattlePrimatio
# 144 "data/maps/Route1/scripts.pory"
	end
# 145 "data/maps/Route1/scripts.pory"

# 146 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattRival::
# 147 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 148 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 149 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 150 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalGoesToPlayer
# 151 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 152 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattIntro, MSGBOX_DEFAULT
# 153 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceLeft
# 154 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 155 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ThanksForWaiting, MSGBOX_DEFAULT
# 156 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceRight
# 157 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 158 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattIntroTwo, MSGBOX_DEFAULT
# 159 "data/maps/Route1/scripts.pory"
	closemessage
# 160 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkLeft
# 161 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AlwaysWantedToSayThis, MSGBOX_DEFAULT
# 163 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkRight
# 164 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattChallenge, MSGBOX_DEFAULT
# 166 "data/maps/Route1/scripts.pory"
	closemessage
# 167 "data/maps/Route1/scripts.pory"
	switch VAR_STARTER_MON
# 168 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_StartMattBattleSubstee
# 169 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_StartMattBattleParopeat
# 170 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_StartMattBattlePrimatio
# 171 "data/maps/Route1/scripts.pory"
	end
# 172 "data/maps/Route1/scripts.pory"

# 173 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattleSubstee::
# 174 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_SUBSTEE, Route1_Text_RivalDefeated
# 175 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 176 "data/maps/Route1/scripts.pory"
	end
# 177 "data/maps/Route1/scripts.pory"

# 178 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattleParopeat::
# 179 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_PAROPEAT, Route1_Text_RivalDefeated
# 180 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 181 "data/maps/Route1/scripts.pory"
	end
# 182 "data/maps/Route1/scripts.pory"

# 183 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattlePrimatio::
# 184 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_PRIMATIO, Route1_Text_RivalDefeated
# 185 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 186 "data/maps/Route1/scripts.pory"
	end
# 187 "data/maps/Route1/scripts.pory"

# 188 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattleSubstee::
# 189 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_SUBSTEE, Route1_Text_RivalDefeated
# 190 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 191 "data/maps/Route1/scripts.pory"
	end
# 192 "data/maps/Route1/scripts.pory"

# 193 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattleParopeat::
# 194 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_PAROPEAT, Route1_Text_RivalDefeated
# 195 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 196 "data/maps/Route1/scripts.pory"
	end
# 197 "data/maps/Route1/scripts.pory"

# 198 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattlePrimatio::
# 199 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_PRIMATIO, Route1_Text_RivalDefeated
# 200 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 201 "data/maps/Route1/scripts.pory"
	end
# 202 "data/maps/Route1/scripts.pory"

# 203 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaAfterBattle::
# 204 "data/maps/Route1/scripts.pory"
	setvar VAR_NICE_RIVAL_STATE 1
# 205 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaAfterBattle, MSGBOX_DEFAULT
# 206 "data/maps/Route1/scripts.pory"
	closemessage
# 207 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 208 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 2
# 209 "data/maps/Route1/scripts.pory"
	goto_if_le Route1_EventScript_RivalExitTriggerOneTwo
# 210 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 3
# 211 "data/maps/Route1/scripts.pory"
	goto_if_ge Route1_EventScript_RivalExitTriggerThreeFour
# 212 "data/maps/Route1/scripts.pory"
	end
# 213 "data/maps/Route1/scripts.pory"

# 214 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattAfterBattle::
# 215 "data/maps/Route1/scripts.pory"
	setvar VAR_NICE_RIVAL_STATE 1
# 216 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattAfterBattle, MSGBOX_DEFAULT
# 217 "data/maps/Route1/scripts.pory"
	closemessage
# 218 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 219 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 2
# 220 "data/maps/Route1/scripts.pory"
	goto_if_le Route1_EventScript_RivalExitTriggerOneTwo
# 221 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 3
# 222 "data/maps/Route1/scripts.pory"
	goto_if_ge Route1_EventScript_RivalExitTriggerThreeFour
# 223 "data/maps/Route1/scripts.pory"
	end
# 224 "data/maps/Route1/scripts.pory"

# 225 "data/maps/Route1/scripts.pory"
Route1_EventScript_RivalExitTriggerOneTwo::
# 226 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalLeavesTriggerOneTwo
# 227 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 229 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_NICERIVAL
# 230 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_1
# 231 "data/maps/Route1/scripts.pory"
	releaseall
# 232 "data/maps/Route1/scripts.pory"
	end
# 233 "data/maps/Route1/scripts.pory"

# 234 "data/maps/Route1/scripts.pory"
Route1_EventScript_RivalExitTriggerThreeFour::
# 235 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalLeavesTriggerThreeFour
# 236 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 238 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_NICERIVAL
# 239 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_1
# 240 "data/maps/Route1/scripts.pory"
	releaseall
# 241 "data/maps/Route1/scripts.pory"
	end
# 242 "data/maps/Route1/scripts.pory"

# 243 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessScriptQuestion:
# 244 "data/maps/Route1/scripts.pory"
	.string "Damn kids. All they want to be nowadays\n"
# 245 "data/maps/Route1/scripts.pory"
	.string "are Pokémon masters. Say, are you\l"
# 246 "data/maps/Route1/scripts.pory"
	.string "trying to become a Pokémon master?$"
# 247 "data/maps/Route1/scripts.pory"

# 248 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessAnsweredYes:
# 249 "data/maps/Route1/scripts.pory"
	.string "Stupid kid! You do realize that\n"
# 250 "data/maps/Route1/scripts.pory"
	.string "not even 1% of Pokémon trainers make it\l"
# 251 "data/maps/Route1/scripts.pory"
	.string "to the league!?\p"
# 252 "data/maps/Route1/scripts.pory"
	.string "It's called survivorship bias.\n" 
# 253 "data/maps/Route1/scripts.pory"
	.string "Look it up, moron.$"
# 254 "data/maps/Route1/scripts.pory"

# 255 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessAnsweredNo:
# 256 "data/maps/Route1/scripts.pory"
	.string "Good, very good.\p" 
# 257 "data/maps/Route1/scripts.pory"
	.string "Don't be like me, kid.\n"
# 258 "data/maps/Route1/scripts.pory"
	.string "Get an education and a real job.$"
# 259 "data/maps/Route1/scripts.pory"

# 260 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSignHomege:
# 261 "data/maps/Route1/scripts.pory"
	.string "ROUTE 1\n"
# 262 "data/maps/Route1/scripts.pory"
	.string "{LEFT_ARROW} HOMEGE TOWN$"
# 263 "data/maps/Route1/scripts.pory"

# 264 "data/maps/Route1/scripts.pory"
Route1_Text_TallGrassKid:
# 265 "data/maps/Route1/scripts.pory"
	.string "Mama and Papa said not to wander into\n"
# 266 "data/maps/Route1/scripts.pory"
	.string "the tall grass.\p"
# 267 "data/maps/Route1/scripts.pory"
	.string "I'm not old enough to have a Pokémon\n"
# 268 "data/maps/Route1/scripts.pory"
	.string "yet.$"
# 269 "data/maps/Route1/scripts.pory"

# 270 "data/maps/Route1/scripts.pory"
Route1_Text_HoldUp:
# 271 "data/maps/Route1/scripts.pory"
	.string "???: Hey, hold up!$"
# 272 "data/maps/Route1/scripts.pory"

# 273 "data/maps/Route1/scripts.pory"
Route1_Text_TianaIntro:
# 274 "data/maps/Route1/scripts.pory"
	.string "???: Oh, hey!\p"
# 275 "data/maps/Route1/scripts.pory"
	.string "You're {PLAYER}, right?\n"
# 276 "data/maps/Route1/scripts.pory"
	.string "Professor Sequoia told me about ya.\p"
# 277 "data/maps/Route1/scripts.pory"
	.string "I live right around the corner in\n"
# 278 "data/maps/Route1/scripts.pory"
	.string "Icovale.\p"
# 279 "data/maps/Route1/scripts.pory"
	.string "I'm Tiana by the way.\n"
# 280 "data/maps/Route1/scripts.pory"
	.string "Pleasure to meet you!\p"
# 281 "data/maps/Route1/scripts.pory"
	.string "Tiana: I'm guessing you just received\n"
# 282 "data/maps/Route1/scripts.pory"
	.string "your starter?\p"
# 283 "data/maps/Route1/scripts.pory"
	.string "There was only 1 left in the lab when\n"
# 284 "data/maps/Route1/scripts.pory"
	.string "I came over, so I didn't have many\l"
# 285 "data/maps/Route1/scripts.pory"
	.string "options.$"
# 286 "data/maps/Route1/scripts.pory"

# 287 "data/maps/Route1/scripts.pory"
Route1_Text_MattIntro:
# 288 "data/maps/Route1/scripts.pory"
	.string "???: Oh, hey!\p"
# 289 "data/maps/Route1/scripts.pory"
	.string "You're {PLAYER}, right?\n"
# 290 "data/maps/Route1/scripts.pory"
	.string "Professor Sequoia told me about ya.\p"
# 291 "data/maps/Route1/scripts.pory"
	.string "I live right around the corner in\n"
# 292 "data/maps/Route1/scripts.pory"
	.string "Icovale.\p"
# 293 "data/maps/Route1/scripts.pory"
	.string "I'm Matt by the way.\n"
# 294 "data/maps/Route1/scripts.pory"
	.string "Pleasure to meet you!\p"
# 295 "data/maps/Route1/scripts.pory"
	.string "Matt: I'm guessing you just received\n"
# 296 "data/maps/Route1/scripts.pory"
	.string "your starter?\p"
# 297 "data/maps/Route1/scripts.pory"
	.string "There was only 1 left in the lab when\n"
# 298 "data/maps/Route1/scripts.pory"
	.string "I came over, so I didn't have many\l"
# 299 "data/maps/Route1/scripts.pory"
	.string "options.$"
# 300 "data/maps/Route1/scripts.pory"

# 301 "data/maps/Route1/scripts.pory"
Route1_Text_ThanksForWaiting:
# 302 "data/maps/Route1/scripts.pory"
	.string "Thanks for waiting for me...$"
# 303 "data/maps/Route1/scripts.pory"

# 304 "data/maps/Route1/scripts.pory"
Route1_Text_TianaIntroTwo:
# 305 "data/maps/Route1/scripts.pory"
	.string "Tiana: Ha ha!\n"
# 306 "data/maps/Route1/scripts.pory"
	.string "I'm only teasing!\p"
# 307 "data/maps/Route1/scripts.pory"
	.string "Say, I did want to ask you something.\p"
# 308 "data/maps/Route1/scripts.pory"
	.string "I overheard some guy screaming outside\n" 
# 309 "data/maps/Route1/scripts.pory"
	.string "my house about how he's apparently\l" 
# 310 "data/maps/Route1/scripts.pory"
	.string "going to be the champion soon.\p"
# 311 "data/maps/Route1/scripts.pory"
	.string "You wouldn't happen to know anything\n"
# 312 "data/maps/Route1/scripts.pory"
	.string "about that, would you?\p"
# 313 "data/maps/Route1/scripts.pory"
	.string "...\p"
# 314 "data/maps/Route1/scripts.pory"
	.string "Ah, never mind.\p"
# 315 "data/maps/Route1/scripts.pory"
	.string "It's not really important.\p"
# 316 "data/maps/Route1/scripts.pory"
	.string "Anyways, since we both got our starters…\n"
# 317 "data/maps/Route1/scripts.pory"
	.string "How ‘bout a battle?\p"
# 318 "data/maps/Route1/scripts.pory"
	.string "It's the least you could do for making\n"
# 319 "data/maps/Route1/scripts.pory"
	.string "me pick last after all.$"
# 320 "data/maps/Route1/scripts.pory"

# 321 "data/maps/Route1/scripts.pory"
Route1_Text_MattIntroTwo:
# 322 "data/maps/Route1/scripts.pory"
	.string "Matt: Ha ha!\n"
# 323 "data/maps/Route1/scripts.pory"
	.string "I'm only teasing!\p"
# 324 "data/maps/Route1/scripts.pory"
	.string "Say, I did want to ask you something.\p"
# 325 "data/maps/Route1/scripts.pory"
	.string "I overheard some guy screaming outside\n" 
# 326 "data/maps/Route1/scripts.pory"
	.string "my house about how he's apparently\l" 
# 327 "data/maps/Route1/scripts.pory"
	.string "going to be the champion soon.\p"
# 328 "data/maps/Route1/scripts.pory"
	.string "You wouldn't happen to know anything\n"
# 329 "data/maps/Route1/scripts.pory"
	.string "about that, would you?\p"
# 330 "data/maps/Route1/scripts.pory"
	.string "...\p"
# 331 "data/maps/Route1/scripts.pory"
	.string "Ah, never mind.\p"
# 332 "data/maps/Route1/scripts.pory"
	.string "It's not really important.\p"
# 333 "data/maps/Route1/scripts.pory"
	.string "Anyways, since we both got our starters…\n"
# 334 "data/maps/Route1/scripts.pory"
	.string "How ‘bout a battle?\p"
# 335 "data/maps/Route1/scripts.pory"
	.string "It's the least you could do for making\n"
# 336 "data/maps/Route1/scripts.pory"
	.string "me pick last after all.$"
# 337 "data/maps/Route1/scripts.pory"

# 338 "data/maps/Route1/scripts.pory"
Route1_Text_AlwaysWantedToSayThis:
# 339 "data/maps/Route1/scripts.pory"
	.string "Ooh, I've waited my entire life to\n"
# 340 "data/maps/Route1/scripts.pory"
	.string "say this!$"
# 341 "data/maps/Route1/scripts.pory"

# 342 "data/maps/Route1/scripts.pory"
Route1_Text_TianaChallenge:
# 343 "data/maps/Route1/scripts.pory"
	.string "Tiana: {PLAYER}!\p"
# 344 "data/maps/Route1/scripts.pory"
	.string "I challenge you to a battle!$"
# 345 "data/maps/Route1/scripts.pory"

# 346 "data/maps/Route1/scripts.pory"
Route1_Text_MattChallenge:
# 347 "data/maps/Route1/scripts.pory"
	.string "Matt: {PLAYER}!\p"
# 348 "data/maps/Route1/scripts.pory"
	.string "I challenge you to a battle!$"
# 349 "data/maps/Route1/scripts.pory"

# 350 "data/maps/Route1/scripts.pory"
Route1_Text_RivalDefeated:
# 351 "data/maps/Route1/scripts.pory"
	.string "Huh?$"
# 352 "data/maps/Route1/scripts.pory"

# 353 "data/maps/Route1/scripts.pory"
Route1_Text_TianaAfterBattle:
# 354 "data/maps/Route1/scripts.pory"
	.string "Tiana: Oh, wow...\p"
# 355 "data/maps/Route1/scripts.pory"
	.string "That was...\p"
# 356 "data/maps/Route1/scripts.pory"
	.string "INCREDIBLE!\p"
# 357 "data/maps/Route1/scripts.pory"
	.string "You absolutely crushed me, ha ha!\p"
# 358 "data/maps/Route1/scripts.pory"
	.string "Thanks for that battle, {PLAYER}!\p"
# 359 "data/maps/Route1/scripts.pory"
	.string "I'm going to go heal my Pokémon now,\n"
# 360 "data/maps/Route1/scripts.pory"
	.string "and then I'm going to train.\p"
# 361 "data/maps/Route1/scripts.pory"
	.string "Y'know, so our next battle is a little\n"
# 362 "data/maps/Route1/scripts.pory"
	.string "closer.\p"
# 363 "data/maps/Route1/scripts.pory"
	.string "Tiana: Take care, {PLAYER}.\p"
# 364 "data/maps/Route1/scripts.pory"
	.string "Our next battle will be much better,\n"
# 365 "data/maps/Route1/scripts.pory"
	.string "I promise!\p"
# 366 "data/maps/Route1/scripts.pory"
	.string "I'll see you around. It was nice\n" 
# 367 "data/maps/Route1/scripts.pory"
	.string "meeting you!\p"
# 368 "data/maps/Route1/scripts.pory"
	.string "Don't expect me to be any weaker next\n"
# 369 "data/maps/Route1/scripts.pory"
	.string "time!$"
# 370 "data/maps/Route1/scripts.pory"

# 371 "data/maps/Route1/scripts.pory"
Route1_Text_MattAfterBattle:
# 372 "data/maps/Route1/scripts.pory"
	.string "Matt: Oh, wow...\p"
# 373 "data/maps/Route1/scripts.pory"
	.string "That was...\p"
# 374 "data/maps/Route1/scripts.pory"
	.string "INCREDIBLE!\p"
# 375 "data/maps/Route1/scripts.pory"
	.string "You absolutely crushed me, ha ha!\p"
# 376 "data/maps/Route1/scripts.pory"
	.string "Thanks for that battle, {PLAYER}!\p"
# 377 "data/maps/Route1/scripts.pory"
	.string "I'm going to go heal my Pokémon now,\n"
# 378 "data/maps/Route1/scripts.pory"
	.string "and then I'm going to train.\p"
# 379 "data/maps/Route1/scripts.pory"
	.string "Y'know, so our next battle is a little\n"
# 380 "data/maps/Route1/scripts.pory"
	.string "closer.\p"
# 381 "data/maps/Route1/scripts.pory"
	.string "Matt: Take care, {PLAYER}.\p"
# 382 "data/maps/Route1/scripts.pory"
	.string "Our next battle will be much better,\n"
# 383 "data/maps/Route1/scripts.pory"
	.string "I promise!\p"
# 384 "data/maps/Route1/scripts.pory"
	.string "I'll see you around. It was nice\n" 
# 385 "data/maps/Route1/scripts.pory"
	.string "meeting you!\p"
# 386 "data/maps/Route1/scripts.pory"
	.string "Don't expect me to be any weaker next\n"
# 387 "data/maps/Route1/scripts.pory"
	.string "time!$"
# 388 "data/maps/Route1/scripts.pory"

# 389 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalGoesToPlayer:
# 390 "data/maps/Route1/scripts.pory"
	walk_right
# 391 "data/maps/Route1/scripts.pory"
	walk_right
# 392 "data/maps/Route1/scripts.pory"
	walk_right
# 393 "data/maps/Route1/scripts.pory"
	walk_right
# 394 "data/maps/Route1/scripts.pory"
	walk_right
# 395 "data/maps/Route1/scripts.pory"
	walk_right
# 396 "data/maps/Route1/scripts.pory"
	walk_right
# 397 "data/maps/Route1/scripts.pory"
	walk_right
# 398 "data/maps/Route1/scripts.pory"
	walk_right	
# 399 "data/maps/Route1/scripts.pory"
	step_end
# 400 "data/maps/Route1/scripts.pory"

# 401 "data/maps/Route1/scripts.pory"
Route1_Movement_WalkLeft:
# 402 "data/maps/Route1/scripts.pory"
	walk_left	
# 403 "data/maps/Route1/scripts.pory"
	step_end
# 404 "data/maps/Route1/scripts.pory"

# 405 "data/maps/Route1/scripts.pory"
Route1_Movement_WalkRight:
# 406 "data/maps/Route1/scripts.pory"
	walk_right	
# 407 "data/maps/Route1/scripts.pory"
	step_end
# 408 "data/maps/Route1/scripts.pory"

# 409 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalLeavesTriggerOneTwo:
# 410 "data/maps/Route1/scripts.pory"
	walk_down
# 411 "data/maps/Route1/scripts.pory"
	walk_right
# 412 "data/maps/Route1/scripts.pory"
	walk_right
# 413 "data/maps/Route1/scripts.pory"
	walk_right
# 414 "data/maps/Route1/scripts.pory"
	walk_right
# 415 "data/maps/Route1/scripts.pory"
	walk_right
# 416 "data/maps/Route1/scripts.pory"
	walk_right
# 417 "data/maps/Route1/scripts.pory"
	walk_right
# 418 "data/maps/Route1/scripts.pory"
	walk_right
# 419 "data/maps/Route1/scripts.pory"
	walk_right	
# 420 "data/maps/Route1/scripts.pory"
	step_end
# 421 "data/maps/Route1/scripts.pory"

# 422 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalLeavesTriggerThreeFour:
# 423 "data/maps/Route1/scripts.pory"
	walk_up
# 424 "data/maps/Route1/scripts.pory"
	walk_right
# 425 "data/maps/Route1/scripts.pory"
	walk_right
# 426 "data/maps/Route1/scripts.pory"
	walk_right
# 427 "data/maps/Route1/scripts.pory"
	walk_right
# 428 "data/maps/Route1/scripts.pory"
	walk_right
# 429 "data/maps/Route1/scripts.pory"
	walk_right
# 430 "data/maps/Route1/scripts.pory"
	walk_right
# 431 "data/maps/Route1/scripts.pory"
	walk_right
# 432 "data/maps/Route1/scripts.pory"
	walk_right	
# 433 "data/maps/Route1/scripts.pory"
	step_end
