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
Route1_EventScript_HomelessMan::
# 31 "data/maps/Route1/scripts.pory"
	lock
# 32 "data/maps/Route1/scripts.pory"
	faceplayer
# 33 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessScriptQuestion, MSGBOX_YESNO
# 34 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, 1
# 35 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_HomelessAnsweredYes
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessAnsweredNo, MSGBOX_DEFAULT
# 37 "data/maps/Route1/scripts.pory"
	release
# 38 "data/maps/Route1/scripts.pory"
	end
# 39 "data/maps/Route1/scripts.pory"

# 40 "data/maps/Route1/scripts.pory"
Route1_EventScript_HomelessAnsweredYes::
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HomelessAnsweredYes, MSGBOX_DEFAULT
# 42 "data/maps/Route1/scripts.pory"
	release
# 43 "data/maps/Route1/scripts.pory"
	end
# 44 "data/maps/Route1/scripts.pory"

# 45 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger1::
# 46 "data/maps/Route1/scripts.pory"
	lockall
# 47 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 1
# 48 "data/maps/Route1/scripts.pory"
	checkplayergender
# 49 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 50 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 51 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 52 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 53 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 12
# 54 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 55 "data/maps/Route1/scripts.pory"
	end
# 56 "data/maps/Route1/scripts.pory"

# 57 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger2::
# 58 "data/maps/Route1/scripts.pory"
	lockall
# 59 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 2
# 60 "data/maps/Route1/scripts.pory"
	checkplayergender
# 61 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 62 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 63 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 64 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 65 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 13
# 66 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 67 "data/maps/Route1/scripts.pory"
	end
# 68 "data/maps/Route1/scripts.pory"

# 69 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger3::
# 70 "data/maps/Route1/scripts.pory"
	lockall
# 71 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 3
# 72 "data/maps/Route1/scripts.pory"
	checkplayergender
# 73 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 74 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 75 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 76 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 77 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 14
# 78 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 79 "data/maps/Route1/scripts.pory"
	end
# 80 "data/maps/Route1/scripts.pory"

# 81 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendTrigger4::
# 82 "data/maps/Route1/scripts.pory"
	lockall
# 83 "data/maps/Route1/scripts.pory"
	setvar VAR_GENERAL 4
# 84 "data/maps/Route1/scripts.pory"
	checkplayergender
# 85 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 86 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_TianaSetUp
# 87 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 88 "data/maps/Route1/scripts.pory"
	call_if_eq Route1_EventScript_MattSetUp
# 89 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_NICERIVAL, 46, 15
# 90 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FriendRival
# 91 "data/maps/Route1/scripts.pory"
	end
# 92 "data/maps/Route1/scripts.pory"

# 93 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaSetUp::
# 94 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 95 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 96 "data/maps/Route1/scripts.pory"
	return
# 97 "data/maps/Route1/scripts.pory"

# 98 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattSetUp::
# 99 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 100 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 101 "data/maps/Route1/scripts.pory"
	return
# 102 "data/maps/Route1/scripts.pory"

# 103 "data/maps/Route1/scripts.pory"
Route1_EventScript_FriendRival::
# 104 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HoldUp, MSGBOX_DEFAULT
# 105 "data/maps/Route1/scripts.pory"
	closemessage
# 106 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 107 "data/maps/Route1/scripts.pory"
	checkplayergender
# 108 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
# 109 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_TianaRival
# 110 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FEMALE
# 111 "data/maps/Route1/scripts.pory"
	goto_if_eq Route1_EventScript_MattRival
# 112 "data/maps/Route1/scripts.pory"
	end
# 113 "data/maps/Route1/scripts.pory"

# 114 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaRival::
# 115 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 116 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 117 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 118 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalGoesToPlayer
# 119 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 120 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaIntro, MSGBOX_DEFAULT
# 121 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceLeft
# 122 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 123 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ThanksForWaiting, MSGBOX_DEFAULT
# 124 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceRight
# 125 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 126 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaIntroTwo, MSGBOX_DEFAULT
# 127 "data/maps/Route1/scripts.pory"
	closemessage
# 128 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkLeft
# 129 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AlwaysWantedToSayThis, MSGBOX_DEFAULT
# 131 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkRight
# 132 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaChallenge, MSGBOX_DEFAULT
# 134 "data/maps/Route1/scripts.pory"
	closemessage
# 135 "data/maps/Route1/scripts.pory"
	switch VAR_STARTER_MON
# 136 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_StartTianaBattleSubstee
# 137 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_StartTianaBattleParopeat
# 138 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_StartTianaBattlePrimatio
# 139 "data/maps/Route1/scripts.pory"
	end
# 140 "data/maps/Route1/scripts.pory"

# 141 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattRival::
# 142 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 143 "data/maps/Route1/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 144 "data/maps/Route1/scripts.pory"
	addobject LOCALID_NICERIVAL
# 145 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalGoesToPlayer
# 146 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 147 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattIntro, MSGBOX_DEFAULT
# 148 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceLeft
# 149 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 150 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ThanksForWaiting, MSGBOX_DEFAULT
# 151 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Common_Movement_FaceRight
# 152 "data/maps/Route1/scripts.pory"
	waitmovement 0 
# 153 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattIntroTwo, MSGBOX_DEFAULT
# 154 "data/maps/Route1/scripts.pory"
	closemessage
# 155 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkLeft
# 156 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AlwaysWantedToSayThis, MSGBOX_DEFAULT
# 158 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_WalkRight
# 159 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattChallenge, MSGBOX_DEFAULT
# 161 "data/maps/Route1/scripts.pory"
	closemessage
# 162 "data/maps/Route1/scripts.pory"
	switch VAR_STARTER_MON
# 163 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_StartMattBattleSubstee
# 164 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_StartMattBattleParopeat
# 165 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_StartMattBattlePrimatio
# 166 "data/maps/Route1/scripts.pory"
	end
# 167 "data/maps/Route1/scripts.pory"

# 168 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattleSubstee::
# 169 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_SUBSTEE, Route1_Text_RivalDefeated
# 170 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 171 "data/maps/Route1/scripts.pory"
	end
# 172 "data/maps/Route1/scripts.pory"

# 173 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattleParopeat::
# 174 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_PAROPEAT, Route1_Text_RivalDefeated
# 175 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 176 "data/maps/Route1/scripts.pory"
	end
# 177 "data/maps/Route1/scripts.pory"

# 178 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartTianaBattlePrimatio::
# 179 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_TIANA_ROUTE_1_PRIMATIO, Route1_Text_RivalDefeated
# 180 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_TianaAfterBattle
# 181 "data/maps/Route1/scripts.pory"
	end
# 182 "data/maps/Route1/scripts.pory"

# 183 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattleSubstee::
# 184 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_SUBSTEE, Route1_Text_RivalDefeated
# 185 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 186 "data/maps/Route1/scripts.pory"
	end
# 187 "data/maps/Route1/scripts.pory"

# 188 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattleParopeat::
# 189 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_PAROPEAT, Route1_Text_RivalDefeated
# 190 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 191 "data/maps/Route1/scripts.pory"
	end
# 192 "data/maps/Route1/scripts.pory"

# 193 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartMattBattlePrimatio::
# 194 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_ROUTE_1_PRIMATIO, Route1_Text_RivalDefeated
# 195 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_MattAfterBattle
# 196 "data/maps/Route1/scripts.pory"
	end
# 197 "data/maps/Route1/scripts.pory"

# 198 "data/maps/Route1/scripts.pory"
Route1_EventScript_TianaAfterBattle::
# 199 "data/maps/Route1/scripts.pory"
	setvar VAR_NICE_RIVAL_STATE 1
# 200 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaAfterBattle, MSGBOX_DEFAULT
# 201 "data/maps/Route1/scripts.pory"
	closemessage
# 202 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 203 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 2
# 204 "data/maps/Route1/scripts.pory"
	goto_if_le Route1_EventScript_RivalExitTriggerOneTwo
# 205 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 3
# 206 "data/maps/Route1/scripts.pory"
	goto_if_ge Route1_EventScript_RivalExitTriggerThreeFour
# 207 "data/maps/Route1/scripts.pory"
	end
# 208 "data/maps/Route1/scripts.pory"

# 209 "data/maps/Route1/scripts.pory"
Route1_EventScript_MattAfterBattle::
# 210 "data/maps/Route1/scripts.pory"
	setvar VAR_NICE_RIVAL_STATE 1
# 211 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_MattAfterBattle, MSGBOX_DEFAULT
# 212 "data/maps/Route1/scripts.pory"
	closemessage
# 213 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 214 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 2
# 215 "data/maps/Route1/scripts.pory"
	goto_if_le Route1_EventScript_RivalExitTriggerOneTwo
# 216 "data/maps/Route1/scripts.pory"
	compare VAR_GENERAL 3
# 217 "data/maps/Route1/scripts.pory"
	goto_if_ge Route1_EventScript_RivalExitTriggerThreeFour
# 218 "data/maps/Route1/scripts.pory"
	end
# 219 "data/maps/Route1/scripts.pory"

# 220 "data/maps/Route1/scripts.pory"
Route1_EventScript_RivalExitTriggerOneTwo::
# 221 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalLeavesTriggerOneTwo
# 222 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 224 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_NICERIVAL
# 225 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_1
# 226 "data/maps/Route1/scripts.pory"
	releaseall
# 227 "data/maps/Route1/scripts.pory"
	end
# 228 "data/maps/Route1/scripts.pory"

# 229 "data/maps/Route1/scripts.pory"
Route1_EventScript_RivalExitTriggerThreeFour::
# 230 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_NICERIVAL, Route1_Movement_RivalLeavesTriggerThreeFour
# 231 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 233 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_NICERIVAL
# 234 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_1
# 235 "data/maps/Route1/scripts.pory"
	releaseall
# 236 "data/maps/Route1/scripts.pory"
	end
# 237 "data/maps/Route1/scripts.pory"

# 238 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessScriptQuestion:
# 239 "data/maps/Route1/scripts.pory"
	.string "Damn kids. All they want to be nowadays\n"
# 240 "data/maps/Route1/scripts.pory"
	.string "are Pokémon masters. Say, are you\l"
# 241 "data/maps/Route1/scripts.pory"
	.string "trying to become a Pokémon master?$"
# 242 "data/maps/Route1/scripts.pory"

# 243 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessAnsweredYes:
# 244 "data/maps/Route1/scripts.pory"
	.string "Stupid kid! You do realize that\n"
# 245 "data/maps/Route1/scripts.pory"
	.string "not even 1% of Pokémon trainers make it\l"
# 246 "data/maps/Route1/scripts.pory"
	.string "to the league!?\p"
# 247 "data/maps/Route1/scripts.pory"
	.string "It's called survivorship bias.\n" 
# 248 "data/maps/Route1/scripts.pory"
	.string "Look it up, moron.$"
# 249 "data/maps/Route1/scripts.pory"

# 250 "data/maps/Route1/scripts.pory"
Route1_Text_HomelessAnsweredNo:
# 251 "data/maps/Route1/scripts.pory"
	.string "Good, very good.\p" 
# 252 "data/maps/Route1/scripts.pory"
	.string "Don't be like me, kid.\n"
# 253 "data/maps/Route1/scripts.pory"
	.string "Get an education and a real job.$"
# 254 "data/maps/Route1/scripts.pory"

# 255 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSignHomege:
# 256 "data/maps/Route1/scripts.pory"
	.string "ROUTE 1\n"
# 257 "data/maps/Route1/scripts.pory"
	.string "{LEFT_ARROW} HOMEGE TOWN$"
# 258 "data/maps/Route1/scripts.pory"

# 259 "data/maps/Route1/scripts.pory"
Route1_Text_TallGrassKid:
# 260 "data/maps/Route1/scripts.pory"
	.string "Mama and Papa said not to wander into\n"
# 261 "data/maps/Route1/scripts.pory"
	.string "the tall grass.\p"
# 262 "data/maps/Route1/scripts.pory"
	.string "I'm not old enough to have a Pokémon\n"
# 263 "data/maps/Route1/scripts.pory"
	.string "yet.$"
# 264 "data/maps/Route1/scripts.pory"

# 265 "data/maps/Route1/scripts.pory"
Route1_Text_HoldUp:
# 266 "data/maps/Route1/scripts.pory"
	.string "???: Hey, hold up!$"
# 267 "data/maps/Route1/scripts.pory"

# 268 "data/maps/Route1/scripts.pory"
Route1_Text_TianaIntro:
# 269 "data/maps/Route1/scripts.pory"
	.string "???: Oh, hey!\p"
# 270 "data/maps/Route1/scripts.pory"
	.string "You're {PLAYER}, right?\n"
# 271 "data/maps/Route1/scripts.pory"
	.string "Professor Sequoia told me about ya.\p"
# 272 "data/maps/Route1/scripts.pory"
	.string "I live right around the corner in\n"
# 273 "data/maps/Route1/scripts.pory"
	.string "Icovale.\p"
# 274 "data/maps/Route1/scripts.pory"
	.string "I'm Tiana by the way.\n"
# 275 "data/maps/Route1/scripts.pory"
	.string "Pleasure to meet you!\p"
# 276 "data/maps/Route1/scripts.pory"
	.string "Tiana: I'm guessing you just received\n"
# 277 "data/maps/Route1/scripts.pory"
	.string "your starter?\p"
# 278 "data/maps/Route1/scripts.pory"
	.string "There was only 1 left in the lab when\n"
# 279 "data/maps/Route1/scripts.pory"
	.string "I came over, so I didn't have many\l"
# 280 "data/maps/Route1/scripts.pory"
	.string "options.$"
# 281 "data/maps/Route1/scripts.pory"

# 282 "data/maps/Route1/scripts.pory"
Route1_Text_MattIntro:
# 283 "data/maps/Route1/scripts.pory"
	.string "???: Oh, hey!\p"
# 284 "data/maps/Route1/scripts.pory"
	.string "You're {PLAYER}, right?\n"
# 285 "data/maps/Route1/scripts.pory"
	.string "Professor Sequoia told me about ya.\p"
# 286 "data/maps/Route1/scripts.pory"
	.string "I live right around the corner in\n"
# 287 "data/maps/Route1/scripts.pory"
	.string "Icovale.\p"
# 288 "data/maps/Route1/scripts.pory"
	.string "I'm Matt by the way.\n"
# 289 "data/maps/Route1/scripts.pory"
	.string "Pleasure to meet you!\p"
# 290 "data/maps/Route1/scripts.pory"
	.string "Matt: I'm guessing you just received\n"
# 291 "data/maps/Route1/scripts.pory"
	.string "your starter?\p"
# 292 "data/maps/Route1/scripts.pory"
	.string "There was only 1 left in the lab when\n"
# 293 "data/maps/Route1/scripts.pory"
	.string "I came over, so I didn't have many\l"
# 294 "data/maps/Route1/scripts.pory"
	.string "options.$"
# 295 "data/maps/Route1/scripts.pory"

# 296 "data/maps/Route1/scripts.pory"
Route1_Text_ThanksForWaiting:
# 297 "data/maps/Route1/scripts.pory"
	.string "Thanks for waiting for me...$"
# 298 "data/maps/Route1/scripts.pory"

# 299 "data/maps/Route1/scripts.pory"
Route1_Text_TianaIntroTwo:
# 300 "data/maps/Route1/scripts.pory"
	.string "Tiana: Ha ha!\n"
# 301 "data/maps/Route1/scripts.pory"
	.string "I'm only teasing!\p"
# 302 "data/maps/Route1/scripts.pory"
	.string "Say, I did want to ask you something.\p"
# 303 "data/maps/Route1/scripts.pory"
	.string "I overheard some guy screaming outside\n" 
# 304 "data/maps/Route1/scripts.pory"
	.string "my house about how he's apparently\l" 
# 305 "data/maps/Route1/scripts.pory"
	.string "going to be the champion soon.\p"
# 306 "data/maps/Route1/scripts.pory"
	.string "You wouldn't happen to know anything\n"
# 307 "data/maps/Route1/scripts.pory"
	.string "about that, would you?\p"
# 308 "data/maps/Route1/scripts.pory"
	.string "...\p"
# 309 "data/maps/Route1/scripts.pory"
	.string "Ah, never mind.\p"
# 310 "data/maps/Route1/scripts.pory"
	.string "It's not really important.\p"
# 311 "data/maps/Route1/scripts.pory"
	.string "Anyways, since we both got our starters…\n"
# 312 "data/maps/Route1/scripts.pory"
	.string "How ‘bout a battle?\p"
# 313 "data/maps/Route1/scripts.pory"
	.string "It's the least you could do for making\n"
# 314 "data/maps/Route1/scripts.pory"
	.string "me pick last after all.$"
# 315 "data/maps/Route1/scripts.pory"

# 316 "data/maps/Route1/scripts.pory"
Route1_Text_MattIntroTwo:
# 317 "data/maps/Route1/scripts.pory"
	.string "Matt: Ha ha!\n"
# 318 "data/maps/Route1/scripts.pory"
	.string "I'm only teasing!\p"
# 319 "data/maps/Route1/scripts.pory"
	.string "Say, I did want to ask you something.\p"
# 320 "data/maps/Route1/scripts.pory"
	.string "I overheard some guy screaming outside\n" 
# 321 "data/maps/Route1/scripts.pory"
	.string "my house about how he's apparently\l" 
# 322 "data/maps/Route1/scripts.pory"
	.string "going to be the champion soon.\p"
# 323 "data/maps/Route1/scripts.pory"
	.string "You wouldn't happen to know anything\n"
# 324 "data/maps/Route1/scripts.pory"
	.string "about that, would you?\p"
# 325 "data/maps/Route1/scripts.pory"
	.string "...\p"
# 326 "data/maps/Route1/scripts.pory"
	.string "Ah, never mind.\p"
# 327 "data/maps/Route1/scripts.pory"
	.string "It's not really important.\p"
# 328 "data/maps/Route1/scripts.pory"
	.string "Anyways, since we both got our starters…\n"
# 329 "data/maps/Route1/scripts.pory"
	.string "How ‘bout a battle?\p"
# 330 "data/maps/Route1/scripts.pory"
	.string "It's the least you could do for making\n"
# 331 "data/maps/Route1/scripts.pory"
	.string "me pick last after all.$"
# 332 "data/maps/Route1/scripts.pory"

# 333 "data/maps/Route1/scripts.pory"
Route1_Text_AlwaysWantedToSayThis:
# 334 "data/maps/Route1/scripts.pory"
	.string "Ooh, I've waited my entire life to\n"
# 335 "data/maps/Route1/scripts.pory"
	.string "say this!$"
# 336 "data/maps/Route1/scripts.pory"

# 337 "data/maps/Route1/scripts.pory"
Route1_Text_TianaChallenge:
# 338 "data/maps/Route1/scripts.pory"
	.string "Tiana: {PLAYER}!\p"
# 339 "data/maps/Route1/scripts.pory"
	.string "I challenge you to a battle!$"
# 340 "data/maps/Route1/scripts.pory"

# 341 "data/maps/Route1/scripts.pory"
Route1_Text_MattChallenge:
# 342 "data/maps/Route1/scripts.pory"
	.string "Matt: {PLAYER}!\p"
# 343 "data/maps/Route1/scripts.pory"
	.string "I challenge you to a battle!$"
# 344 "data/maps/Route1/scripts.pory"

# 345 "data/maps/Route1/scripts.pory"
Route1_Text_RivalDefeated:
# 346 "data/maps/Route1/scripts.pory"
	.string "Huh?$"
# 347 "data/maps/Route1/scripts.pory"

# 348 "data/maps/Route1/scripts.pory"
Route1_Text_TianaAfterBattle:
# 349 "data/maps/Route1/scripts.pory"
	.string "Tiana: Oh, wow...\p"
# 350 "data/maps/Route1/scripts.pory"
	.string "That was...\p"
# 351 "data/maps/Route1/scripts.pory"
	.string "INCREDIBLE!\p"
# 352 "data/maps/Route1/scripts.pory"
	.string "You absolutely crushed me, ha ha!\p"
# 353 "data/maps/Route1/scripts.pory"
	.string "Thanks for that battle, {PLAYER}!\p"
# 354 "data/maps/Route1/scripts.pory"
	.string "I'm going to go heal my Pokémon now,\n"
# 355 "data/maps/Route1/scripts.pory"
	.string "and then I'm going to train.\p"
# 356 "data/maps/Route1/scripts.pory"
	.string "Y'know, so our next battle is a little\n"
# 357 "data/maps/Route1/scripts.pory"
	.string "closer.\p"
# 358 "data/maps/Route1/scripts.pory"
	.string "Tiana: Take care, {PLAYER}.\p"
# 359 "data/maps/Route1/scripts.pory"
	.string "Our next battle will be much better,\n"
# 360 "data/maps/Route1/scripts.pory"
	.string "I promise!\p"
# 361 "data/maps/Route1/scripts.pory"
	.string "I'll see you around. It was nice\n" 
# 362 "data/maps/Route1/scripts.pory"
	.string "meeting you!\p"
# 363 "data/maps/Route1/scripts.pory"
	.string "Don't expect me to be any weaker next\n"
# 364 "data/maps/Route1/scripts.pory"
	.string "time!$"
# 365 "data/maps/Route1/scripts.pory"

# 366 "data/maps/Route1/scripts.pory"
Route1_Text_MattAfterBattle:
# 367 "data/maps/Route1/scripts.pory"
	.string "Matt: Oh, wow...\p"
# 368 "data/maps/Route1/scripts.pory"
	.string "That was...\p"
# 369 "data/maps/Route1/scripts.pory"
	.string "INCREDIBLE!\p"
# 370 "data/maps/Route1/scripts.pory"
	.string "You absolutely crushed me, ha ha!\p"
# 371 "data/maps/Route1/scripts.pory"
	.string "Thanks for that battle, {PLAYER}!\p"
# 372 "data/maps/Route1/scripts.pory"
	.string "I'm going to go heal my Pokémon now,\n"
# 373 "data/maps/Route1/scripts.pory"
	.string "and then I'm going to train.\p"
# 374 "data/maps/Route1/scripts.pory"
	.string "Y'know, so our next battle is a little\n"
# 375 "data/maps/Route1/scripts.pory"
	.string "closer.\p"
# 376 "data/maps/Route1/scripts.pory"
	.string "Matt: Take care, {PLAYER}.\p"
# 377 "data/maps/Route1/scripts.pory"
	.string "Our next battle will be much better,\n"
# 378 "data/maps/Route1/scripts.pory"
	.string "I promise!\p"
# 379 "data/maps/Route1/scripts.pory"
	.string "I'll see you around. It was nice\n" 
# 380 "data/maps/Route1/scripts.pory"
	.string "meeting you!\p"
# 381 "data/maps/Route1/scripts.pory"
	.string "Don't expect me to be any weaker next\n"
# 382 "data/maps/Route1/scripts.pory"
	.string "time!$"
# 383 "data/maps/Route1/scripts.pory"

# 384 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalGoesToPlayer:
# 385 "data/maps/Route1/scripts.pory"
	walk_right
# 386 "data/maps/Route1/scripts.pory"
	walk_right
# 387 "data/maps/Route1/scripts.pory"
	walk_right
# 388 "data/maps/Route1/scripts.pory"
	walk_right
# 389 "data/maps/Route1/scripts.pory"
	walk_right
# 390 "data/maps/Route1/scripts.pory"
	walk_right
# 391 "data/maps/Route1/scripts.pory"
	walk_right
# 392 "data/maps/Route1/scripts.pory"
	walk_right
# 393 "data/maps/Route1/scripts.pory"
	walk_right	
# 394 "data/maps/Route1/scripts.pory"
	step_end
# 395 "data/maps/Route1/scripts.pory"

# 396 "data/maps/Route1/scripts.pory"
Route1_Movement_WalkLeft:
# 397 "data/maps/Route1/scripts.pory"
	walk_left	
# 398 "data/maps/Route1/scripts.pory"
	step_end
# 399 "data/maps/Route1/scripts.pory"

# 400 "data/maps/Route1/scripts.pory"
Route1_Movement_WalkRight:
# 401 "data/maps/Route1/scripts.pory"
	walk_right	
# 402 "data/maps/Route1/scripts.pory"
	step_end
# 403 "data/maps/Route1/scripts.pory"

# 404 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalLeavesTriggerOneTwo:
# 405 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_right
# 407 "data/maps/Route1/scripts.pory"
	walk_right
# 408 "data/maps/Route1/scripts.pory"
	walk_right
# 409 "data/maps/Route1/scripts.pory"
	walk_right
# 410 "data/maps/Route1/scripts.pory"
	walk_right
# 411 "data/maps/Route1/scripts.pory"
	walk_right
# 412 "data/maps/Route1/scripts.pory"
	walk_right
# 413 "data/maps/Route1/scripts.pory"
	walk_right
# 414 "data/maps/Route1/scripts.pory"
	walk_right	
# 415 "data/maps/Route1/scripts.pory"
	step_end
# 416 "data/maps/Route1/scripts.pory"

# 417 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalLeavesTriggerThreeFour:
# 418 "data/maps/Route1/scripts.pory"
	walk_up
# 419 "data/maps/Route1/scripts.pory"
	walk_right
# 420 "data/maps/Route1/scripts.pory"
	walk_right
# 421 "data/maps/Route1/scripts.pory"
	walk_right
# 422 "data/maps/Route1/scripts.pory"
	walk_right
# 423 "data/maps/Route1/scripts.pory"
	walk_right
# 424 "data/maps/Route1/scripts.pory"
	walk_right
# 425 "data/maps/Route1/scripts.pory"
	walk_right
# 426 "data/maps/Route1/scripts.pory"
	walk_right
# 427 "data/maps/Route1/scripts.pory"
	walk_right	
# 428 "data/maps/Route1/scripts.pory"
	step_end
