IcovaleCity_Mart_MapScripts::
# 5 "data/maps/IcovaleCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IcovaleCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IcovaleCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/IcovaleCity_Mart/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IcovaleCity_Mart_OnFrame
	.2byte 0


IcovaleCity_Mart_OnFrame::
# 11 "data/maps/IcovaleCity_Mart/scripts.pory"
	goto_if_unset FLAG_VISITED_POKEMART, IcovaleCity_Mart_OnFrame_1
# 28 "data/maps/IcovaleCity_Mart/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

IcovaleCity_Mart_OnFrame_1:
# 12 "data/maps/IcovaleCity_Mart/scripts.pory"
	lock
# 13 "data/maps/IcovaleCity_Mart/scripts.pory"
	delay 20
# 14 "data/maps/IcovaleCity_Mart/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/IcovaleCity_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Mart_PanUp
# 16 "data/maps/IcovaleCity_Mart/scripts.pory"
	waitmovement 0
# 17 "data/maps/IcovaleCity_Mart/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 18 "data/maps/IcovaleCity_Mart/scripts.pory"
	waitmovement 0
# 19 "data/maps/IcovaleCity_Mart/scripts.pory"
	msgbox IcovaleCity_Mart_OnFrame_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/IcovaleCity_Mart/scripts.pory"
	closemessage
# 22 "data/maps/IcovaleCity_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IcovaleCity_Mart_PanDown
# 23 "data/maps/IcovaleCity_Mart/scripts.pory"
	waitmovement 0
# 24 "data/maps/IcovaleCity_Mart/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/IcovaleCity_Mart/scripts.pory"
	setflag FLAG_VISITED_POKEMART
# 26 "data/maps/IcovaleCity_Mart/scripts.pory"
	release
	return


IcovaleCity_Mart_Clerk::
# 33 "data/maps/IcovaleCity_Mart/scripts.pory"
	lock
# 34 "data/maps/IcovaleCity_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/IcovaleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 36 "data/maps/IcovaleCity_Mart/scripts.pory"
	waitmessage
# 37 "data/maps/IcovaleCity_Mart/scripts.pory"
	pokemart IcovaleCity_Mart_Items
# 38 "data/maps/IcovaleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/IcovaleCity_Mart/scripts.pory"
	release
	return


IcovaleCity_Mart_Karen::
# 42 "data/maps/IcovaleCity_Mart/scripts.pory"
	lock
# 43 "data/maps/IcovaleCity_Mart/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 44 "data/maps/IcovaleCity_Mart/scripts.pory"
	waitmovement 0
# 45 "data/maps/IcovaleCity_Mart/scripts.pory"
	msgbox IcovaleCity_Mart_Karen_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/IcovaleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 50 "data/maps/IcovaleCity_Mart/scripts.pory"
IcovaleCity_Mart_Items:
# 51 "data/maps/IcovaleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 52 "data/maps/IcovaleCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 53 "data/maps/IcovaleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 54 "data/maps/IcovaleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 55 "data/maps/IcovaleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

# 58 "data/maps/IcovaleCity_Mart/scripts.pory"
IcovaleCity_Mart_PanUp:
# 59 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_up
# 59 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_up
# 59 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/IcovaleCity_Mart/scripts.pory"
IcovaleCity_Mart_PanDown:
# 63 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_down
# 63 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_down
# 63 "data/maps/IcovaleCity_Mart/scripts.pory"
	walk_down
	step_end

IcovaleCity_Mart_OnFrame_Text_0:
# 19 "data/maps/IcovaleCity_Mart/scripts.pory"
	.string "Lamp oil, rope, bombs?\p"
	.string "You want it? It's yours, my friend.\n"
	.string "As long as you have enough rupees.$"

IcovaleCity_Mart_Karen_Text_0:
# 45 "data/maps/IcovaleCity_Mart/scripts.pory"
	.string "What do you mean you don't sell any\n"
	.string "Ultra balls?\p"
	.string "I'd like to speak to your manager.$"
