IcovaleCity_MapScripts::
	.byte 0


IcovaleCity_YoungsterFountain::
# 4 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_YoungsterFountain_Text_0, MSGBOX_NPC
	return


IcovaleCity_MotherFountain::
# 8 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MotherFountain_Text_0, MSGBOX_NPC
	return


IcovaleCity_OldWomanFarmland::
# 13 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_OldWomanFarmland_Text_0, MSGBOX_NPC
	return


IcovaleCity_BusinessMan::
# 17 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_BusinessMan_Text_0, MSGBOX_NPC
	return


IcovaleCity_ArtistBuildings::
# 22 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ArtistBuildings_Text_0, MSGBOX_NPC
	return


IcovaleCity_CitySign::
# 29 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_CitySign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_MattTianaHouseSign::
# 33 "data/maps/IcovaleCity/scripts.pory"
	checkplayergender
# 34 "data/maps/IcovaleCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleCity_MattTianaHouseSign_1
# 38 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MattTianaHouseSign_Text_1, MSGBOX_SIGN
	return

IcovaleCity_MattTianaHouseSign_1:
# 35 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_MattTianaHouseSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_ProfHouseSign::
# 43 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ProfHouseSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_ProfHouseLockedSign::
# 47 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_ProfHouseLockedSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_OfficeSign::
# 52 "data/maps/IcovaleCity/scripts.pory"
	msgbox IcovaleCity_OfficeSign_Text_0, MSGBOX_SIGN
	return


IcovaleCity_YoungsterFountain_Text_0:
# 4 "data/maps/IcovaleCity/scripts.pory"
	.string "I heard from meemaw that there used to\n"
	.string "be a giant Crimbark tree on this very\l"
	.string "spot!$"

IcovaleCity_MotherFountain_Text_0:
# 8 "data/maps/IcovaleCity/scripts.pory"
	.string "Mother told me as well that when they\n"
	.string "cut down the tree, it was enough to\l"
	.string "supply the wood for all the houses here\l"
	.string "back then!\p"
	.string "Back when the houses here were made of\n"
	.string "wood that is...$"

IcovaleCity_OldWomanFarmland_Text_0:
# 13 "data/maps/IcovaleCity/scripts.pory"
	.string "Things have changed around here. This\n"
	.string "was all farmland as far as the eye could\l"
	.string "see back then.$"

IcovaleCity_BusinessMan_Text_0:
# 17 "data/maps/IcovaleCity/scripts.pory"
	.string "Icovale has developed a lot over the\n"
	.string "years. Some of the old residents here\l"
	.string "disdain it though. It seems more plastic\l"
	.string "they say.\p"
	.string "I'm not sure what they're talking about!$"

IcovaleCity_ArtistBuildings_Text_0:
# 22 "data/maps/IcovaleCity/scripts.pory"
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
# 29 "data/maps/IcovaleCity/scripts.pory"
	.string "ICOVALE CITY\n"
	.string "“A new era of Vidioh!”$"

IcovaleCity_MattTianaHouseSign_Text_0:
# 35 "data/maps/IcovaleCity/scripts.pory"
	.string "Tiana's House$"

IcovaleCity_MattTianaHouseSign_Text_1:
# 38 "data/maps/IcovaleCity/scripts.pory"
	.string "Matt's House$"

IcovaleCity_ProfHouseSign_Text_0:
# 43 "data/maps/IcovaleCity/scripts.pory"
	.string "Prof. Sequoia's House$"

IcovaleCity_ProfHouseLockedSign_Text_0:
# 47 "data/maps/IcovaleCity/scripts.pory"
	.string "“I'm not home at the moment.\n"
	.string "Sorry!”\p"
	.string "-Prof. Sequoia$"

IcovaleCity_OfficeSign_Text_0:
# 52 "data/maps/IcovaleCity/scripts.pory"
	.string "Icovale Offices\n"
	.string "“Work is where the heart is!”$"
