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
	setobjectxy 1, 28, 12
# 37 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 38 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 1
# 39 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 42 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanUp:
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 43 "data/maps/LakeSerenity/scripts.pory"
	walk_up
	step_end

# 46 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ProfessorRuns:
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 47 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 48 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 48 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 49 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
	step_end

# 52 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PanDown:
# 53 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 53 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 53 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 53 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 53 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

LakeSerenity_ProfChase2_Trigger::
# 57 "data/maps/LakeSerenity/scripts.pory"
	lock
# 58 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 59 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 60 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_NORMAL
# 61 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 62 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceUp
# 63 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase2_Trigger_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 65 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 66 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 2
# 67 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 70 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_SurpriseFaceUp:
# 71 "data/maps/LakeSerenity/scripts.pory"
	emote_exclamation_mark
# 72 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

LakeSerenity_AlgoTech_Event::
# 76 "data/maps/LakeSerenity/scripts.pory"
	lock
# 77 "data/maps/LakeSerenity/scripts.pory"
	faceplayer
# 78 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 80 "data/maps/LakeSerenity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq LakeSerenity_AlgoTech_Event_2
LakeSerenity_AlgoTech_Event_1:
# 86 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 90 "data/maps/LakeSerenity/scripts.pory"
	fadeoutbgm 0
# 91 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 92 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 93 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 94 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 95 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 96 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_2, MSGBOX_DEFAULT
# 97 "data/maps/LakeSerenity/scripts.pory"
	playbgm MUS_LAKE_SERENITY, 1
# 98 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_3, MSGBOX_DEFAULT
# 100 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 101 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 102 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_4, MSGBOX_DEFAULT
# 103 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 104 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 105 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 106 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 107 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_5, MSGBOX_DEFAULT
# 109 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 110 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 111 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_6, MSGBOX_DEFAULT
# 112 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 113 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 114 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_7, MSGBOX_DEFAULT
# 116 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 117 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceDown
# 118 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_SurpriseFaceDown
# 119 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 120 "data/maps/LakeSerenity/scripts.pory"
	clearflag FLAG_HIDE_ALGO_LAKE
# 121 "data/maps/LakeSerenity/scripts.pory"
	addobject 2
# 122 "data/maps/LakeSerenity/scripts.pory"
	addobject 3
# 123 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_8, MSGBOX_DEFAULT
# 124 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 125 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoFStart
# 126 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 127 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoMStart
# 128 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 3
# 129 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 130 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 131 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 132 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_9, MSGBOX_DEFAULT
# 133 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 134 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 135 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 136 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 137 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_10, MSGBOX_DEFAULT
# 138 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 139 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 140 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 141 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 142 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 143 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_11, MSGBOX_DEFAULT
# 144 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 145 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 146 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 147 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_12, MSGBOX_DEFAULT
# 148 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 149 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 150 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 151 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 152 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 153 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 154 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 155 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_13, MSGBOX_DEFAULT
# 156 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 157 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 158 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_14, MSGBOX_DEFAULT
# 159 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 160 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 161 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 162 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 163 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 164 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 165 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_15, MSGBOX_DEFAULT
# 166 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 167 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 168 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 169 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 170 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_16, MSGBOX_DEFAULT
# 171 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 172 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 173 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 174 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 175 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_17, MSGBOX_DEFAULT
# 176 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 177 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 178 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 179 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 180 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_18, MSGBOX_DEFAULT
# 181 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 182 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 183 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 184 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_19, MSGBOX_DEFAULT
# 185 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 186 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 187 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 188 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 189 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_20, MSGBOX_DEFAULT
# 190 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 191 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 192 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 193 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 194 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 195 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 196 "data/maps/LakeSerenity/scripts.pory"
	trainerbattle_no_intro TRAINER_LAKE_SERENITY_ALGOTECH_GRUNT_M, LakeSerenity_Text_AlgoTechGruntMDefeated
# 197 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoBlownBack
# 198 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoBlownBack
# 199 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 200 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_21, MSGBOX_DEFAULT
# 201 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 202 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 203 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_22, MSGBOX_DEFAULT
# 204 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 205 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 206 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 207 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_23, MSGBOX_DEFAULT
# 208 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 209 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ApproachAlgo
# 210 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 211 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_24, MSGBOX_DEFAULT
# 212 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 213 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 214 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 215 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_25, MSGBOX_DEFAULT
# 216 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 217 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 218 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 219 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_ApproachAlgo
# 220 "data/maps/LakeSerenity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 221 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 222 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_26, MSGBOX_DEFAULT
# 223 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 224 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 225 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 226 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_27, MSGBOX_DEFAULT
# 227 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 228 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 229 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 230 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_28, MSGBOX_DEFAULT
# 231 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 232 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 233 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 234 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_29, MSGBOX_DEFAULT
# 235 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 236 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 237 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 238 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_30, MSGBOX_DEFAULT
# 239 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 240 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 241 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 242 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_31, MSGBOX_DEFAULT
# 243 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 244 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 245 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 246 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_32, MSGBOX_DEFAULT
# 247 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 248 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 249 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 250 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 1
# 251 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_StepBackFromAlgo
# 252 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_StepBackFromAlgo
# 253 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 1
# 254 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_33, MSGBOX_DEFAULT
# 255 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 256 "data/maps/LakeSerenity/scripts.pory"
	playse SE_LEDGE
# 257 "data/maps/LakeSerenity/scripts.pory"
	applymovement 3, LakeSerenity_AlgoLeaveM
# 258 "data/maps/LakeSerenity/scripts.pory"
	delay 20
# 259 "data/maps/LakeSerenity/scripts.pory"
	playse SE_LEDGE
# 260 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoLeaveF
# 261 "data/maps/LakeSerenity/scripts.pory"
	delay 60
# 262 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 263 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 264 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 3
# 265 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 266 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_AlgoPanDown
# 267 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 268 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 269 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_34, MSGBOX_DEFAULT
# 271 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 272 "data/maps/LakeSerenity/scripts.pory"
	applymovement 2, LakeSerenity_AlgoLeaveFContinued
# 273 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 2
# 274 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_AlgoPanUp
# 275 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 276 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 277 "data/maps/LakeSerenity/scripts.pory"
	removeobject 2
# 278 "data/maps/LakeSerenity/scripts.pory"
	removeobject 3
# 279 "data/maps/LakeSerenity/scripts.pory"
	setflag FLAG_HIDE_ALGO_LAKE
# 280 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 281 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 282 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_AlgoTech_Event_Text_35, MSGBOX_DEFAULT
# 286 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 287 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, LakeSerenity_ProfessorLeaves
# 288 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 289 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 1, 0, 0
# 290 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 3
# 291 "data/maps/LakeSerenity/scripts.pory"
	release
	return

LakeSerenity_AlgoTech_Event_2:
# 81 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_PlayerMovementForAlgoTechEvent
# 82 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 83 "data/maps/LakeSerenity/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 84 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
	goto LakeSerenity_AlgoTech_Event_1


# 294 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_PlayerMovementForAlgoTechEvent:
# 295 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 296 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 297 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

# 300 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_SurpriseFaceDown:
# 301 "data/maps/LakeSerenity/scripts.pory"
	emote_exclamation_mark
# 302 "data/maps/LakeSerenity/scripts.pory"
	face_down
	step_end

# 305 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoFStart:
# 306 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 307 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 307 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 308 "data/maps/LakeSerenity/scripts.pory"
	walk_up
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
# 314 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 314 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 314 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 315 "data/maps/LakeSerenity/scripts.pory"
	face_left
	step_end

# 318 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoMStart:
# 319 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 320 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 320 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 320 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 321 "data/maps/LakeSerenity/scripts.pory"
	walk_up
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
# 327 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 327 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 328 "data/maps/LakeSerenity/scripts.pory"
	face_left
	step_end

# 331 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoBlownBack:
# 332 "data/maps/LakeSerenity/scripts.pory"
	lock_facing_direction
# 333 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 333 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_right
# 334 "data/maps/LakeSerenity/scripts.pory"
	unlock_facing_direction
	step_end

# 337 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ApproachAlgo:
# 338 "data/maps/LakeSerenity/scripts.pory"
	walk_diag_northeast
# 339 "data/maps/LakeSerenity/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_StepBackFromAlgo:
# 343 "data/maps/LakeSerenity/scripts.pory"
	lock_facing_direction
# 344 "data/maps/LakeSerenity/scripts.pory"
	walk_left
# 345 "data/maps/LakeSerenity/scripts.pory"
	unlock_facing_direction
	step_end

# 348 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveF:
# 349 "data/maps/LakeSerenity/scripts.pory"
	jump_down
# 350 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 350 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 350 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 351 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 351 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 352 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 353 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 354 "data/maps/LakeSerenity/scripts.pory"
	face_up
	step_end

# 357 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveM:
# 358 "data/maps/LakeSerenity/scripts.pory"
	jump_down
# 359 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 359 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 360 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 360 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 361 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
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
# 366 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
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
# 368 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
	step_end

# 371 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoLeaveFContinued:
# 372 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 373 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 374 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 375 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 375 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 376 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_down
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
# 377 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_left
	step_end

# 380 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoPanDown:
# 381 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 381 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

# 384 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgoPanUp:
# 385 "data/maps/LakeSerenity/scripts.pory"
	walk_up
# 385 "data/maps/LakeSerenity/scripts.pory"
	walk_up
	step_end

# 388 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_ProfessorLeaves:
# 389 "data/maps/LakeSerenity/scripts.pory"
	walk_right
# 390 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 390 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 390 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 390 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 391 "data/maps/LakeSerenity/scripts.pory"
	walk_left
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
	step_end

LakeSerenity_LakeSerenityPostAlgo_Trigger::
# 400 "data/maps/LakeSerenity/scripts.pory"
	lock
# 401 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_NORMAL
# 402 "data/maps/LakeSerenity/scripts.pory"
	playse SE_PIN
# 403 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeSerenity_SurpriseFaceUp
# 404 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_ProfChase2_Trigger_Text_0, MSGBOX_DEFAULT
# 405 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 406 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 407 "data/maps/LakeSerenity/scripts.pory"
	special SpawnCameraObject
# 408 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanUp
# 409 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 0
# 410 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 411 "data/maps/LakeSerenity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeSerenity_PanDown
# 412 "data/maps/LakeSerenity/scripts.pory"
	applymovement 4, LakeSerenity_AlgotrixApproaches
# 413 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 4
# 414 "data/maps/LakeSerenity/scripts.pory"
	playmoncry SPECIES_PAROPEAT, CRY_MODE_WEAK
# 415 "data/maps/LakeSerenity/scripts.pory"
	msgbox LakeSerenity_LakeSerenityPostAlgo_Trigger_Text_0, MSGBOX_DEFAULT
# 416 "data/maps/LakeSerenity/scripts.pory"
	waitmoncry
# 417 "data/maps/LakeSerenity/scripts.pory"
	closemessage
# 418 "data/maps/LakeSerenity/scripts.pory"
	delay 40
# 419 "data/maps/LakeSerenity/scripts.pory"
	applymovement 4, LakeSerenity_AlgotrixDisappears
# 420 "data/maps/LakeSerenity/scripts.pory"
	waitmovement 4
# 421 "data/maps/LakeSerenity/scripts.pory"
	setobjectxy 4, 0, 0
# 422 "data/maps/LakeSerenity/scripts.pory"
	special RemoveCameraObject
# 423 "data/maps/LakeSerenity/scripts.pory"
	setvar VAR_LAKE_SERENITY_STATE, 4
# 424 "data/maps/LakeSerenity/scripts.pory"
	release
	return


# 427 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgotrixApproaches:
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
# 428 "data/maps/LakeSerenity/scripts.pory"
	walk_down
	step_end

# 431 "data/maps/LakeSerenity/scripts.pory"
LakeSerenity_AlgotrixDisappears:
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
# 432 "data/maps/LakeSerenity/scripts.pory"
	walk_fast_up
	step_end

LakeSerenity_ProfChase1_Trigger_Text_0:
# 28 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: W-Wait!\p"
	.string "Come back!$"

LakeSerenity_ProfChase2_Trigger_Text_0:
# 63 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Triiiix!$"

LakeSerenity_AlgoTech_Event_Text_0:
# 78 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Oh! Hey there,\n"
	.string "{PLAYER}!\n"
	.string "I'm glad you came.$"

LakeSerenity_AlgoTech_Event_Text_1:
# 86 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'm guessing you saw me\n"
	.string "haphazardly chasing whatever that\l"
	.string "thing was.\p"
	.string "Whatever I was chasing, it just\n"
	.string "disappeared!\p"
	.string "…Or did it?{PLAY_BGM}{MUS_VSAUCE_THEME}$"

LakeSerenity_AlgoTech_Event_Text_2:
# 96 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: …\p"
	.string "Yeah, it's gone.$"

LakeSerenity_AlgoTech_Event_Text_3:
# 98 "data/maps/LakeSerenity/scripts.pory"
	.string "I assume it must have been an\n"
	.string "undiscovered Pokémon. A brand new one,\l"
	.string "too. Of all the bizarre creatures I've\l"
	.string "seen in Vidioh over the past few\l"
	.string "decades, I've never seen anything like\l"
	.string "it. It looked a bit like a Hootube in a\l"
	.string "way.$"

LakeSerenity_AlgoTech_Event_Text_4:
# 102 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: …$"

LakeSerenity_AlgoTech_Event_Text_5:
# 107 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I apologize over what\n"
	.string "you had to witness a bit ago in the\l"
	.string "boardroom. I don't even know how you\l"
	.string "got up there to begin with, but I\l"
	.string "digress.$"

LakeSerenity_AlgoTech_Event_Text_6:
# 111 "data/maps/LakeSerenity/scripts.pory"
	.string "That company had humble beginnings in\n"
	.string "Icovale. As the city grew, the company\l"
	.string "grew, too.$"

LakeSerenity_AlgoTech_Event_Text_7:
# 114 "data/maps/LakeSerenity/scripts.pory"
	.string "Now it's being taken over by them.\n"
	.string "They're powerful and very dangerous.\p"
	.string "Having lived in Homege your entire life,\n"
	.string "I wouldn't be surprised if you never\l"
	.string "heard of them before.\p"
	.string "The corporation that took over…\n"
	.string "They call themselves AlgoTe-$"

LakeSerenity_AlgoTech_Event_Text_8:
# 123 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Who are you? This is a restricted\n"
	.string "area.\n"
	.string "Get out now!$"

LakeSerenity_AlgoTech_Event_Text_9:
# 132 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: {PLAYER}!$"

LakeSerenity_AlgoTech_Event_Text_10:
# 137 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: It's them!\n"
	.string "They work for AlgoTech!$"

LakeSerenity_AlgoTech_Event_Text_11:
# 143 "data/maps/LakeSerenity/scripts.pory"
	.string "Ah, you've never heard of us, huh?\n"
	.string "That's pretty refreshing. You'll be\l"
	.string "hearing from us a lot more if you don't\l"
	.string "get out now.$"

LakeSerenity_AlgoTech_Event_Text_12:
# 147 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'm gonna have to\n"
	.string "disagree. I just saw a brand new\l"
	.string "Pokémon in this area, and, as the\l"
	.string "professor and also gym leader of the\l"
	.string "nearby city, I have the authority and\l"
	.string "especially responsibility to look into\l"
	.string "this.$"

LakeSerenity_AlgoTech_Event_Text_13:
# 155 "data/maps/LakeSerenity/scripts.pory"
	.string "It's here!?$"

LakeSerenity_AlgoTech_Event_Text_14:
# 158 "data/maps/LakeSerenity/scripts.pory"
	.string "We'll have to tell the higher-ups about\n"
	.string "this later.$"

LakeSerenity_AlgoTech_Event_Text_15:
# 165 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: That Pokémon…\p"
	.string "It was running from you, wasn't it?\n"
	.string "What does AlgoTech want with it?$"

LakeSerenity_AlgoTech_Event_Text_16:
# 170 "data/maps/LakeSerenity/scripts.pory"
	.string "That's classified information. Leave\n"
	.string "now, or we'll be forced to remove you.$"

LakeSerenity_AlgoTech_Event_Text_17:
# 175 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Ha…!\p"
	.string "Maybe you weren't listening earlier.\n"
	.string "I happen to be the gym leader of\l"
	.string "Icovale City.\p"
	.string "I'm not going to be intimidated by some\n"
	.string "low-level thugs.$"

LakeSerenity_AlgoTech_Event_Text_18:
# 180 "data/maps/LakeSerenity/scripts.pory"
	.string "Look, we don't care who you are.\p"
	.string "We have strict orders to catch……\n"
	.string "…that Pokémon.$"

LakeSerenity_AlgoTech_Event_Text_19:
# 184 "data/maps/LakeSerenity/scripts.pory"
	.string "Quite frankly, we're out of patience.\p"
	.string "If you're going to get in our way, then\n"
	.string "that means you're in AlgoTech's way!{PLAY_BGM}{MUS_ENCOUNTER_MAGMA}$"

LakeSerenity_AlgoTech_Event_Text_20:
# 189 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: I'll take the left one.\n"
	.string "The right thug is all on you.\p"
	.string "I'm counting on you, kid.$"

LakeSerenity_AlgoTech_Event_Text_21:
# 200 "data/maps/LakeSerenity/scripts.pory"
	.string "Ughh…$"

LakeSerenity_AlgoTech_Event_Text_22:
# 203 "data/maps/LakeSerenity/scripts.pory"
	.string "They're not going to be happy with us\n"
	.string "during debrief later.$"

LakeSerenity_AlgoTech_Event_Text_23:
# 207 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Before that debrief\n"
	.string "happens…$"

LakeSerenity_AlgoTech_Event_Text_24:
# 211 "data/maps/LakeSerenity/scripts.pory"
	.string "…we need some answers.$"

LakeSerenity_AlgoTech_Event_Text_25:
# 215 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: A little help here,\n"
	.string "{PLAYER}?$"

LakeSerenity_AlgoTech_Event_Text_26:
# 222 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Now, then.\n"
	.string "What was that machine? A Pokémon?$"

LakeSerenity_AlgoTech_Event_Text_27:
# 226 "data/maps/LakeSerenity/scripts.pory"
	.string "Okay, okay, fine!\n"
	.string "Yes, it's a Pokémon.\p"
	.string "However, it's also property of AlgoTech.$"

LakeSerenity_AlgoTech_Event_Text_28:
# 230 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: So what? You mean they\n"
	.string "made that thing?\p"
	.string "Why? What do they plan on doing with it?$"

LakeSerenity_AlgoTech_Event_Text_29:
# 234 "data/maps/LakeSerenity/scripts.pory"
	.string "We don't know. They don't tell us all of\n"
	.string "these things.\p"
	.string "You said it yourself, we're low-level in\n"
	.string "the company.$"

LakeSerenity_AlgoTech_Event_Text_30:
# 238 "data/maps/LakeSerenity/scripts.pory"
	.string "They tell us to do something, we do it.\n"
	.string "No questions asked.$"

LakeSerenity_AlgoTech_Event_Text_31:
# 242 "data/maps/LakeSerenity/scripts.pory"
	.string "………\n"
	.string "………$"

LakeSerenity_AlgoTech_Event_Text_32:
# 246 "data/maps/LakeSerenity/scripts.pory"
	.string "They don't know anything.$"

LakeSerenity_AlgoTech_Event_Text_33:
# 254 "data/maps/LakeSerenity/scripts.pory"
	.string "Prof. Sequoia: Get of here.$"

LakeSerenity_AlgoTech_Event_Text_34:
# 269 "data/maps/LakeSerenity/scripts.pory"
	.string "Sequoia, and…\n"
	.string "…{PLAYER}, was it?\p"
	.string "……\n"
	.string "……\p"
	.string "You're gonna regret this day.$"

LakeSerenity_AlgoTech_Event_Text_35:
# 282 "data/maps/LakeSerenity/scripts.pory"
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
# 415 "data/maps/LakeSerenity/scripts.pory"
	.string "???: Trix?$"
