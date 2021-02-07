country = {
    tag = RSI  

ai = "kaiserreich\Sicilies.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 9
        freedom = 4
        free_market = 2
        professional_army = 2
        defense_lobby = 6
        interventionism = 5
    }

#### cabinet    
	headofstate = { type = 9 id = 508001 } #Palmiro Togliatti
	headofgovernment = { type = 9 id = 508002 } #Antonio Gramsci
 	foreignminister = { type = 9 id = 508003  } #Pietro Nenni
 	armamentminister = { type = 9 id = 508004 }#Vittorio Vidali
 	ministerofsecurity = { type = 9 id = 508005 } #Ruggiero Greco
 	ministerofintelligence = { type = 9 id = 508006 } #Giuseppe di Vittorio
 	chiefofstaff = { type = 9 id = 508007 } #Camillo Berneri;
 	chiefofarmy = { type = 9 id = 508008 } #Umberto Marzocchi
 	chiefofnavy = { type = 9 id = 508009 } #Francesco Maugeri
 	chiefofair = { type = 9 id = 508010 } #Mario Ajmone Cat

#### Resource Reserves

        SpyInfo  = {  country = "RSI" NumberOfSpies = 3  } 
 
	capital = 421
	manpower = 150
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 50      transports = 50

	free = { ic = 5 } #temporary, remove with Italy rework

    ownedprovinces =      {
	418 415 420 423 421 427 424 426 422 428 425 431 432 433 430 417
	 }
    controlledprovinces = {
	418 415 420 423 421 427 424 426 422 428 425 431 432 433 430 417
	  }
    nationalprovinces =   {
	418 415 420 423 421 427 424 426 422 428 425 431 432 433 430 417
	}
    claimedprovinces = {
        87 91 94 435 434 396 399 398 407 395 393 408 410 411 413 419 414 412 416
        }

diplomacy = {
relation = {   tag =    	BEL	value = 		-50	   }  
relation = {   tag =  	BLR	 value =		-50	   }  
relation = {   tag =  	BUL	value = 		-40	   }  
relation = {   tag =  	GER	 value =		-80	   }  
relation = {   tag =  	LAT	value = 		-40	   }  
relation = {   tag =  	AUS	value = 		-150   }  
relation = {   tag =  	BOS	value = 		-60	   }  
relation = {   tag =  	CRO	 value =		-70	   }  
relation = {   tag =  	CZE	value = 		-20	   }  
relation = {   tag =  	HUN	 value =		-100   }  
relation = {   tag =  	ALB	value = 		50	   }  
relation = {   tag =  	ITA	value = 		-150   }  
relation = {   tag =  	POR	value = 		-40	   }  
relation = {   tag =  	ROM	value = 		-30	   }  
relation = {   tag =  	SER	value = 		40	   }  
relation = {   tag =  	SPA	value = 		-60	   }  
relation = {   tag =  	ENG	value = 		90	   }  
relation = {   tag =  	FRA	value = 		150	   }  
relation = {   tag =  	PRK	value = 		60	   }  
relation = {   tag =  	MEX	value = 		60	   }  
relation = {   tag =  	GEO	value = 		50	   }  
relation = {   tag =  	GUA	value = 		50	   }  
relation = {   tag =  	BRA	value = 		20	   }  
relation = {   tag =  	COL	value = 		10	   }  
relation = {   tag =  	BOL	value = 		10	   }  
relation = {   tag =  	VEN	value = 		10	   }  
relation = {   tag =  	ECU	value = 		10	   }  
relation = {   tag =  	AST	value = 		-40	   }  
relation = {   tag =  	CAN	value = 		-70	   }  
relation = {   tag =  	GUY	value = 		-50	   }  
relation = {   tag =  	NZL	 value =		-20	   }  
relation = {   tag =  	VIC	value = 		-120   }  
relation = {   tag =  	RUS	 value =		50	   }  
relation = {   tag =  	LBY	value = 		-50	   }  
relation = {   tag =  	OTT	 value =		-60	   }  
relation = {   tag =  	CON	value = 		-50	   }  
relation = {   tag =  	ETH	value = 		30	   }  
relation = {   tag =  	SAF	value = 		-40	   }  
relation = {   tag =   	USA	value = 		-30	   }
relation = {   tag =  	JAP	value = 		-20	   }  
}


	
	techapps = {
#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1930 Cavalry Division 
1830 1840 1850 1860 #Engineers

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank
2800 2450 #Early Static Anti-Air Artillery 
2810 #1918 AA Bde

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture 
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5600 5610 5620 5630 #Medicine
5190 #Basic Oil Refining 

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4740 4750 4760 4770 #SEAPLANES
4700 4710 #Naval Bomber
7290 7300 7310 #CAS

#Land Doctrines
14000 14010 #Improved Weltkrieg Hospital
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6010 6020 # Superior Firepower

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser 
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser
3310 3320 3330 3340 #Interwar Battlecruiser 
3410 3420 3430 3440 3450 3456 3460 #Early Battleship 
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships
3610 3620 3630 3640 3650 #Short Range Submarine

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080
82300 # Amphibious Warfare
82500 # Naval Logistics
8500 8510 8520 8550 8560 8570 # Naval Interdiction
8600 8610 # Trade Interdiction Submarine
8100 8110 8120 8150 8160 #Convoy Navigation
}

#########  OOB (...)

landunit = { 
        id = { type = 17360  id = 1 } 
        name = "1.Armata Popolare Italiana" 
        location = 418 
        prevprov = 418 
        home = 418 

        division = { 
            id = { type = 17360  id = 2 } 
            name = "1a Divisione 'Giuseppe Garibaldi'" 
            model = 6
            brigade_model = 5
            extra = artillery 
            type = infantry 

            } 
        division = { 
            id = { type = 17360  id = 3 } 
            name = "2a Divisione 'Trinacria'" 
            model = 6
            brigade_model = 5
            extra = artillery 
            type = infantry 

            } 
            }
landunit = { 
        id = { type = 17360  id = 4 } 
        name = "2.Armata Popolare Italiana" 
        location = 417 
        
        
        division = { 
            id = { type = 17360 id = 5 } 
            name = "3a Divisione 'Garofalo'" 
            model = 7
            brigade_model = 5
            extra = artillery  
            type = infantry 

            } 
        division = { 
            id = { type = 17360  id = 6 } 
            name = "4a Divisione 'Palermo'"  
            model = 6 
            brigade_model = 5
            type = infantry 
            extra = artillery 

            } 
          } 
landunit = { 
        id = { type = 17360  id = 7 } 
        name = "3.Armata Popolare Italiana" 
        location = 415 
        division = { 
            id = { type = 17360  id = 8 } 
            name = "1a Milizia Volontaria 'Internazionale'" 
            model = 3 
            type = militia 

            } 
        division = { 
            id = { type = 17360  id = 9 } 
            name = "2a Milizia Volontaria 'Fratelli Lavoratori'" 
            model = 3 
            type = militia 

        } 

}

navalunit = {
	name = "Flotta Napoletana"
	id = { type = 17360  id = 10 }
	location = 421
	base = 421

	division = { id = { type = 17360 id = 23 } name =  "Risorgimento" type = battleship  model = 4   }
	division = { id = { type = 17360 id = 24 } name =  "Resistenza" type = battleship  model = 4   }
	division = { id = { type = 17360 id = 11 } name =  "Giuseppe Mazzini" type = heavy_cruiser  model = 3  }
	division = { id = { type = 17360 id = 12 } name =  "Napoli" type = light_cruiser model = 2  }
	division = { id = { type = 17360 id = 13 } name =  "Quarto" type = light_cruiser model = 2  }
	division = { id = { type = 17360 id = 14 } name =  "Palmiro Togliatti" type = light_cruiser model = 4  }
	division = { id = { type = 17360 id = 15 } name =  "Amadeo Bordiga" type = light_cruiser model = 4  }
	division = { id = { type = 17360 id = 16 } name =  "Torpediniere Squadriglia Napoli" type = destroyer    model = 4  } 
	division = { id = { type = 17360 id = 17 } name =  "Torpediniere Squadriglia Taranto" type = destroyer    model = 4  } 
	division = { id = { type = 17360 id = 18 } name =  "Torpediniere Squadriglia Palermo" type = destroyer    model = 4  } 
	division = { id = { type = 17360 id = 19 } name =  "Torpediniere Squadriglia Messina" type = destroyer    model = 3  } 
	division = { id = { type = 17360 id = 20 } name =  "Torpediniere Squadriglia Bari" type = destroyer    model = 3  } 
	division = { id = { type = 17360 id = 21 } name =  "Sommergibili Squadriglia Napoli " type = submarine model = 1  }
	division = { id = { type = 17360 id = 22 } name =  "Sommergibili Squadriglia Palermo" type = submarine model = 1  }
        division = { id = { type = 17360 id = 25 } name =  "1o Squadrone Traporti" type = transport model = 1 }
	}

}