IcovaleCity_House2_2F_MapScripts::
	.byte 0


IcovaleCity_House2_2F_EventScript_Trader::
# 4 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	lock
# 5 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	faceplayer
# 6 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, IcovaleCity_House2_2F_EventScript_Trader_2
IcovaleCity_House2_2F_EventScript_Trader_1:
# 9 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DREAMIE
# 10 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	msgbox IcovaleCity_House2_2F_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 14 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq IcovaleCity_House2_2F_EventScript_Trader_5
IcovaleCity_House2_2F_EventScript_Trader_4:
# 17 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	special ChoosePartyMon
# 18 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	waitstate
# 19 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 20 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq IcovaleCity_House2_2F_EventScript_Trader_8
IcovaleCity_House2_2F_EventScript_Trader_7:
# 23 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 24 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 25 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 26 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne IcovaleCity_House2_2F_EventScript_Trader_11
IcovaleCity_House2_2F_EventScript_Trader_10:
# 29 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 30 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 31 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	special CreateInGameTradePokemon
# 32 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	special DoInGameTradeScene
# 33 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	waitstate
# 34 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	msgbox IcovaleCity_House2_2F_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 35 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	setflag FLAG_ICOVALE_NPC_TRADE_COMPLETED
# 36 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	release
	end

IcovaleCity_House2_2F_EventScript_Trader_2:
# 7 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	goto IcovaleCity_House2_2F_EventScript_TradeCompleted
	goto IcovaleCity_House2_2F_EventScript_Trader_1

IcovaleCity_House2_2F_EventScript_Trader_5:
# 15 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	goto IcovaleCity_House2_2F_EventScript_DeclineTrade
	goto IcovaleCity_House2_2F_EventScript_Trader_4

IcovaleCity_House2_2F_EventScript_Trader_8:
# 21 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	goto IcovaleCity_House2_2F_EventScript_DeclineTrade
	goto IcovaleCity_House2_2F_EventScript_Trader_7

IcovaleCity_House2_2F_EventScript_Trader_11:
# 27 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	goto IcovaleCity_House2_2F_EventScript_NotRequestedMon
	goto IcovaleCity_House2_2F_EventScript_Trader_10


IcovaleCity_House2_2F_EventScript_DeclineTrade::
# 41 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	msgbox IcovaleCity_House2_2F_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 42 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	release
	end


IcovaleCity_House2_2F_EventScript_NotRequestedMon::
# 47 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 48 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	msgbox IcovaleCity_House2_2F_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 49 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	release
	end


IcovaleCity_House2_2F_EventScript_TradeCompleted::
# 54 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	msgbox IcovaleCity_House2_2F_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 55 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	release
	end


IcovaleCity_House2_2F_Text_IllTradeIfYouWant::
# 59 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	.string "I renounce my sexuality!\p"
	.string "Oh…\n"
	.string "…Sorry about that.\p"
	.string "I just found out that this guy I have a\n"
	.string "crush on cheated in a children's block\l"
	.string "game, and now I can't stand him.\p"
	.string "The thing is…\n"
	.string "…I have this Pokémon that reminds me so\l"
	.string "much of him, and I don't think I can\l"
	.string "keep it around any longer.\p"
	.string "I-If you happen to have a\n"
	.string "{STR_VAR_1}, I'll trade you my\l"
	.string "{STR_VAR_2}.\p"
	.string "It's supposedly pretty lucky…\n"
	.string "So how about it?\p"
	.string "Do you wanna trade your {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

IcovaleCity_House2_2F_Text_PleaseBeGoodToMyPokemon::
# 67 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	.string "Despite trading my {STR_VAR_2}\n"
	.string "away, I still cherish it. I just know it\l"
	.string "deserves better.\p"
	.string "Please take care of {STR_VAR_2} for\n"
	.string "me!$"

IcovaleCity_House2_2F_Text_DoesntLookLikeMonToMe::
# 71 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	.string "Um……\n"
	.string "That's not a {STR_VAR_1}…\p"
	.string "If you're trying to look for one, you\n"
	.string "can apparently find them on Route 1.$"

IcovaleCity_House2_2F_Text_YouDontWantToThatsOkay::
# 77 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	.string "You don't want my {STR_VAR_2}?\n"
	.string "Okay, well let me know if you change\l"
	.string "your mind.\p"
	.string "If you're having trouble finding a\n"
	.string "{STR_VAR_1}, they should be on\l"
	.string "Route 1.$"

IcovaleCity_House2_2F_Text_AnyPokemonCanBeCute::
# 82 "data/maps/IcovaleCity_House2_2F/scripts.pory"
	.string "Yay!\n"
	.string "Now Paastel is my favorite Pokémon!$"
