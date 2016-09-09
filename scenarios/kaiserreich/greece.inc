


country = {
    tag = GRE  
ai = "kaiserreich\Greece.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 5
        freedom = 4
        professional_army = 5
        defense_lobby = 5
        interventionism = 4
    }

headofstate = { type = 9 id = 18001 }
	headofgovernment = { type = 9 id = 18055 }

#### Resource Reserves

	manpower = 70
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

SpyInfo  = {  country = "GRE" NumberOfSpies = 2  } 

	capital = 377


    ownedprovinces =      {
		367 369 368 376 375 377 374 373 372
	 }
    controlledprovinces = {
		367 369 368 376 375 377 374 373 372
	  }
    nationalprovinces =   {
		365 366 367 369 368 376 375 377 374 373 372
	}

diplomacy = {
relation = {   tag =  	BUL	value = 		-80	   }  
relation = {   tag =  	GER	 value =		-40	   }  
relation = {   tag =  	AUS	value = 		-60	   }  
relation = {   tag =  	HUN	 value =		-20	   }  
relation = {   tag =  	ITA	value = 		40	   }  
relation = {   tag =  	SPA	value = 		-40	   }  
relation = {   tag =  	ENG	value = 		20	   }  
relation = {   tag =  	CAN	value = 		60	   }  
relation = {   tag =  	VIC	value = 		-10	   }  
relation = {   tag =  	RUS	 value =		50	   }  
relation = {   tag =  	OTT	 value =		-60	   }  
relation = { tag =	USA	value = 		40	 }
}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
7290 7300 7310 7320 #CAS

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1830 1840 1850 #Engineers
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 

#Industrial
5700 5710 5010 #Modern Agriculture  
5810 5820 5050 5830 #Manufactoring
5800 5080 #Improved Construction Engineering  
5310 54010 54020 5316 5326 #Computers & cryptografi
5600 5610 5620 5630 #Medicine

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 #Early Light Cruiser
3210 3220 3230 #Early Heavy Cruiser
3610 3620 #Short Range Submarine
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

#Naval Doctrines
8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 81300 81310

#Land Doctrines
14000 14010 #Improved Great War Hospital System
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 # Great War Land Doctrines 
6010

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

#########  OOB (...)
	landunit = {
 	id = { type = 15500 id = 1 }
 	location = 377
 	name = "1. Stratos Ellenas"

  		division = {
   		id = { type = 15500 id = 2 }
   		name = "2. Stratiotis Diairesi"
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
   		id = { type = 15500 id = 3 }
   		name = "3. Stratiotis Diairesi"
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
   		id = { type = 15500 id = 4 }
   		name = "4. Stratiotis Diairesi"
   		strength = 100
   		type = infantry
		model = 6
   		extra = artillery
                brigade_model = 5
             	}
          	}	

	landunit = {
 	id = { type = 15500 id = 5 }
 	location = 368
 	name = "2. Stratos Ellenas"

  		division = {
   		id = { type = 15500 id = 6 }
   		name = "1. Stratiotis Diairesi"
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
   		id = { type = 15500 id = 7 }
   		name = "9. Stratiotis Diairesi"
   		strength = 100
   		type = infantry
		model = 6
   		extra = anti_air
                brigade_model = 1
             	}
	        }



	landunit = {
 	id = { type = 15500 id = 13 }
 	location = 369
 	name = "4. Stratos Ellenas"

  		division = {
   		id = { type = 15500 id = 14 }
   		name = "7. Stratiotis Diairesi"
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
  	 	id = { type = 15500 id = 15 }
   		name = "14. Stratiotis Diairesi"
   		strength = 100
   		type = infantry
		model = 6
   		extra = artillery
		brigade_model = 5
             	}
	        }


	landunit = {
 	id = { type = 15500 id = 16 }
 	location = 367
 	name = "5. Stratos Ellenas"

  		division = {
   		id = { type = 15500 id = 17 }
   		name = "12. Stratiotis Diairesi"
   		strength = 100
   		type = infantry
		model = 6
             	}

  		division = {
   		id = { type = 15500 id = 18 }
   		name = "13. Stratiotis Diairesi"
   		strength = 100
   		type = infantry
		model = 6
             	}
	        }




navalunit = {
	id = { type = 15500 id = 23 }
	location = 377
	base = 377
	name = "Basilikos Stolos Ellenas"

		division = {
		id = { type = 15500 id = 30 }
		name = "BEN Georgios Averoff"
		type = light_cruiser
		model = 2
		}
		division = {
		id = { type = 15500 id = 31 }
		name = "BEN Helle"
		type = light_cruiser
		model = 2
		}
		division = {
		id = { type = 15500 id = 28 }
		name = "1. Torpilli Naftiko"
		strength = 100
		model = 3
		type = destroyer
		}
		division = {
		id = { type = 15500 id = 32 }
		name = "2. Torpilli Naftiko"
		strength = 100
		model = 3
		type = destroyer
		}
		division = {
		id = { type = 15500 id = 29 }
		name = "1. Ypobrychio Naftiko"
		strength = 100
		model = 2
		type = submarine
		}
		division = {
		id = { type = 15500 id = 33 }
		name = "2. Ypobrychio Naftiko"
		strength = 100
		model = 2
		type = submarine
		}
		division = {
		id = { type = 15500 id = 24 }
		name = "1. Metafero Naftiko"
		type = transport
                model = 1
		}
		division = {
		id = { type = 15500 id = 25 }
		name = "2. Metafero Naftiko"
		type = transport
                model = 1
		}
	}




transports = 40
escorts = 15


}  