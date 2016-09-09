


country = {
    tag = FIN  

ai = "kaiserreich\Finland.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 1
        free_market = 9
        freedom = 7
        professional_army = 5
        defense_lobby = 9
        interventionism = 4
    }


#### cabinet


	headofstate = { type = 9 id = 29001 }
	headofgovernment = { type = 9 id = 29065  }
 	foreignminister = { type = 9 id = 29079 }
 	armamentminister = { type = 9 id = 29099 }
 	ministerofsecurity = { type = 9 id = 29118 }
 	ministerofintelligence = { type = 9 id = 29129 }
 	chiefofstaff = { type = 9 id = 29138 }
 	chiefofarmy = { type = 9 id = 29146  }
 	chiefofnavy = { type = 9 id = 29151 }        
 	chiefofair = { type = 9 id = 29156 }

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 525
	manpower = 35

SpyInfo  = {  country = "FIN" NumberOfSpies = 3  } 

    ownedprovinces =      {
529 530 531 525 524 512 527 528 533 532 520 526 521 523 518 522 519 514 515 516 511 513 517
	 }
    controlledprovinces = {
529 530 531 525 524 512 527 528 533 532 520 526 521 523 518 522 519 514 515 516 511 513 517
	  }
    nationalprovinces =   {
529 530 531 525 524 512 527 528 533 532 538 520 526 521 523 518 540 522 519 514 515 516 511 513 517
536 537 541 539
	}

claimedprovinces = {
		534 535 
		
	}

diplomacy = {
relation = {   tag =    	BEL	value = 	80		   }  
relation = {   tag =  	BLR	 value =		20	   }  
relation = {   tag =  	GER	 value =		60	   }  
relation = {   tag =  	LAT	value = 		120	   }  
relation = {   tag =  	LIT	 value =		50	   }  
relation = {   tag =  	AUS	value = 		40	   }  
relation = {   tag =  	HUN	 value =		60	   }  
relation = {   tag =  	SPA	value = 		20	   }  
relation = {   tag =  	CAN	value = 		10	   }  
relation = {   tag =  	RUS	 value =		-30	   }  
relation = { tag =	USA	value = 		10	 }
}

dormant_ministers = { 29164 29166 29168 29169 }
	
	techapps = {

# Group C 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter  
4600 4610 4620 4630 4120 #Interwar Bomber 

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
7600 7610 2620 2010 2630 2640 #Tankette 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1830 1840 1850 1860 #Engineers
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 #Early Mountain Division 

#Industrial
5700 5710 5010 #Modern Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring 
5800 5080 5090 #Improved Construction Engineering 
5920 # Winter equipment
5190 #Basic Oil Refining 
5600 5610 5620 5630 #Medicine

#Naval
3010 3020 3030 3040 #Great War Destroyer
3210 3220 3230 #Early Heavy Cruiser 
3610 3620 3630 #Short Range Submarine 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3410 3420 3430 3440 3450 3456 3460 3470 #Early Battleship 
3810 #Troopships

#Land Doctrines
14000 14010 #Improved Great War Hospital System
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6010 6020 # Superior firepower (land)

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Naval Doctrines
8010 8020  8040  8050

	}

#########  OOB (...)


	landunit = {
	location = 532 
	name = "I Armeijakunta"
	id = { type = 32000 id = 1 }

		division = { 
		id = { type = 32000 id = 706 } 
		name = "Päämaja" 
		type = hq 
		model = 2 
		strength = 100 
		}

		division = {
		id = { type = 32000 id = 2 }
		name = "1. Divisioona"
		type = infantry
		model = 7
		extra = artillery
		brigade_model = 2
		}
		}

	landunit = {
	location = 530 
	name = "II Armeijakunta"
	id = { type = 32000 id = 3 }

		division = {
		id = { type = 32000 id = 4 }
		name = "4. Divisioona"
		type = infantry
		model = 7
		extra = anti_air
		}

		division = {
		id = { type = 32000 id = 5 }
		name = "5. Divisioona"
		type = infantry
		model = 7
		}

		division = {
		id = { type = 32000 id = 7 }
		name = "21. Divisioona"	
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 530
	name = "III Armeijakunta"
	id = { type = 32000 id = 8 }

		division = {
		id = { type = 32000 id = 9 }
		name = "8. Divisioona"
		type = infantry
		model = 7
		}

		division = {
		id = { type = 32000 id = 10 }
		name = "10. Divisioona"		
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 533
	name = "IV Armeijakunta"
	id = { type = 32000 id = 11 }

		division = {
		id = { type = 32000 id = 12 }
		name = "12. Divisioona"
		type = infantry	
		model = 7
		extra = anti_air
		}

		division = {
		id = { type = 32000 id = 13 }
		name = "13. Divisioona"
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 525 
	name = "V Armeijakunta"
	id = { type = 32000 id = 14 }

		division = {
		id = { type = 32000 id = 15 }
		name = "6. Divisioona"
		type = infantry
		model = 7
		extra = anti_air
		}

		division = {
		id = { type = 32000 id = 23 }
		name = "22. Divisioona"
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 523
	name = "Pohjois-Karjalan Ryhmä"
	id = { type = 32000 id = 17 }

		division = {
		id = { type = 32000 id = 18 }
		name = "2. Divisioona"
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 517 # 
	name = "Pohjois-Suomen Ryhmä"
	id = { type = 32000 id = 19 }

	division = {
		id = { type = 32000 id = 20 }
		name = "3. Divisioona"
		type = infantry
		model = 7
		}
		}

	landunit = {
	location = 519 
	name = "Lapin Ryhmä"
	id = { type = 32000 id = 21 }

		division = {
		id = { type = 32000 id = 22 }
		name = "7. Divisioona"
		type = bergsjaeger
		model = 5
		extra = anti_air
		}
		}

navalunit = {
id = { type = 32000 id = 24 }
name = "Suomen Laivasto"
location = 525
base = 525

division = { id = { type = 32000 id = 32 } name = "Perkele" type = battleship model = 2 } # sold by German Empire formerly SMS Oldenburg
division = { id = { type = 32000 id = 25 } name = "Ilmarinen" type = heavy_cruiser model = 2 }  
division = { id = { type = 32000 id = 26 } name = "Väinämöinen" type = heavy_cruiser model = 2 }
division = { id = { type = 32000 id = 27 } name = "1. Sukellusvenelaivue" type = submarine model = 2 }

division = { id = { type = 32000 id = 28 } name =  "Aino" type = light_cruiser model = 2  }
division = { id = { type = 32000 id = 29 } name =  "Uusimaa Gunboat Flotilla" type = destroyer   model = 2   } 
division = { id = { type = 32000 id = 30 } name =  "Syöksy Gunboat Flotilla" type = destroyer   model = 2   } 
}

airunit = { 
		id = { type = 32000 id = 2000 } 
		name = "Suomen Ilmavoimat" 
		location = 525 
		base = 525 
		division = { 
			id = { type = 32000 id = 2001 } 
			name = "Suomen Ilmavoimat" 
			type = multi_role
			model = 2
			} 
		}

#### For the projection of Finnish Power (and the prestige of the Lapua movement!) later in the game...

division_development = {
	name = "Ylijumala"
	type = battleship
	model = 4
	cost = 5.6
	id = { type = 32000 id = 31 }
	date = { year = 1938 month = january day = 6 }
	}




transports = 10
escorts = 2

}  