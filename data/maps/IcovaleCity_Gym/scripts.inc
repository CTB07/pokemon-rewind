IcovaleCity_Gym_MapScripts::
	.byte 0


IcovaleCity_Gym_Guide::
# 10 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Guide_Text_0, MSGBOX_NPC
# 15 "data/maps/IcovaleCity_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 16 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Guide_Text_1, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassClown::
# 20 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassClown_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassSnob::
# 24 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassSnob_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassDedicatedRam::
# 28 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassDedicatedRam_Text_0, MSGBOX_NPC
	return


IcovaleCity_Gym_ClassJam::
# 32 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock
# 33 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ClassJam_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return


IcovaleCity_Gym_Sequoia::
# 38 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock
# 39 "data/maps/IcovaleCity_Gym/scripts.pory"
	faceplayer
# 40 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto_if_unset FLAG_TEMP_1, IcovaleCity_Gym_Sequoia_2
IcovaleCity_Gym_Sequoia_1:
# 44 "data/maps/IcovaleCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 45 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_1, MSGBOX_YESNO
# 46 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/IcovaleCity_Gym/scripts.pory"
	case YES, IcovaleCity_Gym_Sequoia_6
# 51 "data/maps/IcovaleCity_Gym/scripts.pory"
	case NO, IcovaleCity_Gym_Sequoia_7
IcovaleCity_Gym_Sequoia_4:
# 55 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return

IcovaleCity_Gym_Sequoia_2:
# 41 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_0, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_Sequoia_1

IcovaleCity_Gym_Sequoia_6:
# 48 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 50 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_ExamStart
	goto IcovaleCity_Gym_Sequoia_4

IcovaleCity_Gym_Sequoia_7:
# 52 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_Sequoia_Text_3, MSGBOX_DEFAULT
# 53 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_Sequoia_4


IcovaleCity_Gym_ExamStart::
# 59 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq IcovaleCity_Gym_ExamStart_2
# 70 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_ProfMovesIntoPos
# 71 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 72 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesIntoPos2
# 73 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
IcovaleCity_Gym_ExamStart_1:
# 75 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamStart_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 77 "data/maps/IcovaleCity_Gym/scripts.pory"
	special SpawnCameraObject
# 78 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 79 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 80 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Gym_PanDown
# 81 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 82 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_ExamQuestion
	return

IcovaleCity_Gym_ExamStart_2:
# 60 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamStart_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 62 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesDown
# 63 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 64 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_ProfMovesIntoPos
# 65 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 66 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleCity_Gym_PlayerMovesIntoPos1
# 67 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	goto IcovaleCity_Gym_ExamStart_1


IcovaleCity_Gym_ExamQuestion::
# 86 "data/maps/IcovaleCity_Gym/scripts.pory"
	addvar VAR_TEMP_1, 1
# 87 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 88 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_ExamQuestion_3
# 98 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_ExamQuestion_4
# 106 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_ExamQuestion_5
# 116 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 4, IcovaleCity_Gym_ExamQuestion_6
# 126 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 5, IcovaleCity_Gym_ExamQuestion_7
# 136 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_ExamQuestion_8
# 174 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 7, IcovaleCity_Gym_ExamQuestion_9
# 184 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 8, IcovaleCity_Gym_ExamQuestion_10
# 194 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 9, IcovaleCity_Gym_ExamQuestion_11
# 204 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 10, IcovaleCity_Gym_ExamQuestion_12
IcovaleCity_Gym_ExamQuestion_1:
# 216 "data/maps/IcovaleCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq IcovaleCity_Gym_ExamQuestion_14
IcovaleCity_Gym_ExamQuestion_13:
# 219 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 220 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 221 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_48, MSGBOX_DEFAULT
# 222 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_ExamQuestion
	return

IcovaleCity_Gym_ExamQuestion_3:
# 89 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_0
# 90 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_1, IcovaleCity_Gym_ExamQuestion_Text_2, IcovaleCity_Gym_ExamQuestion_Text_3
# 91 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 92 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_17
# 96 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_4:
# 99 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_4
# 100 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_5, IcovaleCity_Gym_ExamQuestion_Text_6
# 101 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 102 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_5:
# 107 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_7
# 108 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_8, IcovaleCity_Gym_ExamQuestion_Text_9, IcovaleCity_Gym_ExamQuestion_Text_10
# 109 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 111 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_22
# 114 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_6:
# 117 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_11
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_12, IcovaleCity_Gym_ExamQuestion_Text_13, IcovaleCity_Gym_ExamQuestion_Text_14, IcovaleCity_Gym_ExamQuestion_Text_15
# 119 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_ExamQuestion_25
# 124 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_7:
# 127 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_16
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_17, IcovaleCity_Gym_ExamQuestion_Text_18, IcovaleCity_Gym_ExamQuestion_Text_19
# 129 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 130 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_28
# 134 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_8:
# 137 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_20, MSGBOX_DEFAULT
# 138 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 139 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_21
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_22, IcovaleCity_Gym_ExamQuestion_Text_23, IcovaleCity_Gym_ExamQuestion_Text_24, IcovaleCity_Gym_ExamQuestion_Text_25
# 141 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 142 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_ExamQuestion_31
# 145 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_ExamQuestion_32
# 172 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_9:
# 175 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_31
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_32, IcovaleCity_Gym_ExamQuestion_Text_33, IcovaleCity_Gym_ExamQuestion_Text_34
# 177 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 178 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_35
# 182 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_10:
# 185 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_35
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_36, IcovaleCity_Gym_ExamQuestion_Text_37, IcovaleCity_Gym_ExamQuestion_Text_38, IcovaleCity_Gym_ExamQuestion_Text_39
# 187 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 188 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 189 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 0, IcovaleCity_Gym_ExamQuestion_38
# 192 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_11:
# 195 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_40
# 196 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_41, IcovaleCity_Gym_ExamQuestion_Text_42, IcovaleCity_Gym_ExamQuestion_Text_43
# 197 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 198 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
# 201 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_44, MSGBOX_DEFAULT
# 202 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_12:
# 205 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_ExamQuestion_Text_45
# 206 "data/maps/IcovaleCity_Gym/scripts.pory"
	dynmultichoice 20, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, IcovaleCity_Gym_ExamQuestion_Text_36, IcovaleCity_Gym_ExamQuestion_Text_37, IcovaleCity_Gym_ExamQuestion_Text_46
# 207 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 208 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_47, MSGBOX_DEFAULT
# 213 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_14:
# 217 "data/maps/IcovaleCity_Gym/scripts.pory"
	goto IcovaleCity_Gym_EndExamPartOne
	goto IcovaleCity_Gym_ExamQuestion_13

IcovaleCity_Gym_ExamQuestion_17:
# 94 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_22:
# 112 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_25:
# 122 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_28:
# 132 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_31:
# 144 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_32:
# 146 "data/maps/IcovaleCity_Gym/scripts.pory"
	fadeoutbgm 1
# 147 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_26, MSGBOX_DEFAULT
# 151 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_27, MSGBOX_YESNO
# 152 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/IcovaleCity_Gym/scripts.pory"
	case NO, IcovaleCity_Gym_ExamQuestion_46
# 155 "data/maps/IcovaleCity_Gym/scripts.pory"
	case YES, IcovaleCity_Gym_ExamQuestion_47
IcovaleCity_Gym_ExamQuestion_44:
# 168 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 169 "data/maps/IcovaleCity_Gym/scripts.pory"
	fadeinbgm 1
# 170 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_WrongAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_35:
# 180 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_38:
# 190 "data/maps/IcovaleCity_Gym/scripts.pory"
	call IcovaleCity_Gym_CorrectAnswer
	goto IcovaleCity_Gym_ExamQuestion_1

IcovaleCity_Gym_ExamQuestion_46:
# 154 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_28, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_ExamQuestion_44

IcovaleCity_Gym_ExamQuestion_47:
# 156 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 157 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_29, MSGBOX_DEFAULT
# 158 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 159 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 160 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 161 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 162 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 163 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 164 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 165 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_ExamQuestion_Text_30, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_ExamQuestion_44


IcovaleCity_Gym_CorrectAnswer::
# 226 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_DING_DONG
# 227 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 228 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 229 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 230 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_0, MSGBOX_DEFAULT
# 231 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 232 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 2, IcovaleCity_Gym_CorrectAnswer_3
# 234 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_CorrectAnswer_4
IcovaleCity_Gym_CorrectAnswer_1:
# 237 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
	return

IcovaleCity_Gym_CorrectAnswer_3:
# 233 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_1, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_CorrectAnswer_1

IcovaleCity_Gym_CorrectAnswer_4:
# 235 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_CorrectAnswer_Text_2, MSGBOX_DEFAULT
	goto IcovaleCity_Gym_CorrectAnswer_1


IcovaleCity_Gym_WrongAnswer::
# 241 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 242 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 243 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 244 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 245 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_0, MSGBOX_DEFAULT
# 246 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 247 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 248 "data/maps/IcovaleCity_Gym/scripts.pory"
	switch VAR_TEMP_1
# 249 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 1, IcovaleCity_Gym_WrongAnswer_2
# 269 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 3, IcovaleCity_Gym_WrongAnswer_3
# 318 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 4, IcovaleCity_Gym_WrongAnswer_4
# 381 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 5, IcovaleCity_Gym_WrongAnswer_5
# 413 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 6, IcovaleCity_Gym_WrongAnswer_6
# 433 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 7, IcovaleCity_Gym_WrongAnswer_7
# 482 "data/maps/IcovaleCity_Gym/scripts.pory"
	case 8, IcovaleCity_Gym_WrongAnswer_8
	return

IcovaleCity_Gym_WrongAnswer_2:
# 250 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 252 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 253 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_2, MSGBOX_DEFAULT
# 255 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 256 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyGoes
# 257 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 258 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_3, MSGBOX_DEFAULT
# 259 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 260 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 261 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_4, MSGBOX_DEFAULT
# 262 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 263 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 264 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 265 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_5, MSGBOX_DEFAULT
# 266 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 267 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyToDesk
# 268 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_3:
# 270 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_6, MSGBOX_DEFAULT
# 271 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 272 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 273 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 274 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 275 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_8, MSGBOX_DEFAULT
# 276 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 277 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 278 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 279 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 280 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_9, MSGBOX_DEFAULT
# 281 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 282 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 284 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_10, MSGBOX_DEFAULT
# 285 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 286 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 287 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 288 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_11, MSGBOX_DEFAULT
# 289 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 290 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 291 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 292 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_12, MSGBOX_DEFAULT
# 293 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 294 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 295 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_13, MSGBOX_DEFAULT
# 297 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 298 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 299 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 300 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_14, MSGBOX_DEFAULT
# 301 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 302 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 303 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 304 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_15, MSGBOX_DEFAULT
# 305 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 306 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 307 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 308 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_16, MSGBOX_DEFAULT
# 309 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 310 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassGoes
# 311 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 312 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 313 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_17, MSGBOX_DEFAULT
# 315 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 316 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassToDesk
# 317 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_4:
# 319 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_18, MSGBOX_DEFAULT
# 320 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 321 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 322 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 323 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_19, MSGBOX_DEFAULT
# 324 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 325 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterGoes
# 326 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_20, MSGBOX_DEFAULT
# 328 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 329 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 330 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_21, MSGBOX_DEFAULT
# 332 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 333 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 334 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 335 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_22, MSGBOX_DEFAULT
# 336 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 337 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 338 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 339 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_23, MSGBOX_DEFAULT
# 340 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 341 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 342 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 343 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_24, MSGBOX_DEFAULT
# 344 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 345 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 346 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_25, MSGBOX_DEFAULT
# 348 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 349 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 350 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_26, MSGBOX_DEFAULT
# 352 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 353 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 354 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_27, MSGBOX_DEFAULT
# 355 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 356 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 357 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_28, MSGBOX_DEFAULT
# 359 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 360 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 361 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 362 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_29, MSGBOX_DEFAULT
# 364 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 365 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 366 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 367 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_30, MSGBOX_DEFAULT
# 368 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 369 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 370 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 371 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_31, MSGBOX_DEFAULT
# 372 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 373 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 374 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 375 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_32, MSGBOX_DEFAULT
# 376 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 377 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_33, MSGBOX_DEFAULT
# 378 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 379 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterToDesk
# 380 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_5:
# 382 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_34, MSGBOX_DEFAULT
# 383 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 384 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 385 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 386 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_35, MSGBOX_DEFAULT
# 387 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 388 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, IcovaleCity_Gym_ClownGoes
# 389 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 390 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_36, MSGBOX_DEFAULT
# 391 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_SequoiaShocked
# 392 "data/maps/IcovaleCity_Gym/scripts.pory"
	playse SE_PIN
# 393 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 394 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitse
# 395 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_37, MSGBOX_DEFAULT
# 396 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 397 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 398 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 399 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_38, MSGBOX_DEFAULT
# 400 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 401 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 402 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 403 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_39, MSGBOX_DEFAULT
# 404 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 405 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 406 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 407 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_40, MSGBOX_DEFAULT
# 408 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 409 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_41, MSGBOX_DEFAULT
# 410 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 411 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 6, IcovaleCity_Gym_ClownToDesk
# 412 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_6:
# 414 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 416 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 417 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 418 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_42, MSGBOX_DEFAULT
# 419 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 420 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyGoes
# 421 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 422 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_43, MSGBOX_DEFAULT
# 423 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 424 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 425 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_44, MSGBOX_DEFAULT
# 426 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 427 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 428 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 429 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_5, MSGBOX_DEFAULT
# 430 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 431 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 3, IcovaleCity_Gym_RichBoyToDesk
# 432 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_7:
# 434 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_6, MSGBOX_DEFAULT
# 435 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 436 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 437 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 438 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 439 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_8, MSGBOX_DEFAULT
# 440 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 441 "data/maps/IcovaleCity_Gym/scripts.pory"
	message IcovaleCity_Gym_WrongAnswer_Text_7
# 442 "data/maps/IcovaleCity_Gym/scripts.pory"
	delay 60
# 443 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmessage
# 444 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_9, MSGBOX_DEFAULT
# 445 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 446 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 447 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 448 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_45, MSGBOX_DEFAULT
# 449 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 450 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 451 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 452 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_46, MSGBOX_DEFAULT
# 453 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 454 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 455 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_47, MSGBOX_DEFAULT
# 457 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 458 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 459 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 460 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_48, MSGBOX_DEFAULT
# 461 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 462 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 463 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_49, MSGBOX_DEFAULT
# 465 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 466 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 467 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 468 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_15, MSGBOX_DEFAULT
# 469 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 470 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 471 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 472 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_50, MSGBOX_DEFAULT
# 473 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 474 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassGoes
# 475 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 476 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 477 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_17, MSGBOX_DEFAULT
# 479 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 480 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 4, IcovaleCity_Gym_LassToDesk
# 481 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return

IcovaleCity_Gym_WrongAnswer_8:
# 483 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_51, MSGBOX_DEFAULT
# 484 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 485 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 486 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 487 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_52, MSGBOX_DEFAULT
# 488 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 489 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterGoes
# 490 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_53, MSGBOX_DEFAULT
# 492 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 493 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 494 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_54, MSGBOX_DEFAULT
# 495 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 496 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 497 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_55, MSGBOX_DEFAULT
# 499 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 500 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 501 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_56, MSGBOX_DEFAULT
# 503 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 504 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 505 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 506 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_57, MSGBOX_DEFAULT
# 507 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 508 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 509 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 510 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_58, MSGBOX_DEFAULT
# 511 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 512 "data/maps/IcovaleCity_Gym/scripts.pory"
	msgbox IcovaleCity_Gym_WrongAnswer_Text_33, MSGBOX_DEFAULT
# 513 "data/maps/IcovaleCity_Gym/scripts.pory"
	closemessage
# 514 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 5, IcovaleCity_Gym_YoungsterToDesk
# 515 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
	return


IcovaleCity_Gym_EndExamPartOne::
# 520 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Gym_PanUp
# 521 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 522 "data/maps/IcovaleCity_Gym/scripts.pory"
	special RemoveCameraObject
# 523 "data/maps/IcovaleCity_Gym/scripts.pory"
	applymovement 2, IcovaleCity_Gym_NextRoom
# 524 "data/maps/IcovaleCity_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/IcovaleCity_Gym/scripts.pory"
	release
	return


# 528 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesDown:
# 529 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
# 530 "data/maps/IcovaleCity_Gym/scripts.pory"
	lock_facing_direction
# 531 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 532 "data/maps/IcovaleCity_Gym/scripts.pory"
	unlock_facing_direction
	step_end

# 535 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ProfMovesIntoPos:
# 536 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 536 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 536 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 537 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_right
	step_end

# 540 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesIntoPos1:
# 541 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 542 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 543 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_left
	step_end

# 546 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PlayerMovesIntoPos2:
# 547 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
	step_end

# 550 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_RichBoyGoes:
# 551 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 552 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 552 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 552 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 553 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 554 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_down
	step_end

# 557 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_RichBoyToDesk:
# 558 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 559 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 560 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 561 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 564 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_LassGoes:
# 565 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 566 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 566 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 566 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 567 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_down
	step_end

# 570 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_LassToDesk:
# 571 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 573 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 576 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_YoungsterGoes:
# 577 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 578 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 579 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_down
	step_end

# 582 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_YoungsterToDesk:
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 585 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 588 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ClownGoes:
# 589 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 591 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_left
	step_end

# 594 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_ClownToDesk:
# 595 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 596 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 597 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 598 "data/maps/IcovaleCity_Gym/scripts.pory"
	face_up
	step_end

# 601 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PanUp:
# 602 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 602 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
	step_end

# 605 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_PanDown:
# 606 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 606 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
	step_end

# 609 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_SequoiaShocked:
# 610 "data/maps/IcovaleCity_Gym/scripts.pory"
	emote_exclamation_mark
# 611 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_in_place_right
	step_end

# 614 "data/maps/IcovaleCity_Gym/scripts.pory"
IcovaleCity_Gym_NextRoom:
# 615 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 616 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 616 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_down
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 619 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
# 620 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 620 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 620 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_right
# 621 "data/maps/IcovaleCity_Gym/scripts.pory"
	walk_up
	step_end

IcovaleCity_Gym_Guide_Text_0:
# 10 "data/maps/IcovaleCity_Gym/scripts.pory"
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
# 16 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Knock 'em dead, {PLAYER}!$"

IcovaleCity_Gym_ClassClown_Text_0:
# 20 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I'm the class clown!$"

IcovaleCity_Gym_ClassSnob_Text_0:
# 24 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hmph!\p"
	.string "I guess Sequoia just lets any trainer in\n"
	.string "here, huh?$"

IcovaleCity_Gym_ClassDedicatedRam_Text_0:
# 28 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "How much dedotated wam do you have?$"

IcovaleCity_Gym_ClassJam_Text_0:
# 33 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "This girl's headphones are playing music\n"
	.string "too loud for her to hear anything you're\l"
	.string "saying.$"

IcovaleCity_Gym_Sequoia_Text_0:
# 41 "data/maps/IcovaleCity_Gym/scripts.pory"
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
# 45 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Do you think you're ready for\n"
	.string "my exam?$"

IcovaleCity_Gym_Sequoia_Text_2:
# 48 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Perfect!\p"
	.string "Let's start with the first set of\n"
	.string "questions!$"

IcovaleCity_Gym_Sequoia_Text_3:
# 52 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Well, let me know whenever\n"
	.string "you're ready!$"

IcovaleCity_Gym_ExamStart_Text_0:
# 60 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Excuse me, {PLAYER}.\p"
	.string "I'm going to asking the exam questions\n"
	.string "from that corner.$"

IcovaleCity_Gym_ExamStart_Text_1:
# 75 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sequoia: Alright!\p"
	.string "Let's get started!$"

IcovaleCity_Gym_ExamQuestion_Text_0:
# 89 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q1: What type is this gym?$"

IcovaleCity_Gym_ExamQuestion_Text_1:
# 90 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Psychic$"

IcovaleCity_Gym_ExamQuestion_Text_2:
# 90 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Poison$"

IcovaleCity_Gym_ExamQuestion_Text_3:
# 90 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Normal$"

IcovaleCity_Gym_ExamQuestion_Text_4:
# 99 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q2: Which of these types hit\n"
	.string "Steel/Psychic super-effectively?$"

IcovaleCity_Gym_ExamQuestion_Text_5:
# 100 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Dark$"

IcovaleCity_Gym_ExamQuestion_Text_6:
# 100 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Ghost$"

IcovaleCity_Gym_ExamQuestion_Text_7:
# 107 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q3: Which city contains a giant\n"
	.string "sprawling bridge?$"

IcovaleCity_Gym_ExamQuestion_Text_8:
# 108 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "San Torendo$"

IcovaleCity_Gym_ExamQuestion_Text_9:
# 108 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Toree City$"

IcovaleCity_Gym_ExamQuestion_Text_10:
# 108 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Huyon City$"

IcovaleCity_Gym_ExamQuestion_Text_11:
# 117 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q4: Which of the following Pokémon can\n"
	.string "still evolve while holding an everstone?$"

IcovaleCity_Gym_ExamQuestion_Text_12:
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Haunter$"

IcovaleCity_Gym_ExamQuestion_Text_13:
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Cosmoem$"

IcovaleCity_Gym_ExamQuestion_Text_14:
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kadabra$"

IcovaleCity_Gym_ExamQuestion_Text_15:
# 118 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kubfu$"

IcovaleCity_Gym_ExamQuestion_Text_16:
# 127 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q5: What is the biggest company in all\n"
	.string "of Vidioh?$"

IcovaleCity_Gym_ExamQuestion_Text_17:
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "AlgoTech$"

IcovaleCity_Gym_ExamQuestion_Text_18:
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oran$"

IcovaleCity_Gym_ExamQuestion_Text_19:
# 128 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Beyond$"

IcovaleCity_Gym_ExamQuestion_Text_20:
# 137 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Let's see if you've been paying\n"
	.string "attention!$"

IcovaleCity_Gym_ExamQuestion_Text_21:
# 139 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q?: What question are you on?$"

IcovaleCity_Gym_ExamQuestion_Text_22:
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "5$"

IcovaleCity_Gym_ExamQuestion_Text_23:
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "6$"

IcovaleCity_Gym_ExamQuestion_Text_24:
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "7$"

IcovaleCity_Gym_ExamQuestion_Text_25:
# 140 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "301$"

IcovaleCity_Gym_ExamQuestion_Text_26:
# 148 "data/maps/IcovaleCity_Gym/scripts.pory"
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
# 151 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Were you being serious when you\n"
	.string "answered 301?$"

IcovaleCity_Gym_ExamQuestion_Text_28:
# 154 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, okay!\p"
	.string "……\n"
	.string "……\p"
	.string "Well, that still doesn't save you from\n"
	.string "answering wrong, so…$"

IcovaleCity_Gym_ExamQuestion_Text_29:
# 157 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh.\p"
	.string "Oh no.\p"
	.string "That's…$"

IcovaleCity_Gym_ExamQuestion_Text_30:
# 165 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "W-we're just gonna pretend like you\n"
	.string "answered 5 or 7, o-okay?$"

IcovaleCity_Gym_ExamQuestion_Text_31:
# 175 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q7: What city are we in?$"

IcovaleCity_Gym_ExamQuestion_Text_32:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Icovale$"

IcovaleCity_Gym_ExamQuestion_Text_33:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Homege$"

IcovaleCity_Gym_ExamQuestion_Text_34:
# 176 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Toree$"

IcovaleCity_Gym_ExamQuestion_Text_35:
# 185 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q8: Does a bear shit in the woods?$"

IcovaleCity_Gym_ExamQuestion_Text_36:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yes$"

IcovaleCity_Gym_ExamQuestion_Text_37:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "No$"

IcovaleCity_Gym_ExamQuestion_Text_38:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh…$"

IcovaleCity_Gym_ExamQuestion_Text_39:
# 186 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What's a bear?$"

IcovaleCity_Gym_ExamQuestion_Text_40:
# 195 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q9: Where is the Crimbark Forest\n"
	.string "located?$"

IcovaleCity_Gym_ExamQuestion_Text_41:
# 196 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "South$"

IcovaleCity_Gym_ExamQuestion_Text_42:
# 196 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Southeast$"

IcovaleCity_Gym_ExamQuestion_Text_43:
# 196 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "East$"

IcovaleCity_Gym_ExamQuestion_Text_44:
# 201 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Another freebie.\p"
	.string "Any of those three answers would have\n"
	.string "been accepted.$"

IcovaleCity_Gym_ExamQuestion_Text_45:
# 205 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Q10: Can you defeat the gym leader?$"

IcovaleCity_Gym_ExamQuestion_Text_46:
# 206 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Maybe so$"

IcovaleCity_Gym_ExamQuestion_Text_47:
# 210 "data/maps/IcovaleCity_Gym/scripts.pory"
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
# 221 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Next question!$"

IcovaleCity_Gym_CorrectAnswer_Text_0:
# 230 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's correct!$"

IcovaleCity_Gym_CorrectAnswer_Text_1:
# 233 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Bet I had you second-guessing yourself\n"
	.string "there, didn't I?\p"
	.string "Little bit of a curveball to keep you on\n"
	.string "your toes.\p"
	.string "Both answers were correct.$"

IcovaleCity_Gym_CorrectAnswer_Text_2:
# 235 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Honestly, I would have been a little\n"
	.string "concerned if you said 301.\p"
	.string "I'm not sure how that got in there.$"

IcovaleCity_Gym_WrongAnswer_Text_0:
# 245 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's incorrect.$"

IcovaleCity_Gym_WrongAnswer_Text_1:
# 250 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Richard, can you come to the front of\n"
	.string "the class and tell {PLAYER} the\l"
	.string "correct answer?$"

IcovaleCity_Gym_WrongAnswer_Text_2:
# 254 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Certainly.$"

IcovaleCity_Gym_WrongAnswer_Text_3:
# 258 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is Psychic.\p"
	.string "Obviously, this is a Psychic-type gym\n"
	.string "since it tests you on your intelligence.$"

IcovaleCity_Gym_WrongAnswer_Text_4:
# 261 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Something that you seem to be lacking.\p"
	.string "Let me show you what it means to be\n"
	.string "smart.$"

IcovaleCity_Gym_WrongAnswer_Text_5:
# 265 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Richard.$"

IcovaleCity_Gym_WrongAnswer_Text_6:
# 270 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Claudia, can you come to the front of\n"
	.string "the class and tell {PLAYER} the\l"
	.string "correct answer?$"

IcovaleCity_Gym_WrongAnswer_Text_7:
# 272 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…………\n"
	.string "…………$"

IcovaleCity_Gym_WrongAnswer_Text_8:
# 275 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Claudia?$"

IcovaleCity_Gym_WrongAnswer_Text_9:
# 280 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "CLAUDIA!$"

IcovaleCity_Gym_WrongAnswer_Text_10:
# 284 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh my gosh!\p"
	.string "Like, I'm so sorry!\p"
	.string "I had my headphones on!$"

IcovaleCity_Gym_WrongAnswer_Text_11:
# 288 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I can see that…\p"
	.string "Can you tell {PLAYER} the correct\n"
	.string "answer to the question?$"

IcovaleCity_Gym_WrongAnswer_Text_12:
# 292 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sure!\p"
	.string "Um…\n"
	.string "……\p"
	.string "…What was the question again?$"

IcovaleCity_Gym_WrongAnswer_Text_13:
# 296 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, for the love of…!$"

IcovaleCity_Gym_WrongAnswer_Text_14:
# 300 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is San Torendo,\n"
	.string "{PLAYER}.$"

IcovaleCity_Gym_WrongAnswer_Text_15:
# 304 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just please battle {PLAYER}, Claudia.$"

IcovaleCity_Gym_WrongAnswer_Text_16:
# 308 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Like, sure!$"

IcovaleCity_Gym_WrongAnswer_Text_17:
# 314 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Claudia.$"

IcovaleCity_Gym_WrongAnswer_Text_18:
# 319 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "This was a tricky one.\p"
	.string "Kai, come to the front and tell everyone\n"
	.string "the correct answer!$"

IcovaleCity_Gym_WrongAnswer_Text_19:
# 323 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Okay!$"

IcovaleCity_Gym_WrongAnswer_Text_20:
# 327 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is…\p"
	.string "…Kubfu!\p"
	.string "Because it evolves through a special\n"
	.string "event!$"

IcovaleCity_Gym_WrongAnswer_Text_21:
# 331 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What!?\p"
	.string "No!\p"
	.string "That's not right!$"

IcovaleCity_Gym_WrongAnswer_Text_22:
# 335 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Woah, really?\p"
	.string "I thought for sure it had to be Kubfu…$"

IcovaleCity_Gym_WrongAnswer_Text_23:
# 339 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh, Kai…\p"
	.string "We literally just learned about this\n"
	.string "last class…\p"
	.string "Just…\n"
	.string "……pick a different answer.$"

IcovaleCity_Gym_WrongAnswer_Text_24:
# 343 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hm…\p"
	.string "…Okay!\n"
	.string "I got it!\p"
	.string "It has to be…\p"
	.string "…Cosmoem!\p"
	.string "Because it's a special legendary\n"
	.string "Pokémon!$"

IcovaleCity_Gym_WrongAnswer_Text_25:
# 347 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's…\p"
	.string "…That's also incorrect.\p"
	.string "50/50 chance here, Kai.\p"
	.string "Haunter or Kadabra.$"

IcovaleCity_Gym_WrongAnswer_Text_26:
# 351 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Woah, no way!?\p"
	.string "It can't be only one of them! They're\n"
	.string "both trade evolutions!\p"
	.string "Gee, if I had to pick one of them, it\n"
	.string "would have to be…$"

IcovaleCity_Gym_WrongAnswer_Text_27:
# 354 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Haunter!\p"
	.string "Because its ghost body isn't able to\n"
	.string "actually hold anything!$"

IcovaleCity_Gym_WrongAnswer_Text_28:
# 358 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Kadabra.\p"
	.string "Kadabra was the right answer.$"

IcovaleCity_Gym_WrongAnswer_Text_29:
# 362 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh…\p"
	.string "…that actually makes sense!\p"
	.string "Kadabra holds a spoon in his right hand\n"
	.string "because he's right handed!\p"
	.string "So he probably uses his telekinesis to\n"
	.string "hold the everstone with his\l"
	.string "non-dominant left hand…\p"
	.string "…which turns it into a float stone!$"

IcovaleCity_Gym_WrongAnswer_Text_30:
# 367 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh, sure Kai.\p"
	.string "Can you battle {PLAYER}, please?$"

IcovaleCity_Gym_WrongAnswer_Text_31:
# 371 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yep!$"

IcovaleCity_Gym_WrongAnswer_Text_32:
# 375 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Hi-yah!\p"
	.string "Here comes super Kai!$"

IcovaleCity_Gym_WrongAnswer_Text_33:
# 377 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Kai.$"

IcovaleCity_Gym_WrongAnswer_Text_34:
# 382 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "……Screwball.\p"
	.string "Can you come to the front and answer\n"
	.string "the question?$"

IcovaleCity_Gym_WrongAnswer_Text_35:
# 386 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Sure.\p"
	.string "But first…$"

IcovaleCity_Gym_WrongAnswer_Text_36:
# 390 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "How about a snake balloon, kid?$"

IcovaleCity_Gym_WrongAnswer_Text_37:
# 395 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "No!\p"
	.string "No, more snake balloons!$"

IcovaleCity_Gym_WrongAnswer_Text_38:
# 399 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "…Especially after last time.$"

IcovaleCity_Gym_WrongAnswer_Text_39:
# 403 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just answer the question, Screwball.$"

IcovaleCity_Gym_WrongAnswer_Text_40:
# 407 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Fine, the correct answer is AlgoTech.$"

IcovaleCity_Gym_WrongAnswer_Text_41:
# 409 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You can go sit down now, Screwball.$"

IcovaleCity_Gym_WrongAnswer_Text_42:
# 418 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Of course.$"

IcovaleCity_Gym_WrongAnswer_Text_43:
# 422 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is 6.$"

IcovaleCity_Gym_WrongAnswer_Text_44:
# 425 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Y'know, the number that comes after 5,\n"
	.string "but before 7?\p"
	.string "Hmph, you complete imbecile.$"

IcovaleCity_Gym_WrongAnswer_Text_45:
# 448 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh my gosh!\p"
	.string "Like, I'm so sorry!\p"
	.string "My favorite song was playing!$"

IcovaleCity_Gym_WrongAnswer_Text_46:
# 452 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "That's great…\p"
	.string "Can you tell {PLAYER} the correct\n"
	.string "answer to the question?$"

IcovaleCity_Gym_WrongAnswer_Text_47:
# 456 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yeah, no sweat!\p"
	.string "Um…\n"
	.string "……\p"
	.string "…What was the question again?$"

IcovaleCity_Gym_WrongAnswer_Text_48:
# 460 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "I don't get paid enough for this…!$"

IcovaleCity_Gym_WrongAnswer_Text_49:
# 464 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "The correct answer is Icovale,\n"
	.string "{PLAYER}.$"

IcovaleCity_Gym_WrongAnswer_Text_50:
# 472 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Yeah, whatevs!$"

IcovaleCity_Gym_WrongAnswer_Text_51:
# 483 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Kai, can you come to the front of the\n"
	.string "class and tell {PLAYER} the correct\l"
	.string "answer?$"

IcovaleCity_Gym_WrongAnswer_Text_52:
# 487 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Uh-huh!$"

IcovaleCity_Gym_WrongAnswer_Text_53:
# 491 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Like people, a bear can shit wherever it\n"
	.string "so pleases!$"

IcovaleCity_Gym_WrongAnswer_Text_54:
# 494 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "What?\p"
	.string "No!\p"
	.string "This question is only asked in response\n"
	.string "to a question with an emphatic yes!\p"
	.string "It's supposed to be obvious that, yes, a\n"
	.string "bear does in fact shit in the woods\l"
	.string "because that's where it lives!$"

IcovaleCity_Gym_WrongAnswer_Text_55:
# 498 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Oh!!\p"
	.string "……\n"
	.string "……\p"
	.string "…I don't get it.$"

IcovaleCity_Gym_WrongAnswer_Text_56:
# 502 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Just battle {PLAYER}, Kai.$"

IcovaleCity_Gym_WrongAnswer_Text_57:
# 506 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "You got it!$"

IcovaleCity_Gym_WrongAnswer_Text_58:
# 510 "data/maps/IcovaleCity_Gym/scripts.pory"
	.string "Time to show you my dedotated wam!$"
