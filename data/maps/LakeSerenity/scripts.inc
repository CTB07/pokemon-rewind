LakeSerenity_MapScripts::
# 4 "data/maps/LakeSerenity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LakeSerenity/scripts.pory"
	random 2
# 6 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 2
	goto_if_le LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LakeSerenity/scripts.pory"
	call LakeSerenity_SetProfPosition
	return

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 0
	goto_if_ne LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


LakeSerenity_SetProfPosition::
# 13 "data/maps/LakeSerenity/scripts.pory"
	setobjectxyperm 1, 28, 12
# 14 "data/maps/LakeSerenity/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


LakeSerenity_ProfChase1_Trigger::
# 18 "data/maps/LakeSerenity/scripts.pory"
	lock
# 19 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 20 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanUp
# 21 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 22 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase1_Trigger_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 24 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ProfessorRuns
# 25 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 26 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 27 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanDown
# 28 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 29 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 1, 28, 12
# 31 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 32 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 1
# 33 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 36 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanUp:
# 37 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 37 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 37 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 37 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 37 "data/maps/LakeSerenity/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ProfessorRuns:
# 41 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 41 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 41 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 41 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 42 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 42 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
	step_end

# 46 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanDown:
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

LakeSerenity_ProfChase2_Trigger::
# 51 "data/maps/LakeSerenity/scripts.pory"
	lock
# 52 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_NORMAL
# 53 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 54 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceUp
# 55 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase2_Trigger_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 57 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 58 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 2
# 59 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 62 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_SurpriseFaceUp:
# 63 "data/maps/LakeSerenity/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

LakeSerenity_ProfChase1_Trigger_Text_0:
# 22 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: W-Wait!\p"
	.string "Come back!$"

LakeSerenity_ProfChase2_Trigger_Text_0:
# 55 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Triiiix!$"
