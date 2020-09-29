


country = {
    tag = SIA  
ai = "kaiserreich\Siam.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 3
        free_market = 3
        professional_army = 2
        defense_lobby = 5
        interventionism = 5
    }


#### cabinet

headofstate = { type = 9 id = 62115 }
headofgovernment = { type = 9 id = 62151 }
foreignminister = { type = 9 id = 62125 } #Prince Wan Waithayakorn
armamentminister = { type = 9 id = 62127 } #Manopakorn Nititada
ministerofsecurity = { type = 9 id = 62122  } #Prince Rangsit Prayurasakdi
ministerofintelligence = { type = 9 id = 62134 } #Phraya Songsuradet
chiefofstaff = { type = 9 id = 62138 } #Sri Sitthisongkhram
chiefofarmy = { type = 9 id = 62143 } #Prince Boworadet Kritsadakorn
chiefofnavy = { type = 9 id = 62148 } #Prince Abhakara Kiartivongse
chiefofair = { type = 9 id = 62108 } #Phraya Chalerm Akat

#### Resource Reserves

        SpyInfo  = {  country = "SIA" NumberOfSpies = 2  } 

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	manpower = 145
	capital = 1423


    ownedprovinces =      {
	1430 1429 1424 1423 1413 1422 1427 1426 1428 1425 1431 1402 1400 1401 1434 1435 1433 1436 1418 1416
	 }
    controlledprovinces = {
	1430 1429 1424 1423 1422 1413 1427 1426 1428 1425 1431 1402 1400 1401 1434 1435 1433 1436 1418 1416
	  }
    nationalprovinces =   {
	1430 1429 1424 1423 1422 1427 1426 1428 1425 1431 1402 1400 1401 1434 1435 1433 1436 1416 1418 1413	
}
    claimedprovinces = {
        
}

diplomacy = {
relation = { tag = ENG value = -40 }
relation = { tag = FRA value = -100 }
relation = { tag = JAP value = 75 }
relation = { tag = MAN value = 75 }
relation = { tag = MEN value = 75 }
}


	
	techapps = {

# Group D 1936 techs
#######################

#Interwar Fighter
4500 4510 4520 4530 4540 4550 4010
#Interwar Bomber
4600 4610 4620 4630 4120
#Basic Armoured Car
2860 2870 2880 2020
#Great War Heavy Field Artillery
2290 2300 2310
#SW Tank
7600 7610
#Great War Infantry Division
1010  1020 1030 1040 1050 1060 1070
#Great War Cavalry Division
13060 13070 13080 1310 1320 1330 1340 1350
#Early Mountain Division
1160  1170 1180
#1922 Naval Infantry Division
1560
#Interbellum Supply
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade
2810 2820 2510
#Manufactoring
5810 5820
#Improved Construction Engineering
5800 5080

#Great War Destroyer
3010 3020 3030 3040
#Early Light Cruiser
3110 3120 3130
#Short Range Submarine
3610 3620
#Naval Doctrines
8010 8050 8070 8080
#Basic Amphibious Warfare
82300
#Engineers
1830 1840
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
#Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Landdoctrine ww2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_teams = { 9121 } #Yatsushiro Sukeyoshi

#########  OOB (...)

		landunit = {
		location = 1423
		name = "Royal Thai Army"
        	id = { type = 23600 id = 1 }

			division = {
        		id = { type = 23600 id = 2 }
			name = "1. Thai Infantry Div."
			type = infantry
			model = 7
			strength = 100
			}

			division = {
        		id = { type = 23600 id = 3 }
			name = "2. Thai Infantry Div."
			type = infantry
			model = 6
			strength = 80
			}
                        division = {
        		id = { type = 23600 id = 30 }
			name = "3. Thai Infantry Div."
			type = infantry
			strength = 80
			model = 6
			}
			}
			
		landunit = {
		location = 1427
		name = "Royal Thai Police Force"
        	id = { type = 23600 id = 4 }

			
			division = {
        		id = { type = 23600 id = 5 }
			name = "1. Royal Thai Police Div."
			type = garrison
			strength = 50
			model = 4
			max_strength = 30
			extra = police
			}
			}

navalunit = {
	name = "Fleet of Siam"
	id = { type =  23600     id =   20   }
	location =   1423       #### 
	base =    1423       
		division = {	id = { type = 23600 id =  21   } 	name = "Thai" type = battleship model = 3   }
		division = {	id = { type = 23600 id =  22   } 	name = "Ramathibodi I" type = battleship model = 3  }
		division = {	id = { type = 23600 id =  23   } 	name = "Dharmashastra" type = light_cruiser model = 2  }
		division = {	id = { type = 23600 id =  24   } 	name = "Chakri" type = light_cruiser model = 2  }
		division = {	id = { type = 23600 id =  25   } 	name = "Pattani" type = light_cruiser model = 2  }
		division = {	id = { type = 23600 id =  26   } 	name = "Narathiwat" type = light_cruiser model = 2  }
		division = {	id = { type = 23600 id =  28   } 	name = "Yala" type = light_cruiser model = 2  }
		division = {	id = { type = 23600 id =  27   } 	name = "1. Coastal Patrol Squadron" type =  destroyer model = 2    }
		division = {	id = { type = 23600 id =   29  } 	name = "2. Coastal Patrol Squadron" type =  destroyer  model = 2   }
}



	airunit = {
	location = 1423
	base = 1423
	name = "Royal Thai Airforce"
        id = { type = 23600 id = 12 }
	
		Division = {
        	id = { type = 23600 id = 13 }
		name = "1. RTAF Fighter Group"
		type = interceptor
		model = 6
		strength = 70
		}

		Division = {
        	id = { type = 23600 id = 14 }
		name = "1. RTAF Tactic Bomb Group"
		type = tactical_bomber
		model = 4
		strength = 50
		}
		}

}  