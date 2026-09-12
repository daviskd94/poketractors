SouthCampus_PlayerDorm_MapScripts::
# 2 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthCampus_PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SouthCampus_PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	map_script_2 VAR_PLAYERDORM_STATE, 0, PlayerDorm_WakeUp
	.2byte 0


PlayerDorm_WakeUp::
# 9 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	lockall
# 10 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 11 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 13 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 80
# 14 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 15 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 16 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 17 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 20 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 23 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement
# 24 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 25 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	clearflag FLAG_HIDE_TRACIE
# 26 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	addobject OBJ_EVENT_ID_PLAYER, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 27 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 29 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 80
# 30 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 31 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 20
# 32 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 33 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_PIN
# 34 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 35 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 60
# 36 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 37 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 38 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 39 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 40 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Enter_Tracie
	return


Player_Dorm_Door_Knocking::
# 44 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 45 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 46 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 47 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 48 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 49 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
	return


Player_Dorm_Enter_Tracie::
# 54 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_DOOR
# 55 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Tracie_EnterRoom
# 56 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement LOCALID_TRACIE
# 57 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_0
# 58 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 59 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 60 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 61 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 62 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_0
# 63 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 64 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Approach
# 65 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 66 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_1
# 67 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 68 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 69 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_1
# 70 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 71 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_2
# 72 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 73 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 74 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_2
# 75 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 76 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_3
# 77 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 78 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 79 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_3
# 80 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 81 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Leaves
# 82 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 83 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 84 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 86 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 87 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 88 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 89 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	releaseall
	end


# 93 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Tracie_EnterRoom:
# 94 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	set_visible
# 95 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Approach:
# 99 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 99 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 99 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 100 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
# 100 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
# 100 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Leaves:
# 104 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 104 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 104 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 105 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
# 105 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
# 105 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
	step_end

Player_Dorm_Take_Eevee::
# 109 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 2
# 110 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 111 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	removeobject LOCALID_EEVEE
# 112 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	updatefollowingmon
# 113 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Take_Eevee_Text_0
# 115 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitfanfare
# 116 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_TAKE_EEVEE
# 117 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Nickname_Eevee
# 119 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Nickname_Eevee::
# 124 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Nickname_Eevee_Text_0, MSGBOX_YESNO
# 125 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Player_Dorm_Nickname_Eevee_2
Player_Dorm_Nickname_Eevee_1:
	return

Player_Dorm_Nickname_Eevee_2:
# 126 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 127 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Player_Dorm_Nickname_Eevee_1


Player_Dorm_EventScript_CheckPlayersPC::
# 133 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_0x8004, 1
# 134 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	special DoPCTurnOnEffect
# 135 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_PC_ON
# 136 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_EventScript_CheckPlayersPC_Text_0, MSGBOX_DEFAULT
# 137 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	special BedroomPC
# 138 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitstate
# 139 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	releaseall
	end


Player_Dorm_Trigger_CantLeave::
# 144 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	lock
# 145 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Trigger_CantLeave_Text_0
# 146 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 147 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Trigger_CantLeave_Movement_0
# 148 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 149 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_NintendoSwitch::
# 154 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_NintendoSwitch_Text_0
# 155 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Drawers::
# 160 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Drawers_Text_0
# 161 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


EventScript_New_TV::
# 166 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox EventScript_New_TV_Text_0
# 167 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_left
	step_end

# 32 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 32 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_down
# 32 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 36 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	jump_right
	step_end

# 57 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_0:
# 57 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_down
	step_end

# 66 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_1:
# 66 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_right
	step_end

# 71 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_2:
# 71 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_right
# 71 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_3:
# 76 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_left
	step_end

# 147 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Trigger_CantLeave_Movement_0:
# 147 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
	step_end

PlayerDorm_WakeUp_Text_0:
# 17 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Hello…? {PLAYER}?\p"
	.string "{PLAYER}, are you there?$"

Player_Dorm_Enter_Tracie_Text_0:
# 62 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Ugh! Seriously?$"

Player_Dorm_Enter_Tracie_Text_1:
# 69 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "You're sleeping right now?\n"
	.string "Today of all days?\p"
	.string "Come on! You didn't actually forget,\n"
	.string "did you?\p"
	.string "Our {COLOR GREEN}senior orientation{COLOR DARK_GRAY} is today!\n"
	.string "I can't believe you!\p"
	.string "We've been dreaming of this day since\n"
	.string "we were kids!$"

Player_Dorm_Enter_Tracie_Text_2:
# 74 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "I can’t believe it…\n"
	.string "Me… Tracie!\p"
	.string "Soon to be grad and official Pokémon\n"
	.string "Trainer!$"

Player_Dorm_Enter_Tracie_Text_3:
# 79 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Well, what are we waiting for!?\p"
	.string "Grab {COLOR GREEN}Eevee {COLOR DARK_GRAY}and let's go!\n"
	.string "I'm so excited!$"

Player_Dorm_Take_Eevee_Text_0:
# 114 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "{PLAYER} picked up their\npartner, Eevee!$"

Player_Dorm_Nickname_Eevee_Text_0:
# 124 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Does Eevee have a nickname?$"

Player_Dorm_EventScript_CheckPlayersPC_Text_0:
# 136 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "{PLAYER} booted up the laptop.$"

Player_Dorm_Trigger_CantLeave_Text_0:
# 145 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "You can't leave without {COLOR GREEN}Eevee {COLOR DARK_GRAY}.$"

Player_Dorm_NintendoSwitch_Text_0:
# 154 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "It's a Nintendo Switch 2.\p"
	.string "There are two JoyCons attached to the\n"
	.string "sides.$"

Player_Dorm_Drawers_Text_0:
# 160 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "The drawers are filled with clothes and\n"
	.string "school supplies.$"

EventScript_New_TV_Text_0:
# 166 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Mom would like this show…\n"
	.string "… … …\p"
	.string "Time to go!$"
