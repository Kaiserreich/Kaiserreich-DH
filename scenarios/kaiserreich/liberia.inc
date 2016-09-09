


country = {
    tag = LIB  


	puppet = USA
	control = USA

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 5
        freedom = 3
        free_market = 4
        professional_army = 1
        defense_lobby = 3
        interventionism = 1
    }

#### cabinet

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	capital = 	969
	manpower = 7


    ownedprovinces =      {
		969
	 }
    controlledprovinces = {
		969
	  }
    nationalprovinces =   {
		969
	}

diplomacy = {
relation = { tag = PHI value = 200 }
relation = { tag = USA value = 200 }
}


	
	techapps = {
# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 #Interwar Fighter  

#Armour & Artillery
2860 #Interwar Armoured Car 
2290 #Light Field Artillery  
7600 7610 #SW Tank

#Infantry
1010  1020 1030 1040 1050 1060 #Great War Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division 
1830 1840 #Engineers

#Industrial
5700 #Early Agriculture
5600 5610 #Medicine

#Naval
3810 #Troopships

# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010


	}

#########  OOB (...)
landunit = {
		location = 969
        id = { type = 25500 id = 1 }
		name = "Army of Liberia"

		division = {
	        id = { type = 25000 id = 2 }
		name = "1st Republican Guards Div."
		type = infantry
		model = 6
                extra = artillery
		strength  = 100
		}

		division = {
	        id = { type = 25500 id = 3 }
		name = "2nd Republican Guards Div."
		type = infantry
		model = 6
		strength  = 100
		}
		}

}  