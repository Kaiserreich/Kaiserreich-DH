


country = {
    tag = NEP  

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 6
        free_market = 5
        professional_army = 9
        defense_lobby = 2
        interventionism = 4
    }

#### cabinet

#### Resource Reserves
	energy	=	200   metal	=	200	rare_materials =	100	oil =	200	supplies =	200
	money = 10

	capital = 	1457
	manpower = 7



    ownedprovinces =      {
		1457 1452 1462 1467 1451 
	 }
    controlledprovinces = {
		1457 1452 1462 1467 1451
	  }
    nationalprovinces =   {
		1457 1452 1462 1467 1451
	}

diplomacy = {

}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 

#Armour & Artillery
2860 #Interwar Armoured Car  
2290 #Light Field Artillery 
7600 7610 #SW Tank 

#Infantry
1010  1020 1030 1040 #1916 lgt. Infantry Division 
1160 1170 1180 1190 1200 1210 #Mountain Inf. up to 1918 Mountain Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  
1830 #Engineers

#Industrial
5700 #Early Agriculture
5600 #Medicine

# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

#########  OOB (...)

	landunit = {
	location = 1457
	name = "Royal Nepalese Army"
        id = { type = 31500 id = 1 }
	
		division = {
        	id = { type = 31500 id = 2 }
		name = "Royal Nepalese Lifeguard Div."
		type = infantry
		model = 4
		}
	
		division = {
        	id = { type = 31500 id = 3 }
		name = "Royal Household Division"
		type = infantry
		model = 4
		}
		}

	landunit = {
	location = 1451
	name = "Dehradun Military Police"
        id = { type = 31500 id = 4 }
	
		division = {
        	id = { type = 31500 id = 5 }
		name = "Dehradun Military Garrison"
		type = garrison
                locked = yes
                strength  = 30
                max_strength = 30
		model = 3
		}
		}

	landunit = {
	location = 1467
	name = "Gorakhpur Military Police"
        id = { type = 31500 id = 6 }
	
		division = {
        	id = { type = 31500 id = 7 }
		name = "Gorakhpur Military Garrison"
		type = garrison
                locked = yes
                strength  = 30
                max_strength = 30
		model = 3
		}
		}

	landunit = {
	location = 1462
	name = "Muzaffarpur Military Police"
        id = { type = 31500 id = 8 }
	
		division = {
        	id = { type = 31500 id = 9 }
		name = "Muzaffarpur Military Garrison"
		type = garrison
                locked = yes
                strength  = 30
                max_strength = 30
		model = 3
		}
		}

	landunit = {
	location = 1457
	name = "Royal Nepalese Gurkha Corps"
        id = { type = 31500 id = 10 }
	
		division = {
        	id = { type = 31500 id = 11 }
		name = "His Majesty's Own Gurkha Brigade"
		type = bergsjaeger
                strength  = 25
                max_strength = 50
		model = 5
		}
		}

}  