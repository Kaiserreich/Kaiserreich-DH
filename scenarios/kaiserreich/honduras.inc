


country = {
    tag = HON  

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 6
        freedom = 4
        professional_army = 1
        defense_lobby = 5
        interventionism = 4
    }

#### cabinet

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	2085

	free = { ic = 2 }

SpyInfo  = {  country = "HON" NumberOfSpies = 2  } 

    ownedprovinces =      {
2085 2084
	 }
    controlledprovinces = {
2085 2084
	  }
    nationalprovinces =   {
2085 2084
	}

diplomacy = {
relation = { tag = ENG value = 50 }
relation = { tag = GUA value = 100 }
relation = { tag = NIC value = 100 }
relation = { tag = SAL value = 100 }
relation = { tag = USA value = 100 }
}


	
	techapps = {
# Group D 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car  
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1010  1020 1030 1040 1050 1060 #Great War Infantry Division  
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1830 1840 1850 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture
5800 5080 #Improved Construction Engineering 
5600 5610 #Medicine

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010




	}

#########  OOB (...)

	landunit = {
	id = { type = 19500 id = 55 }
	name = "Ejercito de Honduras"
	location = 2085
		division = {
		id = { type = 19500 id = 5500 }
		name = "1a Brig. de Inf. 'Francesco Marazán'"
		strength = 60
		type = infantry
		model = 5
		extra = anti_air
		}
	}

}  