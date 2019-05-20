


country = {
    tag = HUN 
ai = "kaiserreich\Hungary.ai"
 
	puppet = AUS


    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 1
        free_market = 4
        freedom = 3
        professional_army = 3
        defense_lobby = 7
        interventionism = 8
    }


headofstate = { type = 9 id = 21044 }
	headofgovernment = { type = 9 id = 21053 }
 	foreignminister = { type = 9 id = 21074 }
 	armamentminister = { type = 9 id = 21084 }
 	ministerofsecurity = { type = 9 id = 21098 }
 	ministerofintelligence = { type = 9 id = 21006 }
 	chiefofstaff = { type = 9 id = 21131  }
 	chiefofarmy = { type = 9 id = 21145 }
 	chiefofnavy = { type = 9 id = 21009 }        
 	chiefofair = { type = 9 id = 21163  }

#### Resource Reserves

manpower = 150
	capital = 284

        SpyInfo  = {  country = "HUN" NumberOfSpies = 3  } 

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money	=	10



    ownedprovinces =      {
208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288 
287 291 292 293
	 }
    controlledprovinces = {
208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288 
287 291 292 293
	  }
    nationalprovinces =   {
208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288 
287 291 292 293
	}
	
	dormant_leaders = { 105228 105229 105230 105231 }

diplomacy = {
relation = {   tag =    	BEL	value = 		50	   }  
relation = {   tag =  	BLR	 value =		60	   }  
relation = {   tag =  	BUL	value = 		20	   }  
relation = {   tag =  	GER	 value =		100	   }  
relation = {   tag =  	LAT	value = 		40	   }  
relation = {   tag =  	LIT	 value =		50	   }  
relation = {   tag =  	POL	value = 		100	   }  
relation = {   tag =  	UKR	 value =		-30	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	BOS	value = 		60	   }  
relation = {   tag =  	CRO	 value =		160	   }  
relation = {   tag =  	CZE	value = 		80	   }  
relation = {   tag =  	GLD	value = 		100	   }  
relation = {   tag =  	ALB	value = 		-40	   }  
relation = {   tag =  	DEN	 value =		30	   }  
relation = {   tag =  	FIN	value = 		60	   }  
relation = {   tag =  	GRE	value = 		-20	   }  
relation = {   tag =  	HOL	 value =		20	   }  
relation = {   tag =  	ITA	value = 		20	   }  
relation = {   tag =  	ROM	value = 		-140	   }  
relation = {   tag =  	SER	value = 		-100	   }  
relation = {   tag =  	SPA	value = 		50	   }  
relation = {   tag =  	ENG	value = 		-120	   }  
relation = {   tag =  	FRA	value = 		-150	   }  
relation = {   tag =  	RSI	 value =		-100	   }  
relation = {   tag =  	AST	value = 		-40	   }  
relation = {   tag =  	CAN	value = 		-40	   }  
relation = {   tag =  	VIC	value = 		30	   }  
relation = {   tag =  	ARM	 value =		80	   }  
relation = {   tag =  	AZB	value = 		40	   }  
relation = {   tag =  	GEO	value = 		-50	   }  
relation = {   tag =  	KAZ	 value =		40	   }  
relation = {   tag =  	KYG	value = 		-60	   }  
relation = {   tag =  	RUS	 value =		60	   }  
relation = {   tag =  	TRA	value = 		20	   }  
relation = {   tag =  	OTT	 value =		80	   }  
relation = {   tag =  	CON	value = 		80	   }  
relation = { tag =	USA	value = 		-80	 }
relation = {   tag =  	JAP	value = 		-50	   }  
}


	
	techapps = {

# Group C 1936 techs
#######################
#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4600 4610 4620 4630 4120 #Interwar Bomber 
7290 7300 7310 7320 #CAS

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 2930 #Artillery up to 1930
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
7600 7610
2620 2010 2630 2640 2646 #1928 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1931 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 1980 #Up to IW Supply 1930
1830 1840 1850 #Engineers

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5470 #Atomic Research
5600 5610 5620 5630 #Medicine

#Land Doctrines
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 # Great War Land Doctrines (central powers)
14000 14010 14020 #Great War Hospital System 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval
3010 3020 3030 3040 #DD
3110 3120 3130 3140 #CL
3210 3220 3230 3240 3250 #CA
3410 3420 3430 3440 3450 3456 #BBs
3310 #Battlecruiser
3610 3620 3630 #SS
3810 3820 #Troopships 1926
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 81340 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics


	}

#########  OOB (...)
landunit = {
id = { type = 17351  id = 1 }
name = "I. Magyar Hadsereg"
location = 284

 division = {
 id = { type = 17351  id = 2 }
 name = "2. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 8
 extra = anti_tank
 brigade_model = 1
 }

 division = {
 id = { type = 17351  id = 3 }
 name = "6. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 7
 extra    = artillery
 brigade_model = 6
 }

 division = {
 id = { type = 17351  id = 4 }
 name = "7. honvéd gyalogos hadosztály"
 strength = 100
 model = 7
 type = infantry
 }
 }

landunit = {
id = { type = 17351  id = 5 }
name = "II. Magyar Hadsereg"
location = 208

 division = {
 id = { type = 17351  id = 6 }
 name = "3. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 8
 }

 division = {
 id = { type = 17351  id = 7 }
 name = "4. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 7
 extra    = artillery
 brigade_model = 6
 }

 division = {
 id = { type = 17351  id = 8 }
 name = "8. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 7
 }
 }

landunit = {
id = { type = 17351  id = 9 }
name = "III. Magyar Hadsereg"
location = 287

 division = {
 id = { type = 17351  id = 10 }
 name = "1. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry 
 model = 7
               }

 division = {
 id = { type = 17351  id = 11 }
 name = "5. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
 model = 7
 }
}

landunit = {
id = { type = 17351  id = 12 }
name = "IV. Magyar Hadsereg"
location = 279
 division = {
 id = { type = 17351  id = 13 }
 name = "9. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
model = 7
               }
}

landunit = {
id = { type = 17351  id = 16 }
name = "1. 'Dessewffy' Huszár hadosztály"
location = 279
 division = {
 id = { type = 17351  id = 17 }
 name = "1. 'Dessewffy' Huszár hadosztály"
 strength = 80
 type = cavalry 
 model = 8 
               }
}

airunit = {
 id = { type = 17351  id = 14 }
 name = "I. Légi Hadsereg"
 location = 284
 base = 284

 division = {
 id = { type = 17351  id = 15 }
 name = "I.Vadászosztály"
 type = interceptor
 model = 7
 strength = 35
 }
 }
landunit = {
id = { type = 17351  id = 18 }
name = "V. Magyar Hadsereg"
location = 293
 division = {
 id = { type = 17351  id = 19 }
 name = "10. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
model = 7
               }
}

landunit = {
id = { type = 17351  id = 20 }
name = "VI. Magyar Hadsereg"
location = 291
 division = {
 id = { type = 17351  id = 21 }
 name = "11. honvéd gyalogos hadosztály"
 strength = 100
 type = infantry
model = 7
               }
}

landunit = {
id = { type = 17351  id = 22 }
name = "Budapest katonai helyorség"
location = 284
 division = {
 id = { type = 17351  id = 23 }
 name = "Budapest katonai rendorség"
 strength = 50
 type = garrison
 locked = yes
 model = 3
               }
}

}  