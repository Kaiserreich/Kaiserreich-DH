


country = {
    tag = U02

	puppet = GER
	control = GER

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 4
        freedom = 4
        professional_army = 9
        defense_lobby = 2
        interventionism = 2
    }


  headofstate            = { type = 9 id = 8955000 }
  headofgovernment       = { type = 9 id = 8955001 }
  foreignminister	 = { type = 9 id = 8955002 }
  armamentminister	 = { type = 9 id = 8955003 }
  ministerofsecurity     = { type = 9 id = 8955004 }
  ministerofintelligence = { type = 9 id = 8955005 }
  chiefofstaff           = { type = 9 id = 8955006 }
  chiefofarmy            = { type = 9 id = 8955007 }
  chiefofnavy            = { type = 9 id = 8955008 }
  chiefofair	         = { type = 9 id = 8955009 }

#### Resource Reserves

	capital = 382

	manpower = 3

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20



    ownedprovinces =      { 380 382 }
    controlledprovinces = { 380 382 }
    nationalprovinces =   { 380 382 }

diplomacy = {
relation = {   tag =  	BLR	 value =		80	   }  
relation = {   tag =  	BUL	value = 		80	   }  
relation = {   tag =  	GER	 value =		200	   }  
relation = {   tag =  	LAT	value = 		100	   }  
relation = {   tag =  	LIT	 value =		100	   }  
relation = {   tag =  	POL	value = 		60	   }  
relation = {   tag =  	UKR	 value =		80	   }  
relation = {   tag =  	AUS	value = 		80	   }  
relation = {   tag =  	BOS	value = 		50	   }  
relation = {   tag =  	CRO	 value =		30	   }  
relation = {   tag =  	CZE	value = 		40	   }  
relation = {   tag =  	GLD	value = 		40	   }  
relation = {   tag =  	HUN	 value =		50	   }  
relation = {   tag =  	ALB	value = 		20	   }  
relation = {   tag =  	DEN	 value =		40	   }  
relation = {   tag =  	HOL	 value =		-40	   }  
relation = {   tag =  	IRE	value = 		20	   }  
relation = {   tag =  	ITA	value = 		20	   }  
relation = {   tag =  	NOR	 value =		40	   }  
relation = {   tag =  	ROM	value = 		-30	   }  
relation = {   tag =  	SPA	value = 		40	   }  
relation = {   tag =  	ENG	value = 		-80	   }  
relation = {   tag =  	FRA	value = 		-120	   }  
relation = {   tag =  	RSI	 value =		-50	   }  
relation = {   tag =  	CAN	value = 		60	   }  
relation = {   tag =  	VIC	value = 		40	   }  
relation = {   tag =  	RUS	 value =		10	   }  
relation = {   tag =  	OTT	 value =		40	   }  
relation = {   tag =  	CON	value = 		120	   } 
}


	
	techapps = {

# Group C 1936 techs
#######################

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber
4290 #1926 Air Transport 

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 2640 #1924 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1160  1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division 
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
1830 1840 1850 1860 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture
5800 5080 #Improved Construction Engineering 
5600 5610 #Medicine
5190 # Basic Oil Refining

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 # Superior Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 

#########  OOB (...)

landunit = {
        id = { type = 25900 id = 1 }
 location = 382
 name = "Crete Stratós"

 Division = {
         id = { type = 25900 id = 9 }
 name = "Cretan Garrison"
 type = infantry
 model = 7
 strength = 10
 }
 }
}