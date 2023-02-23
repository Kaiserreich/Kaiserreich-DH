


country = {
	tag = NOR  

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 9
		political_left = 9
		freedom = 7
		free_market = 7
		professional_army = 3
		defense_lobby = 5
		interventionism = 2
    }
#### cabinet
	headofstate = { type = 9 id = 14001 } #H.K.M. Haakon VII
	headofgovernment = { type = 9 id = 14002 } #Johan Nygaardsvold
	foreignminister = { type = 9 id = 14003 } #Halvdan Koht
	armamentminister = { type = 9 id = 14004 } #Adolf Indrebø
	ministerofsecurity = { type = 9 id = 14005 } #Trygve H. Lie
	ministerofintelligence = { type = 9 id = 14129 } #Ole Berg starting in 1928
	chiefofstaff = { type = 9 id = 14007 } #Otto Ruge
	chiefofarmy = { type = 9 id = 14008 } #Kristian K. Laake
	chiefofnavy = { type = 9 id = 14009 } #Edgar Otto
	chiefofair = { type = 9 id = 14091 } #Harald Emil Bruunsgaard

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 32

	SpyInfo = { country = "NOR" NumberOfSpies = 2 }

	capital = 483

	nationalprovinces = {
		496 488 484 483 485 487 491 489 486 492 490 493 494 497 495
	}
   ownedprovinces = {
		483 485 487 491 489 492 490 493 494 497 496 488 486 484 495
	}
   controlledprovinces = {
		483 485 487 491 489 492 490 493 494 497 496 488 486 484 495
	}

diplomacy = {
	relation = { tag = BEL value = 100 }
	relation = { tag = DEN value = 150 }
	relation = { tag = ENG value = 90 }
	relation = { tag = FIN value = 75 }
	relation = { tag = HOL value = 100 }
	relation = { tag = LUX value = 100 }
	relation = { tag = SWE value = 150 }
	relation = { tag = USA value = 75 }
}


	
	techapps = {

# Group C 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4740 4750 4760 4770 #Interwar Seaplane

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
7600 7610 2620 2010 2630 2640 #Tankette
2290 2300 2310 2900 2910 2920 2930 #Basic Interwar Field Artillery
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Naval
3210 3220 3230 #Early Heavy Cruiser
3010 3020 3030 3040 3050 #Large Destroyer
3110 3120 3130 3140 #Interwar Light Cruiser
3410 3420 3430 3440 #Super-dreadnought
3610 3620 3630 #Short Range Submarine
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
1830 1840 1850 1860 #Engineers

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering
5190 #Basic Oil Refining
5600 5610 5620 5630 #Medicine

#Naval Doctrines
8010 8020 8040 8050 8060 8070 8080
8100 8110 #Coastal Defense

# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
14000 14010 #Improved WK Hospital
# Land Doctrines WW2 
6010 6020 # Superior Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

#########  OOB (...)

	transports = 200
	escorts = 5

	landunit = {
	location = 483
	name = "Den Norske Hær"
	id = { type = 12600 id = 1 }
		division = {
        	id = { type = 12600 id = 2 }
		name = "1. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 15
		}
		division = {
        	id = { type = 12600 id = 3 }
		name = "2. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 10
		}
		division = {
        	id = { type = 12600 id = 4 }
		name = "3. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 10
		}
		division = {
        	id = { type = 12600 id = 5 }
		name = "4. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 10
		}
		}

	landunit = {
	location = 493
	name = "I. Hærkorps"
	id = { type = 12600 id = 6 }
		division = {
			id = { type = 12600 id = 7 }
		name = "5. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 10
		}
		division = {
			id = { type = 12600 id = 8 }
		name = "6. Infanteridivisjon"
		type = d_01
		model = 7
		strength = 10
		}
		}
		
	landunit = {
	location = 489
	name = "Kavalerietkorps"
	id = { type = 12600 id = 9 }
		division = {
			id = { type = 12600 id = 10 }
		name = "1.  Dragondivisjon"
		type = cavalry
		model = 7
		strength = 10
		}
		}


navalunit = {
location = 495
base = 495
name = "1. Kystvaktdistrikt"
id = { type = 12600 id = 20 }

division = { id = { type = 12600 id = 21 } name = "1. Undervannsbåteskadre" type = submarine model = 1 }
division = { id = { type = 12600 id = 22 } name = "2. Undervannsbåteskadre" type = submarine model = 1 }
}

navalunit = {
location = 483
base = 483
name = "3. Kystvaktdistrikt"
id = { type = 12600 id = 25 }

division = { id = { type = 12600 id = 26 } name = "KNM Norge" type = heavy_cruiser model = 2 }
division = { id = { type = 12600 id = 30 } name = "KNM Eidsvold" type = heavy_cruiser model = 2 }
division = { 
			id = { type = 12600 id = 31 } 
			name = "1. Destroyereskadre" 
			type = destroyer 
                        model = 4
			} 
		division = { 
			id = { type = 12600 id = 32 } 
			name = "2. Destroyereskadre" 
			type = destroyer 
                        model = 4
			} 
}


}  