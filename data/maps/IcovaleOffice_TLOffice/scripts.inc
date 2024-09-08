IcovaleOffice_TLOffice_MapScripts::
# 5 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 1
	goto_if_gt IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	hideobjectat 4, MAP_ICOVALE_OFFICE_TLOFFICE
	return

IcovaleOffice_TLOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	map_script_2 VAR_ICOVALE_CITY_STATE, 1, IcovaleOffice_TLOffice_OnFrame
	.2byte 0


IcovaleOffice_TLOffice_OnFrame::
# 16 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	lock
# 17 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 30
# 18 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	fadeoutbgm 1
# 19 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	special SpawnCameraObject
# 20 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleOffice_TLOffice_PanUp
# 21 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 22 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, 0
# 23 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 24 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 25 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 27 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 28 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 29 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 31 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 34 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 35 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 36 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_3, MSGBOX_DEFAULT
# 40 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 41 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 42 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 43 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_4, MSGBOX_DEFAULT
# 48 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 49 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 50 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 51 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_5, MSGBOX_DEFAULT
# 54 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 55 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playse SE_M_METRONOME
# 56 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 57 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitse
# 58 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, IcovaleOffice_TLOffice_ProfWalkLeftTwiceFaceUp
# 59 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 60 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_6, MSGBOX_DEFAULT
# 62 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 63 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, IcovaleOffice_TLOffice_ProfWalkRightTwiceFaceUp
# 64 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 65 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_7, MSGBOX_DEFAULT
# 66 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 67 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 30
# 68 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_8, MSGBOX_DEFAULT
# 69 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 70 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 71 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, IcovaleOffice_TLOffice_ProfWalkLeftTwiceFaceUp
# 72 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 73 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_9, MSGBOX_DEFAULT
# 75 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 76 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 77 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleOffice_TLOffice_PanDown
# 78 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, IcovaleOffice_TLOffice_ProfessorWalkDown
# 79 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 80 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playse SE_PIN
# 81 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitse
# 82 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 83 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	fadeoutbgm 0
# 85 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_10, MSGBOX_DEFAULT
# 86 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 87 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 88 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_11, MSGBOX_DEFAULT
# 89 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 90 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 91 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 92 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 93 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_12, MSGBOX_DEFAULT
# 95 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 96 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 97 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 98 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 99 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_11, MSGBOX_DEFAULT
# 100 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 101 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 102 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 103 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 104 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_13, MSGBOX_DEFAULT
# 106 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 107 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playse SE_M_METRONOME
# 108 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 109 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 0
# 110 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitse
# 111 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 30
# 112 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OnFrame_Text_14, MSGBOX_DEFAULT
# 116 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 117 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 4, IcovaleOffice_TLOffice_ProfessorExits
# 118 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 4
# 119 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	removeobject 4
# 120 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 30
# 122 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	playbgm MUS_GSC_PEWTER, 1
# 123 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	setvar VAR_ICOVALE_CITY_STATE, 2
# 124 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	release
	return


# 127 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_PanUp:
# 128 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_slow_diag_northwest
# 129 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_slow_up
# 130 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

# 133 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_ProfWalkLeftTwiceFaceUp:
# 134 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_left
# 134 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_left
# 135 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	face_up
# 136 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

# 139 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_ProfWalkRightTwiceFaceUp:
# 140 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 140 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 140 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 140 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 141 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	face_up
# 142 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

# 145 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_PanDown:
# 146 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_diag_southeast
# 147 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_down
# 148 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

# 151 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_ProfessorWalkDown:
# 152 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 153 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_down
# 154 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	emote_exclamation_mark
# 155 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

# 158 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
IcovaleOffice_TLOffice_ProfessorExits:
# 159 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_right
# 160 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	walk_down
# 161 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	step_end

IcovaleOffice_TLOffice_OldWomanBoardroom::
# 165 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OldWomanBoardroom_Text_0, MSGBOX_NPC
	return


IcovaleOffice_TLOffice_SmugGuyLeft::
# 170 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	lock
# 171 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 172 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 1
# 173 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 174 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_SmugGuyLeft_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	release
	return


IcovaleOffice_TLOffice_PresidentBoardroom::
# 179 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_PresidentBoardroom_Text_0, MSGBOX_NPC
	return


IcovaleOffice_TLOffice_OldManRight::
# 185 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_OldManRight_Text_0, MSGBOX_NPC
	return


IcovaleOffice_TLOffice_WomanRight::
# 190 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	lock
# 191 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 192 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	waitmovement 6
# 193 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 194 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_WomanRight_Text_0, MSGBOX_DEFAULT
# 195 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	closemessage
# 196 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	delay 20
# 197 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	msgbox IcovaleOffice_TLOffice_WomanRight_Text_1, MSGBOX_NPC
	return


IcovaleOffice_TLOffice_OnFrame_Text_0:
# 25 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: This is an outrage! I\n"
	.string "won't let this happen!\p"
	.string "I…\n"
	.string "…I can't!$"

IcovaleOffice_TLOffice_OnFrame_Text_1:
# 29 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Look, Michael, as I've alr-$"

IcovaleOffice_TLOffice_OnFrame_Text_2:
# 32 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: It's Professor Sequoia\n"
	.string "to you.$"

IcovaleOffice_TLOffice_OnFrame_Text_3:
# 36 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "R-Right, Professor Sequoia…\p"
	.string "This meeting…\p"
	.string "It's a mere formality.\p"
	.string "As you are the gym leader of Icovale, we\n"
	.string "thought it would be appropriate to\l"
	.string "inform you that the company is being\l"
	.string "absorbed.\p"
	.string "Your reaction is truly…unfortunate.$"

IcovaleOffice_TLOffice_OnFrame_Text_4:
# 43 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: Now, now!\p"
	.string "You KNOW that's not the reason why I'm\n"
	.string "upset!\p"
	.string "That conglomerate…moving into my\n"
	.string "hometown…next to my gym…\p"
	.string "My lab is in the next town over!\n"
	.string "You…\p"
	.string "You can't just let them do this!$"

IcovaleOffice_TLOffice_OnFrame_Text_5:
# 51 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia, the signs that they were\n"
	.string "moving here have been present for a\l"
	.string "long time now. Why do you think they\l"
	.string "helped pay for all of these building\l"
	.string "rennovations?\p"
	.string "Besides, it's not all bad.\n"
	.string "The quality of life has significantly\l"
	.string "improved, don't you agree?$"

IcovaleOffice_TLOffice_OnFrame_Text_6:
# 60 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: So…\n"
	.string "……\p"
	.string "No one else in this room is gonna stand\n"
	.string "up against these fiends?$"

IcovaleOffice_TLOffice_OnFrame_Text_7:
# 65 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: Not a SINGLE person!?$"

IcovaleOffice_TLOffice_OnFrame_Text_8:
# 68 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "………\n"
	.string "………$"

IcovaleOffice_TLOffice_OnFrame_Text_9:
# 73 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: …\n"
	.string "Fine…\p"
	.string "I…\n"
	.string "…I need to go clear my head…$"

IcovaleOffice_TLOffice_OnFrame_Text_10:
# 85 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: Oh! {PLAYER}…$"

IcovaleOffice_TLOffice_OnFrame_Text_11:
# 88 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "……$"

IcovaleOffice_TLOffice_OnFrame_Text_12:
# 93 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: Sorry, you had to see me\n"
	.string "like that.\p"
	.string "…Surprise…\n"
	.string "…I'm the gym leader…$"

IcovaleOffice_TLOffice_OnFrame_Text_13:
# 104 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: H-Have you checked out\n"
	.string "that Trainer School yet?\p"
	.string "I-It'll probably help you prepare for\n"
	.string "your gym battle!$"

IcovaleOffice_TLOffice_OnFrame_Text_14:
# 112 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Prof. Sequoia: …Look…\n"
	.string "…This isn't really something I want to\l"
	.string "involve you in. No good can come of it…\p"
	.string "……\p"
	.string "…Something terrible is coming to\n"
	.string "Icovale…\p"
	.string "…I'm going to Lake Serenity to calm\n"
	.string "down. It connects to Route 2, which is\l"
	.string "east of Icovale. If you meet me there,\l"
	.string "maybe I'll explain what's going on.\p"
	.string "See you there, {PLAYER}.\n"
	.string "Be careful.$"

IcovaleOffice_TLOffice_OldWomanBoardroom_Text_0:
# 165 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Between you and me, the professor is\n"
	.string "right.\p"
	.string "I have the least authority in this room\n"
	.string "though, and, even if I was the\l"
	.string "president, it's too late to go back now.$"

IcovaleOffice_TLOffice_SmugGuyLeft_Text_0:
# 174 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "This is nonsense. What's good for the\n"
	.string "company is good for the consumer!$"

IcovaleOffice_TLOffice_PresidentBoardroom_Text_0:
# 179 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Erm…\n"
	.string "Welcome to the Icovale Offices\l"
	.string "boardroom…\p"
	.string "…How did you get up here?$"

IcovaleOffice_TLOffice_OldManRight_Text_0:
# 185 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "Eh…\n"
	.string "Who knows how many years I've got left\l"
	.string "anyway?\p"
	.string "Might as well live them with my pockets\n"
	.string "filled.$"

IcovaleOffice_TLOffice_WomanRight_Text_0:
# 194 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "You handled that brilliantly, sir!\n"
	.string "There's no doubt this company takeover\l"
	.string "was a great idea!$"

IcovaleOffice_TLOffice_WomanRight_Text_1:
# 197 "data/maps/IcovaleOffice_TLOffice/scripts.pory"
	.string "……\n"
	.string "……\p"
	.string "We're doomed.$"
