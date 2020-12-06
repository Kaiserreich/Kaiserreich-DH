


country = {
    tag = OMN  


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 5
        professional_army = 3
        defense_lobby = 2
        interventionism = 3
    }

#### cabinet

   headofstate            = {  type = 9 id = 92001  } 
   headofgovernment       = {  type = 9 id = 92003  } 
   foreignminister        = {  type = 9 id = 92005  } 
   armamentminister       = {  type = 9 id = 92013  } 
   ministerofsecurity     = {  type = 9 id = 92028  } 
   chiefofstaff           = {  type = 9 id = 92043  } 
   chiefofarmy            = {  type = 9 id = 92049  } 

#### Resource Reserves

	energy	=	200   metal	=	200	rare_materials =	100	oil =	200	supplies =	200
	money = 10	

	capital = 	1052
	manpower = 5

	free = { ic = 1 oil = 0 energy = 2 metal = 1 rare_materials = 1 money = 0 manpower = 0 } #new Mar2020

    ownedprovinces =      {

		1051 1052 1043 840 
	 }
    controlledprovinces = {

		1051 1052 1043 840 
	  }
    nationalprovinces =   {

		1051 1052 1043 840 
	}

diplomacy = {
relation = { tag = AST value = 150 }
relation = { tag = BHU value = 150 }
relation = { tag = CAN value = 150 }
relation = { tag = ENG value = 150 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 1 }
relation = { tag = IRQ value = 125 }
relation = { tag = ITA value = 50 }
relation = { tag = NEP value = 150 }
relation = { tag = NZL value = 150 }
relation = { tag = SAF value = 150 }
relation = { tag = SAU value = 125 }
relation = { tag = OTT value = 35 }
relation = { tag = USA value = 100 }
relation = { tag = YEM value = 150 }
}


	
	techapps = {

#Armour & Artillery
2290 #Light Field Artillery

#Infantry
1010  1020 1030 1040 1050 #1916 lgt. Infantry Division 
13060 13070 13080 1310 1320 1330 #1916 Cavalry Division
1910 1920 1930 1940 #Supply

#Industrial
5700 #Early Agriculture

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WW2 - none

	}

#########  OOB (...)

landunit = {
 id = { type = 11114 id = 1 }
 name = "Royal Omani Army"
 location = 1052

	division = {
		id = { type = 11114 id = 2 }
		name = "Royal Omani Army"
		type = cavalry
		model = 4
		strength = 15
		max_strength = 15
		}
		}

}  