


country = {
	tag = AUS
	ai = "kaiserreich\austria.ai"

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 3
		free_market = 6
		freedom = 6
		professional_army = 5
		defense_lobby = 6
		interventionism = 5
	}

	headofstate = { type = 9 id = 23040 } #Otto I von Habsburg AD
	headofgovernment = { type = 9 id = 23087 } #Albert von Mensdorff-Pouilly
	foreignminister = { type = 9 id = 23141 } #Friedrich von Wiesner
	armamentminister = { type = 9 id = 23177 } #Viktor Kienböck
	ministerofsecurity = { type = 9 id = 23231 } #Lorenz Böhler
	ministerofintelligence = { type = 9 id = 23333 } #Hugo Schäfer
	chiefofstaff = { type = 9 id = 23290 } #Alfred von Waldstätten
	chiefofarmy = { type = 9 id = 23314 } #Sigismund Schilhawsky von Bahnbrück
	chiefofnavy = { type = 9 id = 23360 } #Janko Vukovic de Podkapelski
	chiefofair = { type = 9 id = 23374 } #Karl Nikitsch

#### Resource Reserves

	capital = 195

	SpyInfo = { country = "AUS" NumberOfSpies = 4 }

	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	transports = 50
	manpower = 100


	ownedprovinces = {
		401 400 394 405 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194 371 332 335
		}
	controlledprovinces = {
		401 400 394 405 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194 371 332 335
		}
	nationalprovinces = {
		401 400 394 405 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194
		}
	claimedprovinces = {
	#commented claims as they are causing problems with the Ausgleich chain.
	#208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288
	#287 291 292 293 205 199 204 200 207 198 197 196 201 206 203 202 235 237 236 239 242 241 238 300 240
	#301 337 344 345 352 347 350 351 343 332 357 353 358 355 354 356 335
	}

diplomacy = {
relation = {   tag = BEL value = 80 }
relation = {   tag = BLR value = 120 }
relation = {   tag = BUL value = 100 }
relation = {   tag = GER value = 160 }
relation = {   tag = LAT value = 120 }
relation = {   tag = LIT value = 120 }
relation = {   tag = POL value = 60 }
relation = {   tag = UKR value = 70 }
relation = {   tag = BOS value = 180 }
relation = {   tag = CRO value = 120 access = yes }
relation = {   tag = CZE value = 150 }
relation = {   tag = GLD value = 170 }
relation = {   tag = HUN value = 120 }
relation = {   tag = ALB value = 40 }
relation = {   tag = DEN value = 50 }
relation = {   tag = FIN value = 40 }
relation = {   tag = GRE value = -60 }
relation = {   tag = HOL value = 50 }
relation = {   tag = IRE value = 20 }
relation = {   tag = ITA value = 120 }
relation = {   tag = NOR value = 40 }
relation = {   tag = POR value = 80 }
relation = {   tag = ROM value = -70 }
relation = {   tag = SCH value = 20 guaranteed = { day = 16 month = may year = 1935 } }
relation = {   tag = SER value = -120 }
relation = {   tag = SPA value = 120 }
relation = {   tag = SWE value = 30 }
relation = {   tag = ENG value = -100 }
relation = {   tag = FRA value = -120 }
relation = {   tag = RSI value = -150 }
relation = {   tag = AST value = -40 }
relation = {   tag = CAN value = -10 }
relation = {   tag = VIC value = -90 }
relation = {   tag = ARM value = -40 }
relation = {   tag = AZB value = 20 }
relation = {   tag = GEO value = -50 }
relation = {   tag = RUS value = 20 }
relation = {   tag = TRA value = 20 }
relation = {   tag = OMN value = 60 }
relation = {   tag = OTT value = 40 }
relation = {   tag = CON value = 120 }
relation = {   tag = USA value = -50 }
relation = {   tag = CHI value = 50 }
relation = {   tag = JAP value = -50 }
}


	techapps = {
# Austria Kaiserreich 1936 Techs
#######################

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #up to 1930 interceptor
4300 4310 4320 4330 4340 #Up to 1930 Multi Role Fighter
4600 4610 4620 4630 4120 4130 #Up to 1930 Tac Bomber
4740 4750 4760 4770 4780 #Seaplanes up to 1932
4700 4710 #1924 Naval Bomber
4290 #1926 Air Transport
4800 4810 4820 #Strat Bombers
7290 7300 7310 7320 #CAS

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 2930 #Artillery up to 1930
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 2640 2646 #1928 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1931 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 1980 #Up to IW Supply 1930
1830 1840 1850 #Engineers

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineerings
5190 #Basic Oil refining
5810 5820 5050 5830 5060 5070 #Manufacturing up to impr Mac tools
5310 54010 54020 54030 #Computers
5600 5610 5620 5630 #Medicines
5470 #Atomic Research
5316 5326 5327 #Cryptography
55000 #Mining 1935

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into superior firepower
14000 14010 14020 #Great War Hospital System 

#Naval
3010 3020 3030 3040 3050 #DD
3110 3120 3130 3140 3150 #CL
3210 3220 3230 3240 3250 #CA
3410 3420 3430 3440 3450 3456 3460 #BBs
3310 3320 #Battlecruiser
3610 3620 3630 3640 #SS
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

dormant_leaders = { #GLD
					2500 2501 2502 2503 2504 2505 2506 2507 2508 2509 2510 2511 2512 2513 2514 2515 2516 2517 2518 2519 2520 2521 2522 2523 2524
					2525 2526 2527 2528 2529 2530 2531 2532 2533 2534 2535 2536 2537 2538 2539 2540 2541 2542 2543 2544 2545 2546 2547 2548 2549
					2550 2551 2552 2553 2554 2555 2556 2557 2558 2559 2560 2561 2562 2563 2564 2565
					#CZE
					2400 2401 2402 2403 2404 2405 2406 2407 2408 2409 2410 2411 2412 2413 2414 2415 2416 2417 2418 2419 2420 2421 2422 2423 2424
					2425 2426 2427 2428 2429 2430 2431 2432 2433 2434 2435 2436 2437 2438 2439 2440 2441 2442 2443 2444 2445 2446 2447 2448 2449
					2450 2451 2452 2453 2454 2455 2456 2457 2458 2459 2460 2461 2462 2463 2464 2465 2466 2467 2468 2469 2470 2471 2472 2473 2474
					2475 2476 2477 2478 2479
					}

dormant_ministers = { #GLD
					23550 23551 23552 23553 23554 23555 23556 23557 23558 23559 23560 23561 23562 23563 23564 23565 23566 23567 23568 23569 23570
					23571 23572 23573 23574 23575 23576 23577 23578 23579 23580
					#CZE
					23500 23501 23502 23503 23504 23505 23506 23507 23508 23509 23510 23511 23512 23513 23514 23515 23516 23517 23518 23519 23520
					23521 23522 23523 23524 23525 23526 23527 23528
					}

dormant_teams = { 622 633 639 640 653 656 #HUN
				603 604 621 632 635 #CZE
				608 609 618 619 626 643 #GER
				614 616 #CRO
				625 627 628 #Bavaria
				}

#########  OOB (...)

#The Imperial-Royal Landwehr includes: Infanterietruppendivision (Schützendivision after 1917), the 44th containing the majority of Gebirgstruppe (2 artillery reg. attached to each, 3 cav brigades spread out in 6 regiments).
#	k.k. 13. Schützendivision (2 field artillery reg.) - Vienna
#	k.k. 21. Schützendivision (2 field artillery reg.) - Prague
#	k.k. 22. Schützendivision (2 field artillery reg.) - Graz
#	k.k. 26. Schützendivision (2 field artillery reg.) - Litomerice
#	k.k. 43. Schützendivision (2 field artillery reg.) - Czernowitz +cav
#	k.k. 44. Schützendivision (1 field artillery reg. 1 mtn reg.) - Innsbruck (half mtn) +cav
#	k.k. 45. Schützendivision (2 field artillery reg.) - Przemysl
#	k.k. 46. Schützendivision (2 field artillery reg.) - Krakow +cav
#Elements of the Common Army containing significant German and/or non-Magyar ethnicities, and home area:
#	k.u.k. 1. Infanteriedivision (2 mtn artillery reg.) - Sarajevo (3 mtn brigades)
#	k.u.k. 2. Infanteriedivision (2 field artillery reg.) - Jaroslaw/Yaroslavl (Polish/Ukrainian)
#	k.u.k. 3. Infanteriedivision 'Edelweissdivision' (2 field artillery reg.) - Linz (mixed inf/mtn)
#	k.u.k. 4. Infanteriedivision (2 field artillery reg.) - Brno (Czech)
#	k.u.k. 5. Infanteriedivision (2 field artillery reg.) - Olomouc (Czech)
#	k.u.k. 6. Infanteriedivision (2 field artillery reg. 1 mtn reg.) - Graz (mixed inf/mtn)
#	k.u.k. 7. Infanteriedivision (2 field artillery reg.) - Osijek (Croat)
#	k.u.k. 8. Infanteriedivision 'Kaiserjägerdivision' (2 field artillery reg. 1 heavy field reg. 2 mtn reg.) - Bolzano (3 inf brigades, 2 mtn brigades)
#	k.u.k. 9. Infanteriedivision (2 field artillery reg.) - Prague (Czech)
#	k.u.k. 10. Infanteriedivision (3 field artillery reg.) - Jaromer (Czech)
#	k.u.k. 11. Infanteriedivision (2 field artillery reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 12. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Krakow (Polish)
#	k.u.k. 16. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Hermannstadt/Sibiu (german area of Romania)
#	k.u.k. 18. Infanteriedivision (2 mtn artillery reg.) - Mostar (Bosnian) (5 mtn brigades)
#	k.u.k. 19. Infanteriedivision (2 field artillery reg.) - Pilsen (Czech)
#	k.u.k. 24. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Przemysl (Polish/Ukrainian)
#	k.u.k. 25. Infanteriedivision (1 field artillery reg. 1 heavy field reg.) - Vienna
#	k.u.k. 28. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Ljubljana (Slovenian) (3 brigades, some mtn inf)
#	k.u.k. 29. Infanteriedivision (1 field artillery reg. 1 heavy field reg.) - Terezín (Czech)
#	k.u.k. 30. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 34. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Timisoara (german area of Romania)
#	k.u.k. 36. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Zagreb (Croat)
#	k.u.k. 47. Infanteriedivision (1 mtn artillery reg.) - Herceg Novi/Montenegro (3 mtn brigades)
#	k.u.k. 48. Infanteriedivision (3 mtn artillery reg.) - Sarajevo (3 mtn brigades)
#	k.u.k. 49. Infanteriedivision (1 field artillery reg.) - Vienna
#	k.u.k. 1. Kavalleriedivision (2 horse artillery reg.) - Timisoara (only cav-div with 3 brigades)
#	k.u.k. 3. Kavalleriedivision (1 horse artillery reg.) - Vienna
#	k.u.k. 4. Kavalleriedivision (1 horse artillery reg.) - Lviv (Polish/Ukrainian)
#	k.u.k. 6. Kavalleriedivision (1 horse artillery reg.) - Jaroslaw/Yaroslavl (Polish/Ukrainian)
#	k.u.k. 7. Kavalleriedivision (1 horse artillery reg.) - Krakow (Polish)
#8 mtn, 2 cav, 2 mot, 10 inf (GLD: 4 cav, 5 inf)
#Vienna: k.u.k. II. Korps
#	k.k. 13. Infanteriedivision (2 field artillery reg.) - Vienna
#	k.u.k. 25. Infanteriedivision (1 field artillery reg. 1 heavy field reg.) - Vienna
#	k.u.k. 49. Infanteriedivision (1 field artillery reg.) - Vienna
#Graz/Slovenia: k.u.k. III. Korps
#	k.k. 22. Infanteriedivision (2 field artillery reg.) - Graz
#	k.u.k. 6. Infanteriedivision (2 field artillery reg. 1 mtn reg.) - Graz (mixed inf/mtn)
#	k.u.k. 28. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Ljubljana (Slovenian) (3 brigades, some mtn inf)
#Bolzano/Innsbruck/Linz: k.u.k. XIV. Korps
#	k.k. 44. Infanteriedivision (1 field artillery reg. 1 mtn reg.) - Innsbruck (half mtn) +cav
#	k.u.k. 3. Infanteriedivision 'Edelweissdivision' (2 field artillery reg.) - Linz (mixed inf/mtn)
#	k.u.k. 8. Infanteriedivision 'Kaiserjägerdivision' (2 field artillery reg. 1 heavy field reg. 2 mtn reg.) - Bolzano (3 inf brigades, 2 mtn brigades)
#Prague/Litomerice: k.u.k. VIII. Korps
#	k.k. 21. Infanteriedivision (2 field artillery reg.) - Prague
#	k.k. 26. Infanteriedivision (2 field artillery reg.) - Litomerice
#Sibiu: k.u.k. VII. Korps
#	k.u.k. 16. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Hermannstadt/Sibiu (german area of Romania)
#	k.u.k. 34. Infanteriedivision (2 field artillery reg. 1 heavy field reg.) - Timisoara (german area of Romania)
#Timisoara: k.u.k. I. Kavallerie Korps
#	k.u.k. 1. Kavalleriedivision (2 horse artillery reg.) - Timisoara (only cav-div with 3 brigades)
#	k.u.k. 3. Kavalleriedivision (1 horse artillery reg.) - Vienna
#Bosnia: k.u.k. XV. Korps
#	k.u.k. 1. Infanteriedivision (2 mtn artillery reg.) - Sarajevo (3 mtn brigades)
#	k.u.k. 48. Infanteriedivision (3 mtn artillery reg.) - Sarajevo (3 mtn brigades)
#Ragusa/Montenegro: k.u.k. XVI. Korps
#	k.u.k. 18. Infanteriedivision (2 mtn artillery reg.) - Mostar (Bosnian) (5 mtn brigades)
#	k.u.k. 47. Infanteriedivision (1 mtn artillery reg.) - Herceg Novi/Montenegro (3 mtn brigades)
#Krakow: k.u.k. I. Korps
#	k.k. 43. Infanteriedivision (2 field artillery reg.) - Czernowitz +cav
#	k.k. 45. Infanteriedivision (2 field artillery reg.) - Przemysl
#	k.k. 46. Infanteriedivision (2 field artillery reg.) - Krakow +cav
#Ivano-Frankivsk/Czernowitz: k.u.k. IV. Korps
#	k.k. 43. Schützendivision (2 field artillery reg.) - Czernowitz +cav
#	k.u.k. 8. Kavalleriedivision (1 horse artillery reg.) - Stanislawów (Polish/Ukrainian) [GLD]

landunit = {
	id = { type = 17352 id = 1 }
	location = 195 #Vienna
	name = "Oberkommando der Österreich-Ungarn"
		division = {
			id = { type = 17352 id = 2 }
			name = "k.u.k. Armeeoberkommando"
			type = hq
			model = 2
			strength = 100
			extra = anti_air
			brigade_model = 2
		}
	}
landunit = {
	id = { type = 17352 id = 3 }
	location = 195 #Vienna
	name = "k.u.k. II. Korps"
		division = {
			id = { type = 17352 id = 4 }
			name = "k.k. 13. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 5 }
			name = "k.u.k. 25. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = engineer
			brigade_model = 3
		}
		division = {
			id = { type = 17352 id = 18 }
			name = "k.u.k. 49. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = engineer
			brigade_model = 3
		}
	}
landunit = {
	id = { type = 17352 id = 19 }
	location = 190 #Graz
	name = "k.u.k. III. Korps"
		division = {
			id = { type = 17352 id = 20 }
			name = "k.k. 22. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 21 }
			name = "k.u.k. 6. Alpenjägerdivision" #k.u.k. 6. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 22 }
			name = "k.u.k. 28. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
	}
landunit = {
	id = { type = 17352 id = 23 }
	location = 402 #Bolzano
	name = "k.u.k. XIV. Korps"
		division = {
			id = { type = 17352 id = 24 }
			name = "k.k. 44. Alpenjägerdivision" #k.k. 44. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 25 }
			name = "k.u.k. 3. Alpenjägerdivision 'Edelweiss'" #k.u.k. 3. Infanteriedivision 'Edelweissdivision'
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 26 }
			name = "k.u.k. 8. Alpenjägerdivision 'Kaiserjäger'" #k.u.k. 8. Infanteriedivision 'Kaiserjägerdivision'
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
	}
landunit = {
	id = { type = 17352 id = 27 }
	location = 291 #Sibiu
	name = "k.u.k. VII. Korps"
		division = {
			id = { type = 17352 id = 28 }
			name = "k.u.k. 16. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra1 = engineer
			brigade_model1 = 3
			extra2 = artillery
			brigade_model2 = 5
		}
		division = {
			id = { type = 17352 id = 29 }
			name = "k.u.k. 34. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra1 = engineer
			brigade_model1 = 3
			extra2 = artillery
			brigade_model2 = 5
		}
	}
landunit = {
	id = { type = 17352 id = 30 }
	location = 285 #Timisoara
	name = "k.u.k. I. Kavallerie Korps"
		division = {
			id = { type = 17352 id = 31 }
			name = "k.u.k. 1. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
			extra = light_armor_brigade
			brigade_model = 3
		}
		division = {
			id = { type = 17352 id = 32 }
			name = "k.u.k. 3. Kavalleriedivision"
			type = cavalry
			model = 8
			strength = 35
			experience = 20
			extra = light_armor_brigade
			brigade_model = 3
		}
	}
landunit = {
	id = { type = 17352 id = 33 }
	location = 207 #Prague
	name = "k.u.k. VIII. Korps"
		division = {
			id = { type = 17352 id = 34 }
			name = "k.k. 21. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 35 }
			name = "k.k. 26. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = artillery
			brigade_model = 5
		}
	}
landunit = {
	id = { type = 17352 id = 36 }
	location = 355 #Sarajevo
	name = "k.u.k. XV. Korps"
		division = {
			id = { type = 17352 id = 37 }
			name = "k.u.k. 1. Alpenjägerdivision" #k.u.k. 1. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 38 }
			name = "k.u.k. 48. Alpenjägerdivision" #k.u.k. 48. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
	}
landunit = {
	id = { type = 17352 id = 39 }
	location = 332 #Cetinje
	name = "k.u.k. XVI. Korps"
		division = {
			id = { type = 17352 id = 40 }
			name = "k.u.k. 18. Alpenjägerdivision" #k.u.k. 18. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 17352 id = 41 }
			name = "k.u.k. 47. Alpenjägerdivision" #k.u.k. 47. Infanteriedivision
			type = bergsjaeger
			model = 8
			strength = 70
			experience = 30
		}
	}
landunit = {
	id = { type = 17352 id = 42 }
	location = 235 #Krakow
	name = "k.u.k. I. Korps"
		division = {
			id = { type = 17352 id = 43 }
			name = "k.k. 45. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = rocket_artillery
			brigade_model = 8
		}
		division = {
			id = { type = 17352 id = 44 }
			name = "k.k. 46. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = rocket_artillery
			brigade_model = 8
		}
	}
landunit = {
	id = { type = 17352 id = 45 }
	location = 238 #Stanislawow
	name = "k.u.k. IV. Korps"
		division = {
			id = { type = 17352 id = 46 }
			name = "k.k. 43. Infanteriedivision"
			type = infantry
			model = 8
			strength = 50
			experience = 20
			extra = rocket_artillery
			brigade_model = 8
		}
	}

# k.u.k. Luftfahrtruppen

airunit = {
	id = { type = 17352 id = 47 }
	name = "1. Fliegerdivision"
	location = 195
	prevprov = 195
	home = 195
	base = 195
		division = {
			id = { type = 17352 id = 48 }
			name = "Fliegergruppe 1"
			type = multi_role
			model = 4
			strength = 70
		}
		division = {
			id = { type = 17352 id = 49 }
			name = "Stürzbomben Fliegergruppe 1"
			type = cas
			model = 4
			strength = 50
		}
	}
airunit = {
	id = { type = 17352 id = 50 }
	name = "2. Fliegerdivision"
	location = 404
	prevprov = 404
	home = 404
	base = 404
		division = {
			id = { type = 17352 id = 51 }
			name = "Marinebomben Fliegergruppe 1"
			type = naval_bomber
			model = 1
			strength = 70
		}
	}
airunit = {
	id = { type = 17352 id = 52 }
	name = "3. Fliegerdivision"
	location = 190
	prevprov = 190
	home = 190
	base = 190
		division = {
			id = { type = 17352 id = 53 }
			name = "Fliegergruppe 2"
			type = interceptor
			strength = 70
			model = 7
		}
	}

# k.u.k. Kriegsmarine

navalunit = {
	name = "k.u.k I. Schlachtschwadron"
	id = { type = 17352 id = 60 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 61 } name = "SMS Kaiser Franz Jozef" type = battleship model = 5 }
		division = { id = { type = 17352 id = 62 } name = "SMS Hunyadi" type = battleship model = 5 }
		division = { id = { type = 17352 id = 63 } name = "SMS Corvinus" type = battleship model = 5 }
	}
navalunit = {
	name = "k.u.k II. Schlachtschwadron"
	id = { type = 17352 id = 64 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 65 } name = "SMS Tegetthoff" type = battleship model = 4 }
		division = { id = { type = 17352 id = 66 } name = "SMS Prinz Eugen" type = battleship model = 4 }
		division = { id = { type = 17352 id = 67 } name = "SMS Viribus Unitis" type = battleship model = 4 }
	}
navalunit = {
	name = "k.u.k I. Kreuzerschwadron"
	id = { type = 17352 id = 68 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 69 } name = "SMS Pola" type = heavy_cruiser model = 3 }
		division = { id = { type = 17352 id = 70 } name = "SMS Fiume" type = heavy_cruiser model = 3 }
		division = { id = { type = 17352 id = 71 } name = "SMS Admiral Haus" type = light_cruiser model = 3 }
		division = { id = { type = 17352 id = 72 } name = "SMS Admiral Njegovan" type = light_cruiser model = 3 }
	}
navalunit = {
	name = "k.u.k II. Kreuzerschwadron"
	id = { type = 17352 id = 73 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 74 } name = "SMS Ragusa" type = heavy_cruiser model = 3 }
		division = { id = { type = 17352 id = 75 } name = "SMS Sebenico" type = heavy_cruiser model = 3 }
		division = { id = { type = 17352 id = 76 } name = "SMS Admiral Daublebsky von Sterneck " type = light_cruiser model = 3 }
		division = { id = { type = 17352 id = 77 } name = "SMS Admiral Horthy" type = light_cruiser model = 3 }
	}
navalunit = {
	name = "k.u.k I. Zerstörerflotte"
	id = { type = 17352 id = 78 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 79 } name = "1. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
		division = { id = { type = 17352 id = 80 } name = "2. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
		division = { id = { type = 17352 id = 81 } name = "3. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
		division = { id = { type = 17352 id = 82 } name = "4. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
		division = { id = { type = 17352 id = 83 } name = "5. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
		division = { id = { type = 17352 id = 84 } name = "6. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
	}
navalunit = {
	name = "k.u.k U-Bootflotte"
	id = { type = 17352 id = 85 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 86 } name = "1. Unterseebootsflotte" type = submarine model = 2 }
		division = { id = { type = 17352 id = 87 } name = "2. Unterseebootsflotte" type = submarine model = 2 }
		division = { id = { type = 17352 id = 88 } name = "3. Unterseebootsflotte" type = submarine model = 2 }
		division = { id = { type = 17352 id = 89 } name = "4. Unterseebootsflotte" type = submarine model = 2 }
		division = { id = { type = 17352 id = 90 } name = "5. Unterseebootsflotte" type = submarine model = 1 }
		division = { id = { type = 17352 id = 91 } name = "6. Unterseebootsflotte" type = submarine model = 1 }
	}
navalunit = {
	name = "k.u.k III. Kreuzerschwadron"
	id = { type = 17352 id = 92 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 93 } name = "SMS Helgoland" type = light_cruiser model = 2 }
		division = { id = { type = 17352 id = 94 } name = "SMS Novara" type = light_cruiser model = 2 }
		division = { id = { type = 17352 id = 95 } name = "SMS Saida" type = light_cruiser model = 2 }
		division = { id = { type = 17352 id = 96 } name = "SMS Admiral Spaun" type = light_cruiser model = 1 }
	}
navalunit = {
	name = "k.u.k II. Zerstörerflotte"
	id = { type = 17352 id = 97 }
	location = 406
	base = 406
		division = { id = { type = 17352 id = 98 } name = "7. Torpedobootzerstörerschwadron" type = destroyer model = 2 }
		division = { id = { type = 17352 id = 99 } name = "8. Torpedobootzerstörerschwadron" type = destroyer model = 2 }
		division = { id = { type = 17352 id = 100 } name = "9. Torpedobootzerstörerschwadron" type = destroyer model = 2 }
		division = { id = { type = 17352 id = 101 } name = "10. Torpedobootzerstörerschwadron" type = destroyer model = 2 }
	}

}  