


country = {
    tag = CRO
ai = "kaiserreich\Croatia.ai"
    flag_ext = _hun

	puppet = AUS
	

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 4
        freedom = 6
        free_market = 6
        professional_army = 7
        defense_lobby = 6
        interventionism = 8
    }

     

	headofstate = { type = 9 id = 30021 }
	headofgovernment = { type = 9 id = 30025 }
 	foreignminister = { type = 9 id = 30030 }
 	armamentminister = { type = 9 id = 30033  }
 	ministerofsecurity = { type = 9 id = 30037 }
 	ministerofintelligence = { type = 9 id = 30045  }
 	chiefofstaff = { type = 9 id = 30048 }
 	chiefofarmy = { type = 9 id = 30053}
 	chiefofnavy = { type = 9 id = 30061}        
 	chiefofair = { type = 9 id = 30066 }

#### Resource Reserves
capital = 352

free = { ic = 5 }

SpyInfo  = {  country = "CRO" NumberOfSpies = 2  } 

	manpower = 28

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10      transports = 20



    ownedprovinces =      {
337 344 345 352 347 350 351 343 357 353 358 355 354 356 335 332
	 }
    controlledprovinces = {
 337 344 345 352 347 350 351 343 357 353 358 355 354 356 335 332
	  }
    nationalprovinces =   {
337 344 345 352 347 350 351 343 357 353 358 355 354 356 335 332
	}

diplomacy = {
relation = {   tag =    BEL	value = 		30	   }  
relation = {   tag =  	BLR	 value =		60	   }  
relation = {   tag =  	BUL	value = 		40	   }  
relation = {   tag =  	GER	 value =		120	   }  
relation = {   tag =  	LAT	value = 		80	   }  
relation = {   tag =  	LIT	 value =		40	   }  
relation = {   tag =  	POL	value = 		20	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	HUN	 value =		160	   }  
relation = {   tag =  	ITA	value = 		50	   }  
relation = {   tag =  	SPA	value = 		60	   }  
relation = {   tag =  	ENG	value = 		-80	   }  
relation = {   tag =  	FRA	value = 		-60	   }  
relation = {   tag =  	RSI	 value =		-70	   }  
relation = {   tag =  	RUS	 value =		50	   }  
relation = {   tag =  	OTT	 value =		-50	   }  
relation = {   tag =  	JAP	value = 		-10	   } 
}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber

# Armor & Artillery Technology
2620 2010 2630 #tanks
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 2450 21180 #1920s static AA

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division


#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 #Early agric mechanization
5800 5080 #Construction engineerings
5190 #Basic Oil refining

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 #Into firepower focus
14000 #Hospitals

#Naval
3010 3020 3030 3040 #DD
3410 3420 3430 3440 3450  #BB

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories

	}

#########  OOB (...)

landunit = {
id = { type = 25000 id = 1 }
location = 352
name = "Landwehr"

 division = {
  id = { type = 25000 id = 7 }
  name = "1/6 Illyrien Landwehrbrigade"
  strength = 50
  max_strength = 50
  type = militia
  model = 4
            }

 division = {
  id = { type = 25000 id = 3 }
  name = "2/5 Illyrien Landwehrbrigade"
  strength = 50
  max_strength = 50
  type = militia
  model = 4
            }

 division = {
  id = { type = 25000 id = 4 }
  name = "3/4 Illyirien Landwehrbrigade"
  strength = 50
  max_strength = 50
  type = militia
  model = 4
            }

         }
    



}  