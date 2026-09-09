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
# 11 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 80
# 12 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 13 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 14 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 15 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 17 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 19 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement
# 20 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 21 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 22 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 24 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 80
# 25 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 26 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 20
# 27 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 28 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_PIN
# 29 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 30 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 60
# 31 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 32 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 33 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 34 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 35 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Enter_Tracie
	return


Player_Dorm_Door_Knocking::
# 39 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 40 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 41 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 42 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
# 43 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 44 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitse
	return


Player_Dorm_Enter_Tracie::
# 49 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_DOOR
# 50 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	showobjectat LOCALID_TRACIE, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 51 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_0
# 52 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 53 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_1
# 54 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 55 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 56 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	delay 40
# 57 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 58 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_0
# 59 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 60 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Approach
# 61 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 62 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_2
# 63 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 64 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 65 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_1
# 66 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 67 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_3
# 68 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 69 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 70 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_2
# 71 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 72 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_4
# 73 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 74 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 75 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_3
# 76 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 77 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Leaves
# 78 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 79 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_SOUTH_CAMPUS_PLAYER_DORM
# 80 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 82 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 83 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 84 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 85 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	releaseall
	end


# 89 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Approach:
# 90 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 90 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 90 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
# 91 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
# 91 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
# 91 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Leaves:
# 95 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 95 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 95 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_right
# 96 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
# 96 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
# 96 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_down
	step_end

Player_Dorm_Take_Eevee::
# 100 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 2
# 101 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 102 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	removeobject LOCALID_EEVEE
# 103 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	updatefollowingmon
# 104 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Take_Eevee_Text_0
# 106 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitfanfare
# 107 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_TAKE_EEVEE
# 108 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 109 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Player_Dorm_Nickname_Eevee
# 110 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Nickname_Eevee::
# 115 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Nickname_Eevee_Text_0, MSGBOX_YESNO
# 116 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Player_Dorm_Nickname_Eevee_2
Player_Dorm_Nickname_Eevee_1:
	return

Player_Dorm_Nickname_Eevee_2:
# 117 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 118 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Player_Dorm_Nickname_Eevee_1


Player_Dorm_EventScript_CheckPlayersPC::
# 124 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	setvar VAR_0x8004, 1
# 125 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	special DoPCTurnOnEffect
# 126 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	playse SE_PC_ON
# 127 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_EventScript_CheckPlayersPC_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	special BedroomPC
# 129 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitstate
# 130 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	releaseall
	end


Player_Dorm_Trigger_CantLeave::
# 135 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	lock
# 136 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Trigger_CantLeave_Text_0
# 137 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	closemessage
# 138 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_0
# 139 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	waitmovement 0
# 140 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_NintendoSwitch::
# 145 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_NintendoSwitch_Text_0
# 146 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Drawers::
# 151 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Drawers_Text_0
# 152 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


EventScript_New_TV::
# 157 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	msgbox EventScript_New_TV_Text_0
# 158 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	release
	end


# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	slide_right
# 18 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_left
	step_end

# 27 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 27 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_down
# 27 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 31 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	jump_right
	step_end

# 51 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_0:
# 51 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_1:
# 53 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_down
	step_end

# 62 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_2:
# 62 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	face_right
	step_end

# 67 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_3:
# 67 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_right
# 67 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_4:
# 72 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_left
# 72 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	walk_fast_left
	step_end

PlayerDorm_WakeUp_Text_0:
# 15 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Hello…? {PLAYER}?\p"
	.string "{PLAYER}, are you there?$"

Player_Dorm_Enter_Tracie_Text_0:
# 58 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Ugh! Seriously?$"

Player_Dorm_Enter_Tracie_Text_1:
# 65 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "You're sleeping right now?\n"
	.string "Today of all days?\p"
	.string "Come on! You didn't actually forget,\n"
	.string "did you?\p"
	.string "Our {COLOR GREEN}senior orientation{COLOR DARK_GRAY} is today!\n"
	.string "I can't believe you!\p"
	.string "We've been dreaming of this day since\n"
	.string "we were kids!$"

Player_Dorm_Enter_Tracie_Text_2:
# 70 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "I can’t believe it…\n"
	.string "Me… Tracie!\p"
	.string "Soon to be grad and official Pokémon\n"
	.string "Trainer!$"

Player_Dorm_Enter_Tracie_Text_3:
# 75 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Well, what are we waiting for!?\p"
	.string "Grab {COLOR GREEN}Eevee {COLOR DARK_GRAY}and let's go!\n"
	.string "I'm so excited!$"

Player_Dorm_Take_Eevee_Text_0:
# 105 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "{PLAYER} picked up their\npartner, Eevee!$"

Player_Dorm_Nickname_Eevee_Text_0:
# 115 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Does Eevee have a nickname?$"

Player_Dorm_EventScript_CheckPlayersPC_Text_0:
# 127 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "{PLAYER} booted up the laptop.$"

Player_Dorm_Trigger_CantLeave_Text_0:
# 136 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "You can't leave without {COLOR GREEN}Eevee {COLOR DARK_GRAY}.$"

Player_Dorm_NintendoSwitch_Text_0:
# 145 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "It's a Nintendo Switch 2.\p"
	.string "There are two JoyCons attached to the\n"
	.string "sides.$"

Player_Dorm_Drawers_Text_0:
# 151 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "The drawers are filled with clothes and\n"
	.string "school supplies.$"

EventScript_New_TV_Text_0:
# 157 "data/maps/SouthCampus_PlayerDorm/scripts.pory"
	.string "Mom would like this show…\n"
	.string "… … …\p"
	.string "Time to go!$"
