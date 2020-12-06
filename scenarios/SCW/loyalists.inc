country = {
    tag = SPA
	ai = "kaiserreich\Spain.ai"

    policy = {
        date = { year = 0 month = january day = 0 } 
		democratic = 7 
		political_left = 3 
		freedom = 7 
		free_market = 4 
		professional_army = 4 
		defense_lobby = 4 
		interventionism = 5 
    	}

	dissent = 5
	capital = 460 #madrid
	
   	manpower = 400

	transports = 60
	escorts = 14

	# Resource Reserves
	energy	=	15000
	metal	=	10000
	rare_materials  =	10000
	oil 	=	10000
	supplies =	5000
	money	=	500

	free = { 
		rare_materials = 3 
		metal = 6 
		energy = 12 
		ic = 3
		} 	


	HeadOfState = { type = 9 id = 10039 } 
	HeadOfGovernment = { type = 9 id = 10054 } 
	ForeignMinister = { type = 9 id = 10067 } 
	ArmamentMinister = { type = 9 id = 10095 } 
	MinisterOfSecurity = { type = 9 id = 10005 } 
	MinisterOfIntelligence = { type = 9 id = 10126 } 
	ChiefOfStaff = { type = 9 id = 10144 } 
	ChiefOfArmy = { type = 9 id = 10190 } 
	ChiefOfNavy = { type = 9 id = 10168 } 
	ChiefOfAir = { type = 9 id = 10178 } 

	ownedprovinces = { 466 453 460 458 472 474 471 470 467 468 457 475 452 447 990 991 469 715 987 988 348 455 454 473 450 989 716 } 
	controlledprovinces = { 466 453 460 458 472 474 471 470 467 468 457 475 452 447 990 991 469 715 987 988 348 455 454 473 450 989 716 } 
	nationalprovinces = { 444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461 348 440 438 436 442 443 475 437 439 452 447 990 991 469 455 448 449 446 462 445 459 473 465 454 450 } 
	claimedprovinces = { } 
	techapps = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1070 1080 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 3410 3420 3430 3440 3210 3220 3230 3240 3250 3610 3620 3630 3640 3110 3120 3130 3140 3010 3020 3030 3040 3050 3060 3720 3730 3736 3740 3750 3900 12100 3810 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 5190 5600 5610 5620 14000 14010 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6010 6020 8010 8020 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8070 5060 2150 2900 1090 5070 1250 2910 1100 55000 8030 2920 } 

	deactivate = { 6590 6690 6700 6710 6600 6550 6210 6390 6560 6570 6030 7010 7020 15500 7550 7560 7570 7580 7590 7100 7110 7120 7130 7140 7150 7160 16050 16000 16040 7170 7180 7190 16010 16020 7200 7210 7220 7230 7400 7410 7240 7640 7650 7260 7270 7620 7630 } 
	
## EJЙRCITOS DE TIERRA (hechos)

	landunit = {
		id = { type = 4850 id = 1 }
		location = 460 #Madrid
		name = "1a Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 2 }
			name = "1a Divisiуn Orgбnica"
			type = infantry
			model = 8 
			}		
	}		
	
	landunit = {
		id = { type = 4850 id = 3 }
		location = 447 #Salamanca
		name = "2o Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 4 }
			name = "3a Divisiуn Orgбnica"
			type = infantry
			model = 8
			extra = light_armor_brigade
			brigade_model = 4			
			}		
	}	
	
	landunit = {
		id = { type = 4850 id = 5 }
		location = 475 #Mallorca
		name = "Comandancia de Baleares"

		division = {
			id = { type = 4850 id = 6 }
			name = "Comandancia de Baleares"
			type = infantry
			model = 8 
			}		
	}	
	
	landunit = {
		id = { type = 4850 id = 7 }
		location = 991 #Canarias
		name = "Comandancia de Canarias"

		division = {
			id = { type = 4850 id = 8 }
			name = "Comandancia de Canarias"
			type = infantry
			model = 8 
			}		
	}		
	
	landunit = {
		id = { type = 4850 id = 9 }
		location = 455 #Guadalajara
		name = "Ejйrcito de Бfrica"

		division = {
			id = { type = 4850 id = 10 }
			name = "Circunscripciуn Occidental"
			type = infantry
			model = 8 
			}		
			
		division = {
			id = { type = 4850 id = 11 }
			name = "Circunscripciуn Oriental"
			type = infantry
			model = 8		
			}				
	}		
	
	landunit = {
		id = { type = 4850 id = 12 }
		location = 988 #Villa Cisneros
		name = "Guardias Coloniales"

		division = {
			id = { type = 4850 id = 13 }
			name = "Guardias Coloniales"
			type = d_01
			model = 8 
			}		
	}			
	
	landunit = {
		id = { type = 4850 id = 14 }
		location = 348 #Gibraltar
		name = "Fuerza de Gibraltar"

		division = {
			id = { type = 4850 id = 15 }
			name = "Fuerza de Defensa de Gibraltar"
			type = garrison
			model = 5 
			}		
	}
	
	landunit = {
		id = { type = 4850 id = 16 }
		location = 469 #Almeria
		name = "VII Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 17 }
			name = "2a Divisiуn Orgбnica"
			type = infantry
			model = 8	
			extra = artillery
			brigade_model = 1
			}		
	}		
	
	landunit = {
		id = { type = 4850 id = 18 }
		location = 452 #Segovia
		name = "IX Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 19 }
			name = "2. Division de Infanteria"
			type = infantry
			model = 8	
			extra = artillery
			brigade_model = 1
			}		
	}

	landunit = {
		id = { type = 4850 id = 20 }
		location = 989 #Villa Bens
		name = "Fuerzas del Sahara"

		division = {
			id = { type = 4850 id = 21 }
			name = "Legiуn del Sahara"
			type = infantry
			model = 8		
			}		
	}	

	landunit = {
		id = { type = 4850 id = 22 }
		location = 468 #Cuidad Real
		name = "VIII Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 23 }
			name = "14a Divisiуn Orgбnica"
			type = infantry
			model = 8
			}		
	}	
	
	landunit = {
		id = { type = 4850 id = 24 }
		location = 454 #Tarancon
		name = "XI Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 25 }
			name = "12. Division de Infanteria"
			type = infantry
			model = 8
			}		
	}	
	
	landunit = {
		id = { type = 4850 id = 26 }
		location = 455 #Guadalajara
		name = "Falange de Sevilla"

		division = {
			id = { type = 4850 id = 27 }
			name = "Falange de Sevilla"
			type = militia
			model = 4 
			}		
	}			
	
	landunit = {
		id = { type = 4850 id = 28 }
		location = 466 #Jaen
		name = "II Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 29 }
			name = "7a Divisiуn Orgбnica"
			type = infantry
			model = 8 
			}	

		division = {
			id = { type = 4850 id = 30 }
			name = "1. Division de Infanteria"
			type = infantry
			model = 8
			}				
	}			
	
	landunit = {
		id = { type = 4850 id = 31 }
		location = 447 #Salamanca
		name = "III Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 32 }
			name = "3. Division de Infanteria"
			type = infantry
			model = 8
			}				
	}		
	
	landunit = {
		id = { type = 4850 id = 33 }
		location = 452 #Segovia
		name = "X Cuerpo de Ejйrcito"

		division = {
			id = { type = 4850 id = 34 }
			name = "10. Division de Infanteria"
			type = infantry
			model = 8
			}				
	}		
}