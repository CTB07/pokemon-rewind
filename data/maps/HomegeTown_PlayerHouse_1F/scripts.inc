# 1 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 2 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 4 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_MapScripts::
# 5 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HomegeTown_PlayerHouse_1F_OnTransition
# 6 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HomegeTown_PlayerHouse_1F_OnFrame
# 7 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.byte 0
# 8 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 9 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_OnFrame:
# 10 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_HOMEGE_INTRO_STATE, 5, HomegeTown_PlayerHouse_1F_EventScript_MomReactsStarter
# 11 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.2byte 0
# 12 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 13 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_OnTransition: 
# 14 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 15 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 16 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIsOutside::
# 17 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_MOM
# 18 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 19 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 20 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger0::
# 21 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 22 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroLeftTrigger
# 23 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 24 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 25 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger1::
# 26 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 27 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroMidTrigger
# 28 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 29 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 30 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger2::
# 31 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 32 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroRightTrigger
# 33 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 34 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 35 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroLeftTrigger::
# 36 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 37 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 38 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 39 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 40 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 41 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom
# 42 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerLeft
# 43 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 45 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 46 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 47 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackLeft
# 48 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 49 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 50 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 51 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 52 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroMidTrigger::
# 53 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 54 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 55 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 56 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 57 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 58 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerMid
# 59 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 61 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 62 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 63 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackMid
# 64 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 66 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 67 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 68 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroRightTrigger::
# 69 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 70 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 71 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 72 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 73 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 74 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom
# 75 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerRight
# 76 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 78 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 79 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 80 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackRight
# 81 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 82 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 83 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 84 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 85 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes:: 
# 86 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomGivesRunningShoes, MSGBOX_DEFAULT
# 87 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	message HomegeTown_PlayerHouse_1F_Text_SwitchShoesWithRunningShoes
# 89 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 90 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 91 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 92 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 2
# 93 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 94 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 95 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 96 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 97 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 98 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 99 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomReactsStarter::
# 100 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 101 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 102 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 103 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_BackAlready, MSGBOX_DEFAULT
# 105 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 106 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToEntrance
# 107 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_EatSomething, MSGBOX_DEFAULT
# 109 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 110 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_HEAL
# 112 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 6
# 115 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setobjectxy LOCALID_MOM, 0, 3
# 116 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 117 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceUp
# 118 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	special SpawnCameraObject
# 119 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HomegeTown_PlayerHouse_1F_Movement_CameraMovementFromEntrance
# 120 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 121 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 123 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 124 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 125 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomKitchenToTable
# 126 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_HereYouGo, MSGBOX_DEFAULT
# 128 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 129 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomKitchenEnd
# 130 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 131 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 132 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_TellMeAbout, MSGBOX_DEFAULT
# 133 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 134 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 135 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	switch VAR_STARTER_MON
# 136 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	case 0, HomegeTown_PlayerHouse_1F_EventScript_MomParopeat
# 137 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	case 1, HomegeTown_PlayerHouse_1F_EventScript_MomPrimatio
# 138 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	case 2, HomegeTown_PlayerHouse_1F_EventScript_MomSubstee
# 139 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 140 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 141 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomBattleChat::
# 142 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomBattleWithRival, MSGBOX_DEFAULT
# 143 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 144 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 145 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 146 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 147 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 148 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 149 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomFunIdea, MSGBOX_DEFAULT
# 150 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 151 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomGoesOutside
# 152 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	removeobject LOCALID_MOM
# 154 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playse SE_EXIT
# 155 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 6
# 156 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_HIDE_MOM
# 157 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 158 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 159 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 160 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomParopeat::
# 161 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomParopeat, MSGBOX_DEFAULT
# 162 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 163 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	goto HomegeTown_PlayerHouse_1F_EventScript_MomBattleChat
# 164 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 165 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 166 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomPrimatio::
# 167 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomPrimatio, MSGBOX_DEFAULT
# 168 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 169 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	goto HomegeTown_PlayerHouse_1F_EventScript_MomBattleChat
# 170 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 171 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 172 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomSubstee::
# 173 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomSubstee, MSGBOX_DEFAULT
# 174 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 175 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	goto HomegeTown_PlayerHouse_1F_EventScript_MomBattleChat
# 176 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 177 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 178 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer:
# 179 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_right
# 180 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
# 181 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 182 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 183 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom:
# 184 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_down
# 185 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 186 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 187 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerLeft:
# 188 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 189 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 190 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 191 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 192 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 193 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 194 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerMid:
# 195 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 196 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 197 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 198 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 199 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 200 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 201 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToEntrance:
# 202 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 203 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 204 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 205 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 206 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 207 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 208 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerRight:
# 209 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 210 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 211 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 212 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 213 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 214 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 215 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 216 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 217 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackLeft:
# 218 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 219 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 220 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 222 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 223 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 224 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackMid:
# 225 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 226 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 227 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 228 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 229 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 230 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 231 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackRight:
# 232 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 233 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 234 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 235 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 236 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 237 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 239 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomKitchenToTable:
# 240 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 241 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 242 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 243 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 244 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 245 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_up
# 246 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 247 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 248 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 249 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_up
# 250 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 251 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 252 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay_16
# 253 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 254 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 255 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 256 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 257 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 258 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_down
# 259 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 260 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 261 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomKitchenEnd:
# 262 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 263 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 264 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 265 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_left
# 266 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 267 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 268 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_CameraMovementFromEntrance:
# 269 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
 	walk_faster_up
# 270 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_up
# 271 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 272 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 273 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 274 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 275 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 276 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_faster_left
# 277 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 279 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomGoesOutside:
# 280 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 281 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 282 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 283 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 284 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 285 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 286 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 287 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomIntro1:
# 288 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Ah, {PLAYER}! You're finally awake.$"
# 289 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 290 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomIntro2:
# 291 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "You must have been up late last night!\n"
# 292 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Your friend, {RIVAL}, came by looking for\l"
# 293 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "you, but I told him you were still\l"
# 294 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "sleeping.$"
# 295 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 296 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomGivesRunningShoes:
# 297 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Oh, I almost forgot. Before you\n"
# 298 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "head out, I wanted to give you these\l"
# 299 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES!$"
# 300 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 301 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_SwitchShoesWithRunningShoes:
# 302 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 303 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES.$"
# 304 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 305 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_ExplainRunningShoes:
# 306 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, those shoes came with\n"
# 307 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "instructions.\p"
# 308 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 309 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 310 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "…\p"
# 311 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I'm not really sure what a “B Button”\n"
# 312 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "is, but I'm sure you'll figure it out!$"
# 313 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 314 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_ComeHomeIfAnythingHappens:
# 315 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Don't forget that Prof. Sequoia is\n"
# 316 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "waiting for you at the lab.\p"
# 317 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I can't believe you're already old\n"
# 318 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "enough to get your first Pokémon!\p"
# 319 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I'll be at home if you need anything,\n"
# 320 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}.$"
# 321 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 322 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_BackAlready:
# 323 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Oh! You're back already? That was\n"
# 324 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "quick!$"
# 325 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 326 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_EatSomething:
# 327 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: You have to tell me how it went!\p"
# 328 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Let's get you something to eat first.$"
# 329 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 330 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_HereYouGo:
# 331 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Here you go! Eat up now that\n"
# 332 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "you're rested.$"
# 333 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 334 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_TellMeAbout:
# 335 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: So…tell me about everything!\n"
# 336 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "What starter did you pick?$"
# 337 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 338 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomParopeat:
# 339 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: …\p"
# 340 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Ooh, Paropeat? Good choice!$"
# 341 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 342 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomPrimatio:
# 343 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: …\p"
# 344 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Ooh, Primatio? Good choice!$"
# 345 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 346 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomSubstee:
# 347 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: …\p"
# 348 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Ooh, Substee? Good choice!$"
# 349 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 350 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomBattleWithRival:
# 351 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: …\p"
# 352 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "You had a battle with {RIVAL}?\n"
# 353 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "How did it go?\p"
# 354 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: …\p"
# 355 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Well, sounds like it was thrilling!\n"
# 356 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I can't even remember the last time\l"
# 357 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I had a battle with someone…\p"
# 358 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: … … …$"
# 359 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 360 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomFunIdea:	
# 361 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: I have a fun idea!\p"
# 362 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Instead of telling me, why don't you\n"
# 363 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "show me what battling means to you?\p"
# 364 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Let's quickly battle in front of\n"
# 365 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "the house before you set out on\l"
# 366 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "your adventure.\p"
# 367 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: I'll be waiting for you\n"
# 368 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "outside!$"
# 369 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 370 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 371 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayersHouse_1F_EventScript_Mom::
# 372 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lock
# 373 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 374 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	goto_if_set FLAG_LAB_INTRO_SEQUENCE, PlayersHouse_1F_EventScript_MomHealsParty
# 375 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 376 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	release
# 377 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
