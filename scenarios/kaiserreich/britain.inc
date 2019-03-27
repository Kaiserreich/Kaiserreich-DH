


country = {
    tag = ENG  
ai = "kaiserreich\England.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 9
        freedom = 7
        free_market = 2
        professional_army = 2
        defense_lobby = 7
        interventionism = 1
    }




headofstate = { type = 9 id = 1193 } 
headofgovernment = { type = 9 id = 1188 }
foreignminister = { type = 9 id = 1299 }  
armamentminister = { type = 9 id = 1004 }
ministerofsecurity = { type = 9 id = 1088  }  
ministerofintelligence = { type = 9 id = 1300 }
chiefofstaff = { type = 9 id = 1126 }
chiefofarmy = { type = 9 id = 1130 }
chiefofnavy = { type = 9 id = 1267 }        
chiefofair = { type = 9 id = 1183 }

#### Resource Reserves
	capital = 29
	manpower = 200

        SpyInfo  = {  country = "ENG" NumberOfSpies = 5  } 

	energy	=	1000   metal	= 1000		rare_materials =	1000	oil =	700	supplies =	1000
	money = 70    transports = 100
        free = { ic = 12 }

    ownedprovinces =      {
		23 20 27 26 29 25 28 19 22 21 24 16 17 18 15 14 13 10 11 12 7 8 6 5 4 9
	 }
    controlledprovinces = {
		23 20 27 26 29 25 28 19 22 21 24 16 17 18 15 14 13 10 11 12 7 8 6 5 4 9
	  }
    nationalprovinces =   {
		23 20 27 26 29 25 28 19 22 21 24 16 17 18 15 14 13 10 11 12 7 8 6 5 4 9
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		-80	   }  
relation = {   tag =  	BLR	 value =		-40	   }  
relation = {   tag =  	BUL	value = 		-80	   }  
relation = {   tag =  	GER	 value =		-120	   }  
relation = {   tag =  	LAT	value = 		-60	   }  
relation = {   tag =  	LIT	 value =		-60	   }  
relation = {   tag =  	POL	value = 		-30	   }  
relation = {   tag =  	UKR	 value =		-50	   }  
relation = {   tag =  	AUS	value = 		-100	   }  
relation = {   tag =  	BOS	value = 		-80	   }  
relation = {   tag =  	CRO	 value =		-80	   }  
relation = {   tag =  	CZE	value = 		-50	   }  
relation = {   tag =  	GLD	value = 		-20	   }  
relation = {   tag =  	HUN	 value =		-120	   }  
relation = {   tag =  	ALB	value = 		-30	   }  
relation = {   tag =  	DEN	 value =		-20	   }  
relation = {   tag =  	GRE	value = 		20	   }  
relation = {   tag =  	HOL	 value =		20	   }  
relation = {   tag =  	IRE	value = 		-40	   }  
relation = {   tag =  	ITA	value = 		-40	   }  
relation = {   tag =  	POR	value = 		-30	   }  
relation = {   tag =  	ROM	value = 		50	   }  
relation = {   tag =  	SER	value = 		40	   }  
relation = {   tag =  	SPA	value = 		-90	   }  
relation = {   tag =  	FRA	value = 		120	   }  
relation = {   tag =  	RSI	 value =		80	   }  
relation = {   tag =  	AST	value = 		-80	   }  
relation = {   tag =  	CAN	value = 		-160	   }  
relation = {   tag =  	GUY	value = 		-60	   }  
relation = {   tag =  	NZL	 value =		-100	   }  
relation = {   tag =  	VIC	value = 		-100	   }  
relation = {   tag =  	RUS	 value =		50	   }  
relation = {   tag =  	OTT	 value =		-40	   }  
relation = {   tag =  	CON	value = 		-50	   }  
relation = {   tag =  	SAF	value = 		-80	   }  
relation = {   tag =  	IND	value = 		-40	   }  
relation = {   tag =  	PAK	 value =		-70	   }  
relation = {  tag =   	USA	value = 		60	 }
relation = {   tag =  	JAP	value = 		-50	   } 
}

dormant_ministers = { 557558 557559 }
	
	techapps = {

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 #SEMI-MOTORIZED CAVALRY 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1560 #1922 NAVAL INFANTRY
1396 #Motorised Inf
1830 1840 1850 1860 #Engineers
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 

#Armour & Artillery
2860 2870 2880 2020 #Interwar Armoured Car 
2620 2010 2630 2640 2646 2650 #Armor 
2290 2300 2310 2900 2910 2920 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4600 4610 4620 4630 4120 4130 #Early Bomber 
4300 4310 4320 4330 4340 #Multirole fighter
4290 # Transports
4700 4710 #ww1 navalbomber
4900 4910 4920 #CAG 34
7290 7300 7310 7320 #CAS
4800 4810 4820 4220 #Basic Strategic Bomber
4740 4750 4760 #SEAPLANES

#Naval
3610 3620 3630 3640 3650 #Short Range Submarine 
3010 3020 3030 3040 3050 3060 #Improved Destroyer
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser 
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser 
3310 3320 3330 3340 #Interwar Battlecruiser 
3410 3420 3430 3440 3450 3456 3460 3470 #Early Battleship 
12100 12110 12120 12130 #Improved Light carrier 
3510 3520 3530 #Fleet Carrier 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 3820 #Troopships

#Industrial
5700 5710 5010 5020 #Agriculture
5810 5820 5050 5830 5060 5070 #Manufacturing
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining
5310 54010 54020 54030 #Computers
5316 5326 5327 #Cryptography
5410 5416 #Basic Decimetric Radar Warning Sites 
5470 #Faculty of Atomic Research 
5560 #Exp. Rocket
5600 5610 5620 5630 #Exp. Rocket
55000 #Mining 1935

#Secret Weapons
7600 7610 #Experimental ww1 Tanks
7550 #Rocket Test And Research Facility

#Land Doctrines
#Pre ww1 doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 #ww1 doctrines
6540 6910 #Interwar Doctrines
6560 6030 #Just to put CoB into grand Battleplan doctrine
14000 14010 14020 #Hospital systems

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 # Theories
82300 # Amphib
82500 # Logistic Support
8500 8510 8520 8550 8560 8600 8610 # Naval Interdiction
8900 8910 8920 8930 8940 8950 # Engagement Tactics
8100 8110 8120 8150 8160 8200 8210 # Naval Supremacy
81650 # Carrier Doctrine
81850 # Carrier - Scouting Focus Line
81700 # Carrier - Strike Line

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 9020 9030 27560 27570 27580 27590 27600 #ww1 Doctrines
27460 27470 9010 #Interwar Doctrines
9140 # Strategic Destruction

}

#########  OOB (12700)

landunit = {
  name = "The British Army"
  location = 19
  id = { type = 12700 id = 1 }

  division = {
  id = { type = 12700 id = 1706 }
  name = "British Army General Staff"
  type = hq
  model = 2
  strength = 100
  }

  division = {
  id = { type = 12700 id = 2 }
  name = "1st Infantry Division"
  type = infantry
  model = 8
  strength = 100
  extra = artillery
  brigade_model = 6
  }

  division = {
  id = { type = 12700 id = 3 }
  name = "2nd Infantry Division"
  type = infantry
  model = 8
  strength = 100
  extra = anti_tank
  brigade_model = 2 
  }

  division = {
  id = { type = 12700 id = 5 }
  name = "3rd Infantry Division"
  type = infantry
  model = 8
  strength = 100
  extra = anti_tank
  brigade_model = 2 
  }

  division = {
  id = { type = 12700 id = 7 }
  name = "4th Infantry Division"
  type = infantry
  model = 8
  strength = 100 
  extra = light_armor_brigade
  brigade_model = 2
  }
 
  division = {
  id = { type = 12700 id = 324 }
  name = "5th Infantry Division"
  type = infantry
  model = 8
  strength = 100 
  extra = light_armor_brigade
  brigade_model = 2
  }

  division = {
  id = { type = 12700 id = 325 }
  name = "6th Infantry Division"
  type = infantry
  model = 8
  strength = 100 
  extra = light_armor_brigade
  brigade_model = 2
  }
}


################
# Home Defense #
################


landunit = {
  name = "West Lowland Popular Militia"
  location = 11
  id = { type = 12700 id = 300 }

  division = {
  id = { type = 12700 id = 301 }
  name = "West Lowland Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "East Lowland Popular Militia"
  location = 12
  id = { type = 12700 id = 302 }

  division = {
  id = { type = 12700 id = 303 }
  name = "East Lowland Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Northumberland Popular Militia"
  location = 13
  id = { type = 12700 id = 304 }

  division = {
  id = { type = 12700 id = 305 }
  name = "Northumberland Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Cumbria Popular Militia"
  location = 15
  id = { type = 12700 id = 306 }

  division = {
  id = { type = 12700 id = 307 }
  name = "Cumbria Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Yorkshire Popular Militia"
  location = 16
  id = { type = 12700 id = 308 }

  division = {
  id = { type = 12700 id = 309 }
  name = "Yorkshire Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Lancashire Popular Militia"
  location = 17
  id = { type = 12700 id = 310 }

  division = {
  id = { type = 12700 id = 311 }
  name = "Lancashire Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "East Anglia Popular Militia"
  location = 25
  id = { type = 12700 id = 312 }

  division = {
  id = { type = 12700 id = 313 }
  name = "East Anglia Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Kent Popular Militia"
  location = 26
  id = { type = 12700 id = 314 }

  division = {
  id = { type = 12700 id = 315 }
  name = "Kent Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Hampshire Popular Militia"
  location = 27
  id = { type = 12700 id = 316 }

  division = {
  id = { type = 12700 id = 317 }
  name = "Hampshire Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Gloucestershire Popular Militia"
  location = 19
  id = { type = 12700 id = 318 }

  division = {
  id = { type = 12700 id = 319 }
  name = "Gloucestershire Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
}
landunit = {
  name = "Cornwall Popular Militia"
  location = 23
  id = { type = 12700 id = 320 }

  division = {
  id = { type = 12700 id = 321 }
  name = "Cornwall Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }

}

 landunit = {
 name = "Greater London Popular Militia"
 location = 29
 id = { type = 12700 id = 322 }

  division = {
  id = { type = 12700 id = 323 }
  name = "Greater London Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }
  }

 landunit = {
 name = "Glamorgan Popular Militia"
 location = 22
 id = { type = 12700 id = 326 }

  division = {
  id = { type = 12700 id = 327 }
  name = "Glamorgan Territorial"
  type = garrison
  model = 4
  strength = 100 
  max_strength = 100
  }

}

#######################
# Republican Airforce #
#######################

	airunit = {
	location = 17
	base = 17

        id = { type = 12700 id = 63 }
		name = "1st Tactical Wing"

		division = {
	        id = { type = 12700 id = 64 }
		name = "No.1 Tactical Group"
		type = tactical_bomber
		model = 4
		strength = 100
		}
		}

	airunit = {
	location = 25
	base = 25
        id = { type = 12700 id = 65 }
		name = "RAF Strategic Bomber Command"

		division = {
	        id = { type = 12700 id = 66 }
		name = "No.1 Strategic Group"
		type = strategic_bomber
		model = 3
		strength = 100
		}

		division = {
	        id = { type = 12700 id = 68 }
		name = "No.2 Strategic Group"
		type = strategic_bomber
		model = 3
		strength = 100
		}

		division = {
	        id = { type = 12700 id = 70 }
		name = "No.3 Strategic Group"
		type = strategic_bomber
		model = 3
		strength = 100
		}
		}

	airunit = {
	location = 27
	base = 27
        id = { type = 12700 id = 251 }
	name = "2nd Tactical Wing"

		division = {
	        id = { type = 12700 id = 71 }
		name = "No.2 Tactical Group"
		type = tactical_bomber
		model = 4
		strength = 100
		}
		}

	airunit = {
	location = 17
	base = 17
        id = { type = 12700 id = 72 }
		name = "1st Fighter Wing"

		division = {
	        id = { type = 12700 id = 73 }
		name = "No.1 Fighter Group"
		type = interceptor
		model = 6
		strength = 100
		}
		}

	airunit = {
	location = 21
	base = 21
        id = { type = 12700 id = 74 }
		name = "2nd Fighter Wing"

		division = 	{
	        id = { type = 12700 id = 75 }
		name = "No.2 Fighter Group"
		type = interceptor
		model = 6
		strength = 100
		}
		}

	airunit = {
	location = 27
	base = 27
        id = { type = 12700 id = 76 }
		name = "3rd Fighter Wing"

		division = {
	        id = { type = 12700 id = 77 }
		name = "No.3 Fighter Group"
		type = interceptor
		model = 6
		strength = 100
		}
		}


########## Fleets


navalunit = {
name = "North Sea Fleet"
id = { type = 12701  id = 1 }
location = 13
base = 13 
division = { id = { type = 12701 id = 2 } name = "RNS Tolpuddle" type = battleship model = 6 }
division = { id = { type = 12701 id = 3 } name = "RNS Leveller" type = battleship model = 6 }
division = { id = { type = 12701 id = 4 } name = "RNS Naseby" type = battleship model = 6 }
division = { id = { type = 12701 id = 5 } name = "RNS Peterloo" type = battleship model = 6 }
division = { id = { type = 12701 id = 6 } name = "RNS Digger" type = battleship model = 4 }
division = { id = { type = 12701 id = 7 } name = "RNS People's Charter" type = battleship model = 4 }
division = { id = { type = 12701 id = 8 } name = "RNS Land and Labour" type = carrier model = 2 extra = cag brigade_model = 2 }
division = { id = { type = 12701 id = 9 } name = "RNS Owen" type = battlecruiser model = 3 }
division = { id = { type = 12701 id = 10 } name = "RNS Odger" type = battlecruiser model = 3 }
division = { id = { type = 12701 id = 11 } name = "RNS Quaker" type = battlecruiser model = 3 }
division = { id = { type = 12701 id = 12 } name = "RNS Measureless" type = light_cruiser model = 3 }
division = { id = { type = 12701 id = 13 } name = "RNS Regardless" type = light_cruiser model = 3 }
division = { id = { type = 12701 id = 14 } name = "RNS Endurance " type = light_cruiser model = 3 }
division = { id = { type = 12701 id = 15 } name = "RNS Resurgance" type = light_cruiser model = 3 }
division = { id = { type = 12701 id = 16 } name = "1st Destroyer Flotilla" type = destroyer model = 4 } 
division = { id = { type = 12701 id = 17 } name = "2nd Destroyer Flotilla" type = destroyer model = 4 } 
division = { id = { type = 12701 id = 18 } name = "3rd Destroyer Flotilla" type = destroyer model = 4 } 
division = { id = { type = 12701 id = 19 } name = "4th Destroyer Flotilla" type = destroyer model = 4 } 
division = { id = { type = 12701 id = 20 } name = "5th Destroyer Flotilla" type = destroyer model = 4 } 
}

navalunit = {
name = "Channel Fleet"
id = { type = 12701  id = 21 }
location = 27
base = 27
division = { id = { type = 12701 id = 22 } name = "RNS Hyndeman" type = battleship model = 3 }
division = { id = { type = 12701 id = 23 } name = "RNS Gallacher" type = battleship model = 3 }
division = { id = { type = 12701 id = 24 } name = "RNS Godwin" type = battleship model = 3 }
division = { id = { type = 12701 id = 25 } name = "RNS Tyler" type = battleship model = 3 }
division = { id = { type = 12701 id = 78 } name = "RNS Agincourt" type = battleship model = 2 }
division = { id = { type = 12701 id = 79 } name = "RNS Superb" type = battleship model = 2 }
division = { id = { type = 12701 id = 80 } name = "RNS Neptune" type = battleship model = 2 }
division = { id = { type = 12701 id = 81 } name = "RNS Collingwood" type = battleship model = 2 }
division = { id = { type = 12701 id = 92 } name = "RNS Hercules" type = battleship model = 2 }
division = { id = { type = 12701 id = 93 } name = "RNS Republic" type = battleship model = 2 }
division = { id = { type = 12701 id = 85 } name = "RNS Vindex" type = escort_carrier model = 0 }
division = { id = { type = 12701 id = 26 } name = "RNS Edinburgh" type = heavy_cruiser model = 2 }
division = { id = { type = 12701 id = 27 } name = "RNS Revolution" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 28 } name = "RNS Conquest" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 29 } name = "RNS Comus" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 30 } name = "RNS Cambrian" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 31 } name = "RNS Chester" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 32 } name = "RNS Castor" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 33 } name = "RNS Colliery" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 86 } name = "RNS Birkenhead" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 87 } name = "RNS Calledon" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 34 } name = "6th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 35 } name = "7th Destroyer Flotilla" type = destroyer model = 3 } 
}

navalunit = {
name = "Atlantic Fleet"
id = { type = 12701  id = 36  }
location = 17
base = 17 
division = { id = { type = 12701 id = 37 } name = "RNS Rebecca" type = carrier model = 2 strength = 93 extra = cag brigade_model = 2 }
division = { id = { type = 12701 id = 38 } name = "RNS Lilburne" type = carrier model = 1 extra = cag brigade_model = 2 }
division = { id = { type = 12701 id = 39 } name = "RNS Ludd" type = carrier model = 1 extra = cag brigade_model = 2 }
division = { id = { type = 12701 id = 40 } name = "RNS Hardie" type = carrier model = 0 extra = cag brigade_model = 2 }
division = { id = { type = 12701 id = 41 } name = "RNS Spa Fields" type = battlecruiser model = 2 }
division = { id = { type = 12701 id = 42 } name = "RNS Thistlewood" type = battlecruiser model = 2 }
division = { id = { type = 12701 id = 82 } name = "RNS Tiger" type = battlecruiser model = 1 }
division = { id = { type = 12701 id = 83 } name = "RNS Indomitable" type = battlecruiser model = 0 }
division = { id = { type = 12701 id = 84 } name = "RNS Inflexible" type = battlecruiser model = 0 }
division = { id = { type = 12701 id = 43 } name = "RNS Liberty" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 44 } name = "RNS Peerless" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 45 } name = "RNS Dauntless" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 46 } name = "RNS Limitless" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 47 } name = "RNS Selfless" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 48 } name = "RNS Boundless" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 88 } name = "RNS Caradoc" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 89 } name = "RNS Cardiff" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 90 } name = "RNS Concord" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 91 } name = "RNS Conquest" type = light_cruiser model = 2 }
division = { id = { type = 12701 id = 49 } name = "8th Destroyer Flotilla" type = destroyer model = 3 } 
}

navalunit = {
name = "Martime Transport Fleet"
id = { type = 12701  id = 50 }
location = 13
base = 13
division = { id = { type = 12701 id = 51 } name = "1st Transport Flotilla" type = transport model = 1 }
division = { id = { type = 12701 id = 52 } name = "2nd Transport Flotilla" type = transport model = 1 }
division = { id = { type = 12701 id = 53 } name = "3rd Transport Flotilla" type = transport model = 1 }
division = { id = { type = 12701 id = 54 } name = "4th Transport Flotilla" type = transport model = 1 }
division = { id = { type = 12701 id = 55 } name = "5th Transport Flotilla" type = transport model = 1 }
division = { id = { type = 12701 id = 56 } name = "9th Destroyer Flotilla" type = destroyer model = 2 } 
division = { id = { type = 12701 id = 57 } name = "10th Destroyer Flotilla" type = destroyer model = 2 } 
division = { id = { type = 12701 id = 58 } name = "11th Destroyer Flotilla" type = destroyer model = 2 } 
division = { id = { type = 12701 id = 59 } name = "12th Destroyer Flotilla" type = destroyer model = 2 } 
}

navalunit = {
name = "Home Waters Defence Force"
id = { type = 12701  id = 60 }
location = 13
base = 13
division = { id = { type = 12701 id = 61 } name = "13th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 62 } name = "14th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 63 } name = "15th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 64 } name = "16th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 65 } name = "17th Destroyer Flotilla" type = destroyer model = 3 } 
division = { id = { type = 12701 id = 66 } name = "18th Destroyer Flotilla" type = destroyer model = 3 } 
}

navalunit = {
name = "Submarine Fleet"
id = { type = 12701  id = 68 }
location = 23 
base = 23  
division = { id = { type = 12701 id = 69 } name = "1st Submarine Flotilla" type = submarine model = 3 }
division = { id = { type = 12701 id = 70 } name = "2nd Submarine Flotilla" type = submarine model = 2 }
division = { id = { type = 12701 id = 71 } name = "3rd Submarine Flotilla" type = submarine model = 2 }
division = { id = { type = 12701 id = 72 } name = "4th Submarine Flotilla" type = submarine model = 2 }
division = { id = { type = 12701 id = 73 } name = "5th Submarine Flotilla" type = submarine model = 2 }
division = { id = { type = 12701 id = 74 } name = "6th Submarine Flotilla" type = submarine model = 2 }
division = { id = { type = 12701 id = 75 } name = "7th Submarine Flotilla" type = submarine model = 1 }
division = { id = { type = 12701 id = 76 } name = "8th Submarine Flotilla" type = submarine model = 1 }
division = { id = { type = 12701 id = 77 } name = "9th Submarine Flotilla" type = submarine model = 1 }
}

}  