country = {
    tag = VIC

    policy = {
        date = { year = 0 month = january day = 0 } 
		democratic = 7 
		political_left = 4 
		freedom = 5 
		free_market = 6 
		professional_army = 8 
		defense_lobby = 8 
		interventionism = 6 
    	}

	dissent = 5
	capital = 727 #algiers
	
   	manpower = 100

	transports = 60
	escorts = 14

	# Resource Reserves
	energy	=	15000
	metal	=	10000
	rare_materials  =	10000
	oil 	=	10000
	supplies =	5000
	money	=	500

	HeadOfState = { type = 9 id = 57073 } 
	HeadOfGovernment = { type = 9 id = 57061 } 
	ForeignMinister = { type = 9 id = 57068 } 
	ArmamentMinister = { type = 9 id = 57069 } 
	MinisterOfSecurity = { type = 9 id = 57070 } 
	MinisterOfIntelligence = { type = 9 id = 57046 } 
	ChiefOfStaff = { type = 9 id = 57007 } 
	ChiefOfArmy = { type = 9 id = 57048 } 
	ChiefOfNavy = { type = 9 id = 57009 } 
	ChiefOfAir = { type = 9 id = 57050 } 

	ownedprovinces = { 727 728 729 730 733 739 981 982 985 986 } 
	controlledprovinces = { 727 728 729 730 733 739 981 982 985 986 } 
	nationalprovinces = { 727 728 729 730 733 739 981 982 985 986 } 
	
	claimedprovinces = { } 
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1396 1560 4500 4510 4520 4530 4540 4550 4010 4300 4310 4320 4330 4600 4610 4620 4630 4120 4800 4810 4820 7290 7300 7310 7320 2860 2870 2880 2020 2620 2010 2630 2640 2290 2300 2310 2900 2910 2800 2450 21180 21190 21200 2810 2820 2510 7600 7610 5810 5820 5700 5710 5010 5020 5600 5610 5620 5630 5800 5080 5090 5190 5310 54010 54020 54030 5316 5326 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6010 6020 14000 14010 8010 8020 8040 8050 8030 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8900 8910 8920 8930 8940 82500 3010 3020 3030 3040 3050 3110 3120 3130 3210 3220 3230 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3610 3620 3630 3720 3730 3736 3740 3750 3900 3810 3820 5050 2920 2150 5327 5830 9040 1100 2930 5060 1360 1570 1860 5410 14020 1370 2646 5070 4740 4020 2650 4130 55000 2940 1380 2400 } 
	inventions = { } 
	blueprints = { 4700 4900 4290 3060 3140 3240 3460 12100 3640 9140 8950 8500 82300 5560 81650 4750 2030 6040 } 
	deactivate = { 6590 6690 6700 6710 6600 6550 6210 6390 6560 6570 6030 81300 7010 7020 15500 7550 7560 7570 7580 7590 7100 7110 7120 7130 7140 7150 7160 16050 16000 16040 7170 7180 7190 16010 16020 7200 7210 7220 7230 7400 7410 7240 7640 7650 7260 7270 7620 7630 } 
	
landunit = {
		id = { type = 13500 id = 8 }
		name = "1иre Armйe"
		location = 727

			division = {
			id = { type = 13500 id = 9 }
			name = "1иre Div. Lйgиre Motorisйe"
			type = infantry
			model = 8
			extra = armored_car
			brigade_model = 2
			}

			division = {
			id = { type = 13500 id = 10 }
			name = "1иre Division d'Infanterie"
			type = infantry
			model = 7
			extra = anti_tank
			brigade_model = 2
			}

			division = {
			id = { type = 13500 id = 11 }
			name = "2иme Division motorizee de Rйserve"
			type = motorized
			model = 0
			extra = anti_tank
			brigade_model = 2
			}

			division = {
			id = { type = 13500 id = 15 }
			name = "12иme Div. d'Infanterie Motorisйe"
			type = infantry
			model = 7
			extra = armored_car
			brigade_model = 2
			}

			division = {
			id = { type = 13500 id = 17 }
			name = "2иme Div. d'Infanterie Nord-Africaine"
			type = infantry
			model = 7
			extra = anti_tank
			brigade_model = 2
			}
			}	
			
landunit = {
		id = { type = 13500 id = 22 }
		name = "Garnison d'Algiers"
		location = 727
			division = {
			id = { type = 13500 id = 23 }
			name = "Garnison d'Algiers"
			type = garrison
			model = 3
			strength = 30
			max_strength = 30
			locked = yes
			}
	}	

navalunit = {
 name = "1ere Flotte, Capital"
 id = { type = 13501 id = 300 }
 location = 727 #### [Algerie]
 base = 727

 division = { id = { type = 13501 id = 301 } name = "Bretagne" type = battleship model = 3 }
 division = { id = { type = 13501 id = 302 } name = "Provence" type = battleship model = 3 }
 division = { id = { type = 13501 id = 303 } name = "Lorraine" type = battleship model = 3 }
 division = { id = { type = 13501 id = 304 } name = "Foudre" type = escort_carrier model = 0 }
 division = { id = { type = 13501 id = 305 } name = "Courbet" type = battleship model = 2 }
 division = { id = { type = 13501 id = 306 } name = "Jean Bart" type = battleship model = 2 }
 division = { id = { type = 13501 id = 307 } name = "Paris" type = battleship model = 2 }
 division = { id = { type = 13501 id = 308 } name = "Condorcet" type = battleship model = 2 }
 division = { id = { type = 13501 id = 309 } name = "Diderot" type = battleship model = 2 }
 division = { id = { type = 13501 id = 310 } name = "Mirabeau" type = battleship model = 2 }
 division = { id = { type = 13501 id = 311 } name = "Vergniaud" type = battleship model = 2 }
 division = { id = { type = 13501 id = 312 } name = "Voltaire" type = battleship model = 2 }
 division = { id = { type = 13501 id = 313 } name = "France" type = battleship model = 2 }
 division = { id = { type = 13862 id = 427 } name = "Diderot" type = heavy_cruiser model = 2 }
 division = { id = { type = 13501 id = 316 } name = "DD. 1" type = destroyer model = 3 }
 division = { id = { type = 13501 id = 321 } name = "DD. 2" type = destroyer model = 3 }
 division = { id = { type = 13501 id = 326 } name = "DD. 3" type = destroyer model = 3 }
 division = { id = { type = 13501 id = 347 } name = "DD. 4" type = destroyer model = 3 }
 division = { id = { type = 13501 id = 352 } name = "DD. 5" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 357 } name = "DD. 6" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 368 } name = "DD. 7" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 375 } name = "DD. 8" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 381 } name = "DD. 9" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 387 } name = "DD. 10" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 393 } name = "DD. 11" type = destroyer model = 2 }
 division = { id = { type = 13501 id = 399 } name = "DD. 12" type = destroyer model = 2 }
 }

 navalunit = {
 name = "10eme Flotte, Transport du Rйserve"
 id = { type = 13501 id = 405 }
 location = 728 #### [Oran]
 base = 728
 division = { id = { type = 13501 id = 406 } name = "TP. 1" type = transport model = 1 }
 division = { id = { type = 13501 id = 407 } name = "TP. 2" type = transport model = 1 }
 division = { id = { type = 13501 id = 408 } name = "TP. 3" type = transport model = 1 }
 division = { id = { type = 13501 id = 409 } name = "TP. 4" type = transport model = 1 }
 division = { id = { type = 13501 id = 410 } name = "TP. 5" type = transport model = 1 }
 division = { id = { type = 13501 id = 411 } name = "TP. 6" type = transport model = 1 }
 division = { id = { type = 13501 id = 412 } name = "TP. 7" type = transport model = 1 }
 }	
}