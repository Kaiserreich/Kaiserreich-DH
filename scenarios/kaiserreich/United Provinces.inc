


country = {
    tag = NIC  
ai = "kaiserreich\United Provinces.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 8
        political_left = 2
        freedom = 4
        free_market = 7
        professional_army = 4
        defense_lobby = 8
        interventionism = 8
    }

#### cabinet

#### Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	2080
	manpower = 8

	free = { ic = 2 }

SpyInfo  = {  country = "NIC" NumberOfSpies = 2  } 

    ownedprovinces =      {
2080 2082 2081 2083
	 }
    controlledprovinces = {
2080 2082 2081 2083
	  }
    nationalprovinces =   {
2080 2082 2081 2083
	}

diplomacy = {
relation = { tag = GER  value = 140 }
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
1010  1020 1030 1040 1050 1060 1070 #1921 Infantry Division  
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
	id = { type = 11600 id = 45 }
	name = "Cuerpo Norte"
	location = 2080
		division = {
		id = { type = 11600 id = 4500 }
		name = "1ra Division de Infanteria"
		strength = 60
		type = infantry
		model = 6
		extra = anti_air
		}
	}
	landunit = {
	id = { type = 11600 id = 4501 }
	name = "Cuerpo Sur"
	location = 2083
		division = {
		id = { type = 11600 id = 4502 }
		name = "2a Division de Infanteria"
		strength = 40
		type = infantry
		model = 6
		}
	}

}  