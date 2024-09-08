IcovaleOffice_1F_MapScripts::
# 2 "data/maps/IcovaleOffice_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IcovaleOffice_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IcovaleOffice_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/IcovaleOffice_1F/scripts.pory"
	map_script_2 VAR_ICOVALE_CITY_STATE, 0, IcovaleOffice_1F_OnFrame
	.2byte 0


IcovaleOffice_1F_OnFrame::
# 12 "data/maps/IcovaleOffice_1F/scripts.pory"
	lock
# 13 "data/maps/IcovaleOffice_1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleOffice_PersonSurprisesFromLeft
# 15 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 1, IcovaleOffice_PersonSurprisesFromLeft
# 16 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 7, IcovaleOffice_PersonSurprisesFromLeft
# 17 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_1F_OnFrame_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 7, IcovaleOffice_OldWomanWatchesFatMan
# 20 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 1, IcovaleOffice_GreeterWatchesFatMan
# 21 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleOffice_PlayerWatchesFatMan
# 22 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 6, IcovaleOffice_FatManWalksFromLeft
# 23 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 6
# 24 "data/maps/IcovaleOffice_1F/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleOffice_PanUp
# 26 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_1F_OnFrame_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleOffice_PanDown
# 30 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 31 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 32 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 6
# 33 "data/maps/IcovaleOffice_1F/scripts.pory"
	special RemoveCameraObject
# 34 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_1F_OnFrame_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/IcovaleOffice_1F/scripts.pory"
	giveitem ITEM_METRONOME
# 36 "data/maps/IcovaleOffice_1F/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, IcovaleOffice_1F_MetronomeBagIsFull
# 37 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_1F_OnFrame_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleOffice_PlayerMovesAwayFromEntrance
# 39 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 41 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/IcovaleOffice_1F/scripts.pory"
	removeobject 6
# 43 "data/maps/IcovaleOffice_1F/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/IcovaleOffice_1F/scripts.pory"
	setflag FLAG_RECEIVED_METRONOME_FAT_MAN
# 45 "data/maps/IcovaleOffice_1F/scripts.pory"
	setvar VAR_ICOVALE_CITY_STATE, 1
# 46 "data/maps/IcovaleOffice_1F/scripts.pory"
	release
	end


IcovaleOffice_1F_MetronomeBagIsFull::
# 51 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_1F_MetronomeBagIsFull_Text_0, MSGBOX_DEFAULT
	return


# 55 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_OldWomanWatchesFatMan:
# 56 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 56 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 57 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_down
# 58 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 59 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_right
# 60 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 63 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_GreeterWatchesFatMan:
# 64 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 64 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 64 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 64 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 65 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_down
# 66 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 69 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_PlayerWatchesFatMan:
# 70 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 70 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 70 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 70 "data/maps/IcovaleOffice_1F/scripts.pory"
	delay_16
# 71 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_up
# 72 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 75 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_FatManWalksFromLeft:
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 76 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_right
# 77 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_up
# 78 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 81 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_PlayerMovesAwayFromEntrance:
# 82 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_right
# 83 "data/maps/IcovaleOffice_1F/scripts.pory"
	lock_facing_direction
# 84 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_left
# 85 "data/maps/IcovaleOffice_1F/scripts.pory"
	unlock_facing_direction
# 86 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 89 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_PanUp:
# 90 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_up
# 91 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_up
# 92 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 95 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_PanDown:
# 96 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_fast_down
# 97 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_fast_down
# 98 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

IcovaleOffice_UnpleasantGreeter::
# 102 "data/maps/IcovaleOffice_1F/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq IcovaleOffice_UnpleasantGreeter_1
# 105 "data/maps/IcovaleOffice_1F/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq IcovaleOffice_UnpleasantGreeter_2
# 109 "data/maps/IcovaleOffice_1F/scripts.pory"
	addvar VAR_TEMP_0, 1
# 110 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_UnpleasantGreeter_Text_2, MSGBOX_NPC
	return

IcovaleOffice_UnpleasantGreeter_1:
# 103 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_UnpleasantGreeter_Text_0, MSGBOX_NPC
	return

IcovaleOffice_UnpleasantGreeter_2:
# 106 "data/maps/IcovaleOffice_1F/scripts.pory"
	addvar VAR_TEMP_0, 1
# 107 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_UnpleasantGreeter_Text_1, MSGBOX_NPC
	return


IcovaleOffice_GreeterStopsPlayer::
# 115 "data/maps/IcovaleOffice_1F/scripts.pory"
	lock
# 116 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 117 "data/maps/IcovaleOffice_1F/scripts.pory"
	playse SE_PIN
# 118 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleOffice_PersonSurprisesFromLeft
# 119 "data/maps/IcovaleOffice_1F/scripts.pory"
	checkplayergender
# 120 "data/maps/IcovaleOffice_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleOffice_GreeterStopsPlayer_2
# 124 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_GreeterStopsPlayer_Text_1, MSGBOX_DEFAULT
IcovaleOffice_GreeterStopsPlayer_1:
# 126 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IcovaleOffice_MoveAwayFromOfficeCounter
# 127 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_GreeterStopsPlayer_Text_2, MSGBOX_DEFAULT
# 129 "data/maps/IcovaleOffice_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 130 "data/maps/IcovaleOffice_1F/scripts.pory"
	waitmovement 0
# 131 "data/maps/IcovaleOffice_1F/scripts.pory"
	release
	end

IcovaleOffice_GreeterStopsPlayer_2:
# 121 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_GreeterStopsPlayer_Text_0, MSGBOX_DEFAULT
	goto IcovaleOffice_GreeterStopsPlayer_1


IcovaleOffice_OldWomanFatGuy::
# 137 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_OldWomanFatGuy_Text_0, MSGBOX_NPC
	return


IcovaleOffice_OldManThirtyYears::
# 144 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_OldManThirtyYears_Text_0, MSGBOX_NPC
	return


IcovaleOffice_NerdyGuy::
# 149 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_NerdyGuy_Text_0, MSGBOX_NPC
	return


IcovaleOffice_PCWoman::
# 154 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_PCWoman_Text_0, MSGBOX_NPC
	return


IcovaleOffice_SnoozingGuard::
# 160 "data/maps/IcovaleOffice_1F/scripts.pory"
	lock
# 161 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_SnoozingGuard_Text_0, MSGBOX_DEFAULT
# 163 "data/maps/IcovaleOffice_1F/scripts.pory"
	release
	return


IcovaleOffice_PaperOnTable::
# 167 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_PaperOnTable_Text_0, MSGBOX_SIGN
	return


IcovaleOffice_ManOnBreak::
# 171 "data/maps/IcovaleOffice_1F/scripts.pory"
	msgbox IcovaleOffice_ManOnBreak_Text_0, MSGBOX_NPC
	return


# 175 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_PersonSurprisesFromLeft:
# 176 "data/maps/IcovaleOffice_1F/scripts.pory"
	emote_exclamation_mark
# 177 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_left
# 178 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

# 181 "data/maps/IcovaleOffice_1F/scripts.pory"
IcovaleOffice_MoveAwayFromOfficeCounter:
# 182 "data/maps/IcovaleOffice_1F/scripts.pory"
	face_up
# 183 "data/maps/IcovaleOffice_1F/scripts.pory"
	lock_facing_direction
# 184 "data/maps/IcovaleOffice_1F/scripts.pory"
	walk_down
# 185 "data/maps/IcovaleOffice_1F/scripts.pory"
	unlock_facing_direction
# 186 "data/maps/IcovaleOffice_1F/scripts.pory"
	step_end

IcovaleOffice_1F_OnFrame_Text_0:
# 17 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "???: I CAN'T DO THIS ANYMORE!\n"
	.string "I QUIT!$"

IcovaleOffice_1F_OnFrame_Text_1:
# 27 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "I don't care about this company\n"
	.string "anymore!\p"
	.string "I will go on without you lethargic cum\n"
	.string "hamsters. It will die and it will be\l"
	.string "because of me!$"

IcovaleOffice_1F_OnFrame_Text_2:
# 34 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "What do YOU want?\n"
	.string "Are you here for a job?\p"
	.string "…You're gonna want this to stay sane. I\n"
	.string "don't need it anymore.$"

IcovaleOffice_1F_OnFrame_Text_3:
# 37 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Now get out of my way.\n"
	.string "I've got people I have to pretend to be.$"

IcovaleOffice_1F_MetronomeBagIsFull_Text_0:
# 51 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Oh?\n"
	.string "What's that?\p"
	.string "Your bag is full?\n"
	.string "Ha…like that's my problem!$"

IcovaleOffice_UnpleasantGreeter_Text_0:
# 103 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Please stop talking to me.\n"
	.string "I don't actually want to help you.$"

IcovaleOffice_UnpleasantGreeter_Text_1:
# 107 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "…$"

IcovaleOffice_UnpleasantGreeter_Text_2:
# 110 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Welcome to Icovale Offices!\p"
	.string "Let me know if I can help you with\n"
	.string "anything!$"

IcovaleOffice_GreeterStopsPlayer_Text_0:
# 121 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Sir, please step back.\p"
	.string "You're not allowed back here.$"

IcovaleOffice_GreeterStopsPlayer_Text_1:
# 124 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Miss, please step back.\p"
	.string "You're not allowed back here.$"

IcovaleOffice_GreeterStopsPlayer_Text_2:
# 128 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Thank you for your understanding.\p"
	.string "Now, move along.$"

IcovaleOffice_OldWomanFatGuy_Text_0:
# 137 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "That large man that stormed out of\n"
	.string "here?\p"
	.string "None of us know his real name.\n"
	.string "Every time he arrived, he would\l"
	.string "introduce himself as someone else.\p"
	.string "What a weirdo.$"

IcovaleOffice_OldManThirtyYears_Text_0:
# 144 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "In just a few weeks, I'll have worked\n"
	.string "here for 30 years.\p"
	.string "All of these young-uns come and go.\n"
	.string "Where's their company loyalty?$"

IcovaleOffice_NerdyGuy_Text_0:
# 149 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "I thought I was going to be working on\n"
	.string "some cool engineering projects when I\l"
	.string "applied for this job.\p"
	.string "Instead, I'm just punching numbers into\n"
	.string "a spreadsheet.$"

IcovaleOffice_PCWoman_Text_0:
# 154 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "The locals keep complaining about how\n"
	.string "nice and new everything is. Says we\l"
	.string "ruined their “livelihood” or something.\p"
	.string "What do they have to complain for?\p"
	.string "Their houses were also renovated and\n"
	.string "are much nicer now.$"

IcovaleOffice_SnoozingGuard_Text_0:
# 161 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Zzzzz…zzz…\p"
	.string "This guard seems to have fallen asleep.$"

IcovaleOffice_PaperOnTable_Text_0:
# 167 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "It appears to be an outline for some\n"
	.string "sort of ad campaign.$"

IcovaleOffice_ManOnBreak_Text_0:
# 171 "data/maps/IcovaleOffice_1F/scripts.pory"
	.string "Can't you see I'm on break!?\p"
	.string "Scram!$"
