


country = {
    tag = TIB
    ai = "kaiserreich\Tibet.ai"
    
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 5
        free_market = 5
        professional_army = 1
        defense_lobby = 1
        interventionism = 1
    }


#### cabinet

  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }

#### Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	free = { ic = 3 oil = 0 energy = 0 metal = 0 rare_materials = 0 money = 0 manpower = 0 } #new Mar2020

	capital = 	1289

SpyInfo  = {  country = "TIB" NumberOfSpies = 2  } 

   nationalprovinces      = { 1294 1286 1287 1288 1289 1295 1290 1278 1285 } 
   ownedprovinces         = { 1278 1286 1287 1288 1289 1290 1294 1295  } 
   controlledprovinces    = { 1278 1286 1287 1288 1289 1290 1294 1295  } 
   claimedprovinces = { 1455 1458 1283 1284 1292 1293 1262}

diplomacy = {

}


	
	techapps = {
# Group E 1936 techs
#######################

#Armour & Artillery
2860 #Interwar Armoured Car 
2290 #Light Field Artillery 
7600 7610 #SW Tank 

#Infantry
1010  1020 1030 1040 1050 1060 1070 #1916 lgt. Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  

#Industrial
5700 #Early Agriculture
5600 #Medicine

# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6560
14000 14010 #Hospitals

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 

	}

#########  OOB (...)

	landunit = {
		location = 1289
		name = "Xi'zang Jüntuan 1"
        id = { type = 10700 id = 1 }
	division = {
        id = { type = 10700 id = 2 }
			name = "1 Xi'zang Shi"
			type = infantry
			model = 6
                        extra = artillery
		}
	division = {
        id = { type = 10700 id = 3 }
			name = "2 Xi'zang Lü"
			type = infantry
			model = 6
		}
	division = {
        id = { type = 10700 id = 4 }
			name = "3 Xi'zang Lü"
			type = militia
			model = 3
		}
        division = {
        id = { type = 10700 id = 5 }
			name = "4 Xi'zang Lü"
			type = militia
			model = 3
		}
	}

}  