


country = {
    tag = SAU 
    ai = "kaiserreich\Hatsemite Arabia.ai"


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 2
        defense_lobby = 5
        interventionism = 3
    }


#### cabinet

	headofstate = { type = 9 id = 63001 }
	headofgovernment = { type = 9 id = 63007 }
 	foreignminister = { type = 9 id = 63015  }
 	armamentminister = { type = 9 id = 63025 }
 	ministerofsecurity = { type = 9 id = 63027 }
 	ministerofintelligence = { type = 9 id = 63033 }
 	chiefofstaff = { type = 9 id = 63042 }
 	chiefofarmy = { type = 9 id = 63043 }
 	chiefofnavy = { type = 9 id = 63051 }
 	chiefofair = { type = 9 id = 63053 }

#### Resource Reserves

	manpower = 27
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 1049

    ownedprovinces =      {
	1040 1047 1045 1038 1039 1049
	 }
    controlledprovinces = {
	1040 1047 1045 1038 1039 1049
	  }
    nationalprovinces =   {
	1040 1047 1045 1038 1039 1049
	}

diplomacy = {
relation = { tag = AFG value = 50 }
relation = { tag = AUS value = 50 }
relation = { tag = CAN  value = 50 }
relation = { tag = EGY value = 125 }
relation = { tag = ITA value = -25 }
relation = { tag = OMN value = 125 }
relation = { tag = PER value = 100 }
relation = { tag = SOV value = 1 }
relation = { tag = OTT value = -150 }
relation = { tag = YEM value = 125 }
}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 #Interwar Fighter  

#Armour & Artillery
2860 #Interwar Armoured Car 
2290 #Light Field Artillery
7600 7610 #SW Tank 

#Infantry
1010  1020 1030 1040 1050 1060 #1918 lgt. Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 #1918 Cavalry Division 

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

	}

dormant_ministers = { 63059 63060 63061 63062 63063 63064 63065 63066 63067 63068 }
dormant_leaders = { 290044 }

#########  OOB (...)
	landunit = {
	location = 1045
	name = "Arab Northern Army"
        id = { type = 22600 id = 1 }
	
		division = {
        	id = { type = 22600 id = 2 }
		name = "1st Arab Regular Infantry Division"
		type = infantry
		model = 6
		}

		division = {
        	id = { type = 22600 id = 3 }
		name = "Hedjaz Irregular Battalion"
		type = militia
		model = 4
                  }

        	division = {
        	id = { type = 22600 id = 4 }
                name = "Hashemite Cavalry Group'"
                type = cavalry
		model = 7
		}
		}

}  