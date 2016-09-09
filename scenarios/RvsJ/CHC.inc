###########################
#Country definition for CSX
###########################
province = { id = 1242 landfort = 2 air_base = 4 anti_air = 2 ic = { size = 1 current_size = 1 } }
province = { id = 1334 air_base = 2 naval_base = 3 anti_air = 2 ic = { size = 1 current_size = 1 } }		

##################
#Country main data
##################
country = {
	tag = CHC
	manpower = 100
	energy = 0
	metal = 0
	rare_materials = 0
	oil = 1000
	supplies = 10000000
	money = 0
	capital = 1259
	transports = 20
	escorts	= 5
	extra_tc = 30

	policy = { democratic = 1 political_left = 1 freedom = 3 free_market = 6 professional_army = 3 defense_lobby = 7 interventionism = 7 }

	nationalprovinces = { 1260 1269 1270 1253 1259 1252 1254 1321 1248 1249 1336 1330 1327 1323 1242 1247 1246 1238 1239 1250 1251 1243 1244 1329 1332 1333 1334 1335 }
	ownedprovinces = { 1260 1269 1270 1253 1259 1252 1254 1321 1248 1249 1336 1330 1327 1323 1242 1238 1239 1250 1251 1243 1244 1329 1332 1333 1334 1335 }
	controlledprovinces = { 1260 1269 1270 1253 1259 1252 1254 1321 1248 1249 1336 1330 1327 1323 1242 1238 1239 1250 1251 1243 1244 1329 1332 1333 1334 1335 }

	techapps = { 
#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division  
1160 1170 1180 1190 1200 1210 #1918 Mountain Division
13060 13070 13080 1310 1320 1330 #Great War Cavalry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 #Engineers

#Armour & Artillery
2860 2870 2880 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank 

#Naval
3110 3120 3130 #Light Cruiser
3210 3220 #Heavy Cruiser
3410 #Turret BB
3010 3020 3030 #Chang Feng Class DD
3810 #Troopships
3720 3730 #Torpedoes

#Aircrafts 
4500 4510 4520 4530 4540 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber 
4300 4310 4320 #Multirole fighter
4800 4810 #ww1 strategic bomber
4700 #ww1 navalbomber
7290 7300 #CAS

#Industrial
5800 5080 #Improved Construction Engineering 
5980 #Spec Equipment Rough terrain
5600 #Medicine
5810 #Scientific Management
5310 #Census tabulating

#Naval Doctrines
8010 8050

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9010 9030 9020 27560 27460 27470 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6570 6300 #Manpower Focus
14000 #Improved Great War Hospital System

}


	free = { ic = 50 oil = 20 }

	headofstate = { type = 9 id = 51001 }
	headofgovernment = { type = 9 id = 51006 }
	

landunit = {
	location = 1239 #Hohhot
	name = "1. Fangmianjun"
	id = { type = 22300 id = 1 }
        division = {
	id = { type = 22300 id = 2 }
	name = "8. Juntuan"
	type = infantry
	strength = 100
	model = 9 
        }
        division = {
	id = { type = 22300 id = 3 }
	name = "1. Juntuan"
	type = infantry
	strength = 100
	model = 9 
        }
        division = {
	id = { type = 22300 id = 4 }
	name = "2. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 5 }
	name = "3. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 6 }
	name = "5. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 7 }
	name = "4. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 8 }
	name = "6. Juntuan"
	type = infantry
	strength = 100
	model = 8
        } 
        division = {
	id = { type = 22300 id = 9 }
	name = "17. Juntuan"
	type = infantry
	strength = 100
	model = 8
        } 
        division = {
	id = { type = 22300 id = 10 }
	name = "18. Juntuan"
	type = infantry
	strength = 100
	model = 8
        } 
        division = {
	id = { type = 22300 id = 23 }
	name = "21. Juntuan"
	type = bergsjaeger
	strength = 100
	model = 8
        } 

        division = {
	id = { type = 22300 id = 26 }
	name = "24. Juntuan"
	type = bergsjaeger
	strength = 100
	model = 8
        }  
        }


landunit = {
	location = 1242 
	name = "2. Fangmianjun"
	id = { type = 22300 id = 11 }
        division = {
	id = { type = 22300 id = 12 }
	name = "7. Juntuan"
	type = infantry
	strength = 100
	model = 9 
        }
        division = {
	id = { type = 22300 id = 13 }
	name = "9. Juntuan"
	type = infantry
	strength = 100
	model = 9 
        }
        division = {
	id = { type = 22300 id = 14 }
	name = "10. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 15 }
	name = "11. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 16 }
	name = "12. Juntuan"
	type = cavalry
	strength = 100
	model = 9 
        }
        division = {
	id = { type = 22300 id = 17 }
	name = "13. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 18 }
	name = "14. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 19 }
	name = "15. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        } 
        division = {
	id = { type = 22300 id = 20 }
	name = "16. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        } 
        division = {
	id = { type = 22300 id = 21 }
	name = "19. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        } 
        division = {
	id = { type = 22300 id = 22 }
	name = "20. Juntuan"
	type = infantry
	strength = 100
	model = 8 
        }
        division = {
	id = { type = 22300 id = 24 }
	name = "22. Juntuan"
	type = bergsjaeger
	strength = 100
	model = 8
        }  

        division = {
	id = { type = 22300 id = 25 }
	name = "23. Juntuan"
	type = bergsjaeger
	strength = 100
	model = 8
        }  
        }

airunit = {
	location = 1242
	base = 1242
	id = { type = 22000 id = 400 }
	name = "Di'1 Kongjun"
        division = {
	id = { type = 22000 id = 401 }
	name = "1. Zhandouji Dadui"
	type = interceptor
	model = 7
	strength = 100 
        }
        division = {
	id = { type = 22000 id = 402 }
	name = "2. Zhandouji Dadui"
	type = interceptor
	model = 7
	strength = 100 
        } 
        }

airunit = {
	location = 1242
	base = 1242
	id = { type = 22000 id = 403 }
	name = "Di'2 Kongjun"
        division = {
	id = { type = 22000 id = 404 }
	name = "1. TAC Hongzhaji Dadui"
	type = tactical_bomber
	model = 7
	strength = 100 
        } 
        }

navalunit = {
	name = "Imperial Fleet of China"
	id = { type = 22000 id = 300 }
	location = 1334
	base = 1334
	division = { id = { type = 22000 id = 301 } name = "Nan'Shin" type = battleship model = 1 }
	division = { id = { type = 22000 id = 302 } name = "Ping'hai" type = heavy_cruiser model = 1 }
	division = { id = { type = 22000 id = 303 } name = "Ning'hai" type = heavy_cruiser model = 1 }
	division = { id = { type = 22000 id = 304 } name = "Hai-Chen" type = light_cruiser model = 1 }
	division = { id = { type = 22000 id = 305 } name = "Chao-Hao" type = light_cruiser model = 1 }
	division = { id = { type = 22000 id = 306 } name = "1. Quzujian Dadui" type = destroyer model = 1 }
	division = { id = { type = 22000 id = 307 } name = "2. Quzujian Dadui" type = destroyer model = 1 }
	division = { id = { type = 22000 id = 308 } name = "3. Quzujian Dadui" type = destroyer model = 1 }
	division = { id = { type = 22000 id = 309 } name = "4. Quzujian Dadui" type = destroyer model = 1 } 
        }

navalunit = {
	name = "Imperial Submarine Fleet"
	id = { type = 22000 id = 320 }
	location = 1334
	base = 1334
	division = { id = { type = 22000 id = 321 } name = "1. Qianting Budui" type = submarine model = 1 }
	division = { id = { type = 22000 id = 322 } name = "2. Qianting Budui" type = submarine model = 1 } 
        } 

}