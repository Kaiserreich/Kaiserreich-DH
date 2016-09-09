country = {
    tag = DOM  

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 3
        free_market = 9
        freedom = 4
        professional_army = 2
        defense_lobby = 6
        interventionism = 6
    }

#### cabinet

#### Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 25

	manpower = 24
	capital = 1780

    ownedprovinces =      {
		1780
	 }
    controlledprovinces = {
		1780
	  }
    nationalprovinces =   {
		1780
	}

diplomacy = {
relation = { tag = VEN value = 29 }
relation = { tag = CAN value = -73 }
relation = { tag = GUY value = -138 }
relation = { tag = HAI value = -84 }
relation = { tag = USA value = 96 }
}

	techapps = {
# Group D 1936 techs
#######################
#Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 #Great War Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1830 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture  
5800 5080 #Improved Construction Engineering
5600 #Medicine

#Naval
3010 3020 3030 3040 3050 #Large DD
3810 #Troopships

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}
#########  OOB (...)
	landunit = {
	id = { type = 28000 id = 75 }
	name = "Ejercito de Rep. Dominicana"
	location = 1780
		division = {
		id = { type = 28000 id = 7500 }
		name = "I Brigada de Infantería"
		strength = 75
		type = infantry
		model = 5
           		extra = artillery
		}
		division = {
		id = { type = 28000 id = 7501 }
		name = "2 Brigada de Infantería"
		strength = 75
		type = infantry
		model = 5
		}
		division = {
		id = { type = 28000 id = 7502 }
		name = "3 Brigada de Infantería"
		strength = 50
		type = infantry
		model = 5
		}
}

navalunit = { id = { type = 12500 id = 7503 } name = "I Flotilla de la Armada" location = 1780 base = 1780

division = { id = { type = 12500 id = 7504 } name = "1. Flotilla de Destructores" type = destroyer model = 4 }
division = { id = { type = 12500 id = 7505 } name = "2. Flotilla de Destructores" type = destroyer model = 4 }
division = { id = { type = 12500 id = 7506 } name = "1. Grupo Aerotransportado del Ejército" type = transport model = 0 }
division = { id = { type = 12500 id = 7507 } name = "2. Grupo Aerotransportado del Ejército" type = transport model = 0 }
division = { id = { type = 12500 id = 7508 } name = "3. Grupo Aerotransportado del Ejército" type = transport model = 0 }
}
}