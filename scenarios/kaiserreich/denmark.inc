


country = {
    tag = DEN  
    ai = "kaiserreich\Denmark.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 10
        free_market = 6
        freedom = 8
        professional_army = 3
        defense_lobby = 1
        interventionism = 3
    }
#### cabinet

#### Resource Reserves
manpower = 10
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
 
        SpyInfo  = {  country = "DEN" NumberOfSpies = 3  } 

	capital = 294


    ownedprovinces =      {
    	294 219 220 217 218 2 1 3 1783
	 }
    controlledprovinces = {
    	294 219 220 217 218 2 1 3 1783
	  }
    nationalprovinces =   {
    	294 219 220 217 218 2 1 3 1783
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		40	   }  
relation = {   tag =  	GER	 value =		80	   }  
relation = {   tag =  	AUS	value = 		50	   }  
relation = {   tag =  	HUN	 value =		30	   }  
relation = {   tag =  	SPA	value = 		40	   }  
relation = {   tag =  	ENG	value = 		-20	   }  
relation = {   tag =  	FRA	value = 		-30	   }  
relation = {   tag =  	CAN	value = 		40	   }  
relation = {   tag =  	VIC	value = 		20	   }  
relation = {   tag =  	RUS	 value =		60	   }  
relation = { tag =	USA	value = 		30	 }



relation = { tag = FIN value = 75 }

relation = { tag = NOR value = 150 }
relation = { tag = PER value = 50 }
relation = { tag = SWE value = 75 }
}


	
	techapps = {
	
#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter   
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber

#Armour & Artillery
7600 7610 2620 2010 #Great War Tank
2290 2300 2310 #Great War Heavy Field Artillery  
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery  
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 Infantry Division  
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division    
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division   
1830 1840 1850 1860 #Engineers

#Industrial
5600 5610 5620 5630 #Medicine
5700 5710 5010 5020 #Mechanized Agriculture
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5470 #Faculty of Atomic Research

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval
3010 3020 3030 3040 #Great War Destroyer 
3110 #Early Light Cruiser 
3210 3220 #Early Heavy Cruiser
3610 3620 3630 3640 #1924 Submarine Daphne Class
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships
3410 3420 3430 3440 3450 3456 #Niels Juel Class BB (1917)

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 6020 # Superior Firepower

#Naval Doctrines
8010 8020 8040 8050 


	}

#########  OOB (...)

	landunit = 
   {  location = 294 
     name     = "Sjællandske Division" 
     id       = {  type = 27000 id = 40  } 
     Division = 
     {  id       = {  type = 27000 id = 41  } 
       name     = "1. 'Sjællandske' Division" 
       type     = infantry 
       model    = 6
       strength = 50 
	extra = anti_air
	brigade_model = 1
      } 
    } 
   landunit = 
   {  location = 220 
     name     = "Jydske Division" 
     id       = {  type = 27000 id = 42  } 
     Division = 
     {  id       = {  type = 27000 id = 43  } 
       name     = "2. 'Jydske' Division" 
       type     = infantry 
       model    = 6
       strength = 50 
	extra = engineer
	brigade_model = 2
      } 
    } 



	navalunit = {
name = "Den Danske Flåde" 
id = { type = 27000 id = 44 } 
location = 294 
base = 294

division = { id = { type = 27000 id = 45 } name = "HDMS Niels Juel" type = heavy_cruiser model = 2 }
division = { id = { type = 27000 id = 46 } name = "HDMS Peder Skram" type = heavy_cruiser model = 1 }
division = { 
			id = { type = 27000 id = 47 } 
			name = "1. Destroyer Flotille" 
			type = destroyer
                        model = 4 
			} 
		division = { 
			id = { type = 27000 id = 48 } 
			name = "2. Destroyer Flotille" 
			type = destroyer
                        model = 4 
			} 
}
navalunit = { 
		id = { type = 27000 id = 49 } 
		name = "I. KDM Flaadestyrke" 
		location = 294 
		base = 294 
		division = { 
			id = { type = 27000 id = 50 } 
			name = "1. Ubåds Flotille" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 27000 id = 51 } 
			name = "2. Ubåds Flotille" 
			type = submarine 
			model = 2 
			} 
		} 

}  