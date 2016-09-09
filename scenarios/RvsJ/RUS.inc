###########################
#Country definition for RUS
###########################
province = { id = 1179 air_base = 2 anti_air = 1 ic = { size = 1 current_size = 1 } } #Yakutsk
province = { id = 1184 air_base = 2 naval_base = 2 coastalfort = 1 anti_air = 1 ic = { size = 1 current_size = 1 } } #Petropavlovsk-Kamchatskij
province = { id = 1187 air_base = 3 anti_air = 1 ic = { size = 2 current_size = 2 } } #Chita
province = { id = 1188 air_base = 6 anti_air = 1 ic = { size = 2 current_size = 2 } } #Irkutsk
province = { id = 1162 air_base = 4 anti_air = 1 ic = { size = 1 current_size = 1 } } #Tynda
province = { id = 1186 air_base = 4 naval_base = 4 coastalfort = 1 anti_air = 1 ic = { size = 1 current_size = 1 } } #Okhotsk
province = { id = 1189 air_base = 6 naval_base = 1 anti_air = 1 } #Nikolayevsk-na-Amure
province = { id = 1170 air_base = 3 anti_air = 1 } #Never

#####################
#Country main data #
#####################

country = {
	tag = RUS
        ai = "kaiserreich\RvsJ_RUS.ai"
        flag_ext = _emp
	name = RUS_EMP_NAME
	manpower = 250
	oil = 500
	supplies = 5000
	capital = 1162
	extra_tc = 50
	escorts = 10
	transports = 50
	free = { oil = 50 ic = 70 }

	policy = { democratic = 3 political_left = 3 freedom = 4 free_market = 6 professional_army = 4 defense_lobby = 8 interventionism = 8 }

	nationalprovinces = { 1177 1164 1162 1166 1070 1161 1163 1167 1168 1169 1178 1179 1170 1171 1176 1188 1175 1187 1189 1186 
        1180 1181 1182 1183 1184 1174
        }
	ownedprovinces = { 1177 1164 1162 1166 1070 1161 1163 1167 1168 1169 1178 1179 1170 1171 1176 1188 1175 1187 1189 1186 
        1180 1181 1182 1183 1184 1174
        }
	controlledprovinces = { 1177 1164 1162 1166 1070 1161 1163 1167 1168 1169 1178 1179 1170 1171 1176 1188 1175 1187 1189 1186 
        1180 1181 1182 1183 1184 1174
        }
        claimedprovinces = { 1191 1196 1193 1192 1195 1194 1190 1185 }

diplomacy = {
relation = {   tag =    MON	value = 	120	   }  
relation = {   tag =  	MAN	value =		-50	   }  
relation = {   tag =  	CHC	value = 	5	   }  
relation = {   tag =  	PRI	value =		-100	   }  
relation = {   tag =  	JAP	value = 	-150	   }   
}

	techapps = {
	
#Infantry 
1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 #1939 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 #1939 Mountain Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 #1939 Cavalry Division
1830 1840 1850 1860 1870 #Engineers
1560 1570 1580 1590 # 1937 Marine division
1670 # 1938 Airborne division
1396 1400 # 1939 Motorized division
1910 1920 1930 1940 1950 1960 1970 1980 1990 #Interbellum 1930 Supply 

#Armour & Artillery
7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 #1939 Tank 
2860 2870 2880 2020 2150 #Basic Armoured Car 
2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 #Early Field Artillery 
2800 2450 21180 21190 21200 2460 #Early Static Anti-Air Artillery 
2810 2820 2510 2520 #Basic Anti-Air Artillery Brigade 
2100 # 1939 Heavy tank
2220 # Early Self-Propelled Artillery
2400 2410 # Anti-Tank Artillery

#Naval 
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 3150 #GW Light Cruiser 
3210 3220 3230 3240 3250  #Improved Heavy Cruiser 
3310 3320 3330 #Great War Battlecruiser 
3410 3420 3430 3440 3450 3456 3460 #Early Battleship 
3610 3620 3630 3640 3650 #Short Range Submarine 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 3820 #Troopships
	
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4600 4610 4620 4630 4120 #Early Bomber 
4300 4310 4320 4330 4340 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4290 # Transports
4740 4750 4760 #SEAPLANES
7290 7300 7310 7320 #1922 CAS
	
#Industrial	
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 5327 5320 #Computers & cryptografi
5810 5820 5050 #manufactoring
5800 5080 #Construction Engineering 
5190 #Basic Oil Refining 
5600 5610 5620 #Medicine
5560 #Exp. Rocket

# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
14000 14010 14020 14030 # Hospital System 
6010 6020 6040 6050 6060 6070 # Superior firepower (land)
6900 # Armored division formation

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080
82300 # Amphib
82500 # Naval Logistics
8900 8910 8920 8930 8940 8950 # Fleet in being
8600 8610 # Trade Interdiction Submarine
8100 8110 8120 8150 8160 8170 8200 8210 # Naval Supremacy
81650 # Subsidiary carrier role

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040
9140 9145
9090 9100 9110 9120 9130
9050 9060 9070 9080
9190 9200 9210 9220 9230 9240
}

dormant_leaders        = {  500814 500815 500816 500817 500818 500819 500820 500464 500593 500597 500604 500611 500613
                            500615 500618 500619 
                            500624 500625 500622 500633 500634 500645 500646 500649 500642 500660 500465 500466
							}


	headofstate = { type = 9 id = 4194 }
	headofgovernment = { type = 9 id = 4192 }
	chiefofarmy = { type = 9 id = 4181 }
	chiefofstaff = { type = 9 id = 4086 }
	chiefofnavy = { type = 9 id = 4144 }
	armamentminister = { type = 9 id = 4083 }
	ministerofsecurity = { type = 9 id = 4110 }
	ministerofintelligence = { type = 9 id = 4123 }
	chiefofair = { type = 9 id = 4145 }

landunit = {
	location = 1188
	name = "25ya Armiya"
	id = { type = 10848 id = 1 }
        division = {
	id = { type = 10848 id = 2 }
	name = "76. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 7
        experience = 10
        }
        division = {
	id = { type = 10848 id = 3 }
	name = "23. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = engineer
        brigade_model = 1
        experience = 5
        }
        division = {
	id = { type = 10848 id = 4 }
	name = "65. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 7
        experience = 5
        }
        division = {
	id = { type = 10848 id = 5 }
	name = "12. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 6 }
	name = "13. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 7 }
	name = "14. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 8 }
	name = "5. Sibirskaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 9 }
	name = "6. Sibirskaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        } 
        }

landunit = {
	id = { type = 10848 id = 108 }
	name = "1. Gornostrelkovaya Diviziya"
	location = 1188
        division = {
	id = { type = 10848 id = 40 }
	name = "1. Gornostrelkovaya Diviziya"
	type = bergsjaeger
	model = 10
	strength = 100 
        experience = 20
        } 
        }

landunit = {
	id = { type = 10848 id = 110 }
	name = "2. Gornostrelkovaya Diviziya"
	location = 1187
        division = {
	id = { type = 10848 id = 41 }
	name = "2. Gornostrelkovaya Diviziya"
	type = bergsjaeger
	model = 10
	strength = 100 
        } 
        }

landunit = {
	location = 1187
	name = "26ya Armiya"
	id = { type = 10848 id = 10 }
        division = {
	id = { type = 10848 id = 11 }
	name = "1. Birobidzanskaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        division = {
	id = { type = 10848 id = 12 }
	name = "2. Sibirskaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = engineer 
        }
        division = {
	id = { type = 10848 id = 13 }
	name = "3. Sibirskaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 14 }
	name = "4. Sibirskaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 15 }
	name = "78. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6 
        }
        division = { 
        id = { type = 10848 id = 16 }
	name = "67. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 17 }
	name = "68. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 10848 id = 18 }
	name = "69. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100 
        } 
        }

landunit = {
	id = { type = 10848 id = 66 }
	name = "1ya Vozhdushnaya Diviziya"
	location = 1186
        division = {
	locked = yes
	id = { type = 10848 id = 67 }
	name = "1ya Vozhdushnaya Diviziya"
	type = paratrooper
	strength = 100
	model = 0
	extra = artillery
	brigade_model = 6
        } 
        }

landunit = {
	id = { type = 10848 id = 68 }
	name = "Okhotskiy garnizon"
	location = 1186
        division = {
	locked = yes
	id = { type = 10848 id = 69 }
	name = "Okhotskiy garnizon"
	type = garrison
	strength = 100
	model = 5
	extra = artillery
	brigade_model = 7
        } 
        }

landunit = {
	id = { type = 10848 id = 70 }
	name = "Petropavlovskiy garnizon"
	location = 1184
        division = {
	locked = yes
	id = { type = 10848 id = 71 }
	name = "Petropavlovskiy garnizon"
	type = garrison
	strength = 100
	model = 5
	extra = artillery
	brigade_model = 6
        } 
        }

landunit = { id = { type = 10848 id = 72 }
	name = "Irkutskiy garnizon"
	location = 1162
        division = {
	locked = yes
	id = { type = 10848 id = 74 }
	name = "Irkutskiy garnizon"
	type = garrison
	strength = 100
	model = 5
	extra = artillery
	brigade_model = 6 
        } 
        }

landunit = {
	id = { type = 10848 id = 75 }
	name = "75ya Rossiyskiy Korpus"
	location = 1168
        division = {
	id = { type = 10848 id = 76 }
	name = "77ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

        division = {
	id = { type = 10848 id = 77 }
	name = "79ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 

        division = {
	id = { type = 10848 id = 128 }
	name = "90. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

landunit = {
	id = { type = 10848 id = 78 }
	name = "76ya Rossiyskiy Korpus"
	location = 1170
        division = {
	id = { type = 10848 id = 79 }
	name = "80ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 6 
        }
        division = { 
	id = { type = 10848 id = 80 }
	name = "81ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 136 }
	name = "91. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

landunit = {
	id = { type = 10848 id = 81 }
	name = "79ya Rossiyskiy Korpus"
	location = 1174
        division = {
	id = { type = 10848 id = 82 }
	name = "82ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 83 }
	name = "83ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 130 }
	name = "92. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6 
        }
        }

landunit = {
	id = { type = 10848 id = 84 }
	name = "81ya Rossiyskiy Korpus"
	location = 1176
        division = {
	id = { type = 10848 id = 85 }
	name = "84ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 86 }
	name = "85ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 131 }
	name = "93. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

landunit = {
	id = { type = 10848 id = 87 }
	name = "30ya Armiya"
	location = 1120
        division = {
	id = { type = 10848 id = 88 }
	name = "84ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 89 }
	name = "85ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        }
        division = {
	id = { type = 10848 id = 90 }
	name = "86ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        }
        division = {
	id = { type = 10848 id = 91 }
	name = "87ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        }
        division = {
	id = { type = 10848 id = 92 }
	name = "88ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        }
        division = {
	id = { type = 10848 id = 93 }
	name = "89ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 132 }
	name = "94. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        division = {
	id = { type = 10848 id = 133 }
	name = "95. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

landunit = {
	id = { type = 10848 id = 94 }
	name = "85ya Rossiyskiy Korpus"
	location = 1175
        division = {
	id = { type = 10848 id = 95 }
	name = "84ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 96 }
	name = "85ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 134 }
	name = "96. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

landunit = {
	id = { type = 10848 id = 97 }
	location = 1188
	name = "1yi Mekhanizirovannyi Korpus"
        division = {
	id = { type = 10848 id = 98 }
	name = "1ya Tankovaya Diviziya"
	type = armor
	model = 0
	strength = 100
	extra = heavy_armor
	brigade_model = 1
        experience = 30
        }
        division = {
	id = { type = 10848 id = 99 }
	name = "3ya Tankovaya Diviziya"
	type = armor
	model = 0
	strength = 100
	extra = sp_artillery
	brigade_model = 0 
        }
        division = {
	id = { type = 10848 id = 100 }
	name = "1ya Motoriz. Div."
	type = motorized
	model = 1
	strength = 100
	extra = armored_car
	brigade_model = 2 
        } 
        }

landunit = {
	id = { type = 10848 id = 101 }
	location = 1186
	name = "1. Diviziya Morskoi Pekhoty"
        division = {
	id = { type = 10848 id = 102 }
	name = "1. Diviziya Morskoi Pekhoty"
	type = marine
	model = 3
	strength = 100
	extra = artillery
	brigade_model = 6 
        } 
        }

landunit = {
	id = { type = 10848 id = 103 }
	name = "Nikolayevsky garnizon"
	location = 1189
        division = {
	locked = yes
	id = { type = 10848 id = 104 }
	name = "Nikolayevsky garnizon"
	type = garrison
	strength = 100
	model = 5
	extra = artillery
	brigade_model = 6 
        } 
        }

landunit = {
	id = { type = 10848 id = 105 }
	name = "86ya Rossiyskiy Korpus"
	location = 1189
        division = {
	id = { type = 10848 id = 106 }
	name = "77ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 107 }
	name = "79ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 135 }
	name = "97. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }

navalunit = {
	id = { type = 17351 id = 24 }
	name = "Tikhookeanskiy Flot"
	location = 1186 #Okhotsk
	base = 1186
	leader = 500713
        division = {
	id = { type = 17351 id = 25 }
	name = "Imperator Aleksandr III"
	type = battleship
	model = 5 
        }
        division = {
	id = { type = 17351 id = 27 }
	name = "Dimitrij Donskij"
	type = heavy_cruiser
	model = 3 
        }
        division = {
	id = { type = 17351 id = 30 }
	name = "Okhotsk"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 17351 id = 31 }
	name = "Vostok"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 17351 id = 33 }
	name = "8. Flotiliya Esmintsev"
	type = destroyer
	model = 4 
        } 
        }

navalunit = {
	id = { type = 17351 id = 37 }
	name = "Tikhookeanskaya transportnaya eskadra"
	location = 1186 #Okhotsk
	base = 1186
	leader = 500728
        division = {
	id = { type = 17351 id = 36 }
	name = "1. Transportnaya Flotiliya"
	type = transport
        model = 1
        }
        division = {
	id = { type = 17351 id = 32 }
	name = "6. Flotiliya Esmintsev"
	type = destroyer
	model = 3 
        } 
        }

navalunit = {
	id = { type = 17351 id = 38 }
	name = "1yi Tikhookeanskyi Flot Podlodok"
	location = 1186 #Okhotsk
	base = 1186
	leader = 500726
        division = {
	id = { type = 17351 id = 34 }
	name = "1. Flotiliya Podlodok"
	type = submarine
	model = 3 
        }
        division = {
	id = { type = 17351 id = 35 }
	name = "2. Flotiliya Podlodok"
	type = submarine
	model = 4 
        } 
        }

navalunit = {
	id = { type = 17351 id = 39 }
	name = "Bystryi Flot"
	location = 1186 #Okhotsk
	base = 1186
	leader = 500740
        division = {
	id = { type = 17351 id = 26 }
	name = "Moskva"
	type = battlecruiser
	model = 3 
        }
        division = {
	id = { type = 17351 id = 28 }
	name = "Rossiya"
	type = heavy_cruiser
	model = 3 
        }
        division = {
	id = { type = 17351 id = 29 }
	name = "Petropavlovsk"
	type = light_cruiser
	model = 4 
        } 
        }

airunit = {
	id = { type = 10848 id = 19 }
	name = "9. AK (Amurskiy)/Bomb."
	location = 1188
	base = 1188
        division = {
	id = { type = 10848 id = 20 }
	name = "33. BAD"
	strength = 100
	type = tactical_bomber
	model = 8 
        }
        division = {
	id = { type = 10848 id = 21 }
	name = "30. BAD"
	strength = 100
	type = tactical_bomber
	model = 8 
        } 
        }

airunit = {
	location = 1188
	base = 1188
	id = { type = 10848 id = 22 }
	name = "9. AK (Amurskiy)/IAK"
        division = {
	id = { type = 10848 id = 23 }
	name = "29. IAD"
	strength = 100
	type = interceptor
	model = 9 
        }
        division = {
	id = { type = 10848 id = 24 }
	name = "30. IAD"
	strength = 100
	type = interceptor
	model = 9 
        } 
        }

airunit = {
	location = 1187
	base = 1187
	id = { type = 10848 id = 25 }
	name = "9. AK (Amurskiy)/IAK"
        division = {
	id = { type = 10848 id = 26 }
	name = "31. IAD"
	strength = 100
	type = multi_role
	model = 6 
        } 
        division = {
	id = { type = 10848 id = 155 }
	name = "5. IAD"
	strength = 100
	type = multi_role
	model = 6 
        } 
        }

airunit = {
	location = 1188
	base = 1188
	id = { type = 10848 id = 27 }
	name = "9. AK (Amurskiy)/ShAK"
        division = { 
        id = { type = 10848 id = 28 }
	name = "21. ShAD"
	strength = 100
	type = cas
	model = 5 
        }
        division = {
	id = { type = 10848 id = 29 }
	name = "19. ShAD"
	strength = 100
	type = cas
	model = 5 
        } 
        }

airunit = {
	location = 1189
	base = 1189
	id = { type = 10848 id = 30 }
	name = "8. AK (Okhotskiy)/4. MBAD"
        division = { id = { type = 10178 id = 31 }
	name = "4. MBAD"
	strength = 100
	type = naval_bomber
	model = 2 
        } 
        }

airunit = {
	location = 1186
	base = 1186
	id = { type = 10848 id = 32 }
	name = "8. AK (Okhotskiy)/2. TrAD"
        division = {
	id = { type = 10178 id = 33 }
	name = "2. TrAD"
	strength = 100
	type = transport_plane
	model = 1 
        } 
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 109 }
	name = "1ya Vozhdushnaya Diviziya"
	type = paratrooper
	strength = 100
	model = 0
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 129 }
	name = "1ya Vozhdushnaya Diviziya"
	type = paratrooper
	strength = 100
	model = 0
	extra = artillery
	brigade_model = 7
        }


landunit = {
	location = 1187
	id = { type = 13000 id = 125 }
	name = "6. Kavalerijsky Korpus"
        division = {
	id = { type = 13000 id = 126 }
	name = "5. Kavaleriyskaya Diviziya"
	strength = 100
	type = cavalry
	model = 11
        }

        division = {
	id = { type = 13000 id = 127 }
	name = "3. 'Bessarabskaya' Kav. Div."
	strength = 100
	type = cavalry
	model = 11 
        } 
        } 

landunit = {  
     id  = {  type = 13000 id =  137 } 
     name  = "Transbaykalskyi Front" 
     location = 1124 
     Division = {  
     id  = {  type = 13000 id = 138  } 
     name     = "Transbaykalskyi Front" 
     strength = 100 
     type  = HQ
     model = 3
     extra = anti_air
     brigade_model = 3
     experience = 10
     }
     }

landunit = {  
     id  = {  type = 13000 id =  139 } 
     name  = "Dalnevostochnyi Front" 
     location = 1171 
     Division = {  
     id  = {  type = 13000 id = 140  } 
     name     = "Dalnevostochnyi Front" 
     strength = 100 
     type  = HQ
     model = 3
     extra = anti_air
     brigade_model = 3
     experience = 10
     }
     }

landunit = {
	id = { type = 10848 id = 141 }
	name = "5yi Rossiyskiy Korpus"
	location = 1175
        division = {
	id = { type = 10848 id = 142 }
	name = "48ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 143 }
	name = "35ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 144 }
	name = "7. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 7
        }
        }

landunit = {
	id = { type = 10848 id = 145 }
	name = "3. Gornostrelkovaya Diviziya"
	location = 1120
        division = {
	id = { type = 10848 id = 146 }
	name = "3. Gornostrelkovaya Diviziya"
	type = bergsjaeger
	model = 10
	strength = 100 
        } 
        }


landunit = {
	id = { type = 10848 id = 147 }
	location = 1120
	name = "2yi Mekhanizirovannyi Korpus"
        division = {
	id = { type = 10848 id = 148 }
	name = "2ya Tankovaya Diviziya"
	type = armor
	model = 0
	strength = 100
	extra = heavy_armor
	brigade_model = 1
        }
        division = {
	id = { type = 10848 id = 149 }
	name = "4ya Tankovaya Diviziya"
	type = armor
	model = 0
	strength = 100
	extra = sp_artillery
	brigade_model = 0 
        }
        division = {
	id = { type = 10848 id = 150 }
	name = "2ya Motoriz. Div."
	type = motorized
	model = 1
	strength = 100
	extra = armored_car
	brigade_model = 2 
        } 
        }

landunit = {
	id = { type = 10848 id = 151 }
	name = "12yi Rossiyskiy Korpus"
	location = 1120
        division = {
	id = { type = 10848 id = 152 }
	name = "55ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }
        division = {
	id = { type = 10848 id = 153 }
	name = "56ya Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10 
        } 
        division = {
	id = { type = 10848 id = 154 }
	name = "57. Strelkovaya Diviziya"
	type = infantry
	model = 10
	strength = 100
	extra = artillery
	brigade_model = 6
        }
        }


airunit = {
	location = 1170
	base = 1170
	id = { type = 10848 id = 156 }
	name = "7. AK (Transbaykalskyi)/IAK"
        division = {
	id = { type = 10848 id = 157 }
	name = "4. IAD"
	strength = 100
	type = interceptor
	model = 9 
        }
        division = {
	id = { type = 10848 id = 158 }
	name = "2. IAD"
	strength = 100
	type = interceptor
	model = 9 
        } 
        }

airunit = {
	location = 1124
	base = 1124
	id = { type = 10848 id = 159 }
	name = "7. AK (Transbaykalskyi)/IAK"
        division = {
	id = { type = 10848 id = 160 }
	name = "9. IAD"
	strength = 100
	type = interceptor
	model = 9 
        }
        division = {
	id = { type = 10848 id = 161 }
	name = "10. IAD"
	strength = 100
	type = interceptor
	model = 9 
        } 
        }


airunit = {
	id = { type = 10848 id = 162 }
	name = "7. AK (Transbaykalskyi)/Bomb."
	location = 1124
	base = 1124
        division = {
	id = { type = 10848 id = 163 }
	name = "5. BAD"
	strength = 100
	type = tactical_bomber
	model = 8 
        }
        division = {
	id = { type = 10848 id = 164 }
	name = "10. BAD"
	strength = 100
	type = tactical_bomber
	model = 8 
        } 
        }


landdivision = {
	dormant = yes
	id = { type = 10848 id = 165 }
	name = "90. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 166 }
	name = "91. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 167 }
	name = "92. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 168 }
	name = "93. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 169 }
	name = "94. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10848 id = 170 }
	name = "95. Strelkovaya Diviziya"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }




}