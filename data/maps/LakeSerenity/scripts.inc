LakeSerenity_MapScripts::
# 7 "data/maps/LakeSerenity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/LakeSerenity/scripts.pory"
	setflag FLAG_HIDE_ALGO_LAKE
# 9 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 2
	goto_if_le LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 2
	goto_if_gt LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/LakeSerenity/scripts.pory"
	call LakeSerenity_SetProfPosition
	return

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/LakeSerenity/scripts.pory"
	setobjectxyperm 1, 0, 0
# 13 "data/maps/LakeSerenity/scripts.pory"
	setobjectxyperm 4, 0, 0
	return

LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_LAKE_SERENITY_STATE, 0
	goto_if_ne LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	goto LakeSerenity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3


LakeSerenity_SetProfPosition::
# 19 "data/maps/LakeSerenity/scripts.pory"
	setobjectxyperm 1, 28, 12
# 20 "data/maps/LakeSerenity/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


LakeSerenity_ProfChase1_Trigger::
# 24 "data/maps/LakeSerenity/scripts.pory"
	lock
# 25 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanUp
# 27 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 28 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase1_Trigger_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 30 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ProfessorRuns
# 31 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 32 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 33 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanDown
# 34 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 35 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/LakeSerenity/scripts.pory"
	setobjectxyperm 1, 28, 12
# 37 "data/maps/LakeSerenity/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 38 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 1, 28, 12
# 39 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 40 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 1
# 41 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 44 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanUp:
# 45 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 45 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 45 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 45 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 45 "data/maps/LakeSerenity/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ProfessorRuns:
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 50 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 50 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 51 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 51 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
	step_end

# 54 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanDown:
# 55 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 55 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 55 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 55 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 55 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

LakeSerenity_ProfChase2_Trigger::
# 59 "data/maps/LakeSerenity/scripts.pory"
	lock
# 60 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 61 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 62 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_NORMAL
# 63 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceUp
# 65 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase2_Trigger_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 67 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 68 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 2
# 69 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 72 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_SurpriseFaceUp:
# 73 "data/maps/LakeSerenity/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

LakeSerenity_AlgoTech_Event::
# 78 "data/maps/LakeSerenity/scripts.pory"
	lock
# 79 "data/maps/LakeSerenity/scripts.pory"
	faceplayer
# 80 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 82 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq LakeSerenity_AlgoTech_Event_2
LakeSerenity_AlgoTech_Event_1:
# 88 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 92 "data/maps/LakeSerenity/scripts.pory"
	fadeoutbgm 0
# 93 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 94 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 95 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 96 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 97 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 98 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_2, MSGBOX_DEFAULT
# 99 "data/maps/LakeSerenity/scripts.pory"
	playbgm MUS_LAKE_SERENITY, 1
# 100 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 103 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 104 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_4, MSGBOX_DEFAULT
# 105 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 106 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 107 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 108 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 109 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_5, MSGBOX_DEFAULT
# 111 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 112 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 113 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_6, MSGBOX_DEFAULT
# 114 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 115 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 116 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_7, MSGBOX_DEFAULT
# 118 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 119 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceDown
# 120 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_SurpriseFaceDown
# 121 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 122 "data/maps/LakeSerenity/scripts.pory"
	clearflag FLAG_HIDE_ALGO_LAKE
# 123 "data/maps/LakeSerenity/scripts.pory"
	addobject 2
# 124 "data/maps/LakeSerenity/scripts.pory"
	addobject 3
# 125 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_8, MSGBOX_DEFAULT
# 126 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 127 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoFStart
# 128 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 129 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoMStart
# 130 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 3
# 131 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 132 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 133 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 134 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_9, MSGBOX_DEFAULT
# 135 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 136 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 137 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 138 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 139 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_10, MSGBOX_DEFAULT
# 140 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 141 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 142 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 143 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 144 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 145 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_11, MSGBOX_DEFAULT
# 146 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 147 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 148 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 149 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_12, MSGBOX_DEFAULT
# 150 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 151 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 152 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 153 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 154 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 155 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 156 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 157 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_13, MSGBOX_DEFAULT
# 158 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 159 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 160 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_14, MSGBOX_DEFAULT
# 161 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 162 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 163 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 164 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 165 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 166 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 167 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_15, MSGBOX_DEFAULT
# 168 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 169 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 170 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 171 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 172 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_16, MSGBOX_DEFAULT
# 173 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 174 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 175 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 176 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 177 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_17, MSGBOX_DEFAULT
# 178 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 179 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 180 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 181 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 182 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_18, MSGBOX_DEFAULT
# 183 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 184 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 185 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 186 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_19, MSGBOX_DEFAULT
# 187 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 188 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 189 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 190 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 191 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_20, MSGBOX_DEFAULT
# 192 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 193 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 194 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 195 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 196 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 197 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 198 "data/maps/LakeSerenity/scripts.pory"
	trainerbattle_no_intro TRAINER_LAKE_SERENITY_ALGOTECH_GRUNT_M, LakeSerenity_Text_AlgoTechGruntMDefeated
# 199 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoBlownBack
# 200 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoBlownBack
# 201 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 202 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_21, MSGBOX_DEFAULT
# 203 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 204 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 205 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_22, MSGBOX_DEFAULT
# 206 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 207 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 208 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 209 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_23, MSGBOX_DEFAULT
# 210 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 211 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ApproachAlgo
# 212 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 213 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_24, MSGBOX_DEFAULT
# 214 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 215 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 216 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 217 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_25, MSGBOX_DEFAULT
# 218 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 219 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 220 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 221 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_ApproachAlgo
# 222 "data/maps/LakeSerenity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 223 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 224 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_26, MSGBOX_DEFAULT
# 225 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 226 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 227 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 228 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_27, MSGBOX_DEFAULT
# 229 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 230 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 231 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 232 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_28, MSGBOX_DEFAULT
# 233 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 234 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 235 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 236 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_29, MSGBOX_DEFAULT
# 237 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 238 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 239 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 240 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_30, MSGBOX_DEFAULT
# 241 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 242 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 243 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 244 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_31, MSGBOX_DEFAULT
# 245 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 246 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 247 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 248 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_32, MSGBOX_DEFAULT
# 249 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 250 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 251 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 252 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 1
# 253 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_StepBackFromAlgo
# 254 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_StepBackFromAlgo
# 255 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 1
# 256 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_33, MSGBOX_DEFAULT
# 257 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 258 "data/maps/LakeSerenity/scripts.pory"
	playse SE_LEDGE
# 259 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoLeaveM
# 260 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 261 "data/maps/LakeSerenity/scripts.pory"
	playse SE_LEDGE
# 262 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoLeaveF
# 263 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 264 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 265 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 266 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 3
# 267 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 268 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_AlgoPanDown
# 269 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 270 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 271 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_34, MSGBOX_DEFAULT
# 273 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 274 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoLeaveFContinued
# 275 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 276 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_AlgoPanUp
# 277 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 278 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 279 "data/maps/LakeSerenity/scripts.pory"
	removeobject 2
# 280 "data/maps/LakeSerenity/scripts.pory"
	removeobject 3
# 281 "data/maps/LakeSerenity/scripts.pory"
	setflag FLAG_HIDE_ALGO_LAKE
# 282 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 283 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 284 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_35, MSGBOX_DEFAULT
# 288 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 289 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ProfessorLeaves
# 290 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 291 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 1, 0, 0
# 292 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 3
# 293 "data/maps/LakeSerenity/scripts.pory"
	release
	return

LakeSerenity_AlgoTech_Event_2:
# 83 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_PlayerMovementForAlgoTechEvent
# 84 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 85 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 86 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
	goto LakeSerenity_AlgoTech_Event_1


# 296 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PlayerMovementForAlgoTechEvent:
# 297 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 298 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 299 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

# 302 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_SurpriseFaceDown:
# 303 "data/maps/LakeSerenity/scripts.pory"
	emote_exclamation_mark
# 304 "data/maps/LakeSerenity/scripts.pory"
	face_down
	step_end

# 307 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoFStart:
# 308 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 309 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 309 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 310 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 311 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 312 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 313 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 314 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 315 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 316 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 316 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 316 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 316 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 317 "data/maps/LakeSerenity/scripts.pory"
	face_left
	step_end

# 320 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoMStart:
# 321 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 322 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 322 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 322 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 323 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 324 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 325 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 326 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 327 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 328 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 329 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 329 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 329 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 330 "data/maps/LakeSerenity/scripts.pory"
	face_left
	step_end

# 333 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoBlownBack:
# 334 "data/maps/LakeSerenity/scripts.pory"
	lock_facing_direction
# 335 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 335 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 336 "data/maps/LakeSerenity/scripts.pory"
	unlock_facing_direction
	step_end

# 339 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ApproachAlgo:
# 340 "data/maps/LakeSerenity/scripts.pory"
	walk_diag_northeast
# 341 "data/maps/LakeSerenity/scripts.pory"
	walk_right
	step_end

# 344 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_StepBackFromAlgo:
# 345 "data/maps/LakeSerenity/scripts.pory"
	lock_facing_direction
# 346 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 347 "data/maps/LakeSerenity/scripts.pory"
	unlock_facing_direction
	step_end

# 350 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveF:
# 351 "data/maps/LakeSerenity/scripts.pory"
	jump_down
# 352 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 352 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 352 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 353 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 353 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 354 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 355 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 356 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

# 359 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveM:
# 360 "data/maps/LakeSerenity/scripts.pory"
	jump_down
# 361 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 361 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 362 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 362 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 363 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 364 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 365 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 366 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 367 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 368 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 368 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 368 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 369 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 370 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 370 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 370 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 370 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
	step_end

# 373 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveFContinued:
# 374 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 375 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 376 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 378 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 379 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 379 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 379 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 379 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
	step_end

# 382 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoPanDown:
# 383 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 383 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

# 386 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoPanUp:
# 387 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 387 "data/maps/LakeSerenity/scripts.pory"
	walk_up
	step_end

# 390 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ProfessorLeaves:
# 391 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 392 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 392 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 392 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 392 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 393 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 394 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 395 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 396 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 397 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 398 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

LakeSerenity_LakeSerenityPostAlgo_Trigger::
# 402 "data/maps/LakeSerenity/scripts.pory"
	lock
# 403 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_NORMAL
# 404 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 405 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceUp
# 406 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase2_Trigger_Text_0, MSGBOX_DEFAULT
# 407 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 408 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 409 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 410 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanUp
# 411 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 412 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 413 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanDown
# 414 "data/maps/LakeSerenity/scripts.pory"
	applymovement 4, LakeSerenity_AlgotrixApproaches
# 415 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 4
# 416 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_WEAK
# 417 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_LakeSerenityPostAlgo_Trigger_Text_0, MSGBOX_DEFAULT
# 418 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 419 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 420 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 421 "data/maps/LakeSerenity/scripts.pory"
	applymovement 4, LakeSerenity_AlgotrixDisappears
# 422 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 4
# 423 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 4, 0, 0
# 424 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 425 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 4
# 426 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 429 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgotrixApproaches:
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 430 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

# 433 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgotrixDisappears:
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
	step_end

LakeSerenity_ProfChase1_Trigger_Text_0:
# 28 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: W-Wait!\p"
	.string "Come back!$"

LakeSerenity_ProfChase2_Trigger_Text_0:
# 65 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Triiiix!$"

LakeSerenity_AlgoTech_Event_Text_0:
# 80 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Oh! Hey there,\n"
	.string "{PLAYER}!\n"
	.string "I'm glad you came.$"

LakeSerenity_AlgoTech_Event_Text_1:
# 88 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'm guessing you saw me\n"
	.string "haphazardly chasing whatever that\l"
	.string "thing was.\p"
	.string "Whatever I was chasing, it just\n"
	.string "disappeared!\p"
	.string "…Or did it?{PLAY_BGM}{MUS_VSAUCE_THEME}$"

LakeSerenity_AlgoTech_Event_Text_2:
# 98 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: …\p"
	.string "Yeah, it's gone.$"

LakeSerenity_AlgoTech_Event_Text_3:
# 100 "data/maps/LakeSerenity/scripts.pory"
	.string "I assume it must have been an\n"
	.string "undiscovered Pokémon. A brand new one,\l"
	.string "too. Of all the bizarre creatures I've\l"
	.string "seen in Vidioh over the past few\l"
	.string "decades, I've never seen anything like\l"
	.string "it. It looked a bit like a Hootube in a\l"
	.string "way.$"

LakeSerenity_AlgoTech_Event_Text_4:
# 104 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: …$"

LakeSerenity_AlgoTech_Event_Text_5:
# 109 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I apologize over what\n"
	.string "you had to witness a bit ago in the\l"
	.string "boardroom. I don't even know how you\l"
	.string "got up there to begin with, but I\l"
	.string "digress.$"

LakeSerenity_AlgoTech_Event_Text_6:
# 113 "data/maps/LakeSerenity/scripts.pory"
	.string "That company had humble beginnings in\n"
	.string "Icovale. As the city grew, the company\l"
	.string "grew, too.$"

LakeSerenity_AlgoTech_Event_Text_7:
# 116 "data/maps/LakeSerenity/scripts.pory"
	.string "Now it's being taken over by them.\n"
	.string "They're powerful and very dangerous.\p"
	.string "Having lived in Homege your entire life,\n"
	.string "I wouldn't be surprised if you never\l"
	.string "heard of them before.\p"
	.string "The corporation that took over…\n"
	.string "They call themselves AlgoTe-$"

LakeSerenity_AlgoTech_Event_Text_8:
# 125 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Who are you? This is a restricted\n"
	.string "area.\n"
	.string "Get out now!$"

LakeSerenity_AlgoTech_Event_Text_9:
# 134 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: {PLAYER}!$"

LakeSerenity_AlgoTech_Event_Text_10:
# 139 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: It's them!\n"
	.string "They work for AlgoTech!$"

LakeSerenity_AlgoTech_Event_Text_11:
# 145 "data/maps/LakeSerenity/scripts.pory"
	.string "Ah, you've never heard of us, huh?\n"
	.string "That's pretty refreshing. You'll be\l"
	.string "hearing from us a lot more if you don't\l"
	.string "get out now.$"

LakeSerenity_AlgoTech_Event_Text_12:
# 149 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'm gonna have to\n"
	.string "disagree. I just saw a brand new\l"
	.string "Pokémon in this area, and, as the\l"
	.string "professor and also gym leader of the\l"
	.string "nearby city, I have the authority and\l"
	.string "especially responsibility to look into\l"
	.string "this.$"

LakeSerenity_AlgoTech_Event_Text_13:
# 157 "data/maps/LakeSerenity/scripts.pory"
	.string "It's here!?$"

LakeSerenity_AlgoTech_Event_Text_14:
# 160 "data/maps/LakeSerenity/scripts.pory"
	.string "We'll have to tell the higher-ups about\n"
	.string "this later.$"

LakeSerenity_AlgoTech_Event_Text_15:
# 167 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: That Pokémon…\p"
	.string "It was running from you, wasn't it?\n"
	.string "What does AlgoTech want with it?$"

LakeSerenity_AlgoTech_Event_Text_16:
# 172 "data/maps/LakeSerenity/scripts.pory"
	.string "That's classified information. Leave\n"
	.string "now, or we'll be forced to remove you.$"

LakeSerenity_AlgoTech_Event_Text_17:
# 177 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Ha…!\p"
	.string "Maybe you weren't listening earlier.\n"
	.string "I happen to be the gym leader of\l"
	.string "Icovale City.\p"
	.string "I'm not going to be intimidated by some\n"
	.string "low-level thugs.$"

LakeSerenity_AlgoTech_Event_Text_18:
# 182 "data/maps/LakeSerenity/scripts.pory"
	.string "Look, we don't care who you are.\p"
	.string "We have strict orders to catch……\n"
	.string "…that Pokémon.$"

LakeSerenity_AlgoTech_Event_Text_19:
# 186 "data/maps/LakeSerenity/scripts.pory"
	.string "Quite frankly, we're out of patience.\p"
	.string "If you're going to get in our way, then\n"
	.string "that means you're in AlgoTech's way!{PLAY_BGM}{MUS_ENCOUNTER_MAGMA}$"

LakeSerenity_AlgoTech_Event_Text_20:
# 191 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'll take the left one.\n"
	.string "The right thug is all on you.\p"
	.string "I'm counting on you, kid.$"

LakeSerenity_AlgoTech_Event_Text_21:
# 202 "data/maps/LakeSerenity/scripts.pory"
	.string "Ughh…$"

LakeSerenity_AlgoTech_Event_Text_22:
# 205 "data/maps/LakeSerenity/scripts.pory"
	.string "They're not going to be happy with us\n"
	.string "during debrief later.$"

LakeSerenity_AlgoTech_Event_Text_23:
# 209 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Before that debrief\n"
	.string "happens…$"

LakeSerenity_AlgoTech_Event_Text_24:
# 213 "data/maps/LakeSerenity/scripts.pory"
	.string "…we need some answers.$"

LakeSerenity_AlgoTech_Event_Text_25:
# 217 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: A little help here,\n"
	.string "{PLAYER}?$"

LakeSerenity_AlgoTech_Event_Text_26:
# 224 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Now, then.\n"
	.string "What was that machine? A Pokémon?$"

LakeSerenity_AlgoTech_Event_Text_27:
# 228 "data/maps/LakeSerenity/scripts.pory"
	.string "Okay, okay, fine!\n"
	.string "Yes, it's a Pokémon.\p"
	.string "However, it's also property of AlgoTech.$"

LakeSerenity_AlgoTech_Event_Text_28:
# 232 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: So what? You mean they\n"
	.string "made that thing?\p"
	.string "Why? What do they plan on doing with it?$"

LakeSerenity_AlgoTech_Event_Text_29:
# 236 "data/maps/LakeSerenity/scripts.pory"
	.string "We don't know. They don't tell us all of\n"
	.string "these things.\p"
	.string "You said it yourself, we're low-level in\n"
	.string "the company.$"

LakeSerenity_AlgoTech_Event_Text_30:
# 240 "data/maps/LakeSerenity/scripts.pory"
	.string "They tell us to do something, we do it.\n"
	.string "No questions asked.$"

LakeSerenity_AlgoTech_Event_Text_31:
# 244 "data/maps/LakeSerenity/scripts.pory"
	.string "………\n"
	.string "………$"

LakeSerenity_AlgoTech_Event_Text_32:
# 248 "data/maps/LakeSerenity/scripts.pory"
	.string "They don't know anything.$"

LakeSerenity_AlgoTech_Event_Text_33:
# 256 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Get of here.$"

LakeSerenity_AlgoTech_Event_Text_34:
# 271 "data/maps/LakeSerenity/scripts.pory"
	.string "Sequoia, and…\n"
	.string "…{PLAYER}, was it?\p"
	.string "……\n"
	.string "……\p"
	.string "You're gonna regret this day.$"

LakeSerenity_AlgoTech_Event_Text_35:
# 284 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Sorry about all the\n"
	.string "commotion, {PLAYER}.\p"
	.string "I would've taken them both myself.\n"
	.string "Fairly easy actually, but I felt it'd be\l"
	.string "better you try it out yourself.\p"
	.string "Those grunts were from AlgoTech, the\n"
	.string "biggest conglomerate in Vidioh and,\l"
	.string "from what we just learned, created\l"
	.string "whatever that Pokemon was.\p"
	.string "I'll look into this later.\n"
	.string "Meanwhile, you go back to the gym and\l"
	.string "I'll be waiting.\p"
	.string "Stay safe {PLAYER}!$"

LakeSerenity_LakeSerenityPostAlgo_Trigger_Text_0:
# 417 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Trix?$"
