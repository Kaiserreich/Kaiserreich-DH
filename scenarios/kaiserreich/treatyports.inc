


country = {
    tag = EAF 

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 4
        freedom = 8
        free_market = 9
        professional_army = 4
        defense_lobby = 4
        interventionism = 3
    }


#### cabinet

	headofstate = { type = 9 id = 550003 } #Nelson T. Johnson
	headofgovernment = { type = 9 id = 550030 } #Cecil Clementi
	foreignminister = { type = 9 id = 550040 } #John Van Antwerp MacMurray
	armamentminister = { type = 9 id = 550002 } #Chen Guangfu
	ministerofsecurity = { type = 9 id = 550090 } #William E. Fairbairn
	ministerofintelligence = { type = 9 id = 550082 } #Georg Wetzell
	chiefofstaff = { type = 9 id = 550067 } #James Marshall-Cornwall
	chiefofarmy = { type = 9 id = 550076 } #Oswald Cuthbert Borrett
	chiefofnavy = { type = 9 id = 550105 } #Francis George Gillilan Chilton
	chiefofair = { type = 9 id = 550110 } #John Babington

#### Resource Reserves

	capital = 1338

	manpower = 0
    
SpyInfo  = {  country = "EAF" NumberOfSpies = 2  } 

	energy	= 1000   
        metal	= 1000		
        rare_materials =	500	
        oil =	500	
        supplies =	500
	money = 10       
        transports = 60
        escorts = 5


    ownedprovinces =      {
1338 1358 1371 1346
	 }
    controlledprovinces = {
1338 1358 1371 1346
	  }
    nationalprovinces =   {
1338 1358 1371 1346
	}

diplomacy = {
relation = { tag = CGX value = 100 guaranteed = { day = 29 month = december year = 1935   }  access = yes	   } 
relation = { tag = GER value = 60 }
relation = { tag = AST value = 60 }
relation = { tag = CAN value = 60 }
relation = { tag = CSX value = 60 }
relation = { tag = USA value = 60 }
}


	
	techapps = {

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #Naval Bomber

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank
2800 2450 #Early Static Anti-Air Artillery 
2810 #1918 AA Bde

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
1160  1170 1180 1190 1200 1210 1220 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 #1930 Cavalry Division 
1830 1840 1850 1860 #Engineers
1396 # Motorized Infantry

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture 
5800 5080 5090 #Improved Construction Engineering
5600 5610 5620 #Medicine
5190 #Basic Oil Refining 

# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6010 6020 # Superior Firepower
14000 14010 14020 #Great War Hospital System 

#Naval
3010 3020 3030 3040 3050 #Large Destroyer
3410 3420 3430 3440 3450 #Early Battleship

#Naval Doctrines
8010 8020 8030 8040 8050 

	}

#########  OOB (...)

landunit = {
		name = "Hong Kong Constabulary"
		location = 1371
		id = { type = 12700 id = 9 }
		division = {
			id = { type = 12700 id = 10 }
			name = "Hong Kong Defence Force"
			type = garrison 
			model = 4
			strength = 100 }
	}

airunit = {
	location = 1338
	base = 1338
        id = { type = 12700 id = 82 }
	name = "Far East Air Command"

		division = {
	        id = { type = 12700 id = 83 }
		name = "Far East Group"
		type = tactical_bomber
		model = 5
		strength = 100 }
	}

landunit = {
		name = "Boa'an Constabulary"
		location = 1338
		id = { type = 12699 id = 1 }
		division = {
			id = { type = 12699 id = 2 }
			name = "Boa'an Police District"
			type = militia 
			model = 4
			strength = 50 }
	}

landunit = {
		name = "Fuzhou Constabulary"
		location = 1358
		id = { type = 12699 id = 3 }
		division = {
			id = { type = 12699 id = 4 }
			name = "Fuzhou Police District"
			type = militia 
			model = 4
			strength = 50 }
	}

landunit = {
		name = "Ningbo Constabulary"
		location = 1346
		id = { type = 12699 id = 5 }
		division = {
			id = { type = 12699 id = 6 }
			name = "Ningbo Police District"
			type = militia 
			model = 4
			strength = 50 }
	}

landunit = {
		name = "Shanghai Police Force"
		location = 1338
		id = { type = 12699 id = 7 }
		division = {
			id = { type = 12699 id = 8 }
			name = "Ningbo Police District"
			type = d_01 
			model = 6
			strength = 100 }
	}

navalunit = {
	location = 1338
	base = 1338
	name = "China Station Squadron"
	id = { type = 12699 id = 11 }
		division = { id = { type = 12699 id = 12 } name = "HMS Diomede" type = light_cruiser model = 2 }
		division = { id = { type = 12699 id = 13 } name = "HMS Despatch" type = light_cruiser model = 2 }
		division = { id = { type = 12699 id = 14 } name = "Legation Transport Squadron" type = transport model = 1 }
		}

navalunit = {
	location = 1371
	base = 1371
	name = "China Station Submarine Squadron"
	id = { type = 12699 id = 15 }
		division = { id = { type = 12699 id = 16 } name = "1st Submarine Flotilla" type = submarine model = 2 }
		division = { id = { type = 12699 id = 17 } name = "2nd Submarine Flotilla" type = submarine model = 2 }
		}

}  