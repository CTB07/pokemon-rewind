IcovaleCity_MapScripts::
# 4 "data/maps/IcovaleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IcovaleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IcovaleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/IcovaleCity/scripts.pory"
	goto IcovaleCity_OnTransition
	return


IcovaleCity_OnTransition::
# 10 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 4
	goto_if_ge IcovaleCity_OnTransition_1
	return

IcovaleCity_OnTransition_1:
# 11 "data/maps/IcovaleCity/scripts.pory"
	call IcovaleCity_SetGymGuardPos
	return


IcovaleCity_SetGymGuardPos::
# 16 "data/maps/IcovaleCity/scripts.pory"
	setobjectxyperm 6, 17, 20
	return


IcovaleCity_YoungsterFountain::
# 20 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_YoungsterFountain_Text_0, MSGBOX_NPC
	return


IcovaleCity_MotherFountain::
# 24 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MotherFountain_Text_0, MSGBOX_NPC
	return


IcovaleCity_OldWomanFarmland::
# 29 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_OldWomanFarmland_Text_0, MSGBOX_NPC
	return


IcovaleCity_BusinessMan::
# 33 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_BusinessMan_Text_0, MSGBOX_NPC
	return


IcovaleCity_ArtistBuildings::
# 38 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ArtistBuildings_Text_0, MSGBOX_NPC
	return


IcovaleCity_CitySign::
# 45 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_CitySign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_MattTianaHouseSign::
# 49 "data/maps/IcovaleCity/scripts.pory"
	checkplayergender
# 50 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleCity_MattTianaHouseSign_1
# 54 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MattTianaHouseSign_Text_1, MSGBOX_SIGN
	return

IcovaleCity_MattTianaHouseSign_1:
# 51 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MattTianaHouseSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_ProfHouseSign::
# 59 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ProfHouseSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_ProfHouseLockedSign::
# 63 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ProfHouseLockedSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_OfficeSign::
# 68 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_OfficeSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_GymGuard::
# 72 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 4
	goto_if_gt IcovaleCity_GymGuard_2
IcovaleCity_GymGuard_1:
# 75 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_ICOVALE_CITY_STATE, 1
	goto_if_eq IcovaleCity_GymGuard_4
# 77 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 3
	goto_if_le IcovaleCity_GymGuard_5
	return

IcovaleCity_GymGuard_2:
# 73 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_GymGuard_Text_0, MSGBOX_NPC
	goto IcovaleCity_GymGuard_1

IcovaleCity_GymGuard_4:
# 76 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_GymGuard_Text_1, MSGBOX_NPC
	return

IcovaleCity_GymGuard_5:
# 78 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_GymGuard_Text_2, MSGBOX_NPC
	return


IcovaleCity_YoungsterFountain_Text_0:
# 20 "data/maps/IcovaleCity/scripts.pory"
	.string "I heard from meemaw that there used to\n"
	.string "be a giant Crimbark tree on this very\l"
	.string "spot!$"

IcovaleCity_MotherFountain_Text_0:
# 24 "data/maps/IcovaleCity/scripts.pory"
	.string "Mother told me as well that when they\n"
	.string "cut down the tree, it was enough to\l"
	.string "supply the wood for all the houses here\l"
	.string "back then!\p"
	.string "Back when the houses here were made of\n"
	.string "wood that is...$"

IcovaleCity_OldWomanFarmland_Text_0:
# 29 "data/maps/IcovaleCity/scripts.pory"
	.string "Things have changed around here. This\n"
	.string "was all farmland as far as the eye could\l"
	.string "see back then.$"

IcovaleCity_BusinessMan_Text_0:
# 33 "data/maps/IcovaleCity/scripts.pory"
	.string "Icovale has developed a lot over the\n"
	.string "years. Some of the old residents here\l"
	.string "disdain it though. It seems more plastic\l"
	.string "they say.\p"
	.string "I'm not sure what they're talking about!$"

IcovaleCity_ArtistBuildings_Text_0:
# 38 "data/maps/IcovaleCity/scripts.pory"
	.string "I'm not sure how to feel about the more\n"
	.string "modern style that Icovale has\l"
	.string "developed.\p"
	.string "As an artist, I say we should protect\n"
	.string "our past, our relics of a time not so\l"
	.string "long ago…\p"
	.string "…but as an ARTIST…\n"
	.string "I say we should knock down some more\l"
	.string "buildings to see what we can paint.\p"
	.string "…\p"
	.string "There are two artists inside of me, and\n"
	.string "I can't control either of them.$"

IcovaleCity_CitySign_Text_0:
# 45 "data/maps/IcovaleCity/scripts.pory"
	.string "ICOVALE CITY\n"
	.string "“A new era of Vidioh!”$"

IcovaleCity_MattTianaHouseSign_Text_0:
# 51 "data/maps/IcovaleCity/scripts.pory"
	.string "Tiana's House$"

IcovaleCity_MattTianaHouseSign_Text_1:
# 54 "data/maps/IcovaleCity/scripts.pory"
	.string "Matt's House$"

IcovaleCity_ProfHouseSign_Text_0:
# 59 "data/maps/IcovaleCity/scripts.pory"
	.string "Prof. Sequoia's House$"

IcovaleCity_ProfHouseLockedSign_Text_0:
# 63 "data/maps/IcovaleCity/scripts.pory"
	.string "“I'm not home at the moment.\n"
	.string "Sorry!”\p"
	.string "-Prof. Sequoia$"

IcovaleCity_OfficeSign_Text_0:
# 68 "data/maps/IcovaleCity/scripts.pory"
	.string "Icovale Offices\n"
	.string "“Work is where the heart is!”$"

IcovaleCity_GymGuard_Text_0:
# 73 "data/maps/IcovaleCity/scripts.pory"
	.string "Looks like Leader Sequoia is back at\n"
	.string "the gym!\p"
	.string "You're free to go in now.$"

IcovaleCity_GymGuard_Text_1:
# 76 "data/maps/IcovaleCity/scripts.pory"
	.string "Sorry, the gym leader isn't here at the\n"
	.string "moment.\p"
	.string "I heard he has a meeting at Icovale\n"
	.string "Offices.\p"
	.string "Maybe check there?$"

IcovaleCity_GymGuard_Text_2:
# 78 "data/maps/IcovaleCity/scripts.pory"
	.string "The gym leader still isn't back yet.\p"
	.string "I did see him storm off though.\p"
	.string "He's probably heading to Lake Serenity,\n"
	.string "east of Icovale, to clear his mind.$"
