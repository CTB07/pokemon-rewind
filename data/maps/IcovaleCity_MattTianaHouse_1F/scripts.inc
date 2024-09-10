IcovaleCity_MattTianaHouse_1F_MapScripts::
	.byte 0


IcovaleCity_MattTianaHouse_1F_Mom::
# 4 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Mom_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Cody::
# 9 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Cody_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Emma::
# 13 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Emma_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Jake::
# 17 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Jake_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Ryan::
# 21 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Ryan_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Alex::
# 25 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Alex_Text_0, MSGBOX_NPC
	return


IcovaleCity_MattTianaHouse_1F_Housekeeper::
# 29 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	lock
# 30 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	faceplayer
# 31 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 34 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	checkplayergender
# 36 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleCity_MattTianaHouse_1F_Housekeeper_2
# 39 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_2, MSGBOX_DEFAULT
IcovaleCity_MattTianaHouse_1F_Housekeeper_1:
# 41 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	release
	return

IcovaleCity_MattTianaHouse_1F_Housekeeper_2:
# 37 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	msgbox IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_1, MSGBOX_DEFAULT
	goto IcovaleCity_MattTianaHouse_1F_Housekeeper_1


IcovaleCity_MattTianaHouse_1F_Mom_Text_0:
# 4 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "My husband has been away on a business\n"
	.string "trip for weeks. My son has gone missing,\l"
	.string "too.\p"
	.string "It's not all bad though. Sometimes, we\n"
	.string "make fun, family vlogs together!$"

IcovaleCity_MattTianaHouse_1F_Cody_Text_0:
# 9 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "…My name's Cody.$"

IcovaleCity_MattTianaHouse_1F_Emma_Text_0:
# 13 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "My name's Emma!$"

IcovaleCity_MattTianaHouse_1F_Jake_Text_0:
# 17 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "Sup, I'm Jake.$"

IcovaleCity_MattTianaHouse_1F_Ryan_Text_0:
# 21 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "I'm Ryan.$"

IcovaleCity_MattTianaHouse_1F_Alex_Text_0:
# 25 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "I'm Alex!$"

IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_0:
# 31 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "We get some semblance of peace\n"
	.string "whenever the father goes away for\l"
	.string "work.\p"
	.string "It's usually when he comes back that\n"
	.string "the “pranking” begins.$"

IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_1:
# 37 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "If only Tiana was still here to keep the\n"
	.string "peace…$"

IcovaleCity_MattTianaHouse_1F_Housekeeper_Text_2:
# 39 "data/maps/IcovaleCity_MattTianaHouse_1F/scripts.pory"
	.string "If only Matt was still here to keep the\n"
	.string "peace…$"
