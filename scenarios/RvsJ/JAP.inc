###########################
#Country definition for JAP
###########################
province = { id = 1541 naval_base = 2 air_base = 3 anti_air = 1 } #Ocha
province = { id = 1542 naval_base = 4 air_base = 4 anti_air = 2 } #Toyohara
province = { id = 1543 naval_base = 4 air_base = 4 anti_air = 1 } #Etorofu
province = { id = 1551 naval_base = 8 air_base = 8 anti_air = 2 } #Akita
province = { id = 1545 naval_base = 8 air_base = 8 anti_air = 2 } #Akita
province = { id = 1232 naval_base = 8 air_base = 8 anti_air = 2 } #Busan
province = { id = 1228 naval_base = 4 air_base = 4 anti_air = 2 } #Seoul
province = { id = 1219 naval_base = 10 air_base = 6 anti_air = 6 landfort = 4 coastalfort = 4 } #Dalian
province = { id = 1552 naval_base = 10 air_base = 10 anti_air = 6 } #Tokyo

##################
#Country main data
##################
country = {
	tag = JAP
	capital = 1552
	manpower = 150
	oil = 1000
	supplies = 5000
	transports = 100
	escorts = 20
	extra_tc = 80
	#ic = 45
	free = { supplies = 150 oil = 20 ic = 30 }

	policy = { democratic = 3 political_left = 3 freedom = 3 free_market = 3 professional_army = 6 defense_lobby = 10 interventionism = 10 }

	nationalprovinces = { 1549 1552 1541 1542 1543 1544 1545 1547 1551 }
	ownedprovinces = { 1549 1552 1230 1231 1232 1233 1228 1229 1224 1226 1225 1227 1223 1221 1222 1219 1541 1542 1543 1544 1545 1547 1551 }
	controlledprovinces = { 1549 1552 1230 1231 1232 1233 1228 1229 1224 1226 1225 1227 1223 1221 1222 1219 1541 1542 1543 1544 1545 1547 1551 }
        claimedprovinces = { 1230 1231 1232 1233 1228 1229 1224 1226 1225 1227 1223 1221 1222 1219 }

	techapps = {

# JAP 1936 techs
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

	headofstate = { type = 9 id = 55974 }
	headofgovernment = { type = 9 id = 55753 }

landunit = {
	id = { type = 13016 id = 1 }
	name = "Korean Army"
	location = 1228
        division = {
	id = { type = 13016 id = 2 }
	name = "Korean Army HQ"
	strength = 100
	type = hq
	model = 2 
        experience = 30
        }
        division = {
	id = { type = 13016 id = 3 }
	name = "36. Hoheishidan"
	strength = 100
	type = infantry
	model = 10 
        experience = 30
        }
        division = {
	id = { type = 13016 id = 4 }
	name = "37. Hoheishidan"
	strength = 100
	type = infantry
	model = 10
	extra = artillery
        brigade_model = 7
        experience = 30
        }
        division = {
	id = { type = 13016 id = 5 }
	name = "38. Hoheishidan"
	strength = 100
	type = infantry
	model = 10
	extra = artillery
        brigade_model = 7
        experience = 30
        }
        division = {
	id = { type = 13016 id = 6 }
	name = "39. Hoheishidan"
	strength = 100
	type = infantry
	model = 10
	extra = artillery
        brigade_model = 7
        }
        division = {
	id = { type = 13016 id = 7 }
	name = "40. Hoheishidan"
	strength = 100
	type = infantry
	model = 10 
        }
        division = {
	id = { type = 10200 id = 8 }
	name = "Dai 1 Dokuritsu Sensharyodan"
	strength = 100
	type = armor
	model = 0 
        }
        division = {
	experience = 25
	id = { type = 10300 id = 9 }
	name = "Dai 1 Moukogo Kiheishidan"
	strength = 100
	type = cavalry
	model = 10
        }
        division = {
	experience = 25
	id = { type = 10300 id = 10 }
	name = "Dai 2 Moukogo Kiheishidan"
	strength = 100
	type = cavalry
	model = 10 
        }
        division = {
	experience = 25
	id = { type = 10300 id = 11 }
	name = "Dai 3 Moukogo Kiheishidan"
	strength = 100
	type = cavalry
	model = 10 
        }
        division = {
	experience = 25
	id = { type = 10300 id = 12 }
	name = "Dai 4 Moukogo Kiheishidan"
	strength = 100
	type = cavalry
	model = 10
        }
        division = {
	id = { type = 10300 id = 13 }
	name = "Kineitai Jidoushoka no Hoheishidan"
	type = motorized
	model = 1
	strength = 100
	extra = armored_car
	brigade_model = 2 
        } 
        }

landunit = {
	id = { type = 13016 id = 14 }
	name = "5. Hendan"
	location = 1541
        division = {
	id = { type = 13016 id = 15 }
	locked = yes
	name = "68 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 2
        } 
        }

landunit = {
	id = { type = 13016 id = 16 }
	name = "6. Hendan"
	location = 1542
        division = {
	id = { type = 13016 id = 17 }
	locked = yes
	name = "75 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 2
        } 
        }

landunit = {
	id = { type = 13016 id = 18 }
	name = "6. Hendan"
	location = 1543
        division = {
	id = { type = 13016 id = 19 }
	locked = yes
	name = "34 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 2
        } 
        }

landunit = {
	id = { type = 13016 id = 20 }
	name = "7. Hendan"
	location = 1552
        division = {
	id = { type = 13016 id = 21 }
	locked = yes
	name = "98 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 2
        } 
        }

landunit = {
	id = { type = 13016 id = 22 }
	name = "8. Hendan"
	location = 1228
        division = {
	id = { type = 13016 id = 23 }
	locked = yes
	name = "103 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 1
        } 
        }

landunit = {
	id = { type = 13016 id = 24 }
	name = "9. Hendan"
	location = 1219
        division = {
	id = { type = 13016 id = 25 }
	locked = yes
	name = "67 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
	extra = anti_air
        brigade_model = 2
        } 
        }

landunit = {
	id = { type = 13016 id = 26 }
	name = "10. Hendan"
	location = 1232
        division = {
	id = { type = 13016 id = 27 }
	locked = yes
	name = "61 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
        } 
        }

landunit = {
	id = { type = 13016 id = 28 }
	name = "11. Hendan"
	location = 1547
        division = {
	id = { type = 13016 id = 29 }
	locked = yes
	name = "59 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
        } 
        }

landunit = {
	id = { type = 13016 id = 30 }
	name = "12. Hendan"
	location = 1221
        division = {
	id = { type = 13016 id = 31 }
	locked = yes
	name = "89 Hoheishidan"
	strength = 100
	type = garrison
	model = 5
        } 
        }

navalunit = {
	id = { type = 13016 id = 995 }
	name = "2. Kaigun"
	location = 1545
	base = 1545
        division = {
	id = { type = 13016 id = 996 }
	name = "IJN Ise"
	type = battleship
	model = 4 
        }
        division = {
	id = { type = 13016 id = 997 }
	name = "IJN Hyuga"
	type = battleship
	model = 4 
        }
        division = {
	id = { type = 13016 id = 998 }
	name = "IJN Nagato"
	type = battleship
	model = 4 
        }
        division = {
	id = { type = 10300 id = 999 }
	name = "IJN Shoho"
	type = escort_carrier
	model = 1
	experience = 20 
        } 
        }

navalunit = {
	id = { type = 13016 id = 1000 }
	name = "4. Kaigun"
	location = 1545
	base = 1545
        division = {
	id = { type = 13016 id = 1001 }
	name = "IJN Tatsuta"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1002 }
	name = "IJN Hirado"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1003 }
	name = "IJN Yahagi"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1004 }
	name = "IJN Kuma"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1020 }
	name = "IJN Tama"
	type = light_cruiser
	model = 4 
        } 
        }

navalunit = {
	id = { type = 13016 id = 1184 }
	name = "16. Kaigun"
	location = 1545
	base = 1545
        division = {
	id = { type = 13016 id = 1079 }
	name = "7 Kuchikukantai"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1080 }
	name = "8 Kuchikukantai"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1081 }
	name = "9 Kuchikukantai"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1082 }
	name = "10 Kuchikukantai"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1086 }
	name = "14 Kuchikukantai"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 13016 id = 1087 }
	name = "7 Yuso Sentai"
	type = transport
	model = 1 
        }
        division = {
	id = { type = 13016 id = 1088 }
	name = "8 Yuso Sentai"
	type = transport
	model = 1 
        } 
        }

airunit = {
	location = 1545
	base = 1545
	id = { type = 13016 id = 550 }
	name = "1. Nihon Koukuujieitai"
        division = {
	id = { type = 13016 id = 551 }
	name = "1 Keibakugekiki no Hikodan"
	type = tactical_bomber
	model = 6 
        } 
        }

airunit = {
	id = { type = 13016 id = 552 }
	name = "1 Zerosen no Hikodan"
	location = 1190
	base = 1190
        division = {
	id = { type = 13016 id = 553 }
	name = "1 Zerosen no Hikodan"
	strength = 100
	type = interceptor
	model = 8 
        } 
        }

airunit = {
	id = { type = 13016 id = 554 }
	name = "2 Zerosen no Hikodan"
	location = 1185
	base = 1185
        division = {
	id = { type = 13016 id = 555 }
	name = "2 Zerosen no Hikodan"
	strength = 100
	type = interceptor
	model = 8 
        } 
        }

airunit = {
	id = { type = 13016 id = 556 }
	name = "3 Zerosen no Hikodan"
	location = 1542
	base = 1542
        division = {
	id = { type = 13016 id = 557 }
	name = "3 Zerosen no Hikodan"
	strength = 100
	type = interceptor
	model = 8 
        } 
        }

airunit = {
	id = { type = 13016 id = 572 }
	name = "4 Zerosen no Hikodan"
	location = 1218
	base = 1218
        division = {
	id = { type = 13016 id = 573 }
	name = "4 Zerosen no Hikodan"
	strength = 100
	type = interceptor
	model = 8 
        } 
        }

airunit = {
	id = { type = 13016 id = 574 }
	name = "5 Zerosen no Hikodan"
	location = 1200
	base = 1200
        division = {
	id = { type = 13016 id = 575 }
	name = "5 Zerosen no Hikodan"
	strength = 100
	type = interceptor
	model = 8 
        } 
        }

airunit = {
	id = { type = 13016 id = 558 }
	name = "Takao Kaigun Kokutai"
	location = 1542
	base = 1542
        division = { 
	id = { type = 10300 id = 321 }
	name = "Takao Kaigunkogeki Hikôdan"
	strength = 100
	type = naval_bomber
	model = 2
	experience = 20 
        } 
        }

airunit = {
	id = { type = 13016 id = 559 }
	name = "6 Zerosen no Hikodan"
	location = 1191
	base = 1191
        division = {
	id = { type = 13016 id = 560 }
	name = "6 Zerosen no Hikodan"
	strength = 100
	type = multi_role
	model = 6 
        experience = 20
        } 
        }

airunit = {
	id = { type = 13016 id = 576 }
	name = "7 Zerosen no Hikodan"
	location = 1209
	base = 1209
        division = {
	id = { type = 13016 id = 577 }
	name = "7 Zerosen no Hikodan"
	strength = 100
	type = multi_role
	model = 6
        } 
        }

landunit = {
	id = { type = 10300 id = 561 }
	name = "Kure tokubetsu rikusentai"
	location = 1545
        division = {
	id = { type = 10300 id = 562 }
	name = "Kure tokubetsu rikusentai"
	strength = 100
	type = marine
	model = 3
        } 
        }

landunit = {
	id = { type = 10300 id = 563 }
	name = "Sasebo tokubetsu rikusentai"
	location = 1545
        division = {
	id = { type = 10300 id = 564 }
	name = "Sasebo tokubetsu rikusentai"
	strength = 100
 	type = marine
	model = 3
        } 
        } 

landunit = {
	id = { type = 10300 id = 565 }
	name = "Manchuria Exp Army HQ"
	location = 1208

		division = {
		id = { type = 10300 id = 566 }
		name = "Manchuria Exp Army HQ"
		strength = 100
		type = hq
		model = 2
		}
		division = {
		id = { type = 10300 id = 567 }
		name = "1. Hoheishidan"
		strength = 100
		type = infantry
		model = 10
		extra = anti_tank
		brigade_model = 2
		}
		division = {
		id = { type = 10300 id = 568 }
		name = "2. Hoheishidan"
		strength = 100
		type = infantry
		model = 10
		extra = artillery
		brigade_model = 7
		}
                division = {
		id = { type = 10300 id = 569 }
		name = "5. Hoheishidan"
		strength = 100
		type = infantry
		model = 10
		}
                division = {
		id = { type = 10300 id = 570 }
		name = "6. Hoheishidan"
		strength = 100
		type = infantry
		model = 10
		}
                division = {
		id = { type = 10300 id = 571 }
		name = "9. Hoheishidan"
		strength = 100
		type = infantry
		model = 10
		}
                }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 572 }
	name = "9. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 573 }
	name = "10. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 574 }
	name = "11. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 575 }
	name = "12. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 576 }
	name = "13. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

landdivision = {
	dormant = yes
	id = { type = 10300 id = 577 }
	name = "14. Hoheishidan"
	type = infantry
	strength = 100
	model = 10
	extra = artillery
	brigade_model = 7
        }

}