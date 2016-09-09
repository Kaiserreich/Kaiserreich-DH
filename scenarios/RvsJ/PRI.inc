###########################
#Country definition for PRI
###########################
province = { id = 1185 ic = { size = 1 current_size = 1 } anti_air = 1 air_base = 2 landfort = 2 } #Bogorodskoe
province = { id = 1190 ic = { size = 1 current_size = 1 } landfort = 2 anti_air = 2 air_base = 5  } #Khabarovsk
province = { id = 1194 anti_air = 1 landfort = 2 ic = { size = 1 current_size = 1 } } #Amur
province = { id = 1191 ic = { size = 5 current_size = 5 } anti_air = 5 naval_base = 10 air_base = 10 landfort = 1 } #Vladivostok

##################
#Country main data
##################
country = {
	tag = PRI
	manpower = 50
	oil = 1000
	supplies = 5000
	capital	= 119
	puppet = JAP
	control = JAP
	extra_tc = 10
	transports = 20
	escorts	= 5
	free = { oil = 10 ic = 30 }

	nationalprovinces = { 1191 1196 1193 1192 1195 1194 1190 1185 1187 1188 1175 1189 1174 1176 1170 1171 1178 1180
                1186 1181 1182 1183 1184 }
	ownedprovinces	= { 1191 1196 1193 1192 1195 1194 1190 1185 }
	controlledprovinces = { 1191 1196 1193 1192 1195 1194 1190 1185 }
	
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
2200 # Early Self-Propelled Artillery
2400 2410 # Anti-Tank Artillery

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser
3310 3320 3330 3340 # Battle Cruiser
3410 3420 3430 3440 3450 3456 3460 3470 #Early Battleship
3510 3520 3530 #Great War Air Carrier
12100 12110 12120 12130 #Improved Light carrier
3610 3620 3630 3640 3650 #Short Range Submarine
3720 3730 3736 3740 3750 3760 3900 #Torpedo & ASW 18
3810 3820 #Troopships

#Aircrafts
7290 7300 7310 7320 4400 #CAS 
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4700 4710 4190 #Basic Naval Bomber
4290 # Transports
4300 4310 4320 4330 4340 #Multirole fighter
4740 4750 4760 4770 4780 #SEAPLANES
4800 4810 4820 #ww1 strategic bomber
4900 4910 4920 #CAG 34

#Industrial	
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 5327 5320 5350 5360 5330 5370 #Computers & cryptografi
5810 5820 5050 #manufactoring
5800 5080 #Construction Engineering 
5190 #Basic Oil Refining 
5600 5610 5620 #Medicine
5560 #Exp. Rocket

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6390 6400 6420 6410 #Land Doctrines
14000 14010 14020 14030 # Hospital System 

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 # Engagement Theories
8100 8110 8120 8150 # Naval Supremacy
8500 8510 8520 8550 8560 8600 8610 # Naval Interdiction
8900 8910 8920 8930 8940 8950 # Engagement Tactics - Fleet-in-Being column
81650 # Subsidiary Carrier Role
81700 81710 # Aerial Supremacy column
81850 81860 # Scouting Focus column
82300 82310 # Amphibious Warfare
82500 # Logistic Support

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040
9140 9145
9090 9100 9110 9120 9130
9050 9060 9070 9080
9190 9200 9210 9220 9230 9240
}

	policy = { democratic = 3 political_left = 3 freedom = 2 free_market = 4 professional_army = 6 defense_lobby = 7 interventionism = 7 }
	headofstate = { type = 9 id = 527001 }
	headofgovernment = { type = 9 id = 527002 }

landunit = {
	id = { type = 17343 id = 1 }
	name = "2yi Primorskiy Korpus"
	location = 1191
        division = {
	id = { type = 17343 id = 2 }
	name = "1. 'Terneyskaya' Strelk. Div."
	strength = 100
	model = 9
	type = infantry
	extra = artillery
	brigade_model = 4 
        }
        division = {
	id = { type = 17343 id = 3 }
	name = "5. Strelkovaya Diviziya"
	strength = 100
	model = 9
	type = infantry }
        division = {
	id = { type = 17343 id = 4 }
	name = "6. Strelkovaya Diviziya"
	strength = 100
	type = infantry
	model = 10
	extra = artillery
	brigade_model = 4 
        } 
        }

landunit = {
	id = { type = 17343 id = 5 }
	name = "3yi Primorskiy Korpus"
	location = 1185
        division = {
	id = { type = 17343 id = 6 }
	name = "2. 'Vladivostotskaya' Strelk. Div."
	strength = 100
	model = 10
	type = infantry
	extra = artillery
	brigade_model = 5
        }
        division = {
	id = { type = 17343 id = 7 }
	name = "3. Strelkovaya Diviziya"
	strength = 100
	model = 9
	type = infantry 
        }
        division = {
	id = { type = 17343 id = 8 }
	name = "4. Strelkovaya Diviziya"
	strength = 100
	model = 9
	type = infantry
	extra = artillery
	brigade_model = 4 
        } 
        }

landunit = {
	id = { type = 17343 id = 9 }
	name = "1yi Primorskiy Korpus"
	location = 1190
        division = {
	id = { type = 17343 id = 10 }
	name = "7. Strelkovaya Diviziya"
	strength = 100
	model = 10
	type = infantry 
        }
        division = {
	id = { type = 17343 id = 11 }
	name = "8. Strelkovaya Diviziya"
	strength = 100
	model = 9
	type = infantry 
        }
        division = {
	id = { type = 17343 id = 12 }
	name = "9. Strelkovaya Diviziya"
	strength = 100
	model = 9
	type = infantry 
        }
        division = {
	id = { type = 17343 id = 13 }
	name = "1. 'Khabarovskaya' Kav. Div."
	strength = 100
	model = 10
	type = cavalry 
        }
        division = {
	id = { type = 17343 id = 14 }
	name = "1. Motorizovannaya Diviziya"
	strength = 100
	model = 0
	type = motorized
        } 
        }

landunit = {
	id = { type = 17343 id = 15 }
	name = "Primorskiy Mekhanizirovannyi Korpus"
	location = 1194
        division = {
	id = { type = 17343 id = 16 }
	name = "2. Motorizovannaya Diviziya"
	strength = 100
	model = 0
	type = motorized
        } 
        }

navalunit = {
	id = { type = 17343 id = 17 }
	name = "Primorskiy Flot"
	location = 1191 #Vladivostok
	base = 1191
        division = {
	id = { type = 17343 id = 18 }
	name = "Kolchak"
	type = heavy_cruiser
	model = 4 
        }
        division = {
	id = { type = 17343 id = 19 }
	name = "Vladivostok"
	type = light_cruiser
	model = 3 
        }
        division = {
	id = { type = 17343 id = 20 }
	name = "Ternei"
	type = light_cruiser
	model = 3 
        }
        division = {
	id = { type = 17343 id = 21 }
	name = "Khabarovsk"
	type = light_cruiser
	model = 3 
        }
        division = {
	id = { type = 17343 id = 23 }
	name = "1. Flotiliya Esmintsev"
	type = destroyer
	model = 3 
        } 
        }

navalunit = {
	id = { type = 17343 id = 34 }
	name = "Primorskiy Transportnyi Flot"
	location = 1191 #Vladivostok
	base = 1191
        division = {
	id = { type = 17343 id = 29 }
	name = "1. Transportnaya Flotiliya"
	type = transport 
        model = 1
        }
        division = {
	id = { type = 17343 id = 22 }
	name = "2. Flotiliya Esmintsev"
	type = destroyer
	model = 2
        } 
        }

navalunit = {
	id = { type = 17343 id = 35 }
	name = "1yi Primorskiy Flot Podlodok"
	location = 1191 #Vladivostok
	base = 1191
        division = {
	id = { type = 17343 id = 24 }
	name = "1. Flotiliya Podlodok"
	type = submarine
	model = 1 
        }
        division = {
	id = { type = 17343 id = 25 }
	name = "2. Flotiliya Podlodok"
	type = submarine
	model = 1 
        }
        division = {
	id = { type = 17343 id = 26 }
	name = "3. Flotiliya Podlodok"
	type = submarine
	model = 2 
        } 
        }

navalunit = {
	id = { type = 17343 id = 36 }
	name = "2yi Primorskiy Flot Podlodok"
	location = 1191 #Vladivostok
	base = 1191
        division = {
	id = { type = 17343 id = 27 }
	name = "4. Flotiliya Podlodok"
	type = submarine
	model = 2 
        }
        division = {
	id = { type = 17343 id = 28 }
	name = "5. Flotiliya Podlodok"
	type = submarine
	model = 3 
        } 
        }

airunit = {
	id = { type = 17343 id = 30 }
	name = "1. Primorskaya AA/1. BAD"
	location = 1185
	base = 1185
        division = {
	id = { type = 17343 id = 31 }
	name = "1. BAD"
	strength = 100
	type = tactical_bomber
	model = 6 
        }

        airunit = {
	id = { type = 17343 id = 37 }
	name = "1. Primorskaya AA/IAK"
	location = 1185
	base = 1185
        division = {
	id = { type = 17343 id = 32 }
	name = "1. IAD"
	strength = 100
	type = interceptor
	model = 8 
        }
        division = {
	id = { type = 17343 id = 33 }
	name = "2. IAD"
	strength = 100
	type = multi_role
	model = 6
        } 
        } 


}