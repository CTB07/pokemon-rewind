IcovaleCity_House1_MapScripts::
	.byte 0


IcovaleCity_House2_1F_HikerReckon::
# 4 "data/maps/IcovaleCity_House1/scripts.pory"
	msgbox IcovaleCity_House2_1F_Text_HikerReckon, MSGBOX_NPC
	end


IcovaleCity_House2_1F_YoungMan::
# 9 "data/maps/IcovaleCity_House1/scripts.pory"
	checkplayergender
# 10 "data/maps/IcovaleCity_House1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq IcovaleCity_House2_1F_YoungMan_2
# 13 "data/maps/IcovaleCity_House1/scripts.pory"
	msgbox IcovaleCity_House2_1F_Text_FYoungMan, MSGBOX_NPC
IcovaleCity_House2_1F_YoungMan_1:
	end

IcovaleCity_House2_1F_YoungMan_2:
# 11 "data/maps/IcovaleCity_House1/scripts.pory"
	msgbox IcovaleCity_House2_1F_Text_MYoungMan, MSGBOX_NPC
	goto IcovaleCity_House2_1F_YoungMan_1


IcovaleCity_House2_1F_Text_HikerReckon::
# 18 "data/maps/IcovaleCity_House1/scripts.pory"
	.string "Hello there!\n"
	.string "You heading to Lake Serenity?\p"
	.string "Might wanna steer clear of that spot\n"
	.string "for now.\p"
	.string "I done seen some folks actin' mighty\n"
	.string "shady 'round there.$"

IcovaleCity_House2_1F_Text_MYoungMan::
# 24 "data/maps/IcovaleCity_House1/scripts.pory"
	.string "Argh!\n"
	.string "I've gotta get back to work at the\l"
	.string "office in less than 30 minutes.\p"
	.string "…Me?\n"
	.string "Retired?\p"
	.string "Son, I'm only 30.$"

IcovaleCity_House2_1F_Text_FYoungMan::
# 31 "data/maps/IcovaleCity_House1/scripts.pory"
	.string "Argh!\n"
	.string "I've gotta get back to work at the\l"
	.string "office in less than 30 minutes.\p"
	.string "…Me?\n"
	.string "Retired?\p"
	.string "Miss, I'm only 30.$"
