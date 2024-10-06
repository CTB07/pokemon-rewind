IcovaleCity_Gym_MapScripts::
# 8 "data/maps/IcovaleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, IcovaleCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

IcovaleCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/IcovaleCity_Gym/scripts.pory"
	map_script_2 VAR_ICOVALE_CITY_STATE, 4, IcovaleCity_Gym_OnWarp4
# 10 "data/maps/IcovaleCity_Gym/scripts.pory"
	map_script_2 VAR_ICOVALE_CITY_STATE, 5, IcovaleCity_Gym_OnWarp4
	.2byte 0


IcovaleCity_Gym_OnWarp4::
# 15 "data/maps/IcovaleCity_Gym/scripts.pory"
	setobjectxyperm 2, 5, 4
# 16 "data/maps/IcovaleCity_Gym/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


IcovaleCity_Gym_Guide::
# 20 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 3
	goto_if_lt IcovaleCity_Gym_Guide_2
IcovaleCity_Gym_Guide_1:
# 29 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Guide_Text_1, MSGBOX_NPC
	return

IcovaleCity_Gym_Guide_2:
# 21 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Guide_Text_0, MSGBOX_NPC
# 26 "data/maps/IcovaleCity_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 27 "data/maps/IcovaleCity_Gym/scripts.pory"
	setvar VAR_ICOVALE_CITY_STATE, 3
	goto IcovaleCity_Gym_Guide_1


IcovaleCity_Gym_ClassClown::
# 33 "data/maps/IcovaleCity_Gym/scripts.pory"
	checktrainerflag TRAINER_REWIND_SCREWBALL
	goto_if 1, IcovaleCity_Gym_ClassClown_1
# 36 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassClown_Text_1, MSGBOX_NPC
	return

IcovaleCity_Gym_ClassClown_1:
# 34 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassClown_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassSnob::
# 41 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 3
	goto_if_gt IcovaleCity_Gym_ClassSnob_1
# 45 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassSnob_Text_1, MSGBOX_NPC
	return

IcovaleCity_Gym_ClassSnob_1:
# 42 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassSnob_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassDedicatedRam::
# 50 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassDedicatedRam_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassJam::
# 54 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock
# 55 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 3
	goto_if_gt IcovaleCity_Gym_ClassJam_2
# 59 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassJam_Text_1, MSGBOX_DEFAULT
IcovaleCity_Gym_ClassJam_1:
# 61 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return

IcovaleCity_Gym_ClassJam_2:
# 56 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassJam_Text_0, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_ClassJam_1


IcovaleCity_Gym_LeaderSequoiaBattle::
# 65 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_LeaderSequoiaBattle_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_SEQUOIA, IcovaleCity_Gym_LeaderSequoiaDefeat
# 68 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_LeaderSequoiaBattle_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ReceivedCuriosityBadge
# 70 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 71 "data/maps/IcovaleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 72 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_LeaderSequoiaBattle_Text_2, MSGBOX_DEFAULT
# 76 "data/maps/IcovaleCity_Gym/scripts.pory"
	setvar VAR_ICOVALE_CITY_STATE, 5
# 77 "data/maps/IcovaleCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 78 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return


IcovaleCity_Gym_PostBattle::
# 82 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_PostBattle_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return


IcovaleCity_Gym_Sequoia::
# 87 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock
# 88 "data/maps/IcovaleCity_Gym/scripts.pory"
	faceplayer
# 89 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 4
	goto_if_gt IcovaleCity_Gym_Sequoia_2
# 91 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 4
	goto_if_eq IcovaleCity_Gym_Sequoia_3
# 93 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto_if_unset FLAG_TEMP_1, IcovaleCity_Gym_Sequoia_4
IcovaleCity_Gym_Sequoia_1:
# 97 "data/maps/IcovaleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 98 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_1, MSGBOX_YESNO
# 99 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/IcovaleCity_Gym/scripts.pory"
	case YES, IcovaleCity_Gym_Sequoia_10
# 104 "data/maps/IcovaleCity_Gym/scripts.pory"
	case NO, IcovaleCity_Gym_Sequoia_11
IcovaleCity_Gym_Sequoia_8:
# 108 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return

IcovaleCity_Gym_Sequoia_2:
# 90 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_PostBattle
	goto IcovaleCity_Gym_Sequoia_1

IcovaleCity_Gym_Sequoia_3:
# 92 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_LeaderSequoiaBattle
	goto IcovaleCity_Gym_Sequoia_1

IcovaleCity_Gym_Sequoia_4:
# 94 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_0, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_Sequoia_1

IcovaleCity_Gym_Sequoia_10:
# 101 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 103 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_ExamStart
	goto IcovaleCity_Gym_Sequoia_8

IcovaleCity_Gym_Sequoia_11:
# 105 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_3, MSGBOX_DEFAULT
# 106 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_Sequoia_8


IcovaleCity_Gym_ExamStart::
# 112 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq IcovaleCity_Gym_ExamStart_2
# 123 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_ProfMovesIntoPos
# 124 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 125 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesIntoPos2
# 126 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
IcovaleCity_Gym_ExamStart_1:
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamStart_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 130 "data/maps/IcovaleCity_Gym/scripts.pory"
	special SpawnCameraObject
# 131 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 132 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 133 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 134 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 135 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 136 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 137 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Gym_PanDown
# 138 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 139 "data/maps/IcovaleCity_Gym/scripts.pory"
	special RemoveCameraObject
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_ExamQuestion
	return

IcovaleCity_Gym_ExamStart_2:
# 113 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamStart_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 115 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesDown
# 116 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 117 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_ProfMovesIntoPos
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 119 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesIntoPos1
# 120 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	goto IcovaleCity_Gym_ExamStart_1


IcovaleCity_Gym_ExamQuestion::
# 144 "data/maps/IcovaleCity_Gym/scripts.pory"
	addvar VAR_TEMP_1, 1
# 145 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 146 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_ExamQuestion_3
# 156 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_ExamQuestion_4
# 164 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_ExamQuestion_5
# 174 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 4, IcovaleCity_Gym_ExamQuestion_6
# 184 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 5, IcovaleCity_Gym_ExamQuestion_7
# 194 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_ExamQuestion_8
# 232 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 7, IcovaleCity_Gym_ExamQuestion_9
# 242 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 8, IcovaleCity_Gym_ExamQuestion_10
# 252 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 9, IcovaleCity_Gym_ExamQuestion_11
# 262 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 10, IcovaleCity_Gym_ExamQuestion_12
IcovaleCity_Gym_ExamQuestion_1:
# 274 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq IcovaleCity_Gym_ExamQuestion_14
IcovaleCity_Gym_ExamQuestion_13:
# 277 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 278 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_48, MSGBOX_DEFAULT
# 280 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_ExamQuestion
	return

IcovaleCity_Gym_ExamQuestion_3:
# 147 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_0
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_1, IcovaleCity_Gym_ExamQuestion_Text_2, IcovaleCity_Gym_ExamQuestion_Text_3
# 149 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 150 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_17
# 154 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_4:
# 157 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_4
# 158 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_5, IcovaleCity_Gym_ExamQuestion_Text_6
# 159 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 160 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_5:
# 165 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_7
# 166 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_8, IcovaleCity_Gym_ExamQuestion_Text_9, IcovaleCity_Gym_ExamQuestion_Text_10
# 167 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 168 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 169 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_22
# 172 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_6:
# 175 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_11
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_12, IcovaleCity_Gym_ExamQuestion_Text_13, IcovaleCity_Gym_ExamQuestion_Text_14, IcovaleCity_Gym_ExamQuestion_Text_15
# 177 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 178 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_ExamQuestion_25
# 182 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_7:
# 185 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_16
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_17, IcovaleCity_Gym_ExamQuestion_Text_18, IcovaleCity_Gym_ExamQuestion_Text_19
# 187 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 188 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 189 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_28
# 192 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_8:
# 195 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_20, MSGBOX_DEFAULT
# 196 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 197 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_21
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_22, IcovaleCity_Gym_ExamQuestion_Text_23, IcovaleCity_Gym_ExamQuestion_Text_24, IcovaleCity_Gym_ExamQuestion_Text_25
# 199 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 200 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_ExamQuestion_31
# 203 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_ExamQuestion_32
# 230 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_9:
# 233 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_31
# 234 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_32, IcovaleCity_Gym_ExamQuestion_Text_33, IcovaleCity_Gym_ExamQuestion_Text_34
# 235 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 236 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_35
# 240 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_10:
# 243 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_35
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_36, IcovaleCity_Gym_ExamQuestion_Text_37, IcovaleCity_Gym_ExamQuestion_Text_38, IcovaleCity_Gym_ExamQuestion_Text_39
# 245 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 246 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 247 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_38
# 250 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_11:
# 253 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_40
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_41, IcovaleCity_Gym_ExamQuestion_Text_42, IcovaleCity_Gym_ExamQuestion_Text_43
# 255 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 256 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
# 259 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_44, MSGBOX_DEFAULT
# 260 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_12:
# 263 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_45
# 264 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_36, IcovaleCity_Gym_ExamQuestion_Text_37, IcovaleCity_Gym_ExamQuestion_Text_46
# 265 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 266 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 268 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_47, MSGBOX_DEFAULT
# 271 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_14:
# 275 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_EndExamPartOne
	goto IcovaleCity_Gym_ExamQuestion_13

IcovaleCity_Gym_ExamQuestion_17:
# 152 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_22:
# 170 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_25:
# 180 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_28:
# 190 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_31:
# 202 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_32:
# 204 "data/maps/IcovaleCity_Gym/scripts.pory"
	fadeoutbgm 1
# 205 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 206 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_26, MSGBOX_DEFAULT
# 209 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_27, MSGBOX_YESNO
# 210 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 211 "data/maps/IcovaleCity_Gym/scripts.pory"
	case NO, IcovaleCity_Gym_ExamQuestion_46
# 213 "data/maps/IcovaleCity_Gym/scripts.pory"
	case YES, IcovaleCity_Gym_ExamQuestion_47
IcovaleCity_Gym_ExamQuestion_44:
# 226 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 227 "data/maps/IcovaleCity_Gym/scripts.pory"
	fadeinbgm 1
# 228 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_35:
# 238 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_38:
# 248 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_46:
# 212 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_28, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_ExamQuestion_44

IcovaleCity_Gym_ExamQuestion_47:
# 214 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 215 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_29, MSGBOX_DEFAULT
# 216 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 217 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 218 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 219 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 220 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 221 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 222 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 223 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_30, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_ExamQuestion_44


IcovaleCity_Gym_CorrectAnswer::
# 284 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_DING_DONG
# 285 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 286 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 287 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 288 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_0, MSGBOX_DEFAULT
# 289 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 290 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_CorrectAnswer_3
# 292 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_CorrectAnswer_4
IcovaleCity_Gym_CorrectAnswer_1:
# 295 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	return

IcovaleCity_Gym_CorrectAnswer_3:
# 291 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_1, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_CorrectAnswer_1

IcovaleCity_Gym_CorrectAnswer_4:
# 293 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_2, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_CorrectAnswer_1


IcovaleCity_Gym_WrongAnswer::
# 299 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 300 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 301 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 302 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 303 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 305 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 307 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_WrongAnswer_2
# 328 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_WrongAnswer_3
# 378 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 4, IcovaleCity_Gym_WrongAnswer_4
# 448 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 5, IcovaleCity_Gym_WrongAnswer_5
# 483 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_WrongAnswer_6
# 504 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 7, IcovaleCity_Gym_WrongAnswer_7
# 554 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 8, IcovaleCity_Gym_WrongAnswer_8
	return

IcovaleCity_Gym_WrongAnswer_2:
# 308 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 310 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 311 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 312 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_2, MSGBOX_DEFAULT
# 313 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 314 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyGoes
# 315 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_3, MSGBOX_DEFAULT
# 317 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 318 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 319 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_4, MSGBOX_DEFAULT
# 320 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 321 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_RICHARD, IcovaleCity_Gym_RichardDefeat
# 322 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 323 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_5, MSGBOX_DEFAULT
# 325 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 326 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyToDesk
# 327 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_3:
# 329 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_6, MSGBOX_DEFAULT
# 330 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 331 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 332 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 333 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 334 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_8, MSGBOX_DEFAULT
# 335 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 336 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 337 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 338 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 339 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_9, MSGBOX_DEFAULT
# 340 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 341 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 342 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 343 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_10, MSGBOX_DEFAULT
# 344 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 345 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 346 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_11, MSGBOX_DEFAULT
# 348 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 349 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 350 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_12, MSGBOX_DEFAULT
# 352 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 353 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 354 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 355 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_13, MSGBOX_DEFAULT
# 356 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 357 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 358 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 359 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_14, MSGBOX_DEFAULT
# 360 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 361 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 362 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_15, MSGBOX_DEFAULT
# 364 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 365 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 366 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 367 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_16, MSGBOX_DEFAULT
# 368 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 369 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassGoes
# 370 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 371 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_CLAUDIA, IcovaleCity_Gym_ClaudiaDefeat
# 372 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 373 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 374 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_17, MSGBOX_DEFAULT
# 375 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 376 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassToDesk
# 377 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_4:
# 379 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_18, MSGBOX_DEFAULT
# 380 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 381 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 382 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 383 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_19, MSGBOX_DEFAULT
# 384 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 385 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterGoes
# 386 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 387 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_20, MSGBOX_DEFAULT
# 388 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 389 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 390 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 391 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 392 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 393 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_21, MSGBOX_DEFAULT
# 394 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 395 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 396 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 397 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_22, MSGBOX_DEFAULT
# 398 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 399 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 400 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 401 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_23, MSGBOX_DEFAULT
# 402 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 403 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 404 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 405 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_24, MSGBOX_DEFAULT
# 406 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 407 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 408 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 409 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 410 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 411 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_25, MSGBOX_DEFAULT
# 412 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 413 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 414 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 415 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_26, MSGBOX_DEFAULT
# 416 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 417 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 418 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_27, MSGBOX_DEFAULT
# 419 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 420 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 421 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 422 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 423 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 424 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_28, MSGBOX_DEFAULT
# 425 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 426 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 427 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 428 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_29, MSGBOX_DEFAULT
# 430 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 431 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 432 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 433 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_30, MSGBOX_DEFAULT
# 434 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 435 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 436 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 437 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_31, MSGBOX_DEFAULT
# 438 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 439 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 440 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 441 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_32, MSGBOX_DEFAULT
# 442 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 443 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_KAI, IcovaleCity_Gym_KaiDefeat
# 444 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_33, MSGBOX_DEFAULT
# 445 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 446 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterToDesk
# 447 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_5:
# 449 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_34, MSGBOX_DEFAULT
# 450 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 451 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 452 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 453 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_35, MSGBOX_DEFAULT
# 454 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 455 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, IcovaleCity_Gym_ClownGoes
# 456 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 457 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_36, MSGBOX_DEFAULT
# 458 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_SequoiaShocked
# 459 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_PIN
# 460 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 461 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 462 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_37, MSGBOX_DEFAULT
# 463 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 464 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 465 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 466 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_38, MSGBOX_DEFAULT
# 467 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 468 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 469 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_39, MSGBOX_DEFAULT
# 471 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 472 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 473 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_40, MSGBOX_DEFAULT
# 475 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 476 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 477 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_SCREWBALL, IcovaleCity_Gym_ScrewballDefeat
# 479 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_41, MSGBOX_DEFAULT
# 480 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 481 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, IcovaleCity_Gym_ClownToDesk
# 482 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_6:
# 484 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_1, MSGBOX_DEFAULT
# 485 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 486 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 487 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 488 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_42, MSGBOX_DEFAULT
# 489 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 490 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyGoes
# 491 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 492 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_43, MSGBOX_DEFAULT
# 493 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 494 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 495 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_44, MSGBOX_DEFAULT
# 496 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 497 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_RICHARD, IcovaleCity_Gym_RichardDefeat
# 498 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 499 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 500 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_5, MSGBOX_DEFAULT
# 501 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 502 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyToDesk
# 503 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_7:
# 505 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_6, MSGBOX_DEFAULT
# 506 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 507 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 508 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 509 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 510 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_8, MSGBOX_DEFAULT
# 511 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 512 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 513 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 514 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 515 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_9, MSGBOX_DEFAULT
# 516 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 517 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 518 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 519 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_45, MSGBOX_DEFAULT
# 520 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 521 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 522 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 523 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_46, MSGBOX_DEFAULT
# 524 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 525 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 526 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 527 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_47, MSGBOX_DEFAULT
# 528 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 529 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 530 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 531 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_48, MSGBOX_DEFAULT
# 532 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 533 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 534 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 535 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_49, MSGBOX_DEFAULT
# 536 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 537 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 538 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 539 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_15, MSGBOX_DEFAULT
# 540 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 541 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 542 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 543 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_50, MSGBOX_DEFAULT
# 544 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 545 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassGoes
# 546 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 547 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_CLAUDIA, IcovaleCity_Gym_ClaudiaDefeat
# 548 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 549 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 550 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_17, MSGBOX_DEFAULT
# 551 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 552 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassToDesk
# 553 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_8:
# 555 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_51, MSGBOX_DEFAULT
# 556 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 557 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 558 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 559 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_52, MSGBOX_DEFAULT
# 560 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 561 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterGoes
# 562 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 563 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_53, MSGBOX_DEFAULT
# 564 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 565 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 566 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 567 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 568 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_54, MSGBOX_DEFAULT
# 569 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 570 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 571 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 572 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_55, MSGBOX_DEFAULT
# 573 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 574 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 575 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 576 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_56, MSGBOX_DEFAULT
# 577 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 579 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 580 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_57, MSGBOX_DEFAULT
# 581 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 582 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 584 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_58, MSGBOX_DEFAULT
# 585 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 586 "data/maps/IcovaleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_REWIND_KAI, IcovaleCity_Gym_KaiDefeat
# 587 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_33, MSGBOX_DEFAULT
# 588 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 589 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterToDesk
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return


IcovaleCity_Gym_EndExamPartOne::
# 595 "data/maps/IcovaleCity_Gym/scripts.pory"
	special SpawnCameraObject
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Gym_PanUp
# 597 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 598 "data/maps/IcovaleCity_Gym/scripts.pory"
	special RemoveCameraObject
# 599 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_NextRoom
# 600 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 601 "data/maps/IcovaleCity_Gym/scripts.pory"
	setobjectxyperm 2, 5, 4
# 602 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 603 "data/maps/IcovaleCity_Gym/scripts.pory"
	setobjectxy 2, 5, 4
# 604 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_EXIT
# 605 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 606 "data/maps/IcovaleCity_Gym/scripts.pory"
	setvar VAR_ICOVALE_CITY_STATE, 4
# 607 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return


# 610 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesDown:
# 611 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
# 612 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock_facing_direction
# 613 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 614 "data/maps/IcovaleCity_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 617 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ProfMovesIntoPos:
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 619 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_right
	step_end

# 622 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesIntoPos1:
# 623 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 624 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 625 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_left
	step_end

# 628 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesIntoPos2:
# 629 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
	step_end

# 632 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_RichBoyGoes:
# 633 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 634 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 634 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 634 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 635 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 636 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_down
	step_end

# 639 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_RichBoyToDesk:
# 640 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 641 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 641 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 641 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 642 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 643 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 646 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_LassGoes:
# 647 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 648 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 649 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_right
	step_end

# 652 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_LassToDesk:
# 653 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 653 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 653 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 654 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 655 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 658 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_YoungsterGoes:
# 659 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 660 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 661 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_down
	step_end

# 664 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_YoungsterToDesk:
# 665 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 667 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 670 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ClownGoes:
# 671 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 672 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 673 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
	step_end

# 676 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ClownToDesk:
# 677 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 678 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 679 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 680 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 683 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PanUp:
# 684 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 684 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
	step_end

# 687 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PanDown:
# 688 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
	step_end

# 691 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_SequoiaShocked:
# 692 "data/maps/IcovaleCity_Gym/scripts.pory"
	emote_exclamation_mark
# 693 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_in_place_right
	step_end

# 696 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_NextRoom:
# 697 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 698 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 699 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 700 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 700 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 701 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 702 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 702 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 702 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 703 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 703 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
	step_end

IcovaleCity_Gym_Guide_Text_0:
# 21 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yaaaah!\n"
	.string "How's it going champ in the making?\p"
	.string "You're here to challenge Sequoia, the\n"
	.string "Gym Leader, I presume?\p"
	.string "Sequoia specializes in Psychic-type\n"
	.string "Pokémon.\p"
	.string "Listen closely, Psychic-type is\n"
	.string "especially weak to the Bug-type, so\l"
	.string "make sure you brought a few with you.\p"
	.string "Heh, I hope you knew that already.\p"
	.string "Be prepared to present your\n"
	.string "intelligence to the class.\p"
	.string "This Gym will test you on your Pokémon\n"
	.string "knowledge, trivia, and more!\p"
	.string "So stand up straight!\n"
	.string "Put your thinking cap on!\p"
	.string "And, most importantly, don't be afraid\n"
	.string "to show everyone who you are!\p"
	.string "Oh!\p"
	.string "I almost forgot.\p"
	.string "Here's a Fresh Water to keep you\n"
	.string "hyrdated!$"

IcovaleCity_Gym_Guide_Text_1:
# 29 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Knock 'em dead, {PLAYER}!$"

IcovaleCity_Gym_ClassClown_Text_0:
# 34 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Offer's still on the table.$"

IcovaleCity_Gym_ClassClown_Text_1:
# 36 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I'm the class clown!$"

IcovaleCity_Gym_ClassSnob_Text_0:
# 42 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You must have cheated.\p"
	.string "No one with such dirty clothes could\n"
	.string "have passed before me!$"

IcovaleCity_Gym_ClassSnob_Text_1:
# 45 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hmph!\p"
	.string "I guess Sequoia just lets any trainer in\n"
	.string "here, huh?$"

IcovaleCity_Gym_ClassDedicatedRam_Text_0:
# 50 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "How much dedotated wam do you have?$"

IcovaleCity_Gym_ClassJam_Text_0:
# 56 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "She still can't hear you.$"

IcovaleCity_Gym_ClassJam_Text_1:
# 59 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "This girl's headphones are playing music\n"
	.string "too loud for her to hear anything you're\l"
	.string "saying.$"

IcovaleCity_Gym_LeaderSequoiaBattle_Text_0:
# 65 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Well, {PLAYER}…\p"
	.string "It looks like you've reached the second\n"
	.string "part of my exam.\p"
	.string "You and {RIVAL} have come such a\n"
	.string "long way already!\p"
	.string "After we were jumped by AlgoTech at\n"
	.string "Lake Serenity, I think I know what\l"
	.string "you're capable of.\p"
	.string "I'm asking you to show me…\p"
	.string "Show me that strength and battling\n"
	.string "knowledge again!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

IcovaleCity_Gym_LeaderSequoiaBattle_Text_1:
# 68 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "And that's that.\p"
	.string "Congratulations, {PLAYER}!\n"
	.string "This is your first of many!\p"
	.string "I am honored to make this a stepping\n"
	.string "stone in your journey.\p"
	.string "Now here.$"

IcovaleCity_Gym_LeaderSequoiaBattle_Text_2:
# 72 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "This is the Curiosity Badge.\n"
	.string "It represents our very first emotion\l"
	.string "that leads to invention, to discovery,\l"
	.string "to success.\p"
	.string "“What happens if I bang these two\n"
	.string "rocks together?”\p"
	.string "A caveman must have thought, and the\n"
	.string "rest is history.\p"
	.string "I'd advise not going to Serenity Town\n"
	.string "at the moment. There are several\l"
	.string "AlgoTech members that currently\l"
	.string "occupy the town.\p"
	.string "Maybe you could go to Crimbark?\n"
	.string "It's on the route going south east from\l"
	.string "here.\p"
	.string "Anyways, good luck {PLAYER}!\p"
	.string "As always, I'll see you around.$"

IcovaleCity_Gym_PostBattle_Text_0:
# 82 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I'm going to relax back here for a bit.\p"
	.string "You have a lot of potential, {PLAYER}.\p"
	.string "You'll be a very strong trainer some\n"
	.string "day.$"

IcovaleCity_Gym_Sequoia_Text_0:
# 94 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Ah, {PLAYER}!\p"
	.string "You made it!\p"
	.string "Once again, thank you for your help at\n"
	.string "the lake.\p"
	.string "Let's focus on the present!\p"
	.string "Wanna know what I like a whole lot more\n"
	.string "than evil corporations?\p"
	.string "KNOWLEDGE!\p"
	.string "{RIVAL} was just here, and he passed\n"
	.string "my test with flying colors!$"

IcovaleCity_Gym_Sequoia_Text_1:
# 98 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Do you think you're ready for\n"
	.string "my exam?$"

IcovaleCity_Gym_Sequoia_Text_2:
# 101 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Perfect!\p"
	.string "Let's start with the first set of\n"
	.string "questions!$"

IcovaleCity_Gym_Sequoia_Text_3:
# 105 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Well, let me know whenever\n"
	.string "you're ready!$"

IcovaleCity_Gym_ExamStart_Text_0:
# 113 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Excuse me, {PLAYER}.\p"
	.string "I'm going to be asking the exam\n"
	.string "questions from that corner.$"

IcovaleCity_Gym_ExamStart_Text_1:
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Alright!\p"
	.string "Let's get started!$"

IcovaleCity_Gym_ExamQuestion_Text_0:
# 147 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q1: What type is this gym?$"

IcovaleCity_Gym_ExamQuestion_Text_1:
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Psychic$"

IcovaleCity_Gym_ExamQuestion_Text_2:
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Poison$"

IcovaleCity_Gym_ExamQuestion_Text_3:
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Normal$"

IcovaleCity_Gym_ExamQuestion_Text_4:
# 157 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q2: Which of these types hit\n"
	.string "Steel/Psychic super-effectively?$"

IcovaleCity_Gym_ExamQuestion_Text_5:
# 158 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Dark$"

IcovaleCity_Gym_ExamQuestion_Text_6:
# 158 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Ghost$"

IcovaleCity_Gym_ExamQuestion_Text_7:
# 165 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q3: Which city contains a giant\n"
	.string "sprawling bridge?$"

IcovaleCity_Gym_ExamQuestion_Text_8:
# 166 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "San Torendo$"

IcovaleCity_Gym_ExamQuestion_Text_9:
# 166 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Toree City$"

IcovaleCity_Gym_ExamQuestion_Text_10:
# 166 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Huyon City$"

IcovaleCity_Gym_ExamQuestion_Text_11:
# 175 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q4: Which of the following Pokémon can\n"
	.string "still evolve while holding an everstone?$"

IcovaleCity_Gym_ExamQuestion_Text_12:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Haunter$"

IcovaleCity_Gym_ExamQuestion_Text_13:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Cosmoem$"

IcovaleCity_Gym_ExamQuestion_Text_14:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kadabra$"

IcovaleCity_Gym_ExamQuestion_Text_15:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kubfu$"

IcovaleCity_Gym_ExamQuestion_Text_16:
# 185 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q5: What is the biggest company in all\n"
	.string "of Vidioh?$"

IcovaleCity_Gym_ExamQuestion_Text_17:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "AlgoTech$"

IcovaleCity_Gym_ExamQuestion_Text_18:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oran$"

IcovaleCity_Gym_ExamQuestion_Text_19:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Beyond$"

IcovaleCity_Gym_ExamQuestion_Text_20:
# 195 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Let's see if you've been paying\n"
	.string "attention!$"

IcovaleCity_Gym_ExamQuestion_Text_21:
# 197 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q?: What question are you on?$"

IcovaleCity_Gym_ExamQuestion_Text_22:
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "5$"

IcovaleCity_Gym_ExamQuestion_Text_23:
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "6$"

IcovaleCity_Gym_ExamQuestion_Text_24:
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "7$"

IcovaleCity_Gym_ExamQuestion_Text_25:
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "301$"

IcovaleCity_Gym_ExamQuestion_Text_26:
# 206 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Are…\p"
	.string "……\n"
	.string "……\p"
	.string "Are you serious?\p"
	.string "Like, you're not joking, right?\p"
	.string "You don't actually think you're on\n"
	.string "question 301 right now, do you?\p"
	.string "We haven't even been here 5 minutes\n"
	.string "yet.\p"
	.string "……\n"
	.string "……\p"
	.string "Assuming it has been about 5 minutes, I\n"
	.string "would have had to ask you about 60\l"
	.string "questions per minute.\p"
	.string "I…\p"
	.string "I need to know right now.$"

IcovaleCity_Gym_ExamQuestion_Text_27:
# 209 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Were you being serious when you\n"
	.string "answered 301?$"

IcovaleCity_Gym_ExamQuestion_Text_28:
# 212 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, okay!\p"
	.string "……\n"
	.string "……\p"
	.string "Well, that still doesn't save you from\n"
	.string "answering wrong, so…$"

IcovaleCity_Gym_ExamQuestion_Text_29:
# 215 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh.\p"
	.string "Oh no.\p"
	.string "That's…$"

IcovaleCity_Gym_ExamQuestion_Text_30:
# 223 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "W-we're just gonna pretend like you\n"
	.string "answered 5 or 7, o-okay?$"

IcovaleCity_Gym_ExamQuestion_Text_31:
# 233 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q7: What city are we in?$"

IcovaleCity_Gym_ExamQuestion_Text_32:
# 234 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Icovale$"

IcovaleCity_Gym_ExamQuestion_Text_33:
# 234 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Homege$"

IcovaleCity_Gym_ExamQuestion_Text_34:
# 234 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Toree$"

IcovaleCity_Gym_ExamQuestion_Text_35:
# 243 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q8: Does a bear shit in the woods?$"

IcovaleCity_Gym_ExamQuestion_Text_36:
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yes$"

IcovaleCity_Gym_ExamQuestion_Text_37:
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "No$"

IcovaleCity_Gym_ExamQuestion_Text_38:
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh…$"

IcovaleCity_Gym_ExamQuestion_Text_39:
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What's a bear?$"

IcovaleCity_Gym_ExamQuestion_Text_40:
# 253 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q9: Where is the Crimbark Forest\n"
	.string "located?$"

IcovaleCity_Gym_ExamQuestion_Text_41:
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "South$"

IcovaleCity_Gym_ExamQuestion_Text_42:
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Southeast$"

IcovaleCity_Gym_ExamQuestion_Text_43:
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "East$"

IcovaleCity_Gym_ExamQuestion_Text_44:
# 259 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Another freebie.\p"
	.string "Any of those three answers would have\n"
	.string "been accepted.$"

IcovaleCity_Gym_ExamQuestion_Text_45:
# 263 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q10: Can you defeat the gym leader?$"

IcovaleCity_Gym_ExamQuestion_Text_46:
# 264 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Maybe so$"

IcovaleCity_Gym_ExamQuestion_Text_47:
# 268 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I guess we'll find out in a few minutes!\p"
	.string "This concludes the first part of my gym\n"
	.string "examination.\p"
	.string "Now, we can continue to the second part\n"
	.string "- the battling test.\p"
	.string "Prove to me you have what it takes to\n"
	.string "continue your journey past Icovale\l"
	.string "City.\p"
	.string "I'll be waiting on the battlefield in the\n"
	.string "next room.$"

IcovaleCity_Gym_ExamQuestion_Text_48:
# 279 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Next question!$"

IcovaleCity_Gym_CorrectAnswer_Text_0:
# 288 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's correct!$"

IcovaleCity_Gym_CorrectAnswer_Text_1:
# 291 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Bet I had you second-guessing yourself\n"
	.string "there, didn't I?\p"
	.string "Little bit of a curveball to keep you on\n"
	.string "your toes.\p"
	.string "Both answers were correct.$"

IcovaleCity_Gym_CorrectAnswer_Text_2:
# 293 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Honestly, I would have been a little\n"
	.string "concerned if you said 301.\p"
	.string "I'm not sure how that got in there.$"

IcovaleCity_Gym_WrongAnswer_Text_0:
# 303 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's incorrect.$"

IcovaleCity_Gym_WrongAnswer_Text_1:
# 308 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Richard, can you come to the front of\n"
	.string "the class and tell {PLAYER} the\l"
	.string "correct answer?$"

IcovaleCity_Gym_WrongAnswer_Text_2:
# 312 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Certainly.$"

IcovaleCity_Gym_WrongAnswer_Text_3:
# 316 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is Psychic.\p"
	.string "Obviously, this is a Psychic-type gym\n"
	.string "since it tests you on your intelligence.$"

IcovaleCity_Gym_WrongAnswer_Text_4:
# 319 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Something that you seem to be lacking.\p"
	.string "Let me show you what it means to be\n"
	.string "smart.$"

IcovaleCity_Gym_WrongAnswer_Text_5:
# 324 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Richard.$"

IcovaleCity_Gym_WrongAnswer_Text_6:
# 329 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Claudia, can you come to the front of\n"
	.string "the class and tell {PLAYER} the\l"
	.string "correct answer?$"

IcovaleCity_Gym_WrongAnswer_Text_7:
# 331 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…………\n"
	.string "…………$"

IcovaleCity_Gym_WrongAnswer_Text_8:
# 334 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Claudia?$"

IcovaleCity_Gym_WrongAnswer_Text_9:
# 339 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "CLAUDIA!$"

IcovaleCity_Gym_WrongAnswer_Text_10:
# 343 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh my gosh!\p"
	.string "Like, I'm so sorry!\p"
	.string "I had my headphones on!$"

IcovaleCity_Gym_WrongAnswer_Text_11:
# 347 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I can see that…\p"
	.string "Can you tell {PLAYER} the correct\n"
	.string "answer to the question?$"

IcovaleCity_Gym_WrongAnswer_Text_12:
# 351 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sure!\p"
	.string "Um…\n"
	.string "……\p"
	.string "…What was the question again?$"

IcovaleCity_Gym_WrongAnswer_Text_13:
# 355 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, for the love of…!$"

IcovaleCity_Gym_WrongAnswer_Text_14:
# 359 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is San Torendo,\n"
	.string "{PLAYER}.$"

IcovaleCity_Gym_WrongAnswer_Text_15:
# 363 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just please battle {PLAYER}, Claudia.$"

IcovaleCity_Gym_WrongAnswer_Text_16:
# 367 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Like, sure!$"

IcovaleCity_Gym_WrongAnswer_Text_17:
# 374 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Claudia.$"

IcovaleCity_Gym_WrongAnswer_Text_18:
# 379 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "This was a tricky one.\p"
	.string "Kai, come to the front and tell everyone\n"
	.string "the correct answer!$"

IcovaleCity_Gym_WrongAnswer_Text_19:
# 383 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Okay!$"

IcovaleCity_Gym_WrongAnswer_Text_20:
# 387 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is…\p"
	.string "…Kubfu!\p"
	.string "Because it evolves through a special\n"
	.string "event!$"

IcovaleCity_Gym_WrongAnswer_Text_21:
# 393 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What!?\p"
	.string "No!\p"
	.string "That's not right!$"

IcovaleCity_Gym_WrongAnswer_Text_22:
# 397 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Woah, really?\p"
	.string "I thought for sure it had to be Kubfu…$"

IcovaleCity_Gym_WrongAnswer_Text_23:
# 401 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, Kai…\p"
	.string "We just learned about this last class…\p"
	.string "Just…\p"
	.string "Pick a different answer.$"

IcovaleCity_Gym_WrongAnswer_Text_24:
# 405 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hm…\p"
	.string "…Okay!\n"
	.string "I got it!\p"
	.string "It has to be…\p"
	.string "…Cosmoem!\p"
	.string "Because it's a special legendary\n"
	.string "Pokémon!$"

IcovaleCity_Gym_WrongAnswer_Text_25:
# 411 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's…\p"
	.string "That's also incorrect.\p"
	.string "50/50 chance here, Kai.\p"
	.string "Haunter or Kadabra.$"

IcovaleCity_Gym_WrongAnswer_Text_26:
# 415 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Woah, no way!?\p"
	.string "It can't be only one of them! They're\n"
	.string "both trade evolutions!\p"
	.string "Gee, if I had to pick one of them, it\n"
	.string "would have to be…$"

IcovaleCity_Gym_WrongAnswer_Text_27:
# 418 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Haunter!\p"
	.string "Because its ghost body isn't able to\n"
	.string "actually hold anything!$"

IcovaleCity_Gym_WrongAnswer_Text_28:
# 424 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Kadabra.\p"
	.string "Kadabra was the right answer.$"

IcovaleCity_Gym_WrongAnswer_Text_29:
# 428 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh…\p"
	.string "…that actually makes sense!\p"
	.string "Kadabra holds a spoon in his right hand\n"
	.string "because he's right handed!\p"
	.string "So he probably uses his telekinesis to\n"
	.string "hold the everstone with his\l"
	.string "non-dominant left hand…\p"
	.string "…which turns it into a float stone!$"

IcovaleCity_Gym_WrongAnswer_Text_30:
# 433 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh, sure Kai.\p"
	.string "Can you battle {PLAYER}, please?$"

IcovaleCity_Gym_WrongAnswer_Text_31:
# 437 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yep!$"

IcovaleCity_Gym_WrongAnswer_Text_32:
# 441 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hi-yah!\p"
	.string "Here comes super Kai!$"

IcovaleCity_Gym_WrongAnswer_Text_33:
# 444 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Kai.$"

IcovaleCity_Gym_WrongAnswer_Text_34:
# 449 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "……Screwball.\p"
	.string "Can you come to the front and answer\n"
	.string "the question?$"

IcovaleCity_Gym_WrongAnswer_Text_35:
# 453 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sure.\p"
	.string "But first…$"

IcovaleCity_Gym_WrongAnswer_Text_36:
# 457 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "How about a snake balloon, kid?$"

IcovaleCity_Gym_WrongAnswer_Text_37:
# 462 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "No!\p"
	.string "No, more snake balloons!$"

IcovaleCity_Gym_WrongAnswer_Text_38:
# 466 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Especially after last time.$"

IcovaleCity_Gym_WrongAnswer_Text_39:
# 470 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just answer the question, Screwball.\p"
	.string "Then, battle {PLAYER}.$"

IcovaleCity_Gym_WrongAnswer_Text_40:
# 474 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Fine, the correct answer is AlgoTech.$"

IcovaleCity_Gym_WrongAnswer_Text_41:
# 479 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Screwball.$"

IcovaleCity_Gym_WrongAnswer_Text_42:
# 488 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Of course.$"

IcovaleCity_Gym_WrongAnswer_Text_43:
# 492 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is 6.$"

IcovaleCity_Gym_WrongAnswer_Text_44:
# 495 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Y'know, the number that comes after 5,\n"
	.string "but before 7?\p"
	.string "Hmph, you complete imbecile.$"

IcovaleCity_Gym_WrongAnswer_Text_45:
# 519 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh my gosh!\p"
	.string "Like, I'm so sorry!\p"
	.string "My favorite song was playing!$"

IcovaleCity_Gym_WrongAnswer_Text_46:
# 523 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's great…\p"
	.string "Can you tell {PLAYER} the correct\n"
	.string "answer to the question?$"

IcovaleCity_Gym_WrongAnswer_Text_47:
# 527 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yeah, no sweat!\p"
	.string "Um…\n"
	.string "……\p"
	.string "…What was the question again?$"

IcovaleCity_Gym_WrongAnswer_Text_48:
# 531 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I don't get paid enough for this…!$"

IcovaleCity_Gym_WrongAnswer_Text_49:
# 535 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is Icovale,\n"
	.string "{PLAYER}.$"

IcovaleCity_Gym_WrongAnswer_Text_50:
# 543 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yeah, whatevs!$"

IcovaleCity_Gym_WrongAnswer_Text_51:
# 555 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kai, can you come to the front of the\n"
	.string "class and tell {PLAYER} the correct\l"
	.string "answer?$"

IcovaleCity_Gym_WrongAnswer_Text_52:
# 559 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh-huh!$"

IcovaleCity_Gym_WrongAnswer_Text_53:
# 563 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Like people, a bear can shit wherever it\n"
	.string "pleases!$"

IcovaleCity_Gym_WrongAnswer_Text_54:
# 568 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What?\p"
	.string "No!\p"
	.string "This question is only asked in response\n"
	.string "to a question with an emphatic yes!\p"
	.string "It's supposed to be obvious that, yes, a\n"
	.string "bear does in fact shit in the woods\l"
	.string "because that's where it lives!$"

IcovaleCity_Gym_WrongAnswer_Text_55:
# 572 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh!!\p"
	.string "……\n"
	.string "……\p"
	.string "…I don't get it.$"

IcovaleCity_Gym_WrongAnswer_Text_56:
# 576 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just battle {PLAYER}, Kai.$"

IcovaleCity_Gym_WrongAnswer_Text_57:
# 580 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You got it!$"

IcovaleCity_Gym_WrongAnswer_Text_58:
# 584 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Time to show you what I'm made of!$"

IcovaleCity_Gym_RichardDefeat::
# 706 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Upstart…\namateur…!$"

IcovaleCity_Gym_ScrewballDefeat::
# 710 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You want some meth, kid?$"

IcovaleCity_Gym_ClaudiaDefeat::
# 714 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What!?\nNo way!$"

IcovaleCity_Gym_KaiDefeat::
# 718 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "How much dedotated wam\ndoes it take to win?$"

IcovaleCity_Gym_LeaderSequoiaDefeat::
# 722 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What an incredible battle!$"

IcovaleCity_Gym_ReceivedCuriosityBadge::
# 726 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "{PLAYER} received the Curiosity Badge\nfrom Sequoia.$"
