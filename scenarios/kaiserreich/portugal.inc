


country = {
    tag = POR  
ai = "kaiserreich\Portugal.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 5
        professional_army = 4
        defense_lobby = 5
        interventionism = 3
    }

#### cabinet
headofstate = { type = 9 id = 9001 }
headofgovernment = { type = 9 id = 9002 }
#### Resource Reserves

SpyInfo  = {  country = "POR" NumberOfSpies = 3  } 

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 15

	capital = 476
	manpower = 70


    nationalprovinces   = {   481 476 479 477 478 482 480 
  
    } 
  ownedprovinces     = {   481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
    } 
  # Cabinda 
  controlledprovinces  = {   481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
    } 

diplomacy = {
relation = { tag = BEL value = -20 }
relation = { tag = BRA value = 75 }
relation = { tag = ENG value = 100 }
relation = { tag = FIN value = 50 }
relation = { tag = GER value = 75 }
relation = { tag = IRE value = 25 }
relation = { tag = ITA value = 65 }
relation = { tag = SPR value = -50 }
}


	
	techapps = {

# Group C 1936 techs
#######################
#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply
1830 1840 1850 1860 #Engineers
  
#Armour & Artillery
7600 7610 2620 2010 2630 2640 #Tankette 
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Naval
3010 3020 3030 3040 3050 #Improved Destroyer 
3610 3620 3630 #Short Range Submarine 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships
3410 #Turret BB (Vasco da Gama)

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter  
4600 4610 4620 4630 4120 #Interwar Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber

#Industrial
5700 5710 5010 #Modern Agriculture  
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5600 5610 5620 #Medicine

#Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 6020 #Land Doctrine WWII - Firepower Focus?  WTF?  Really?
14000 14010 #Improved Great War Hospital System

#Naval Doctrines
8010 8040 8050

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_ministers = { 9082 9083 }

#########  OOB (...)

	landunit = {
	id = { type = 19600 id = 1000 }
	location = 476
	name = "Exército do Portugal"

		division = {
	        id = { type = 19600 id = 1001 }
		name = "1o Batalhão de Infantaria"
		type = infantry
		model = 6
                extra = artillery
		strength  = 100
                brigade_model = 2
		}

		division = {
	        id = { type = 19600 id = 1002 }
		name = "2o Batalhão de Infantaria"
		type = infantry
		model = 6
		strength  = 100
		}

                division = {
	        id = { type = 19600 id = 1008 }
		name = "3o Batalhão de Infantaria"
		type = infantry
		model = 6
		strength  = 100
		}
		}

        landunit = {
	location = 892    
	name = "4o Batalhão de Infantaria"
        id = { type = 19600 id = 1009 }
		division = { 
		id = { type = 19600 id = 1010 } 
		name = "4o Batalhão de Infantaria" 
		type = garrison
		model = 4
                locked = yes
		strength = 50
                max_strength = 50
		}
                }

        landunit = {
	location = 855  

	name = "5o Batalhão de Infantaria"
        id = { type = 19600 id = 1011 }
		division = { 
		id = { type = 19600 id = 1012 } 
		name = "5o Batalhão de Infantaria" 
		type = garrison
		model = 4
                locked = yes
		strength = 50
                max_strength = 50
		}
                }

	navalunit = {
	id = { type = 19600 id = 1003 }
	location = 476
	base = 476
	name = "Transporte de Navio do Portugal"

		division = {
		 id = { type = 19600 id = 1004 }
		 name = "1o Flotilha de Navio de Transporte"
		 type = transport
                 model = 1
		}
		}

	navalunit = {
	id = { type = 19600 id = 1005 }
	location = 963
	base = 963
	name = "Transporte de Navio de Colonias"

		division = {
		 id = { type = 19600 id = 1006 }
		 name = "2o Flotilha de Navio de Transporte"
		 type = transport
                 model = 1
                       }
                division = {
		 id = { type = 19600 id = 1007 }
		 name = "Douro Flotilha"
		 type = destroyer
                 model = 4
			   }
                   }

	airunit = {
	id = { type = 19600 id = 9300 }
	name = "Aéreo do Portugal"
	location = 476 #Lissabon
	base = 476
		division = {
		id = { type = 19600 id = 9301 }
		name = "1o Avião de Bombardeiro Tático"
		type = tactical_bomber
		strength = 100
		model = 5
		}
		}

	navalunit = {
	id = { type = 19600 id = 9302 }
	name = "Marinha do Portugal"
	location = 476
	base = 476
		division = {
		id = { type = 19600 id = 9303 }
		name = "Viana do Castello Flotilha"
		type = destroyer
		model = 4
		strength = 100
		}

		division = {
		id = { type = 19600 id = 9304 }
		name = "1o Flotilha de Submarino"
		type = submarine
		model = 2
		strength = 100
		}
		}


transports = 60
escorts = 8

}  