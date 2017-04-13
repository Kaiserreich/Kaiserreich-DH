


country = {
    tag = LAT

ai = "kaiserreich\VBH.ai"


	puppet = GER
	control = GER


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 1
        freedom = 5
        free_market = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }
#### cabinet
headofstate = { type = 9 id = 27001 }
headofgovernment = { type = 9 id = 27002 }
#### Resource Reserves

SpyInfo  = {  country = "LAT" NumberOfSpies = 3  } 

	capital = 264

	manpower = 20

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 50   transports = 20


    ownedprovinces =      {
268 269 264 267 265 273 272 271 270 274 275
	 }
    controlledprovinces = {
268 269 264 267 265 273 272 271 270 274 275
	  }
    nationalprovinces =   {
268 269 264 267 265 273 272 271 270 274 275
	}

diplomacy = {
relation = {   tag =    BEL	value = 		100	   }  
relation = {   tag =  	BLR	 value =		120	   }  
relation = {   tag =  	BUL	value = 		60	   }  
relation = {   tag =  	GER	 value =		160	   }  
relation = {   tag =  	LIT	 value =		120	   }  
relation = {   tag =  	POL	value = 		80	   }  
relation = {   tag =  	UKR	 value =		100	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	BOS	value = 		60	   }  
relation = {   tag =  	CRO	 value =		80	   }  
relation = {   tag =  	CZE	value = 		60	   }  
relation = {   tag =  	GLD	value = 		50	   }  
relation = {   tag =  	HUN	 value =		40	   }  
relation = {   tag =  	ALB	value = 		50	   }  
relation = {   tag =  	FIN	value = 		120	   }  
relation = {   tag =  	NOR	 value =		50	   }  
relation = {   tag =  	SPA	value = 		20	   }  
relation = {   tag =  	ENG	value = 		-60	   }  
relation = {   tag =  	FRA	value = 		-50	   }  
relation = {   tag =  	RSI	 value =		-40	   }  
relation = {   tag =  	CAN	value = 		-30	   }  
relation = {   tag =  	VIC	value = 		-40	   }  
relation = {   tag =  	RUS	 value =		20	   }  
relation = {   tag =  	TRA	value = 		-40	   }  
relation = {   tag =  	OTT	 value =		20	   }  
relation = {   tag =  	CON	value = 		40	   }  
relation = {   tag =  	JAP	value = 		-40	   }  
}


	
	techapps = {

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
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1931 Inf Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #Cavalry up to 1932 cavalry
1160  1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division 
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
1830 1840 1850 1860 #Engineers

#Naval
3010 3020 3030 3040 3050 #Up to 1923 DD
3110 3120 3130 3140 #Up to IW CL
3210 3220 3230 3240 #Up to IW CA
3410 3420 3430 3440 3450 3456 #Up to IW BB
3610 3620 3630 3640 #Up to IW SS
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes

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

#Naval Doctrines
8010 8020 8040 8050

	}

dormant_ministers = { 27078 27079 27080 27081 27082 27083 27084 27085 }

#########  OOB (...)


landunit = {
       id = { type = 24500 id = 1 }
location = 264 # Riga
name = "Oberkommando der Balt. Landeswehr"

 Division = {
        id = { type = 24500 id = 2 }
 name = "Oberkommando des Heeres"
 type = hq
 model = 2
 strength = 100
 }
 
 Division = {
 id = { type = 24500 id = 3 }
 name = "Eiserne Division"
 extra = artillery
 brigade_model = 2
 type = cavalry
 model = 9
 experience = 30 # Because it's the Iron Division.
 strength = 100
 }
}

landunit = {
id = { type = 24500 id = 4}
location = 274 # Narva
name = "Nordkorps der Balt. Landeswehr"

 Division = {
        id = { type = 24500 id = 5 }
 name = "Sicherungs-Brigade 'Estland'"
 type = garrison
 model = 4
 strength = 50
 }

 Division = {
        id = { type = 24500 id = 6 }
 name = "1. Deutsch-Balt. Division"
 type = infantry
 model = 8
 strength = 100
 }
}

landunit = {
id = { type = 24500 id = 7}
location = 273 # Voru
name = "Ostkorps der Balt. Landeswehr"

 Division = {
        id = { type = 24500 id = 8 }
 name = "Sicherungs-Brigade 'Livland'"
 type = garrison
 model = 4
 strength = 50
 }

 Division = {
        id = { type = 24500 id = 9 }
 name = "2. Deutsch-Balt. Division"
 type = infantry
 model = 8
 strength = 100
 }
}

#########  Ostland/Kurland:
#######  New Order of Battle (conglomerated from former Baltic states and a few minor additions)


navalunit = {
	name = "Die herzogliche Marine von Ostland"
	id = { type = 24500 id = 10 }
	location = 264 
	base = 264
division = { id = { type = 24500 id = 11 } name =  "VBHS Feuchtwangen" type = heavy_cruiser  model = 2 }
division = { id = { type = 24500 id = 12 } name =  "Hermann von Salza Zerstörerflotte" type = destroyer   model = 3   } 
division = { id = { type = 24500 id = 13 } name =  "Küstenschwadron" type = destroyer   model = 3   } 
division = { id = { type = 24500 id = 14 } name =  "Unterseebootsschwadron" type = submarine  model = 1 }
division = { id = { type = 24500 id = 15 } name =  "Transportflotte" type = transport model = 1 }

}



##### Luftwaffle der Pancakes #####

airunit = {
name = "Die Herzogliche Luftwaffe"
id = { type = 24500 id = 16 }
base = 270  # Tallin
location = 270
division = { id = { type = 24500 id = 17 } name = "Jagdgeschwader 1" strength = 100 type = multi_role model = 3 }
}

}  
