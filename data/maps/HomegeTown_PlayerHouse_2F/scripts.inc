# 1 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 2 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_MapScripts::
# 3 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	.byte 0
# 4 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 5 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_WallClock::
# 6 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	lockall
# 7 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_0x8004, MALE
# 8 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, HomegeTown_PlayerHouse_2F_EventScript_CheckWallClock
# 9 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 10 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	call HomegeTown_PlayerHouse_2F_EventScript_SetWallClock
# 11 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	delay 30
# 12 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 1
# 13 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 14 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 15 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 16 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 17 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSet::
# 18 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	lockall
# 19 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_2F_Text_WallClockNotSet, MSGBOX_DEFAULT
# 20 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 21 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 22 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	case DIR_EAST, HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingRight
# 24 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	case DIR_WEST, HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingLeft
# 25 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	case DIR_NORTH, HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingUp
# 26 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 27 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 28 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 29 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingRight::
# 30 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerLeft
# 31 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 33 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 34 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingLeft::
# 35 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerRight
# 36 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 38 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 39 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_WallClockNotSetFacingUp::
# 40 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerDown
# 41 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 43 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 44 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_SetWallClock:: 
# 45 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	special StartWallClock
# 47 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	waitstate
# 48 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	return
# 49 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 50 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_EventScript_CheckWallClock:: 
# 51 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 52 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 54 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	waitstate
# 55 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	releaseall
# 56 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	end
# 57 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 58 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerLeft:
# 59 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 60 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	step_end
# 61 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 62 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerRight:
# 63 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 64 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	step_end
# 65 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 66 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_Movement_ClockNotSetPushPlayerDown:
# 67 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 68 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	step_end
# 69 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 70 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_Text_ClockIsStopped:
# 71 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 72 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 73 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"

# 74 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
HomegeTown_PlayerHouse_2F_Text_WallClockNotSet: 
# 75 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	.string "I should probably set my wall clock\n"
# 76 "data/maps/HomegeTown_PlayerHouse_2F/scripts.pory"
	.string "before going downstairs.$"
