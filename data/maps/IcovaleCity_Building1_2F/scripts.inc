IcovaleCity_Building1_2F_MapScripts::
	.byte 0


IcovaleCity_Building1_2F_UpsetSister::
# 4 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	msgbox IcovaleCity_Building1_2F_UpsetSister_Text_0, MSGBOX_NPC
	return


IcovaleCity_Building1_2F_PsychoBrother::
# 8 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	lock
# 9 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	faceplayer
# 10 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	msgbox IcovaleCity_Building1_2F_PsychoBrother_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	release
	end


IcovaleCity_Building1_2F_HurtPokemon::
# 19 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	lock
# 20 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	faceplayer
# 21 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	waitse
# 22 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_WEAK
# 23 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	msgbox IcovaleCity_Building1_2F_HurtPokemon_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	waitmoncry
# 28 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	release
	end


IcovaleCity_Building1_2F_Hootube::
# 33 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	lock
# 34 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	faceplayer
# 35 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	waitse
# 36 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	playmoncry SPECIES_HOOTUBE, CRY_MODE_WEAK
# 37 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	msgbox IcovaleCity_Building1_2F_Hootube_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	waitmoncry
# 40 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	release
	end


IcovaleCity_Building1_2F_UpsetSister_Text_0:
# 4 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	.string "Waaaaah!\n"
	.string "Make him stop!$"

IcovaleCity_Building1_2F_PsychoBrother_Text_0:
# 10 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	.string "I like shooting my Pokemon in the head\n"
	.string "with daddy's gun!\p"
	.string "Then, my Hootube rewinds them back to\n"
	.string "when they were alive!\p"
	.string "After that, I get to do it all over\n"
	.string "again!\p"
	.string "Ha ha ha!$"

IcovaleCity_Building1_2F_HurtPokemon_Text_0:
# 23 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	.string "Paropeat: Paro-wooaa…\p"
	.string "This Paropeat has clearly been\n"
	.string "through…\p"
	.string "…\p"
	.string "…well, a lot…$"

IcovaleCity_Building1_2F_Hootube_Text_0:
# 37 "data/maps/IcovaleCity_Building1_2F/scripts.pory"
	.string "Hootube: Hoo-tuuube…\p"
	.string "Hootube doesn't appear to like this\n"
	.string "activity.$"
