# 1 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 2 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 4 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_MapScripts::
# 5 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.byte 0
# 6 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 7 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger0::
# 8 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 9 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroLeftTrigger
# 10 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 11 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 12 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger1::
# 13 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 14 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroMidTrigger
# 15 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 16 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 17 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroTrigger2::
# 18 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	compare VAR_HOMEGE_INTRO_STATE, 2
# 19 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call_if_lt HomegeTown_PlayerHouse_1F_EventScript_MomIntroRightTrigger
# 20 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
# 21 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 22 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroLeftTrigger::
# 23 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 24 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 25 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 26 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 27 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 28 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom
# 29 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerLeft
# 30 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 32 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 33 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 34 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackLeft
# 35 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 37 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 38 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 39 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroMidTrigger::
# 40 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 42 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 43 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 44 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 45 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerMid
# 46 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 48 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 49 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 50 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackMid
# 51 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 53 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 54 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 55 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_MomIntroRightTrigger::
# 56 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lockall
# 57 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer
# 58 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 10
# 59 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro1, MSGBOX_DEFAULT
# 60 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 61 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom
# 62 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerRight
# 63 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomIntro2, MSGBOX_DEFAULT
# 65 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 20
# 66 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	call HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes
# 67 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, HomegeTown_PlayerHouse_1F_Movement_MomWalkBackRight
# 68 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	releaseall
# 70 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 71 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 72 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_EventScript_GiveRunningShoes:: 
# 73 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_MomGivesRunningShoes, MSGBOX_DEFAULT
# 74 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 75 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	message HomegeTown_PlayerHouse_1F_Text_SwitchShoesWithRunningShoes
# 76 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 77 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 78 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 79 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_HOMEGE_INTRO_STATE, 2
# 80 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 81 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox HomegeTown_PlayerHouse_1F_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 82 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 83 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	delay 30
# 84 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	return
# 85 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 86 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomFacePlayer:
# 87 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_right
# 88 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 89 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 90 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_PlayerFaceMom:
# 91 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	face_down
# 92 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 93 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 94 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerLeft:
# 95 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 96 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 97 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 98 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 99 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 100 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 101 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerMid:
# 102 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 105 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 106 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 107 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 108 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkToPlayerRight:
# 109 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 111 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 113 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 114 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_up
# 115 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 116 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 117 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackLeft:
# 118 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 119 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 120 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 121 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 122 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 123 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 124 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackMid:
# 125 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 126 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 127 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 128 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 129 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 130 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 131 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Movement_MomWalkBackRight:
# 132 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 133 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 134 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 135 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 136 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 137 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	step_end
# 138 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 139 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomIntro1:
# 140 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Ah, {PLAYER}! You're finally awake.$"
# 141 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 142 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomIntro2:
# 143 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "You must have been up late last night!\n"
# 144 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Your friend, {RIVAL}, came by looking for\l"
# 145 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "you, but I told him you were still\l"
# 146 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "sleeping.$"
# 147 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 148 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_MomGivesRunningShoes:
# 149 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Oh, I almost forgot. Before you\n"
# 150 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "head out, I wanted to give you these\l"
# 151 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES!$"
# 152 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 153 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_SwitchShoesWithRunningShoes:
# 154 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 155 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES.$"
# 156 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 157 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_ExplainRunningShoes:
# 158 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, those shoes came with\n"
# 159 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "instructions.\p"
# 160 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 161 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 162 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "...\p"
# 163 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I'm not really sure what a “B Button”\n"
# 164 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "is, but I'm sure you'll figure it out!$"
# 165 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 166 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayerHouse_1F_Text_ComeHomeIfAnythingHappens:
# 167 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "Mom: Don't forget that PROF. SEQUOIA is\n"
# 168 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "waiting for you at the lab.\p"
# 169 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I can't believe you're already old\n"
# 170 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "enough to get your first Pokémon!\p"
# 171 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "I'll be at home if you need anything,\n"
# 172 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER}.$"
# 173 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"

# 174 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
HomegeTown_PlayersHouse_1F_EventScript_Mom::
# 175 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	lock
# 176 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 177 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	goto_if_set FLAG_LAB_INTRO_SEQUENCE, PlayersHouse_1F_EventScript_MomHealsParty
# 178 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 179 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	release
# 180 "data/maps/HomegeTown_PlayerHouse_1F/scripts.pory"
	end
