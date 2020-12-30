###########################
#Country definition for JAP
###########################
province = { id = 1560 naval_base = 10 air_base = 3 anti_air = 1 } 
province = { id = 1219 naval_base = 10 air_base = 4 anti_air = 2 } 
province = { id = 1361 naval_base = 6 air_base = 3 anti_air = 1 } 
province = { id = 1228 naval_base = 4 air_base = 2 anti_air = 1 } 
province = { id = 1362 naval_base = 4 anti_air = 1 } 

##################
#Country main data
##################
country = {
    tag = JAP

ai = "kaiserreich\Japan.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        free_market = 5
        freedom = 6
        professional_army = 6
        defense_lobby = 7
        interventionism = 8
    }
        
headofstate = { type = 9 id = 55973 }
headofgovernment = { type = 9 id = 55984 }

techapps = {


# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter

#Armour & Artillery
2860 #Interwar Armoured Car  
2290 2300 2310 2900 2910 2920 #1924FA
7600 7610 2620 2010 2630 #SW Tank 
2800 2450 #1921 Static Anti-Air Artillery 
2810 #1918 AA Bde

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1350 #1924 Cavalry Division 
1830 1840 #Engineers

#Industrial
5700 #Early Agriculture
5600 #Medicine
5810 5820 #Manufactoring
5800 5080 # Basic Construction Engineering

#Improved Destroyer 
	3010 3020 3030
	#Basic Light Cruiser 
	3110 3120 3130
	#Improved Heavy Cruiser 
	3210 3220 3230  
	#Early Battleship 
	3410 3420 3430 3440
	#Early Battlecruiser
	3310 3320
	#Short Range Submarine 
	3610 3620
	#fleet Carrier 
	#Light carrier 
	#Troopships
	3810
	#ASW
	#Torpedos
	3720

#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510
	8520 8550 8900 8910

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

	}

capital = 1560
free = { ic = 40 supplies = 50 oil = 50 }

ownedprovinces =      { 1219 1224 1226 1225 1227 1221 1222 1560 1561 1228 1229 1230 1231 1232 1223 1233 1361 1362 1363 1364   }

controlledprovinces = { 1219 1224 1226 1225 1227 1221 1222 1560 1561 1228 1229 1223 1233 1230 1231 1232 1361 1362 1363 1364  }

claimedprovinces = { 1219 1224 1226 1225 1227 1221 1222 1228 1229 1223 1233 1230 1231 1232 1361 1362 1363 1364  }

nationalprovinces =   { 1560 1561 }

oil =	1000	
supplies = 5000

transports = 300
escorts = 45     

landunit = {
		id = { type = 13016 id = 1 }
		name = "Port Arthur Hendan"
		location = 1219

			division = {
			id = { type = 13016 id = 2 }
			name = "Port Arthur Hendan"
			strength = 100
			type = garrison
			model = 3
			}
			}

landunit = {
		id = { type = 13016 id = 3 }
		name = "Gaoxiong Hendan"
		location = 1361

			division = {
			id = { type = 13016 id = 4 }
			name = "Gaoxiong Hendan"
			strength = 100
			type = garrison
			model = 3
			}
			}

landunit = {
		id = { type = 13016 id = 5 }
		name = "Taipei Hendan"
		location = 1362

			division = {
			id = { type = 13016 id = 6 }
			name = "Taipei Hendan"
			strength = 100
			type = garrison
			model = 3
			}
			}

landunit = { 
        id = { type = 13016 id = 7 } 
        name = "1 Konoeshidan" 
        location = 1228
        division = { 
            	id = { type = 13016 id = 8 } 
            	name = "1 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 
    	} 

landunit = { 
        id = { type = 13016 id = 9 } 
        name = "2 Konoeshidan" 
        location = 1221
        division = { 
            	id = { type = 13016 id = 10 } 
            	name = "2 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 
    	} 

landunit = { 
        id = { type = 13016 id = 11 } 
        name = "4. Hendan" 
        location = 1225
        division = {
                locked = yes 
            	id = { type = 13016 id = 12 } 
            	name = "3 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 

        division = { 
                locked = yes
            	id = { type = 13016 id = 13 } 
            	name = "9 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
                extra = rocket_artillery
	        brigade_model = 6
        	}  

        division = {
                locked = yes 
            	id = { type = 13016 id = 14 } 
            	name = "17 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	}  
    	} 

landunit = { 
        id = { type = 13016 id = 15 } 
        name = "3. Hendan" 
        location = 1224
        division = { 
                locked = yes
            	id = { type = 13016 id = 16 } 
            	name = "4 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 

        division = { 
                locked = yes
            	id = { type = 13016 id = 17 } 
            	name = "10 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
                extra = rocket_artillery
	        brigade_model = 6
        	}   

        division = {
                locked = yes 
            	id = { type = 13016 id = 18 } 
            	name = "16 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	} 
    	} 

landunit = { 
        id = { type = 13016 id = 19 } 
        name = "2. Hendan" 
        location = 1226
        division = { 
                locked = yes
            	id = { type = 13016 id = 20 } 
            	name = "5 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 

        division = { 
                locked = yes
            	id = { type = 13016 id = 21 } 
            	name = "8 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
                extra = rocket_artillery
	        brigade_model = 6
        	}  

        division = {
                locked = yes 
            	id = { type = 13016 id = 22 } 
            	name = "15 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	}  
    	} 

landunit = { 
        id = { type = 13016 id = 23 } 
        name = "1. Hendan" 
        location = 1227
        division = { 
                locked = yes
            	id = { type = 13016 id = 24 } 
            	name = "6 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 

        division = {
                locked = yes 
            	id = { type = 13016 id = 25 } 
            	name = "7 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	} 

        division = {
                locked = yes 
            	id = { type = 13016 id = 26 } 
            	name = "14 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	} 
    	} 

landunit = { 
        id = { type = 13016 id = 27 } 
        name = "5. Hendan" 
        location = 1219
        division = { 
                locked = yes
            	id = { type = 13016 id = 28 } 
            	name = "11 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		extra = artillery
		brigade_model = 3
		experience = 5
        	} 

        division = {
                locked = yes 
            	id = { type = 13016 id = 29 } 
            	name = "12 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	} 

        division = {
                locked = yes 
            	id = { type = 13016 id = 30 } 
            	name = "13 Konoeshidan" 
            	strength = 100 
            	type = infantry
		model = 6
		experience = 5
                extra = rocket_artillery
	        brigade_model = 6
        	} 
    	} 

airunit = {
		location = 1228
		base     = 1228
		id       = {  type = 13016 id = 31  } 
		name     = "Dai 1 Kokutai" 
		division = {
			id    = {  type = 13016 id = 32  } 
			name  = "Dai 1 Keibakugeki Hikodan" 
			type  = tactical_bomber 
			model = 4 
		} 
	} 

airunit = {
		id       = {  type = 13016 id = 33  } 
		name     = "Dai 1 Kyokutsi Hikodan" 
		location = 1228
		base     = 1228
		division = {
			id       = {  type = 13016 id = 34  } 
			name     = "Dai 1 Kyokutsi Hikodan" 
			strength = 100 
			type     = interceptor 
			model    = 6
		} 
	} 
	airunit = {
		id       = {  type = 13016 id = 35  } 
		name     = "Dai 2 Kyokutsi Hikodan" 
		location = 1228
		base     = 1228 
		division = {
			id       = {  type = 13016 id = 36  } 
			name     = "Dai 2 Kyokutsi Hikodan" 
			strength = 100 
			type     = interceptor 
			model    = 6
		} 
	} 

navalunit = { 
        id = { type = 30111 id = 500 } 
	name = "1 Sentai" 
        location = 1560 
        base = 1560 
 
        division = { id = { type = 30111 id = 501 } name = "Kawachi" type = battleship model = 2 } 
        division = { id = { type = 30111 id = 502 } name = "Yamashiro" type = battleship model = 3 } 
        division = { id = { type = 30111 id = 503 } name = "Fuso" type = battleship model = 3 } 
        division = { id = { type = 30111 id = 505 } name = "Kurama" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 506 } name = "Kasuga" type = heavy_cruiser model = 1 } 
        division = { id = { type = 30111 id = 507 } name = "Nisshin" type = heavy_cruiser model = 1 } 
       	division = { id = { type = 30111 id = 508 } name = "Otowa-Sentai A" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 570 } name = "Otowa-Sentai B" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 568 } name = "Tsushima" type = light_cruiser model = 1 }
        division = { id = { type = 30111 id = 509 } name = "Tsushima-Sentai A" type = destroyer model = 1 } 
	division = { id = { type = 30111 id = 571 } name = "Tsushima-Sentai B" type = destroyer model = 1 } 
    	} 

navalunit = { 
        id = { type = 30111 id = 510 } 
	name = "2 Sentai" 
        location = 1219 # Dalian 
        base = 1219 # Dalian 

        division = { id = { type = 30111 id = 575 } name = "Wakamiya" type = escort_carrier model = 1  }
        division = { id = { type = 30111 id = 511 } name = "Kongo" type = battlecruiser model = 1 } 
        division = { id = { type = 30111 id = 512 } name = "Kirishima" type = battlecruiser model = 2 } 
        division = { id = { type = 30111 id = 513 } name = "Haruna" type = battlecruiser model = 1 } 
        division = { id = { type = 30111 id = 514 } name = "Hiei" type = battlecruiser model = 1 } 
        division = { id = { type = 30111 id = 516 } name = "Tsukuba" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 517 } name = "Aso" type = heavy_cruiser model = 2 } 
        division = { id = { type = 30111 id = 567 } name = "Niitaka" type = light_cruiser model = 1 }
        division = { id = { type = 30111 id = 572 } name = "Niitaki-Sentai A" type = destroyer model = 2 } 
	division = { id = { type = 30111 id = 574 } name = "Niitaki-Sentai B" type = destroyer model = 2 } 
        division = { id = { type = 30111 id = 519 } name = "Chitose-Sentai A" type = destroyer model = 1 }
	division = { id = { type = 30111 id = 573 } name = "Chitose-Sentai B" type = destroyer model = 1 } 
    	}

navalunit = { 
        id = { type = 30111 id = 550 } 
	name = "7 Sentai" 
        location = 1560 # Tokyo
        base = 1560 # Tokyo
 
        division = { id = { type = 30111 id = 551 } name = "1 Sentai" type = transport model = 1 } 
        division = { id = { type = 30111 id = 552 } name = "2 Sentai" type = transport model = 1 } 
        division = { id = { type = 30111 id = 553 } name = "3 Sentai" type = transport model = 1 } 
        division = { id = { type = 30111 id = 554 } name = "4 Sentai" type = transport model = 1 } 
	}

}