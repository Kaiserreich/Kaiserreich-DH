


country = {
    tag = HUN
	ai = "kaiserreich\Hungary.ai"

	puppet = AUS

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 5
        freedom = 5
        professional_army = 5
        defense_lobby = 6
        interventionism = 5
    }

#### cabinet (Habsburg/legitimist)
	headofstate = { type = 9 id = 21064 } #Habsburg Ottó
	headofgovernment = { type = 9 id = 21122 } #Sigray Antal or Bethlen István
	foreignminister = { type = 9 id = 21213 } #Csekonics Iván or Kánya Kálmán or Tánczos Gábor
	armamentminister = { type = 9 id = 21311 } #Gratz Gusztáv or Hantos Elemér
	ministerofsecurity = { type = 9 id = 21423 } #Tarányi Ferenc or Esterházy Móric
	ministerofintelligence = { type = 9 id = 21210 } #Takách-Tolvay József
	chiefofstaff = { type = 9 id = 21508 } #Kárpáthy Kamilló
	chiefofarmy = { type = 9 id = 21553 } #Csáky Károly
	chiefofnavy = { type = 9 id = 21575 } #Wulff Olaf Richárd
	chiefofair = { type = 9 id = 21592 } #Petróczy István

#### Resource Reserves

	capital = 284

	SpyInfo = { country = "HUN" NumberOfSpies = 3 }

	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 150

    ownedprovinces = {
		208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288
		287 291 292 293
	}
    controlledprovinces = {
		208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288
		287 291 292 293
	}
    nationalprovinces = {
		208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288
		287 291 292 293
	}

diplomacy = {
	relation = { tag = BEL value = 50 }
	relation = { tag = BLR value = 60 }
	relation = { tag = BUL value = 20 }
	relation = { tag = GER value = 100 }
	relation = { tag = LAT value = 40 }
	relation = { tag = LIT value = 50 }
	relation = { tag = POL value = 100 }
	relation = { tag = UKR value = -30 }
	relation = { tag = AUS value = 120 }
	relation = { tag = BOS value = 60 }
	relation = { tag = CRO value = 160 }
	relation = { tag = CZE value = 80 }
	relation = { tag = GLD value = 100 }
	relation = { tag = ALB value = -40 }
	relation = { tag = DEN value = 30 }
	relation = { tag = FIN value = 60 }
	relation = { tag = GRE value = -20 }
	relation = { tag = HOL value = 20 }
	relation = { tag = ITA value = 20 }
	relation = { tag = ROM value = -140 }
	relation = { tag = SER value = -100 }
	relation = { tag = SPA value = 50 }
	relation = { tag = ENG value = -120 }
	relation = { tag = FRA value = -150 }
	relation = { tag = RSI value = -100 }
	relation = { tag = AST value = -40 }
	relation = { tag = CAN value = -40 }
	relation = { tag = VIC value = 30 }
	relation = { tag = ARM value = 80 }
	relation = { tag = AZB value = 40 }
	relation = { tag = GEO value = -50 }
	relation = { tag = KAZ value = 40 }
	relation = { tag = KYG value = -60 }
	relation = { tag = RUS value = 60 }
	relation = { tag = TRA value = 20 }
	relation = { tag = OTT value = 80 }
	relation = { tag = CON value = 80 }
	relation = { tag = USA value = -80 }
	relation = { tag = JAP value = -50 }
}
	
	techapps = {

# Group C 1936 techs
#######################
#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4600 4610 4620 4630 4120 #Interwar Bomber
7290 7300 7310 7320 #CAS
4740 4750 4760 #Seaplane 1918
4290 #Air Transport

#Armour and artillery
2860 2870 2880 2020 #AC 1929
2290 2300 2310 2900 2910 2920 2930 #Artillery 1930
2800 2450 21180 21190 #1930 static AA
2810 2820 2510 #AA Brigade 1930
7600 7610
2620 2010 2630 2640 2646 #1928 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #1931 Infantry
1160 1170 1180 1190 1200 1210 1220 1230 #1925 Mtn. Infantry
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1932 Cavalry
1910 1920 1930 1940 1950 1960 1970 1980 #Logistics 1930
1830 1840 1850 #Engineers

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture
5310 54010 54020 54030 5316 5326 5327 #Computers & cryptography
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering
5190 #Basic Oil Refining
5470 #Atomic Research
5600 5610 5620 5630 #Medicine

#Land Doctrines
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 # Great War Land Doctrines (central powers)
14000 14010 14020 #Great War Hospital System

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval
3010 3020 3030 3040 #DD
3110 3120 3130 3140 #CL
3210 3220 3230 3240 #CA
3410 3420 3430 3440 3450 3456 #BBs
3310 #Battlecruiser
3610 3620 3630 #SS
3810 3820 #Troopships 1926
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 81340 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics
	}

dormant_leaders = { #Croats 32500-32523
	32500 32501 32502 32503 32504 32505 32506 32507 32508 32509 32510 32511 32512 32513 32514 32515 32516 32517 32518 32519 32520 32521 32522 32523
	}

dormant_ministers = { #Croats 21700-21718
	21700 21701 21702 21703 21704 21705 21706 21707 21708 21709 21710 21711 21712 21713 21714 21715 21716 21717 21718
	}

dormant_teams = { 1607 1608 1642 1643 } #Croatia

#########  OOB (...)

#Ethnic Magyars composed 23% of the A-H armed forces, with Germans at 25%; roughly equal in infantry with Magyars overrepresented in cavalry units & Germans overrepresented in artillery & gebirgsjäger units.
#The Royal Hungarian Army includes, and home area:
#	k.u. 20. honvéd gyaloghadosztály (1 field artillery reg.) - Großwardein/Oradea
#	k.u. 23. honvéd gyaloghadosztály (1 field artillery reg.) - Szeged
#	k.u. 37. honvéd gyaloghadosztály (1 field artillery reg.) - Pressburg/Bratislava
#	k.u. 38. honvéd gyaloghadosztály (1 field artillery reg.) - Cluj
#	k.u. 39. honvéd gyaloghadosztály (1 field artillery reg.) - Kaschau/Košice
#	k.u. 40. honvéd gyaloghadosztály (1 field artillery reg.) - Budapest
#	k.u. 41. honvéd gyaloghadosztály (1 field artillery reg.) - Budapest
#	k.u. 42. honvéd gyaloghadosztály (1 field artillery reg.) - Zagreb
#	k.u. 5. honvéd huszárhadosztály - Budapest
#	k.u. 11. honvéd huszárhadosztály (1 horse artillery reg.) - Debrecen
#Two mountain brigades formed in 1914/15: k.u. 16. Honvéd-Gebirgsbrigade & k.u. 17. Honvéd-Gebirgsbrigade
#Elements of the Common Army containing significant Hungarian and/or Slovak ethnicities, and home area:
#	k.u.k. 14. Infanteriedivision (3 field artillery reg.) - Pressburg/Bratislava
#	k.u.k. 15. Infanteriedivision (2 field artillery reg.) - Miskolcz
#	?k.u.k. 16. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Hermannstadt/Sibiu (german area of Romania)
#	k.u.k. 17. Infanteriedivision (2 field artillery reg.) - Großwardein/Oradea
#	k.u.k. 27. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Kaschau/Košice
#	k.u.k. 31. Infanteriedivision (2 field artillery reg.) - Budapest
#	k.u.k. 32. Infanteriedivision (3 field artillery reg.) - Budapest
#	k.u.k. 33. Infanteriedivision (1 field artillery reg. 1 heavy field reg.) - Komárom/Komárno
#	?k.u.k. 34. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Timisoara (german area of Romania)
#	k.u.k. 35. Infanteriedivision (2 field artillery reg.) - Cluj
#	?k.u.k. 1. Kavalleriedivision (2 horse artillery reg.) - Timisoara (only cav-div with 3 brigades)
#	k.u.k. 2. Kavalleriedivision (1 horse artillery reg.) - Pressburg/Bratislava
#	k.u.k. 10. Kavalleriedivision (1 horse artillery reg.) - Budapest
#Unit type/size naming scheme:	https://forum.paradoxplaza.com/forum/threads/the-international-unit-names-database.1036386/

landunit = {
	id = { type = 17351 id = 1 }
	location = 284 #Budapest
	name = "I. magyar hadtest"
		division = {
			id = { type = 17351 id = 2 }
			name = "k.u. 40. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 17351 id = 3 }
			name = "k.u. 41. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 4 }
			name = "k.u.k. 31. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 5 }
			name = "k.u.k. 32. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 17351 id = 6 }
	location = 284 #Budapest
	name = "I. huszár hadtest"
		division = {
			id = { type = 17351 id = 7 }
			name = "k.u. 5. honvéd huszárhadosztály"
			type = cavalry
			model = 9
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 8 }
			name = "k.u.k. 10. huszárhadosztály"
			type = cavalry
			model = 9
			strength = 50
			experience = 20
			extra = armored_car
			brigade_model = 2
		}
	}
landunit = {
	id = { type = 17351 id = 9 }
	location = 208 #Pressburg
	name = "II. magyar hadtest"
		division = {
			id = { type = 17351 id = 10 }
			name = "k.u. 37. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 11 }
			name = "k.u.k. 14. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 6
		}
		division = {
			id = { type = 17351 id = 12 }
			name = "k.u.k. 2. huszárhadosztály"
			type = cavalry
			model = 9
			strength = 50
			experience = 20
			extra = armored_car
			brigade_model = 2
		}
	}
landunit = {
	id = { type = 17351 id = 13 }
	location = 281 #Debrecen
	name = "III. magyar hadtest"
		division = {
			id = { type = 17351 id = 14 }
			name = "k.u. 20. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 17351 id = 15 }
			name = "k.u.k. 17. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 16 }
			name = "k.u. 11. honvéd huszárhadosztály"
			type = cavalry
			model = 9
			strength = 50
			experience = 20
			extra = armored_car
			brigade_model = 2
		}
	}
landunit = {
	id = { type = 17351 id = 17 }
	location = 209 #Kosice
	name = "IV. magyar hadtest"
		division = {
			id = { type = 17351  id = 18 }
			name = "k.u. 39. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 19 }
			name = "k.u.k. 15. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 20 }
			name = "k.u.k. 27. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 17351 id = 21 }
	location = 288 #Cluj
	name = "V. magyar hadtest"
		division = {
			id = { type = 17351 id = 22 }
			name = "k.u. 38. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 23 }
			name = "k.u.k. 35. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 24 }
			name = "1. hegyivadász hadosztály"
			type = bergsjaeger
			model = 7
			strength = 50
			experience = 20
		}
	}
landunit = {
	id = { type = 17351 id = 25 }
	location = 341 #Novi Sad
	name = "VI. magyar hadtest"
		division = {
			id = { type = 17351 id = 26 }
			name = "k.u. 23. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 17351 id = 27 }
			name = "k.u.k. 33. gyaloghadosztály"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 17351 id = 28 }
	location = 352 #Zagreb
	name = "VII. magyar hadtest"
		division = {
			id = { type = 17351 id = 29 }
			name = "k.u. 42. honvéd gyaloghadosztály"
			type = d_01
			model = 8
			strength = 50
			experience = 20
		}
	}
airunit = {
	id = { type = 17351 id = 30 }
	location = 284 #Budapest
	base = 288
	name = "I. légi hadtest"
		division = {
			id = { type = 17351 id = 31 }
			name = "1. Vadászosztály"
			type = multi_role
			model = 3
			strength = 25
		}
		division = {
			id = { type = 17351 id = 32 }
			name = "1. Bombázóosztály"
			type = tactical_bomber
			model = 4
			strength = 25
		}
	}
airunit = {
	id = { type = 17351 id = 33 }
	location = 288 #Cluj
	base = 288
	name = "II. légi hadtest"
		division = {
			id = { type = 17351 id = 34 }
			name = "2. Vadászosztály"
			type = multi_role
			model = 3
			strength = 25
		}
		division = {
			id = { type = 17351 id = 35 }
			name = "3. Vadászosztály"
			type = interceptor
			model = 7
			strength = 25
		}
	}
}