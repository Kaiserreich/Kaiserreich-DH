###########################
#Country definition for GER
###########################
province = { id = 1328 naval_base = 5 air_base = 4 anti_air = 1 } 
province = { id = 1371 naval_base = 5 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################
country = {
    tag = GER

ai = "KAISERREICH\1926_GERnew.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 5
        freedom = 6
        professional_army = 6
        defense_lobby = 7
        interventionism = 8
    }

headofstate = { type = 9 id = 383 }
headofgovernment = { type = 9 id = 379 }

capital = 1328
free = { ic = 20 }
ownedprovinces =  { 1328 1371 }

controlledprovinces = { 1328 1371 }

claimedprovinces = { 1328 1371 }

oil = 1000	
supplies = 5000
manpower = 150

transports = 300
escorts = 45     #### Limited to reflect over-reliance on Hochseeflotte

diplomacy = {
		relation = { tag = JAP value = -20 }
		relation = { tag = MAN value = -20 }
		relation = { tag = CHI value = -100 }
		relation = { tag = CSX value = 50 }
		relation = { tag = CYN value = 50 }
}

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
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540

	}



landunit = {
	location = 1328  ###  Tsingtao
	name = "I. Armeekorps"
        id = { type = 14502 id = 1  }
		division = { 
		id = { type = 14502 id = 2  } 
		name = "10. Infanterie-Division" 
		type = infantry
		model = 7
		extra = artillery
                brigade_model = 4
                experience = 30
		}
     
		division = { 
		id = { type = 14502 id = 3  } 
		name = "12. Infanterie-Division" 
		type = infantry
		model = 7
                experience = 30
                extra = light_armor_brigade
                brigade_model = 2
		} 
		division = { 
		id = { type = 14502 id = 21  } 
		name = "35. Infanterie-Division" 
		type = infantry
		model = 7
                experience = 30
                extra = light_armor_brigade
                brigade_model = 2
		} 		
}

landunit = {
	location = 1371  ###  Hong Kong
	name = "IV. Armeekorps"
        id = { type = 14502 id = 10  }
		division = { 
		id = { type = 14502 id = 11  } 
		name = "31. Infanterie-Division" 
		type = infantry
		model = 7 
		extra = artillery
                brigade_model = 4
                experience = 30
		}
		division = { 
		id = { type = 14502 id = 12  } 
		name = "32. Infanterie-Division" 
		type = infantry
		model = 7
                experience = 30
                extra = armored_car
		brigade_model = 1
		} 
		division = { 
		id = { type = 14502 id = 20  } 
		name = "34. Infanterie-Division" 
		type = infantry
		model = 7 
		extra = artillery
                brigade_model = 4
                experience = 30
		}		
 }

landunit = {
	location = 1328   ### [Tsingtao/Kaistchou]
	name = "3. Schutztruppen Division"
        id = { type = 14502 id = 13  }
		division = { 
		id = { type = 14502 id = 14  } 
		name = "3. Schutztruppen Division" 
		type = marine 
		model = 1
                experience = 30
		strength = 100
		}
}

landunit = {
	location = 1328  ###    Tsingtao

	name = "Auslands Festungs Kommando China"
        id = { type = 14502 id = 15 }
		division = { 
                locked = yes
		id = { type = 14502 id = 16 } 
		name = "Auslands Festungs Kommando China" 
		type = garrison
		model = 3
		strength = 100
		}
}

landunit = {
	location = 1371  ### Hong Kong
	name = "Auslands Kommando Südostasien"
        id = { type = 14502 id = 17  }
		division = { 
                locked = yes
		id = { type = 14502 id = 18  } 
		name = "Auslands Kommando Hongkong" 
		type = garrison
		model = 3
		strength = 100
		}
}

landunit = {
	location = 1371   ###  Hong Kong
	name = "2. Schutztruppen Division"
        id = { type = 14502 id = 22  }
		division = { 
		id = { type = 14502 id = 23  } 
		name = "2. Schutztruppen Division" 
		type = marine 
		model = 1
        experience = 30
		strength = 100
		}
}

airunit = {   
 id = {  type = 14502 id = 24  }  
 name = "Fliegertruppe - China"  
 base = 1328 
 location = 1328 
 
 Division = {  
 id = {  type = 14502 id = 25  } 
 name = "Feldflieger-Abteilung 2"  
 strength = 100 
 type = interceptor 
 model = 6
 } 
 Division = {  
 id = {  type = 14502 id = 26  } 
 name = "Luftschiff-Abteilung 1"  
 strength = 100
 type = tactical_bomber model = 4 
 } 
  }  

navalunit = {   
 id = {  type = 14502 id = 30  }  
 name = "Ostasiengeschwader"  
 location = 2514    
  base = 1328 # Tsingtao
 leader = 855033 # Maximilan von Spee
     Division = {  id = {  type = 14502 id = 571  } name = "SMS Großer Kurfürst" type = battleship model = 3  } 
     Division = {  id = {  type = 14502 id = 572  } name = "SMS Helgoland" type = battleship model = 2  }   
     Division = {  id = {  type = 14502 id = 573  } name = "SMS Thüringen" type = battleship model = 2  }
     Division = {  id = {  type = 14502 id = 574  } name = "SMS Oldenburg" type = battleship model = 2  }
     Division = {  id = {  type = 14502 id = 567  } name = "SMS Nassau" type = battleship model = 2  }  
     Division = {  id = {  type = 14502 id = 568  } name = "SMS Westfalen" type = battleship model = 2  } 
     Division = {  id = {  type = 10100 id = 531  } name = "SMS Blücher" type = heavy_cruiser model = 2  } 
     Division = {  id = {  type = 14502 id = 617  } name = "SMS Pillau" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 14502 id = 619  } name = "SMS Graudenz" type = light_cruiser model = 2  }
     Division = {  id = {  type = 10100 id = 511  } name = "SMS Dresden" type = light_cruiser model = 2  }    
     Division = {  id = {  type = 14502 id = 629  } name = "10. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 14502 id = 630  } name = "11. Flottille" type = destroyer model = 2  }  
    }  

navalunit = {
     name = "I. Truppentransporterflottille"
     id = { type = 14502 id = 306 }
     location = 2514
     base = 1328
     division = { id = { type = 14502 id = 307 } name = "1. Truppentransporterflottille" type = transport model = 1 }
     division = { id = { type = 14502 id = 308 } name = "2. Truppentransporterflottille" type = transport model = 1 }
     division = { id = { type = 14502 id = 309 } name = "3. Truppentransporterflottille" type = transport model = 1 }
     division = { id = { type = 14502 id = 310 } name = "4. Truppentransporterflottille" type = transport model = 1 }
     }

landdivision = {
	dormant = yes
   id = { type = 14502 id = 31 }
   name = "55. Infanterie-Division"
   strength = 100
   type = infantry
   model = 7
   extra = light_armor_brigade
   brigade_model = 2
   experience = 30
             }

landdivision = {
	dormant = yes
   id = { type = 14502 id = 32 }
   name = "1. Bayerische Kavallerie Division"
   strength = 100
   type = cavalry
   model = 7
   extra = armored_car
   brigade_model = 1
   experience = 30
             }

landdivision = {
	dormant = yes
   id = { type = 14502 id = 33 }
   name = "1. Gebirgsjäger-Division"
   strength = 100
   type = bergsjaeger
   model = 5
   extra = artillery
   brigade_model = 4
   experience = 30
             }

landdivision = {
	dormant = yes
   id = { type = 14502 id = 34 }
   name = "56. Infanterie-Division"
   strength = 100
   type = infantry
   model = 7
   extra = light_armor_brigade
   brigade_model = 2
   experience = 30
             }

}

