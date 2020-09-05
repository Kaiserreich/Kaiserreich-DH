


country = {
    tag = BLR 
    
	puppet = GER
	control = GER
 
ai = "kaiserreich\Weissruthenien.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 6
        free_market = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }


#### cabinet
	headofstate = { type = 9 id = 517001 }
	headofgovernment = { type = 9 id = 517002 }
	foreignminister = { type = 9 id = 971294 } #Pyotr Makhrov
	armamentminister = { type = 9 id = 517025 } #Arkady Smolich
	ministerofsecurity = { type = 9 id = 517005 }
	ministerofintelligence = { type = 9 id = 971295 } #Pyotr Makhrov
	chiefofstaff = { type = 9 id =  517095 } #Pyotr Sharangovich
	chiefofarmy = { type = 9 id = 971267 } #Stanislav Bulak-Balakhovich

#### Resource Reserves
capital = 599 

SpyInfo  = {  country = "BLR" NumberOfSpies = 2  } 

manpower = 40
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

    ownedprovinces =      {
	257 256 251 253 247 248 595 598 597 596 599 592  594  591 
	 }

    controlledprovinces = { 257 256 251 253 247 248 595 598 597 596 599 592  594  591 
	  }

   	nationalprovinces =   { 257 256 251 253 247 248 595 598 597 596 599 592 590 594 601 600 591 593	
	}

	claimedprovinces = {
		564 573 589 575 586 587
	}

diplomacy = {
					
relation = {   tag =    	BEL	value = 		80	   }  

relation = {   tag =  	BUL	value = 		100	   }  
relation = {   tag =  	GER	 value =		200	   }  
relation = {   tag =  	LAT	value = 		120	   }  
relation = {   tag =  	LIT	 value =		100	   }  
relation = {   tag =  	POL	value = 		70	   }  
relation = {   tag =  	UKR	 value =		120	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	BOS	value = 		80	   }  
relation = {   tag =  	CRO	 value =		60	   }  
relation = {   tag =  	CZE	value = 		70	   }  
relation = {   tag =  	GLD	value = 		60	   }  
relation = {   tag =  	HUN	 value =		60	   }  
relation = {   tag =  	FIN	value = 		20	   }  
relation = {   tag =  	ROM	value = 		-40	   }  
relation = {   tag =  	SER	value = 		-50	   }  
relation = {   tag =  	SPA	value = 		30	   }  
relation = {   tag =  	ENG	value = 		-40	   }  
relation = {   tag =  	FRA	value = 		-60	   }  
relation = {   tag =  	RSI	 value =		-50	   }  
relation = {   tag =  	CAN	value = 		-30	   }  
relation = {   tag =  	VIC	value = 		-30	   }  
relation = {   tag =  	ARM	 value =		60	   }  
relation = {   tag =  	AZB	value = 		30	   }  
relation = {   tag =  	GEO	value = 		-50	   }  
relation = {   tag =  	KAZ	 value =		30	   }  
relation = {   tag =  	KYG	value = 		-40	   }  
relation = {   tag =  	RUS	 value =		40	   }  
relation = {   tag =  	TRA	value = 		-20	   }  
relation = {   tag =  	OTT	 value =		20	   }  
relation = {   tag =  	CON	value = 		40	   }  
relation = {   tag =  	JAP	value = 		-20	   }  
}

dormant_ministers = { 517060 517061 517062 517063 517064 517065 517066 517067 }
	
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
7290 7300 7310 7320 #1922 CAS 

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 2640 #1924 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1926 Inf Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
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

#########  OOB (...)
landunit =
  { id       = { type = 10848 id = 27 }
    name     = "Belarus armija"
    location = 599
    division =
    { id       = { type = 10848 id = 28 }
      name     = "1. Piachotnaja dyvizija"
      strength = 100
      type     = infantry
	  model = 8
      extra    = artillery
	  brigade_model = 5
    }
    division =
    { id       = { type = 10848 id = 247 }
      name     = "2. Piachotnaja dyvizija"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
    }
    division =
    { id       = { type = 10848 id = 248 }
      name     = "3. Piachotnaja dyvizija"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 29 }
      name     = "4. Piachotnaja dyvizija"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 30 }
      name     = "5. Piachotnaja dyvizija"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 251 }
      name     = "6. Piachotnaja dyvizija"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 254 }
      name     = "7. Piachotnaja dyvizija"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 256 }
      name     = "8. Piachotnaja dyvizija"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 10848 id = 257 }
      name     = "9. Piachotnaja dyvizija"
      strength = 80
      type     = infantry
	  model = 7
    }
  }


  airunit =
  { id       = { type = 10848 id = 252 }
    name     = "Belarus aviakorpusa"
    location = 599
    base     = 599
    division =
    { id       = { type = 10848 id = 253 }
      name     = "1. IAD"
      strength = 80
      type     = interceptor
      model    = 7
    }
    division =
    { id       = { type = 10848 id = 255 }
      name     = "2. IAD"
      strength = 40
      type     = multi_role
      model    = 4
    }
    
  }

}
