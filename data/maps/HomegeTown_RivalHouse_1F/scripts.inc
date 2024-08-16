HomegeTown_RivalHouse_1F_MapScripts::
	.byte 0


HomegeTown_RivalHouse_1F_RivalSister::
# 6 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	lock
# 7 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	goto_if_set FLAG_LAB_INTRO_SEQUENCE, HomegeTown_RivalHouse_1F_RivalSister_2
# 11 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	msgbox HomegeTown_RivalHouse_1F_RivalSister_Text_1
HomegeTown_RivalHouse_1F_RivalSister_1:
# 13 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	releaseall
	return

HomegeTown_RivalHouse_1F_RivalSister_2:
# 9 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	msgbox HomegeTown_RivalHouse_1F_RivalSister_Text_0
	goto HomegeTown_RivalHouse_1F_RivalSister_1


HomegeTown_RivalHouse_1F_RivalSister_Text_0:
# 9 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	.string "Oh, if you were looking for {RIVAL},\n"
	.string "you just missed him.$"

HomegeTown_RivalHouse_1F_RivalSister_Text_1:
# 11 "data/maps/HomegeTown_RivalHouse_1F/scripts.pory"
	.string "You're looking for {RIVAL}? He's\n"
	.string "probably bullying the professor into\l"
	.string "giving him a starter.$"
