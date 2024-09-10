IcovaleCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


IcovaleCity_PokemonCenter_1F_EventScript_Nurse::
# 8 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 9 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 11 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 12 "data/maps/IcovaleCity_PokemonCenter_1F/scripts.pory"
	release
	end

