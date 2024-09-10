IcovaleCity_TrainerSchool_MapScripts::
	.byte 0


IcovaleCity_TrainerSchool_RivalBully::
# 9 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	goto_if_set FLAG_TEMP_1, IcovaleCity_TrainerSchool_RivalBully_1
# 15 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	lock
# 16 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 17 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 18 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	closemessage
# 20 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 21 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 22 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_2
# 23 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 24 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 25 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	switch VAR_STARTER_MON
# 26 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	case 0, IcovaleCity_TrainerSchool_RivalBully_6
# 29 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	case 1, IcovaleCity_TrainerSchool_RivalBully_7
# 32 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	case 2, IcovaleCity_TrainerSchool_RivalBully_8
IcovaleCity_TrainerSchool_RivalBully_4:
# 36 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 37 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 38 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_6, MSGBOX_DEFAULT
# 39 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	closemessage
# 40 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 41 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 42 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_7, MSGBOX_DEFAULT
# 44 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	closemessage
# 45 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 46 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 47 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_8, MSGBOX_DEFAULT
# 48 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	closemessage
# 49 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 50 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	waitmovement 0
# 51 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_9, MSGBOX_DEFAULT
# 54 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	closemessage
# 55 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	setflag FLAG_TEMP_1
# 56 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	release
	end

IcovaleCity_TrainerSchool_RivalBully_1:
# 10 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	lock
# 11 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	release
	end

IcovaleCity_TrainerSchool_RivalBully_6:
# 27 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_3, MSGBOX_DEFAULT
	goto IcovaleCity_TrainerSchool_RivalBully_4

IcovaleCity_TrainerSchool_RivalBully_7:
# 30 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_4, MSGBOX_DEFAULT
	goto IcovaleCity_TrainerSchool_RivalBully_4

IcovaleCity_TrainerSchool_RivalBully_8:
# 33 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_RivalBully_Text_5, MSGBOX_DEFAULT
	goto IcovaleCity_TrainerSchool_RivalBully_4


IcovaleCity_TrainerSchool_FavoritePokemon::
# 62 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_FavoritePokemon_Text_0, MSGBOX_NPC
	return


IcovaleCity_TrainerSchool_ArceusZacian::
# 67 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_ArceusZacian_Text_0, MSGBOX_NPC
	return


IcovaleCity_TrainerSchool_KyogreGroudon::
# 72 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	checkplayergender
# 73 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleCity_TrainerSchool_KyogreGroudon_1
# 77 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_KyogreGroudon_Text_1, MSGBOX_NPC
	return

IcovaleCity_TrainerSchool_KyogreGroudon_1:
# 74 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_KyogreGroudon_Text_0, MSGBOX_NPC
	return


IcovaleCity_TrainerSchool_OtherRegions::
# 83 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	msgbox IcovaleCity_TrainerSchool_OtherRegions_Text_0, MSGBOX_NPC
	return


IcovaleCity_TrainerSchool_RivalBully_Text_0:
# 11 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "It's best not to intervene.$"

IcovaleCity_TrainerSchool_RivalBully_Text_1:
# 18 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: I just got this sack of\n"
	.string "meat a few hours ago and I'm already\l"
	.string "kicking your ass this much?\p"
	.string "Please.\n"
	.string "Give me your lunch money, kid.$"

IcovaleCity_TrainerSchool_RivalBully_Text_2:
# 22 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "W-Wait!\n"
	.string "I already gave you all my money from our\l"
	.string "battle.\p"
	.string "Don't you want to learn the\n"
	.string "type-matchups?$"

IcovaleCity_TrainerSchool_RivalBully_Text_3:
# 27 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: All I need to know is that\n"
	.string "Fire beats Grass.\p"
	.string "Now, give me that lunch money.$"

IcovaleCity_TrainerSchool_RivalBully_Text_4:
# 30 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: All I need to know is that\n"
	.string "Water beats Fire.\p"
	.string "Now, give me that lunch money.$"

IcovaleCity_TrainerSchool_RivalBully_Text_5:
# 33 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: All I need to know is that\n"
	.string "Grass beats Water.\p"
	.string "Now, give me that lunch money.$"

IcovaleCity_TrainerSchool_RivalBully_Text_6:
# 38 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "I don't have lunch money! I pack my\n"
	.string "lunch!$"

IcovaleCity_TrainerSchool_RivalBully_Text_7:
# 42 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: Well…\p"
	.string "Looks like we have a problem.$"

IcovaleCity_TrainerSchool_RivalBully_Text_8:
# 47 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "Relax, {RIVAL}!\n"
	.string "It was just friendly competition!\p"
	.string "Beginner's luck, I suppose.$"

IcovaleCity_TrainerSchool_RivalBully_Text_9:
# 51 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "{RIVAL}: Luck, luck, luck.\p"
	.string "Everyone I'm battling's gonna need a\n"
	.string "whole lotta luck or whatever to\l"
	.string "actually have a chance.\p"
	.string "Keep making excuses bud. I'm gonna ask\n"
	.string "this for the last time. Give me your\l"
	.string "lunch money, or you'll need luck to find\l"
	.string "out if you're going home or not.$"

IcovaleCity_TrainerSchool_FavoritePokemon_Text_0:
# 62 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "I've heard an Elite Four member from\n"
	.string "Johto say that you must battle with\l"
	.string "your favorites.\p"
	.string "Well, I only like Mega Rayquaza! What\n"
	.string "does that mean?$"

IcovaleCity_TrainerSchool_ArceusZacian_Text_0:
# 67 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "I'm currently studying type charts.\p"
	.string "Why Arceus chose to give the Steel and\n"
	.string "Fairy type to a Pokemon with 150 attack\l"
	.string "is beyond me.$"

IcovaleCity_TrainerSchool_KyogreGroudon_Text_0:
# 74 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "Hey, mister!\n"
	.string "I got a question for ya…\p"
	.string "Who's stronger? Kyogre or Groudon?\p"
	.string "Because the way I see it, Kyogre is\n"
	.string "surrounded. What's under the ocean?\p"
	.string "That's right.\n"
	.string "More earth.$"

IcovaleCity_TrainerSchool_KyogreGroudon_Text_1:
# 77 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "Hey, miss!\n"
	.string "I got a question for ya…\p"
	.string "Who's stronger? Kyogre or Groudon?\p"
	.string "Because the way I see it, Kyogre is\n"
	.string "surrounded. What's under the ocean?\p"
	.string "That's right.\n"
	.string "More earth.$"

IcovaleCity_TrainerSchool_OtherRegions_Text_0:
# 83 "data/maps/IcovaleCity_TrainerSchool/scripts.pory"
	.string "For whatever reason, border patrol bans\n"
	.string "any Pokémon not native to Vidioh from\l"
	.string "coming in.\p"
	.string "They also stop people from bringing\n"
	.string "native Pokémon out of the region.\p"
	.string "Seems rather convenient if you ask me.$"
