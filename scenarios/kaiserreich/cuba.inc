


country = {
    tag = CUB  
ai = "kaiserreich\Cuba.ai"

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 8
        political_left = 4
        free_market = 8
        freedom = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 4
    }

#### cabinet

#### Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 40
	capital = 1776



    ownedprovinces =      {
		1776 1779 1775 1777
	 }
    controlledprovinces = {
		1776 1779 1775 1777
	  }
    nationalprovinces =   {
		1776 1779 1775 1777 1778
	}

diplomacy = {
relation = { tag = DOM value = 50 }
relation = { tag = ENG value = 30 }
relation = { tag = HAI value = 30 }
relation = { tag = USA value = 200 }
}


	
	techapps = {

# Group D 1936 techs
#######################

# Infantry
1010 1020 1030 1040 1050 1060 1070 #1921  War Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 1860 #Engineers

#Secret Weapons
7600 7610 #SW Tank

# Armor & Artillery Technology
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

# Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter

#Industrial 
5800 5080 #Improved Construction Engineering
5700 5710 5010 5020 #Mechanized Agriculture
5310 54010 54020 5316 5326 #Computers & cryptografi
5600 5610 #Medicine

# Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Superior Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

#########  OOB (...)

		landunit = {
		id = { type = 26000 id = 40 }
		name = "Ejercito de Cuba"
		location = 1776
			division = {
			id = { type = 26000 id = 4000 }
			name = "1a Brigada de Ejercito"
			strength = 100
			type = infantry
			model = 6
			}
		
			division = {
			id = { type = 26000 id = 4001 }
			name = "1a Brigada de Caballería 'Floridita'"
			strength = 100
			type = cavalry
                	model = 6
		        extra = artillery
			}
			}
}  