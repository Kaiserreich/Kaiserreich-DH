


country = {
    tag = AUS   
ai = "kaiserreich\austria.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 6
        freedom = 6
        professional_army = 5
        defense_lobby = 6
        interventionism = 5
    }


headofstate = { type = 9 id = 23041 }

	
	headofgovernment = { type = 9 id = 23049 }
 	foreignminister = { type = 9 id = 23143  }
 	armamentminister = { type = 9 id = 23068 }
 	ministerofsecurity = { type = 9 id = 23082 }
 	ministerofintelligence = { type = 9 id = 23145 }
 	chiefofstaff = { type = 9 id = 23146 }
 	chiefofarmy = { type = 9 id = 23150  }
 	chiefofnavy = { type = 9 id = 23124  }        
 	chiefofair = { type = 9 id = 23149 }

#### Resource Reserves

capital = 195
 
        SpyInfo  = {  country = "AUS" NumberOfSpies = 4  } 

	# Resource Reserves
	energy	=	1000   
        metal	= 1000		
        rare_materials =	500	
        oil =	500	
        supplies =	500
	money = 20      
        transports = 50
	manpower = 100




    ownedprovinces =      {
401 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194 371
	 }
    controlledprovinces = {
401 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194 371
	  }
    nationalprovinces =   {
401 403 404 406 349 346 402 189 192 191 190 187 195 193 186 194
	}
claimedprovinces = {
#commented claims as they are causing problems with the Ausgleich chain.
#208 210 212 211 209 214 213 215 188 279 276 277 278 284 280 282 281 283 341 336 285 295 289 286 296 288 
#287 291 292 293 205 199 204 200 207 198 197 196 201 206 203 202 235 237 236 239 242 241 238 300 240  
#301 337 344 345 352 347 350 351 343 332 357 353 358 355 354 356 335
        }
diplomacy = {
relation = {   tag =    	BEL	value = 		80	   }  
relation = {   tag =  	BLR	 value =		120	   }  
relation = {   tag =  	BUL	value = 		100	   }  
relation = {   tag =  	GER	 value =		160	   }  
relation = {   tag =  	LAT	value = 		120	   }  
relation = {   tag =  	LIT	 value =		120	   }  
relation = {   tag =  	POL	value = 		60	   }  
relation = {   tag =  	UKR	 value =		70	   }  
relation = {   tag =  	BOS	value = 		180	   }  
relation = {   tag =  	CRO	 value =		120	access = yes    }  
relation = {   tag =  	CZE	value = 		150	   }  
relation = {   tag =  	GLD	value = 		170	   }  
relation = {   tag =  	HUN	 value =		120	   }  
relation = {   tag =  	ALB	value = 		40	   }  
relation = {   tag =  	DEN	 value =		50	   }  
relation = {   tag =  	FIN	value = 		40	   }  
relation = {   tag =  	GRE	value = 		-60	   }  
relation = {   tag =  	HOL	 value =		50	   }  
relation = {   tag =  	IRE	value = 		20	   }  
relation = {   tag =  	ITA	value = 		100	guaranteed = { day = 29 month = december year = 1935 } }  
relation = {   tag =  	NOR	 value =		40	   }  
relation = {   tag =  	POR	value = 		80	   }  
relation = {   tag =  	ROM	value = 		-70	   }  
relation = {   tag =  	SCH	 value =		20 	guaranteed = { day = 16 month = may year = 1935 } }  
relation = {   tag =  	SER	value = 		-120	   }  
relation = {   tag =  	SPA	value = 		120	   }  
relation = {   tag =  	SWE	 value =		30	   }  
relation = {   tag =  	ENG	value = 		-100	   }  
relation = {   tag =  	FRA	value = 		-120	   }  
relation = {   tag =  	RSI	 value =		-150	   }  
relation = {   tag =  	AST	value = 		-40	   }  
relation = {   tag =  	CAN	value = 		-10	   }  
relation = {   tag =  	VIC	value = 		-90	   }  
relation = {   tag =  	ARM	 value =		-40	   }  
relation = {   tag =  	AZB	value = 		20	   }  
relation = {   tag =  	GEO	value = 		-50	   }  
relation = {   tag =  	RUS	 value =		20	   }  
relation = {   tag =  	TRA	value = 		20	   }  
relation = {   tag =  	OMN	value = 		60	   }  
relation = {   tag =  	OTT	 value =		40	   }  
relation = {   tag =  	CON	value = 		120	   }  
relation = { tag =	USA	value = 		-50	 }
relation = {   tag =  	CHI	value = 		50	   }  
relation = {   tag =  	JAP	value = 		-50	   }  
}


	
	techapps = {
# Austria Kaiserreich 1936 Techs
#######################

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #up to 1930 interceptor
4300 4310 4320 4330 4340 #Up to 1930 Multi Role Fighter
4600 4610 4620 4630 4120 4130 #Up to 1930 Tac Bomber
4740 4750 4760 4770 4780 #Seaplanes up to 1932
4700 4710 #1924 Naval Bomber
4290 #1926 Air Transport
4800 4810 4820 #Strat Bombers
7290 7300 7310 7320 #CAS

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 2930 #Artillery up to 1930
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 2640 2646 #1928 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1931 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 1980 #Up to IW Supply 1930
1830 1840 1850 #Engineers

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineerings
5190 #Basic Oil refining
5810 5820 5050 5830 5060 5070 #Manufacturing up to impr Mac tools
5310 54010 54020 54030 #Computers
5600 5610 5620 5630 #Medicines
5470 #Atomic Research
5316 5326 5327 #Cryptography

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into superior firepower
14000 14010 14020 #Great War Hospital System 


#Naval
3010 3020 3030 3040 3050 #DD
3110 3120 3130 3140 3150 #CL
3210 3220 3230 3240 3250 #CA
3410 3420 3430 3440 3450 3456 3460 #BBs
3310 3320 #Battlecruiser
3610 3620 3630 3640 #SS
3810 3820 #Troopships 1926
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 81340 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics


	}

#########  OOB (...)


landunit = {
id = { type = 17352       id = 1 }
location = 195
name = "Oberkommando der Kaiserlichen Armee"

 division = {
 id = { type = 17352       id = 2 }
 name = "Oberkommando der Kaiserlichen Armee"
 type = hq
 model = 2
 strength = 100
 }
}

landunit = {
id = { type = 17352       id = 3 }
location = 189
name = "Armeekreis Tirol"


 division = {
        id = { type = 17352       id = 4 }
 name = "1. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra = anti_tank
 brigade_model = 2
 }

 division = {
        id = { type = 17352       id = 5 }
 name = "3. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra    = artillery
 brigade_model = 5
 }

 division = {
        id = { type = 17352       id = 6 }
 name = "15. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }
}


landunit = {
id = { type = 17352       id = 7 }
location = 404
name = "Armeekreis Italien"


 division = {
        id = { type = 17352       id = 8 }
 name = "2. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }

 division = {
        id = { type = 17352       id = 9 }
 name = "11. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra    = artillery
 brigade_model = 6
 }

 division = {
        id = { type = 17352       id = 10 }
 name = "14. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }
}

landunit = {
id = { type = 17352       id = 11 }
location = 192
name = "Armeekreis Oberösterreich"


 division = {
        id = { type = 17352       id = 12 }
 name = "4. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }

 division = {
        id = { type = 17352       id = 13 }
 name = "7. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra    = artillery
 brigade_model = 5
 }

 division = {
        id = { type = 17352       id = 14 }
 name = "13. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }
}

landunit = {
id = { type = 17352       id = 15 }
location = 195
name = "Armeekreis Niederösterreich-Wien"


 division = {
        id = { type = 17352       id = 16 }
 name = "5. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }

 division = {
        id = { type = 17352       id = 17 }
 name = "8. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra    = artillery
 brigade_model = 5
 }

 division = {
        id = { type = 17352       id = 18 }
 name = "12. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }
}

landunit = {
id = { type = 17352       id = 19 }
location = 349
name = "Armeekreis Kärnten"


 division = {
        id = { type = 17352       id = 20 }
 name = "6. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }

 division = {
        id = { type = 17352       id = 21 }
 name = "9. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 extra    = artillery
 brigade_model = 5
 }

 division = {
        id = { type = 17352       id = 22 }
 name = "10. Infantriedivision"
 type = infantry
 strength  = 100
 model = 8
 }
}


landunit = {
id = { type = 17352       id = 23 }
location = 401
name = "Tiroler Schützen"

 division = {
        id = { type = 17352       id = 24 }
 name = "1. Alpenjägerdivision"
 type = bergsjaeger
 strength  = 80
 model = 8
 extra    = artillery
 brigade_model = 5
 }

 division = {
        id = { type = 17352       id = 25 }
 name = "2. Alpenjägerdivision"
 type = bergsjaeger
 strength  = 80             
 model = 8
 extra    = artillery
 brigade_model = 5
 }
}


landunit = {
id = { type = 17352       id = 52 }
location = 195
name = "1.Kavalleriedivision"

 division = {
        id = { type = 17352       id = 26 }
 name = "1.Kavalleriedivision"
 type = cavalry
 strength  = 35           
 model = 8
 extra = armored_car
 brigade_model = 2
        }
 }

landunit = {
id = { type = 17352 id = 27 }
location = 207
name = "Garnison Prag"

 division = {
 id = { type = 17352 id = 28 }
 name = "Garnison Prag"
 type = garrison
 locked = yes
 strength  = 30
 max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352       id = 29 }
location = 208
name = "Garnison Preßburg"

 division = {
        id = { type = 17352       id = 30 }
 name = "Garnison Preßburg"
 type = garrison
               locked = yes
 strength  = 30
               max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352       id = 31 }
location = 284
name = "Garnison Budapest"

 division = {
        id = { type = 17352       id = 32 }
 name = "Garnison Budapest"
 type = garrison
               locked = yes
 strength  = 30
               max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352       id = 33 }
location = 406
name = "Garnison Pola"

 division = {
        id = { type = 17352       id = 34 }
 name = "Garnison Pola"
 type = garrison
               locked = yes
 strength  = 30
               max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352       id = 35 }
location = 332
name = "Garnison Cetinje"

 division = {
        id = { type = 17352       id = 36 }
 name = "Garnison Cetinje"
 type = garrison
               locked = yes
 strength  = 30
               max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352       id = 37 }
location = 355
name = "Garnison Sarajevo"

 division = {
        id = { type = 17352       id = 38 }
 name = "Garnison Sarajevo"
 type = garrison
               locked = yes
 strength  = 30
               max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352 id = 39 }
location = 239
name = "Garnison Przemysl"

 division = {
 id = { type = 17352 id = 40 }
 name = "Garnison Przemysl"
 type = garrison
 locked = yes
 strength  = 30
 max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352 id = 41 }
location = 242
name = "Garnison Lemberg"

 division = {
 id = { type = 17352 id = 42 }
 name = "Garnison Lemberg"
 type = garrison
 locked = yes
 strength  = 30
 max_strength = 30
 model = 3
 }
 }

landunit = {
id = { type = 17352 id = 43 }
location = 371
name = "Adriatische Festung"

 division = {
 id = { type = 17352 id = 44 }
 name = "Adriatische Festung"
 type = garrison
 locked = yes
 strength  = 30
 max_strength = 30
 model = 3
 extra = artillery
 brigade_model = 3
 }
 }


airunit = {
       id = { type = 17352       id = 45 }
       name = "Grünhertz Kampfgruppen"
       location = 195
       prevprov = 195
       home = 195
       base = 195

       division = {
           id = { type = 17352       id = 46 }
           name = "1. Jagdgruppe"
           type = interceptor
	   model = 7
           strength = 70
           
           }
       division = {
           id = { type = 17352       id = 47 }
           name = "2. Jagdgruppe"
           type = interceptor
	   model = 7
           strength = 70
          
           }
       }

airunit = {
       id = { type = 17352       id = 48 }
       name = "Gottfried Küstengruppen"
       location = 404
       prevprov = 404
       home = 404
       base = 404

       division = {
           id = { type = 17352       id = 49 }
           name = "Gottfried Küstengruppen"
           type = naval_bomber
	   model = 1
           strength = 60
          
           }
       }

airunit = {
       id = { type = 17352       id = 50 }
       name = "Adriatische Küstengruppen"
       location = 406
       prevprov = 406
       home = 406
       base = 406

       division = {
           id = { type = 17352       id = 51 }
           name = "Adriatische Küstengruppen"
           type = naval_bomber
           strength = 30
	   model = 1
            
           }
       }

# Die Kaiserliche und Königliche Kriegsmarine

navalunit = {
name = "I.KuK Schlachtschwadron"
id = { type = 17352 id = 53 }
location = 406
base = 406

division = { id = { type = 17352 id = 54 } name = "SMS Kaiser Franz Jozef" type = battleship model = 5 }
division = { id = { type = 17352 id = 55 } name = "SMS Hunyadi" type = battleship model = 5 }
division = { id = { type = 17352 id = 56 } name = "SMS Corvinus" type = battleship model = 5 }

}

navalunit = {
name = "II.KuK Schlachtschwadron"
id = { type = 17352 id = 57 }
location = 406
base = 406

division = { id = { type = 17352 id = 58 } name = "SMS Tegetthoff" type = battleship model = 4 }
division = { id = { type = 17352 id = 59 } name = "SMS Prinz Eugen" type = battleship model = 4 }
division = { id = { type = 17352 id = 60 } name = "SMS Viribus Unitis" type = battleship model = 4 }

}

navalunit = {
name = "I.KuK Kreuzerschwadron"
id = { type = 17352 id = 61 }
location = 406
base = 406

division = { id = { type = 17352 id = 62 } name = "SMS Pola" type = heavy_cruiser model = 3 }
division = { id = { type = 17352 id = 63 } name = "SMS Fiume" type = heavy_cruiser model = 3 }
division = { id = { type = 17352 id = 64 } name = "SMS Admiral Haus" type = light_cruiser model = 3 }
division = { id = { type = 17352 id = 65 } name = "SMS Admiral Njegovan" type = light_cruiser model = 3 }

}

navalunit = {
name = "II.KuK Kreuzerschwadron"
id = { type = 17352 id = 66 }
location = 406
base = 406

division = { id = { type = 17352 id = 67 } name = "SMS Ragusa" type = heavy_cruiser model = 3 }
division = { id = { type = 17352 id = 68 } name = "SMS Sebenico" type = heavy_cruiser model = 3 }
division = { id = { type = 17352 id = 69 } name = "SMS Admiral Daublebsky von Sterneck " type = light_cruiser model = 3 }
division = { id = { type = 17352 id = 70 } name = "SMS Admiral Horthy" type = light_cruiser model = 3 }
}

navalunit = {
name = "I.KuK Zerstörerflotte"
id = { type = 17352 id = 71 }
location = 406
base = 406
division = { id = { type = 17352 id = 72 } name = "1. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
division = { id = { type = 17352 id = 73 } name = "2. Torpedobootzerstörerschwadron" type = destroyer model = 3 }
division = { id = { type = 17352 id = 74 } name = "3. Torpedobootzerstörerschwadron" type = destroyer model = 3 }

}

navalunit = {
name = "KuK Unterseebootsflotten"
id = { type = 17352 id = 75 }
location = 406
base = 406
division = { id = { type = 17352 id = 76 } name = "1. Unterseebootsflotte" type = submarine model = 2 }
division = { id = { type = 17352 id = 77 } name = "2. Unterseebootsflotte" type = submarine model = 1 }



}

navalunit = {
name = "III.KuK Kreuzerschwadron"
id = { type = 17352 id = 78 }
location = 406
base = 406

division = { id = { type = 17352 id = 79 } name = "SMS Helgoland" type = light_cruiser model = 2 }
division = { id = { type = 17352 id = 80 } name = "SMS Novara" type = light_cruiser model = 2 }
division = { id = { type = 17352 id = 81 } name = "SMS Saida" type = light_cruiser model = 2 }
division = { id = { type = 17352 id = 82 } name = "SMS Admiral Spaun" type = light_cruiser model = 1 }

}

navalunit = {
name = "II.KuK Zerstörerflotte"
id = { type = 17352 id = 83 }
location = 406
base = 406
division = { id = { type = 17352 id = 84 } name = "4. Torpedobootzerstörerschwadron" type = destroyer model = 2 }
division = { id = { type = 17352 id = 85 } name = "5. Torpedobootzerstörerschwadron" type = destroyer model = 2 }


}



}  