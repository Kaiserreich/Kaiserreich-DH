


country = {
    tag = BEL
	ai = "kaiserreich\Belgium.ai"

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


	headofstate = { type = 9 id = 15157  }
	headofgovernment = { type = 9 id = 15159 }
 	foreignminister = { type = 9 id = 15046 }
 	armamentminister = { type = 9 id = 15139  }
 	ministerofsecurity = { type = 9 id = 15150  }
 	ministerofintelligence = { type = 9 id = 15095  }
 	chiefofstaff = { type = 9 id = 15104 }
 	chiefofarmy = { type = 9 id = 15108  }
 	chiefofnavy = { type = 9 id = 15114 }        
 	chiefofair = { type = 9 id = 15115 }


#### Resource Reserves

	capital = 116

        SpyInfo  = {  country = "BEL" NumberOfSpies = 5  } 

	manpower = 20

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20



    ownedprovinces =      {
116 114 115 117 112 113
	 }
    controlledprovinces = {
116 114 115 117 112 113
	  }
    nationalprovinces =   {
116 114 115 117 112 113 108 111
	}

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
relation = { tag =	USA	value = 		-20	 }
relation = {   tag =  	JAP	value = 		-50	   }  
}


	
	techapps = {

# Group C 1936 techs
#######################
#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1396 #Motorised Inf
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1930 Cavalry Division 
1830 1840 1850 1860 #Engineers

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
7600 7610 2620 2010 2630 2640 #Tankette 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter  
4600 4610 4620 4630 4120 #Interwar Bomber 
7290 7300 7310 7320 #CAS

#Industrial
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5600 5610 5620 5630 #Medicine
5700 5710 5010 #Modern Agriculture 
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 

#Land Doctrines
14000 14010 14020 #Great War Hospital System 
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines
6010 6020 # Superior Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010



	}

#########  OOB (...)

landunit = {
	id = { type = 11500 id = 1 }
	location = 116
	name = "I. Armeekorps"

		division = {
		id = { type = 11500 id = 2 }
		name = "1. Infanterie-Division"
		type = infantry
		model = 8
		extra = artillery
		}
		}



	landunit = {
	id = { type = 11500 id = 3 }
	location = 112
	name = "II. Armeekorps"

		division = {
		id = { type = 11500 id = 4 }
		name = "2. Infanterie-Division"
		type = infantry
		model = 8
		}

		division = {
		id = { type = 11500 id = 5 }
		name = "3. Infanterie-Division"
		type = infantry
		model = 8
		}
		}


	landunit = {
	id = { type = 11500 id = 6 }
	location = 114
	name = "III. Armeekorps"

		division = {
		id = { type = 11500 id = 7 }
		name = "4. Infanterie-Division"
		type = infantry
		model = 8
		}
		}

	
	landunit = {
	id = { type = 11500 id = 16 }
	location = 116
	name = "IV. Armeekorps"

		division = {
		id = { type = 11500 id = 17 }
		name = "1. Leichte Jäger-Division"
		type = d_01
		model = 6
		extra = artillery
		}
		}

		




	navalunit = 
   {  id       = {  type = 11500 id = 23  } 
     location = 114 
     base     = 114 
     name     = "1ste Transportatie Smaldeel" 
     Division = 
     {  
	id   = {  type = 11500 id = 24  } 
       	name = "1ère Transporte Naval" 
       	type = transport 
	model = 1
     } 
     Division = 
     {  
	id   = {  type = 11500 id = 26  } 
       	name = "2de Smaldeel"
	type = transport  
       	model = 1
     } 
     division = { 
			id = { type = 11500 id = 27 } 
			name = "1ère Flottille de Contre-Torpilleur" 
			type = destroyer
                        model = 3 
			} 
    } 

transports = 20
escorts = 4

}  