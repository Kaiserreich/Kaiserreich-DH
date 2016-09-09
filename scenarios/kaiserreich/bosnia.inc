


country = {
    tag = BOS  

ai = "kaiserreich\Bosnia.ai"
	puppet = AUS
        flag_ext = _aus


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 5
        free_market = 4
        professional_army = 5
        defense_lobby = 3
        interventionism = 3
    }

#### cabinet

	headofstate = { type = 9 id = 546038 }
	headofgovernment = { type = 9 id = 546013  }
 	foreignminister = { type = 9 id = 546015   }
 	armamentminister = { type = 9 id = 546018 }
 	ministerofsecurity = { type = 9 id = 546023 }
 	ministerofintelligence = { type = 9 id = 546027  }
 	chiefofstaff = { type = 9 id = 546030 }
 	chiefofarmy = { type = 9 id = 546008}
 	chiefofnavy = { type = 9 id = 546009 }        
 	chiefofair = { type = 9 id = 546036 }


#### Resource Reserves
	capital = 355

	manpower = 28

SpyInfo  = {  country = "BOS" NumberOfSpies = 2  } 

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10



    ownedprovinces =      {
357 353 358 355 354 356
	 }
    controlledprovinces = {
357 353 358 355 354 356
	  }
    nationalprovinces =   {
357 353 358 355 354 356
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		50	   }  
relation = {   tag =  	BLR	 value =		80	   }  
relation = {   tag =  	BUL	value = 		50	   }  
relation = {   tag =  	GER	 value =		80	   }  
relation = {   tag =  	LAT	value = 		60	   }  
relation = {   tag =  	LIT	 value =		40	   }  
relation = {   tag =  	POL	value = 		20	   }  
relation = {   tag =  	AUS	value = 		180	   }  
relation = {   tag =  	HUN	 value =		60	   }  
relation = {   tag =  	ITA	value = 		40	   }  
relation = {   tag =  	SPA	value = 		40	   }  
relation = {   tag =  	ENG	value = 		-80	   }  
relation = {   tag =  	FRA	value = 		-50	   }  
relation = {   tag =  	RSI	 value =		-60	   }  
relation = {   tag =  	VIC	value = 		-40	   }  
relation = {   tag =  	RUS	 value =		40	   }  
relation = {   tag =  	OTT	 value =		90	   }  
relation = {   tag =  	JAP	value = 		-20	   }  
}

dormant_ministers = { 546040 546043 }
	
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
id = { type = 25000 id = 5 }
location = 355
name = "Landwehr"

 division = {
  id = { type = 25000 id = 6 }
  name = "1. Bosnische Landwehrbrigade"
  strength = 50
  max_strength = 75
  model = 4
  type = militia
            }
         }

}  