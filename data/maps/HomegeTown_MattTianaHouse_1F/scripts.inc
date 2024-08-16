HomegeTown_MattTianaHouse_1F_MapScripts::
	.byte 0


HomegeTown_MattTianaHouse_1F_Mom::
# 4 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	lock
# 5 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	faceplayer
# 6 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	checkplayergender
# 7 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq HomegeTown_MattTianaHouse_1F_Mom_2
# 10 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	msgbox HomegeTown_MattTianaHouse_1F_Mom_Text_1
HomegeTown_MattTianaHouse_1F_Mom_1:
# 12 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	releaseall
	return

HomegeTown_MattTianaHouse_1F_Mom_2:
# 8 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	msgbox HomegeTown_MattTianaHouse_1F_Mom_Text_0
	goto HomegeTown_MattTianaHouse_1F_Mom_1


HomegeTown_MattTianaHouse_1F_Dad::
# 16 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	lock
# 17 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	faceplayer
# 18 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	checkplayergender
# 19 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq HomegeTown_MattTianaHouse_1F_Dad_2
# 22 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	msgbox HomegeTown_MattTianaHouse_1F_Dad_Text_1
HomegeTown_MattTianaHouse_1F_Dad_1:
# 24 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	releaseall
	return

HomegeTown_MattTianaHouse_1F_Dad_2:
# 20 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	msgbox HomegeTown_MattTianaHouse_1F_Dad_Text_0
	goto HomegeTown_MattTianaHouse_1F_Dad_1


HomegeTown_MattTianaHouse_1F_Mom_Text_0:
# 8 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	.string "We're so proud of our darling Tiana!$"

HomegeTown_MattTianaHouse_1F_Mom_Text_1:
# 10 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	.string "We're so proud of our superstar Matt!$"

HomegeTown_MattTianaHouse_1F_Dad_Text_0:
# 20 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	.string "Tiana starts her Pokémon journey\n"
	.string "today!\p"
	.string "Hey, have you seen her anywhere?$"

HomegeTown_MattTianaHouse_1F_Dad_Text_1:
# 22 "data/maps/HomegeTown_MattTianaHouse_1F/scripts.pory"
	.string "Matt starts his Pokémon journey today!\p"
	.string "Hey, have you seen him anywhere?$"
