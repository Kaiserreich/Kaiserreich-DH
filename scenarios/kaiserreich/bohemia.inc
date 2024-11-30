


country = {
    tag = CZE  
    ai = "kaiserreich\Bohemia.ai"
    puppet = AUS

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 4
        free_market = 8
        freedom = 7
        professional_army = 5
        defense_lobby = 7
        interventionism = 5
	}


	headofstate = { type = 9 id = 24068 } #Jan Nepomuk II. ze Schwarzenbergu
	headofgovernment = { type = 9 id = 24128 } #Moric Hruban
	foreignminister = { type = 9 id = 24205 } #Josef Samalik
	armamentminister = { type = 9 id = 24296 } #Josef Solle
	ministerofsecurity = { type = 9 id = 24390 } #Vaclav Zboril
	ministerofintelligence = { type = 9 id = 24434 } #Cenek Hauzvic
	chiefofstaff = { type = 9 id = 24503 } #Robert Rychtrmoc
	chiefofarmy = { type = 9 id = 24525 } #Josef Bily
	chiefofnavy = { type = 9 id = 24546 } #Borivoj Radon
	chiefofair = { type = 9 id = 24570 } #Karel Prochazka

#### Resource Reserves

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	manpower = 150

	capital = 207

	SpyInfo = { country = "CZE" NumberOfSpies = 3 }


    ownedprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

    controlledprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

    nationalprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

diplomacy = {
	relation = { tag = BEL value = 40 }
	relation = { tag = BLR value = 70 }
	relation = { tag = BUL value = 30 }
	relation = { tag = GER value = 100 }
	relation = { tag = LAT value = 60 }
	relation = { tag = LIT value = 40 }
	relation = { tag = POL value = 50 }
	relation = { tag = AUS value = 150 }
	relation = { tag = HUN value = 80 }
	relation = { tag = ITA value = 40 }
	relation = { tag = SPA value = 40 }
	relation = { tag = ENG value = -50 }
	relation = { tag = FRA value = -70 }
	relation = { tag = RSI value = -20 }
	relation = { tag = VIC value = 30 }
	relation = { tag = RUS value = 80 }
	relation = { tag = OTT value = 30 }
	relation = { tag = USA value = 40 }
	relation = { tag = JAP value = -10 }
}

blueprints = { 2650 } #1934 Tank

	techapps = {

# Group C 1936 techs
#######################

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #1931 Infantry
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mtn. Infantry
13060 13070 13080 1310 1320 1330 1340 1350 1360 #1928 Cavalry
1910 1920 1930 1940 1950 1960 1970 1980 #Logistics 1930
1830 1840 1850 1860 #1930 Engineers

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 2930 #Artillery 1930
2800 2450 21180 21190 #1930 static AA
2810 2820 2510 #AA Brigade 1930
2620 2010 2630 2640 2646 #Tank 1928

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Interceptor 1930
4300 4310 4320 4330 4340 #Multi-Role 1932
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #CAS

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Improved Construction Engineering
5190 #Basic Oil refining
5810 5820 5050 5830 5060 5070 #Product standardization
5310 54010 54020 54030 5316 5326 5327 #Computers & cryptography
55000 #Mining 1935
5600 5610 5620 5630 #Sulfa Antibiotics

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into superior firepower
14000 14010 14020 #Early Hospital

#Naval Doctrines
8010 8020 8040 8050 8060 8070 8080

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

	}

dormant_leaders = {
	18159 18180 18217 18252 #Army generals of AH independence war (Krejci, Luza, Prchala, Snejdarek, Syrovy)
	18083 18185 18244 #French legion (Silvestr Blaha, Frantisek Melichar, Josef Snejdarek)
	#Slovaks 18400-46
	18400 18401 18402 18403 18404 18405 18406 18407 18408 18409 18410 18411 18412 18413 18414 18415 18416 18417 18418 18419 18420 18421 18422 18423 18424
	18425 18426 18427 18428 18429 18430 18431 18432 18433 18434 18435 18436 18437 18438 18439 18440 18441 18442 18443 18444 18445 18446
	}

dormant_ministers = { 24604 24605 24606 24607 #Zikmund II & Ottokar III
	#Czech army - nationalists
	24055 24056 24072 24073 24074 24121 24122 24190 24191 24208 24273 24416 24427 24430 24462 24463 24464 24469 24470 24471 24472 24473 24474 24485 24486
	24489 24490 24491 24492 24509 24510 24511 24512 24514 24515 24516 24517 24518 24519 24520 24521 24528 24529 24530 24531 24545 24552 24553 24557 24559
	24560 24561
	#Slovaks 24700-39
	24700 24701 24702 24703 24704 24705 24706 24707 24708 24709 24710 24711 24712 24713 24714 24715 24716 24717 24718 24719 24720 24721 24722 24723 24724
	24725 24726 24727 24728 24729 24730 24731 24732 24733 24734 24735 24736 24737 24738 24739
	}

#########  OOB (26000 )

#OTL C-S had 12 division (including mtn brigades) formed between 1918/1920 before expansion in 1937.
#A-H had 10-11 Bohemian/Moravian cav regiments by WW1; OTL C-S had 3 cavalry brigades that reformed into Rapid Divisions in 1937, with 4th Rapid formed around 4th cav brigade formed in 1933.

landunit = {
	id = { type = 26000 id = 1 }
	location = 207
	name = "I. sbor"
		division = {
			id = { type = 26000 id = 2 }
			name = "1. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 26000 id = 3 }
			name = "2. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 26000 id = 4 }
			name = "3. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
		division = {
			id = { type = 26000 id = 5 }
			name = "4. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
		division = {
			id = { type = 26000 id = 6 }
			name = "5. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 26000 id = 7 }
	location = 196
	name = "II. sbor"
		division = {
			id = { type = 26000 id = 8 }
			name = "6. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 26000 id = 9 }
			name = "7. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 26000 id = 10 }
			name = "8. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
		division = {
			id = { type = 26000 id = 11 }
			name = "9. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
		division = {
			id = { type = 26000 id = 12 }
			name = "10. pesi divize"
			type = infantry
			model = 8
			strength = 20
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 26000 id = 13 }
	location = 205
	name = "III. sbor"
		division = {
			id = { type = 26000 id = 14 }
			name = "1. horska divize"
			type = bergsjaeger
			model = 8
			strength = 25
			experience = 20
			extra = artillery
			brigade_model = 6
		}
	}
landunit = {
	id = { type = 26000 id = 15 }
	location = 206
	name = "IV. sbor"
		division = {
			id = { type = 26000 id = 16 }
			name = "2. horska divize"
			type = bergsjaeger
			model = 8
			strength = 25
			experience = 20
			extra = engineer
			brigade_model = 3
		}
	}
landunit = {
	id = { type = 26000 id = 17 }
	location = 199
	name = "V. sbor"
		division = {
			id = { type = 26000 id = 18 }
			name = "1. jezdecka divize"
			type = cavalry
			model = 8
			strength = 25
			experience = 20
			extra = light_armor_brigade
			brigade_model = 3
		}
	}
landunit = {
	id = { type = 26000 id = 19 }
	location = 198
	name = "VI. sbor"
		division = {
			id = { type = 26000 id = 20 }
			name = "2. jezdecka divize"
			type = cavalry
			model = 8
			strength = 25
			experience = 20
			extra = light_armor_brigade
			brigade_model = 3
		}
	}
landunit = {
	id = { type = 26000 id = 21 }
	location = 201
	name = "VII. sbor"
		division = {
			id = { type = 26000 id = 22 }
			name = "3. jezdecka divize"
			type = cavalry
			model = 8
			strength = 25
			experience = 20
			extra = light_armor_brigade
			brigade_model = 3
		}
	}

airunit = {
	id = { type = 26000 id = 23 }
	name = "1. Letecky sbor"
	location = 207
	base = 207
		division = {
			id = { type = 26000 id = 24 }
			name = "1. letecky pluk"
			type = multi_role
			model = 4
			strength = 25
			experience = 20
		}
		division = {
			id = { type = 26000 id = 25 }
			name = "5. letecky pluk"
			type = tactical_bomber
			model = 4
			strength = 25
			experience = 20
		}
	}
airunit = {
	id = { type = 26000 id = 26 }
	name = "2. Letecky sbor"
	location = 196
	base = 196
		division = {
			id = { type = 26000 id = 27 }
			name = "2. letecky pluk"
			type = multi_role
			model = 4
			strength = 25
			experience = 20
		}
		division = {
			id = { type = 26000 id = 28 }
			name = "6. letecky pluk"
			type = tactical_bomber
			model = 4
			strength = 25
			experience = 20
		}
	}
airunit = {
	id = { type = 26000 id = 29 }
	name = "3. Letecky sbor"
	location = 199
	base = 199
		division = {
			id = { type = 26000 id = 30 }
			name = "3. letecky pluk"
			type = interceptor
			model = 7
			strength = 25
			experience = 20
		}
	}
airunit = {
	id = { type = 26000 id = 31 }
	name = "4. Letecky sbor"
	location = 201
	base = 201
		division = {
			id = { type = 26000 id = 32 }
			name = "4. letecky pluk"
			type = interceptor
			model = 7
			strength = 25
			experience = 20
		}
	}
}
