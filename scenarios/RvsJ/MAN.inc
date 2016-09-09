###########################
#Country definition for MAN
###########################
province = { id = 1199 air_base = 4 landfort = 1 anti_air = 1 } #Harbin
province = { id = 1247 landfort = 2 air_base = 4 anti_air = 2 ic = { size = 3 current_size = 3 } }
province = { id = 1208 air_base = 2 landfort = 1 anti_air = 1 } #Mohe
province = { id = 1201 air_base = 2 landfort = 1 anti_air = 1 } #Hailar
province = { id = 1236 landfort = 1 } #Xilinhot
province = { id = 1240 landfort = 1 } #Ulan Hot
province = { id = 1206 landfort = 1 } #Haila´er
province = { id = 1209 air_base = 4 landfort = 1 anti_air = 1 } #Mukden
province = { id = 1218 air_base = 3 landfort = 1 anti_air = 1 naval_base = 4 } #Jinxi
province = { id = 1200 air_base = 2 landfort = 1 anti_air = 1 } #Changde

##################
#Country main data
##################
country = {
	tag = MAN
        flag_ext = _emp
	name = MAN_EMP_NAME
        control = JAP
	manpower = 100
	energy = 0
	oil = 1000
	supplies = 10000000
	capital = 1208
	puppet = JAP
	extra_tc = 20
	free = { oil = 30 ic = 50 }

	nationalprovinces = { 1247 1246 1202 1216 1235 1236 1240 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198 
                }
	ownedprovinces = { 1247 1246 1202 1216 1235 1236 1240 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198  }
	controlledprovinces = { 1247 1246 1202 1216 1235 1236 1240 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198  }

	techapps = { 
# Group E 1936 techs
#######################
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

	policy = { democratic = 3 political_left = 3 freedom = 4 free_market = 3 professional_army = 7 defense_lobby = 8 interventionism = 8 }

	headofstate = { type = 9 id = 58058 }
	headofgovernment = { type = 9 id = 58002 }

landunit = {
	location = 1206
	id = { type = 28500 id = 1 }
	name = "1 Fang'tien Jüntuan"
        division = {
	id = { type = 28500 id = 2 }
	name = "7 Man'chu Lü"
	type = infantry
	model = 10
	strength = 100 
        } 
        division = {
	id = { type = 28500 id = 46 }
	name = "30 Man'chu Lü"
	type = infantry
	model = 10
	strength = 100 
        } 
        }
landunit = {
	location = 1208
	id = { type = 28500 id = 3 }
	name = "2 Changde Jüntuan"
        division = {
	id = { type = 28500 id = 4 }
	name = "9 Man'chu Lü"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 4
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 5 }
	name = "11 Man'chu Lü"
	type = bergsjaeger
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 6 }
	name = "26 Man'chu Lü"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 7 }
	name = "3 Man'chu Qi'Bing"
	type = cavalry
	model = 9
	extra = armored_car
	brigade_model = 2
	strength = 100 
        } 
        }

landunit = {
	location = 1240
	id = { type = 28500 id = 8 }
	name = "3 Ji'lin Jüntuan"
        division = {
	id = { type = 28500 id = 9 }
	name = "8 Man'chu Lü"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 4
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 10 }
	name = "2 Man'chu Qi'Bing"
	type = cavalry
	model = 9
	extra = armored_car
	brigade_model = 2
	strength = 100 
        } 
        division = {
	id = { type = 28500 id = 47 }
	name = "29 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 48 }
	name = "30 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        }

landunit = {
	location = 1247
	id = { type = 28500 id = 11 }
	name = "4 Qiqihar Jüntuan"
        division = {
	id = { type = 28500 id = 12 }
	name = "9 Man'chu Lü"
	type = infantry
	model = 10
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 13 }
	name = "21 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 14 }
	name = "22 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 15 }
	name = "23 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 16 }
	name = "24 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        } 
        }

landunit = {
	location = 1200
	id = { type = 28500 id = 17 }
	name = "5 Harbin Jüntuan"
        division = {
	id = { type = 28500 id = 18 }
	name = "10 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 19 }
	name = "25 Man'chu Lü"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 20 }
	name = "26 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        } 
        }

landunit = {
	location = 1201
	id = { type = 28500 id = 21 }
	name = "10 Mohe Jüntuan"
        division = {
	id = { type = 28500 id = 22 }
	name = "9 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 23 }
	name = "21 Man'chu Lü"
	type = motorized
	model = 0
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 24 }
	name = "22 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 25 }
	name = "23 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 26 }
	name = "24 Man'chu Lü"
	type = infantry
	model = 9
	strength = 100 
        } 
        }

landunit = {
	location = 1197
	id = { type = 28500 id = 27 }
	name = "6 Chengde Jüntuan"
        division = {
	id = { type = 28500 id = 28 }
	name = "12 Man'chu Lü"
	type = bergsjaeger
	model = 9
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 29 }
	name = "29 Man'chu Lu"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 30 }
	name = "30 Man'chu Lu"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        } 
        }

landunit = {
	location = 1202
	id = { type = 28500 id = 31 }
	name = "11 Xilinhot Jüntuan"
        division = {
	
	id = { type = 28500 id = 32 }
	name = "35 Man'chu Lü"
	type = bergsjaeger
	model = 8
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 33 }
	name = "36 Man'chu Lu"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 34 }
	name = "37 Man'chu Lu"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        } 
        }

landunit = {
	location = 1209
	id = { type = 28500 id = 35 }
	name = "7 Wulanhaote Juntuan"
        division = {
	id = { type = 28500 id = 36 }
	name = "18 Man'chu Lu"
	type = infantry
	model = 9
	extra = artillery
	brigade_model = 5
	strength = 100 
        }
        division = {
	id = { type = 28500 id = 37 }
	name = "19 Man'chu Lu"
	type = motorized
	model = 0
	strength = 100 
        } 
        }

landunit = {
	location = 1199
	id = { type = 28500 id = 38 }
	name = "8 Harbin Juntuan"
        division = {
	id = { type = 28500 id = 39 }
	name = "27 Man'chu Lu"
	type = infantry
	model = 9
	strength = 100 
        } 
        }

landunit = {
	location = 1199
	id = { type = 28500 id = 40 }
	name = "9 Harbin Juntuan"
        division = {
	id = { type = 28500 id = 41 }
	name = "28 Man'chu Lu"
	type = infantry
	model = 9
	strength = 100 
        } 
        }

airunit = {
	location = 1199
	id = { type = 28500 id = 42 }
	name = "Di'1 Man'chu Kongjun"
	base = 1199
        division = {
	id = { type = 28500 id = 43 }
	name = "1 Man'chu TAC Hong'zha'ji"
	strength = 100
	type = tactical_bomber
	model = 7 
        }
        division = {
	id = { type = 28500 id = 44 }
	name = "1 Man'chu Zhan'dou'ji"
	strength = 100
	type = interceptor
	model = 8
        }
        division = { 
	id = { type = 28500 id = 45 }
	name = "2 Man'chu Zhan'dou'ji"
	strength = 100
	type = interceptor
	model = 8
        } 
        } 

navalunit = {
location = 1218 #Yingkou
base = 1218
name = "Fengtian Navy"
id = { type = 29600 id = 80 }

  division = { id = { type = 28500 id = 81 } name = "Zhuang'he" type = light_cruiser model = 2 }
  division = { id = { type = 29600 id = 82 } name = "Fu'xian" type = light_cruiser model = 2 }
  division = { id = { type = 29600 id = 83 } name = "1 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 29600 id = 84 } name = "2 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 29600 id = 85 } name = "3 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 28500 id = 86 } name = "1 Man'chu Qian'ting'bu" type = submarine model = 2 }

  }

}