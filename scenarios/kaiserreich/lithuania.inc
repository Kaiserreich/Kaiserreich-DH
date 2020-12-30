


country = {
    tag = LIT 
    puppet = GER
	control = GER 

ai = "kaiserreich\Lithuania.ai"
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


	headofstate = { type = 9 id = 28001  }
	headofgovernment = { type = 9 id = 28050 }
 	foreignminister = { type = 9 id = 28148 }
	chiefofstaff = { type = 9 id = 28114 } #Jonas Cernius
	chiefofarmy = { type = 9 id = 28008 } #Stasys Rastikis
	chiefofnavy = { type = 9 id = 28009 } #Antanas Kaskelis
	chiefofair = { type = 9 id = 28010 } #Antanas Gustaitis



#### Resource Reserves

capital = 258

SpyInfo  = {  country = "LIT" NumberOfSpies = 2  } 

manpower = 28
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10




    ownedprovinces =      {
		259 260 262 263 252 255 258
	 }
    controlledprovinces = {
		259 260 262 263 252 255 258
	  }
    nationalprovinces =   {
		259 260 262 263 252 255 258
	}



diplomacy = {

relation = {   tag =    BEL	value = 		100	   }  
relation = {   tag =  	BLR	 value =		100	   }  
relation = {   tag =  	BUL	value = 		60	   }  
relation = {   tag =  	GER	 value =		180	   }  
relation = {   tag =  	LAT	value = 		120	   }  
relation = {   tag =  	POL	value = 		80	   }  
relation = {   tag =  	UKR	 value =		70	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	BOS	value = 		40	   }  
relation = {   tag =  	CRO	 value =		40	   }  
relation = {   tag =  	CZE	value = 		40	   }  
relation = {   tag =  	GLD	value = 		60	   }  
relation = {   tag =  	HUN	 value =		50	   }  
relation = {   tag =  	ALB	value = 		20	   }  
relation = {   tag =  	FIN	value = 		50	   }  
relation = {   tag =  	SPA	value = 		20	   }  
relation = {   tag =  	ENG	value = 		-60	   }  
relation = {   tag =  	FRA	value = 		-50	   }  
relation = {   tag =  	CAN	value = 		-20	   }  
relation = {   tag =  	VIC	value = 		-20	   }  
relation = {   tag =  	RUS	 value =		25	   }  
relation = {   tag =  	OTT	 value =		20	   }  
relation = {   tag =  	CON	value = 		60	   }  
relation = {   tag =  	JAP	value = 		-20	   }  



}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber
4290 #1926 Air Transport 

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car  
2290 2300 2310 2900 #Great War Heavy Field Artillery 
7600 7610 #SW Tank 
2800 2450 21180 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1924
1830 1840 1850 #Engineers

#Industrial
5600 5610 #Medicine
5810 #Scientific Management
5700 5710 5010 #Modern Agriculture 
5800 5080 #Improved Construction Engineering 

#Naval
3810 #Troopships

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

# Land Doctrine WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower


	}

dormant_ministers = { 28149 28150 28151 28152 28153 28154 28155 }

#########  OOB (...)

	landunit = {
        id = { type = 26500 id = 1 }
		location = 258
		name = "Batalionas Mindaugas"

		Division = {
	        id = { type = 26500 id = 2 }
		name = "I Pestijos Brigada"
		type = infantry
		strength  = 100
		model = 7
		}

		Division = {
	        id = { type = 26500 id = 3 }
		name = "II Pestijos Brigada"
		type = infantry
		model = 7
		extra = artillery
		strength  = 100
		}

		Division = {
	        id = { type = 26500 id = 4 }
		name = "III Pestijos Brigada"
		type = infantry
		model = 7
		strength  = 100
		}
		}

	airunit = {
        id = { type = 26500 id = 5 }
	location = 258
	base = 258
	name = "Lietuvos Karines Oro Pajegos"

		Division = {
	        id = { type = 26500 id = 6 }
		name = "I Naikintuvu Aviacijos Grupe"
		type = multi_role
		model = 3
		strength  = 45
		}
	}
	landunit = {
	id = { type = 18600 id = 15 }
	location = 260
	name = "Batalionas Vytautas"
			division = { id = { type = 18600 id = 16 } name = "IV Pestijos Brigada"	type = infantry model = 7	}
			division = { id = { type = 18600 id = 17 } name = "V Pestijos Brigada"	type = infantry model = 7 extra = engineer brigade_model = 2 }
	}

}  