


country = {
	tag = GLD
	ai = "kaiserreich\Galicia.ai"

	puppet = AUS

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 3
        freedom = 6
        free_market = 4
        professional_army = 3
        defense_lobby = 4
        interventionism = 3
    }

#### cabinet

	headofstate = { type = 9 id = 551029 } #Karol Olbracht Habsburg
	headofgovernment = { type = 9 id = 551059 } #Alfred Antoni Potocki
	foreignminister = { type = 9 id = 551108 } #Jerzy Potocki
	armamentminister = { type = 9 id = 551140 } #Wladyslaw Byrka
	ministerofsecurity = { type = 9 id = 551185 } #Marian Dabrowski
	ministerofintelligence = { type = 9 id = 551217 } #Jozef Rybak
	chiefofstaff = { type = 9 id = 551221 } #Eugeniusz Tinz
	chiefofarmy = { type = 9 id = 551243 } #Stanislaw Haller de Hallenburg
	chiefofnavy = { type = 9 id = 551253 } #Bogumil Nowotny
	chiefofair = { type = 9 id = 551265 } #Wladyslaw Kalkus

#### Resource Reserves

	capital = 242

	SpyInfo = { country = "GLD" NumberOfSpies = 2 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	manpower = 28

	free = { ic = 3 }

	ownedprovinces = {
		235 237 236 239 242 241 238 300 240 301
		}
	controlledprovinces = {
		235 237 236 239 242 241 238 300 240 301
		}
	nationalprovinces = {
		235 237 236 239 242 241 238 300 240 301
		}

diplomacy = {
relation = {   tag = BEL value = 40 }
relation = {   tag = BLR value = 60 }
relation = {   tag = BUL value = 30 }
relation = {   tag = GER value = 80 }
relation = {   tag = LAT value = 50 }
relation = {   tag = LIT value = 60 }
relation = {   tag = POL value = 80 }
relation = {   tag = UKR value = 50 }
relation = {   tag = AUS value = 170 }
relation = {   tag = HUN value = 100 }
relation = {   tag = ITA value = 20 }
relation = {   tag = SPA value = 20 }
relation = {   tag = ENG value = -20 }
relation = {   tag = FRA value = -40 }
relation = {   tag = RUS value = 10 }
relation = {   tag = OTT value = 40 }
relation = {   tag = JAP value = -10 }
}


	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
7290 7300 7310 7320 #CAS
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber

# Armor & Artillery Technology
7600 7610 2620 2010 2630 #tanks
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 2450 21180 #1920s static AA

#Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1924 Supply
1830 1840 1850 #Engineers

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 #Early agric mechanization
5310 5316 5326 54010 #Computers & cryptography
5810 5820 #Manufacturing
5800 5080 #Construction engineerings
5190 #Basic Oil refining
5600 5610 #Medicine

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into firepower focus
14000 14010 14020 #Hospitals
	}

dormant_leaders = { #551200-551217 Ukrainians
		551200 551201 551202 551203 551204 551205 551206 551207 551208 551209 551210 551211 551212 551213 551214 551215 551216 551217
		}

dormant_ministers = { #551400-551544 Ukrainians
		551400 551401 551402 551403 551404 551405 551406 551407 551408 551409 551410 551411 551412 551413 551414 551415 551416 551417 551418
		551419 551420 551421 551422 551423 551424 551425 551426 551427 551428 551429 551430 551431 551432 551433 551434 551435 551436 551437
		551438 551439 551440 551441 551442 551443 551444 551445 551446 551447 551448 551449 551450 551451 551452 551453 551454 551455 551456
		551457 551458 551459 551460 551461 551462 551463 551464 551465 551466 551467 551468 551469 551470 551471 551472 551473 551474 551475
		551476 551477 551478 551479 551480 551481 551482 551483 551484 551485 551486 551487 551488 551489 551490 551491 551492 551493 551494
		551495 551496 551497 551498 551499 551500 551501 551502 551503 551504 551505 551506 551507 551508 551509 551510 551511 551512 551513
		551514 551515 551516 551517 551518 551519 551520 551521 551522 551523 551524 551525 551526 551527 551528 551529 551530 551531 551532
		551533 551534 551535 551536 551537 551538 551539 551540 551541 551542 551543 551544
		}

#########  OOB (...)

#Lviv/Lemberg/Lwow: k.u.k. XI. Korps
#	k.u.k. 11. Infanteriedivision (2 field artillery reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 30. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 2. Infanteriedivision (2 field artillery reg.) - Jaroslaw/Przemysl (Polish/Ukrainian)
#Lviv: k.u.k. II. Kavallerie Korps
#	k.u.k. 4. Kavalleriedivision (1 horse artillery reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 6. Kavalleriedivision (1 horse artillery reg.) - Jaroslaw/Przemysl (Polish/Ukrainian)
#Przemysl: k.u.k. X. Korps
#	k.u.k. 12. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Krakow (Polish)
#	k.u.k. 24. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Przemysl (Polish/Ukrainian)
#	k.u.k. 7. Kavalleriedivision (1 horse artillery reg.) - Krakow (Polish)
#Ivano-Frankivsk/Czernowitz: k.u.k. IV. Korps
#	k.k. 43. Schützendivision (2 field artillery reg.) - Czernowitz +cav [AUS]
#	k.u.k. 8. Kavalleriedivision (1 horse artillery reg.) - Stanislawów (Polish/Ukrainian)

landunit = {
	id = { type = 18700 id = 1 }
	location = 239 #Przemysl
	name = "k.u.k. X. Korps"
		division = {
			id = { type = 18700 id = 2 }
			name = "k.u.k. 12. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 18700 id = 3 }
			name = "k.u.k. 24. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 18700 id = 4 }
			name = "k.u.k. 7. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
		}
	}
landunit = {
	id = { type = 18700 id = 5 }
	location = 242 #Lwow/Lviv
	name = "k.u.k. XI. Korps"
		division = {
			id = { type = 18700 id = 6 }
			name = "k.u.k. 2. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 18700 id = 7 }
			name = "k.u.k. 11. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
		}
		division = {
			id = { type = 18700 id = 8 }
			name = "k.u.k. 30. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
	}
landunit = {
	id = { type = 18700 id = 9 }
	location = 242 #Lwow/Lviv
	name = "k.u.k. II. Kavallerie Korps"
		division = {
			id = { type = 18700 id = 10 }
			name = "k.u.k. 4. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
		}
		division = {
			id = { type = 18700 id = 11 }
			name = "k.u.k. 6. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
		}
	}
landunit = {
	id = { type = 18700 id = 12 }
	location = 238 #Stanislawow
	name = "k.u.k. IV. Korps"
		division = {
			id = { type = 18700 id = 13 }
			name = "k.u.k. 8. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
		}
	}

}  