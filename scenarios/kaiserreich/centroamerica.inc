


country = {
    tag = GUA  
ai = "kaiserreich\Centroamerica.ai"

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 7
        free_market = 2
        freedom = 6
        professional_army = 1
        defense_lobby = 5
        interventionism = 4
    }

#### cabinet

#### Resource Reserves

	manpower = 20

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 2088

	free = { ic = 2 }

SpyInfo  = {  country = "GUA" NumberOfSpies = 2  } 

    ownedprovinces =      {
2086 2088 2087 2079
	 }
    controlledprovinces = {
2086 2088 2087 2079
	  }
    nationalprovinces =   {
2086 2088 2087 2079
	}

diplomacy = {

relation = { tag = ENG value = 195 }
}


	
	techapps = {
# Group D 1936 techs
#######################
#Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter 

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Secret Weapons
7600 7610 #SW Tank 

#Infantry
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply
1010  1020 1030 1040 1050 1060 1070 #1921 Infantry Division  
13060 13070 13080 1310 1320 1330 1340 #GW Cavalry Division
1830 1840 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture  
5800 5080 #Improved Construction Engineering
5600 5610 #Medicine

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
}

#########  OOB (...)

	landunit = {
	id = { type = 16500 id = 65 }
	name = "Ejercito de Centroamerica"
	location = 2088
		
		division = {
		id = { type = 16500 id = 6500 }
		name = "1a Brig. de Infanterie"
		strength = 80
		type = infantry
		model = 6
		extra = anti_air
		brigade_model = 1
		}
                division = {
		id = { type = 16500 id = 6501 }
		name = "2a Brig. de Infanterie"
		strength = 70
		type = infantry
		model = 6
		}
		}
       

}  