


country = {
    tag = BUL  
ai = "kaiserreich\Bulgaria.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 6
        professional_army = 7
        defense_lobby = 7
        interventionism = 4
   	}

#### cabinet

     headofstate = { type = 9 id = 19043 }
     headofgovernment = { type = 9 id = 19052 }

#### Resource Reserves

	capital = 321

	manpower = 200


SpyInfo  = {  country = "BUL" NumberOfSpies = 3  } 

energy		= 1000   
metal		= 1000		
rare_materials 	= 500	
oil 		= 500	
supplies 	= 500
money 		= 50
transports = 10
escorts = 4	



    ownedprovinces =      {
		331 318 323 317 326 307 325 324 322 319 320 321 370 363 364 365 366 328 333 334
	 }
    controlledprovinces = {
		331 318 323 317 326 307 325 324 322 319 320 321 370 363 364 365 366 328 333 334
	  }
    nationalprovinces =   {
		331 318 323 317 326 307 325 324 322 319 320 321 370 363 364 328 333 334
	  }
    claimedprovinces = { 
                365 366
                 }	  
	

diplomacy = {
					
relation = {   tag =    BEL	value = 		80	   }  
relation = {   tag =  	BLR	 value =		100	   }  
relation = {   tag =  	GER	 value =		140	   }  
relation = {   tag =  	LAT	value = 		60	   }  
relation = {   tag =  	LIT	 value =		60	   }  
relation = {   tag =  	POL	value = 		40	   }  
relation = {   tag =  	UKR	 value =		100	   }  
relation = {   tag =  	AUS	value = 		100	   }  
relation = {   tag =  	BOS	value = 		50	   }  
relation = {   tag =  	CRO	 value =		40	   }  
relation = {   tag =  	CZE	value = 		30	   }  
relation = {   tag =  	GLD	value = 		30	   }  
relation = {   tag =  	HUN	 value =		20	   }  
relation = {   tag =  	ALB	value = 		50	   }  
relation = {   tag =  	GRE	value = 		-80	   }  
relation = {   tag =  	ITA	value = 		40	   }  
relation = {   tag =  	ROM	value = 		-120	   }  
relation = {   tag =  	SER	value = 		-100	   }  
relation = {   tag =  	SPA	value = 		60	   }  
relation = {   tag =  	ENG	value = 		-80	   }  
relation = {   tag =  	FRA	value = 		-60	   }  
relation = {   tag =  	RSI	 value =		-40	   }  
relation = {   tag =  	CAN	value = 		-30	   }  
relation = {   tag =  	VIC	value = 		-20	   }  
relation = {   tag =  	ARM	 value =		40	   }  
relation = {   tag =  	AZB	value = 		-20	   }  
relation = {   tag =  	GEO	value = 		-40	   }  
relation = {   tag =  	RUS	 value =		60	   }  
relation = {   tag =  	OTT	 value =		40	   }  
relation = {   tag =  	CON	value = 		30	   }  
relation = {   tag =  	JAP	value = 		-30	   }  

}



	techapps = {
	
#Aircrafts 
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  
4300 4310 4320 4330 #Multirole fighter
4600 4610 4620 4630 #Prewar experimental + Tac
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
7290 7300 7310 7320 #CAS

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car  
2290 2300 2310 2900 2910  #Great War Heavy Field Artillery
2010 2620 2630 2640 #Light armor brigades only techs / advanced Light armor
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #Great War Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1830 1840 1850 1860 #Engineers

#Secret Weapons
7600 7610 #For tanks only

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 #Air Doctrines - ww2 techs

#Naval Doctrines
8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 81300 81310

#Industrial
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5600 5610 5620 #Medicine

#Land Doctrines
14000 14010 #Improved Great War Hospital System
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 # Great War Land Doctrines (central powers)
6010 6020# WWII Land Doctrines - Firepower Focus

#Naval
3720 3730 3900 #Torpedo & ASW 18
3810 #Troopships
3010 3020 3030 3040 3050 #Great War Destroyer 
3110 3120 3130 #Early Light Cruiser 
3210 3220 3230 #Early Heavy Cruiser 
3310 3320 3330 #Heavy Battlecruiser 

	}

#########  OOB (...)
	landunit = {
 	id = { type = 19000 id = 1 }
 	location = 321
 	name = "1-va Armija"

  		division = {
  	 	id = { type = 19000 id = 2 }
   		name = "1-va Sofiiska pehotna divizija"
   		strength = 100
   		type = infantry
   		model = 8
                extra = anti_tank
                brigade_model = 1
             	}

  		division = {
  		id = { type = 19000 id = 3 }
   		name = "7-ma Rilska pehotna divizija"
   		strength = 100
   		type = infantry
             	model = 7
		}

  		division = {
   		id = { type = 19000 id = 4 }
   		name = "1-va Konna divizija"
   		strength = 100
   		type = cavalry
		model = 7        
    		}
           	}


	landunit = {
 	id = { type = 19000 id = 5 }
 	location = 326
 	name = "2-ra Armija"

  		division = {
  	 	id = { type = 19000 id = 6 }
   		name = "2-ra Trakiiska pehotna divizija"
   		strength = 100
   		type = infantry
             	model = 8
		}

  		division = {
   		id = { type = 19000 id = 7 }
   		name = "8-a Tundzhanska pehotna divizija"
   		strength = 100
   		type = infantry
        	model = 7
		}

	  	division = {
	   	id = { type = 19000 id = 19 }
   		name = "2-ra Konna divizija"
	   	strength = 100
	   	type = cavalry
	        model = 7
		}
        	}

	
	landunit = {
 	id = { type = 19000 id = 9 }
 	location = 319
 	name = "3-ta Armija"

  		division = {
   		id = { type = 19000 id = 10 }
   		name = "3-ta Balkanska pehotna divizija"
   		strength = 100
   		type = infantry
            	model = 8
		}

  		division = {
   		id = { type = 19000 id = 11 }
   		name = "4-ta Preslavska pehotna divizija"
   		strength = 100
   		type = infantry
             	model = 7
		}
          	}

	landunit = {
 	id = { type = 19000 id = 12 }
 	location = 323
 	name = "4-ta Armija"

  		division = {
  	 	id = { type = 19000 id = 13 }
   		name = "5-ta Dunavska pehotna divizija"
   		strength = 100
   		type = infantry
   		model = 7
		extra = artillery
		brigade_model = 5
            	}

  		division = {
   		id = { type = 19000 id = 14 }
   		name = "6-ta Bdinska pehotna divizija"
   		strength = 100
   		type = infantry
             	model = 7
		}
           	}


landunit = {
 id = { type = 19800 id = 13 }
 location = 331
 name = "5-ta Armija"

  division = {
   id = { type = 19800 id = 14 }
   name = "9-ta Turnovska pehotna divizija"
   strength = 70
   type = infantry
   model = 8
             }

  division = {
   id = { type = 19800 id = 15 }
   name = "10-ta Razloshka pehotna divizija"
   strength = 70
   type = infantry
   model = 7
             }

          }


landunit = { 
        id = { type = 23500 id = 50 } 
        name = "6-ta Armija" 
        location = 307
        prevprov = 307
        home = 421

        division = { 
            id = { type = 23500 id = 35 } 
            name = "11-ta Karlovska pehotna divizija" 
            model = 7
            brigade_model = 5
            extra = artillery
            type = infantry 

            } 
        division = { 
            id = { type = 23500 id = 31 } 
            name = "12-ta Pernishka pehotna divizija" 
            model = 7
            brigade_model = 5
            extra = artillery 
            type = infantry 
            } 
        } 




	landunit = {
 	id = { type = 15500 id = 8 }
 	location = 366
 	name = "7-ma Armija"

 	 	division = {
   		id = { type = 15500 id = 9 }
   		name = "13-ta Pehotna pehotna divizija"
   		strength = 100
   		type = infantry
		model = 7
   		extra = artillery
		brigade_model = 5
             	}

  		division = {
   		id = { type = 15500 id = 10 }
   		name = "14-ta Blagoevgradska pehotna divizija"
   		strength = 100
		model = 7
   		type = infantry
             	}

  		division = {
   		id = { type = 15500 id = 11 }
   		name = "15-ta Starozagorska pehotna divizija"
   		strength = 100
		model = 7
   		type = infantry
             	}

  		division = {
  	 	id = { type = 15500 id = 12 }
   		name = "16-ta Dobrichka pehotna divizija"
   		strength = 100
		model = 7
   		type = infantry
             	}
          	}


	navalunit = {
	id = { type = 19000 id = 15 }
	name = "Chernomorskiya Flota"
	location = 326
	base = 326

		division = {
		id = { type = 19000 id = 16 }
	name = "3-va Razrushitelova flotilija"
		type = destroyer
		model = 2
           	}
         	}

navalunit = {
	name = "Belomorska Flota"
	id = { type =  19001 id =  17    }
	location =     363     #### Xanthi
	base =    363     

		division = {	id = { type = 19001 id =   18  } 	name = "Kaloyan" type = battleship model = 2  }  ### Original cyrillic characters didn't work!
		division = {	id = { type = 19001 id =  19   } 	name = "Ivan Rilski" type = battleship model = 2  } #Both BBs are predreadnoughts bought from Germany
		division = {	id = { type = 19001 id =   20  } 	name = "Benkovski"   type = light_cruiser model = 2  }
		division = {	id = { type = 19001 id =  21   } 	name = "Konstantinov" type = light_cruiser  model = 2     }
		division = {	id = { type = 19001 id =   22  } 	name = "Hrabar"    type = heavy_cruiser model = 2   }
		division = {	id = { type = 19001 id =   24  } 	name = "Levski"     type = heavy_cruiser model = 2  }
		division = {	id = { type = 19001 id =   23  } 	name = "Evtimiy"    type = heavy_cruiser model = 2  }
		division = {	id = { type = 19001 id =   25  } 	name = "1-va Razrushitelova flotilija" type =  destroyer model = 2    }
		division = {	id = { type = 19001 id =   26  } 	name = "2-va Razrushitelova flotilija" type =  destroyer model = 2    }
}


airunit = 
   {  id       = {  type = 30002 id = 24  } 
     location = 321
     base     = 321
     name     = "Vazdushni ili Vuzdushni" 
     Division = 
     {  id       = {  type = 30002 id = 25  } 
       name     = "2-ri Bombardirovatchen polk" 
       strength = 40 
       type     = tactical_bomber 
       model    = 5 
      } 
     Division = 
     {  id       = {  type = 30002 id = 26  } 
       name     = "1-vi Bombardirovatchen polk" 
       strength = 30 
       type     = tactical_bomber 
       model    = 4
      } 
     Division = 
     {  id       = {  type = 30002 id = 27  } 
       name     = "1-vi Iztrebitelen polk" 
       strength = 60 
       type     = interceptor 
       model    = 6
      } 
    } 

}  