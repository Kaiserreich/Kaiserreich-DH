country = {
tag = GER

flag_ext = _19

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 3
		free_market = 5
		freedom = 6
		professional_army = 6
		defense_lobby = 7
		interventionism = 6
	}

headofstate = { type = 9 id = 383 }
headofgovernment = { type = 9 id = 382  }


#### Resource Reserves

SpyInfo  = {  country = "GER" NumberOfSpies = 7  }

capital = 131

manpower = 450

energy	=	5000   
metal	= 4000		
rare_materials = 4000	
oil =	5000	
supplies =	20000
money	=	200
dissent = 35



ownedprovinces = {
49 50 51 52 53 55 56 96 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 126 127 128 129 130 131
}
controlledprovinces = {
49 50 51 52 53 55 56 96 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 126 127 128 129 130 131
}
nationalprovinces =   {
104 105 107 109 110 126 127 128 129 130 131
}
claimedprovinces = {
96 106 108 111
}

	techapps = {
# GER 1920 techs
#######################

#Infantry
1010 1020 1030 1040 1050 1060 #interwar Infantry Division 
13060 13070 13080 1310 1320 1330 #interwar cavalry division 
1160 1170 1180 1190 1200 1210 #Early Mountain Division 
1910 1920 1930 1940 1950 1960 #Up to IW Supply 1930
1830 1840 1850 #Engineers

#Aircrafts
4500 4510 4520 4530 4540 4550 #interceptors
4300 4310 4320 #MR Fighter
4600 4610 4620 4630 #Up to 1924 Tac Bomber
4800 4810 #ww1 strategic bomber
7290 7300 7310 #CAS
4740 4750 4760 #Seaplanes

#Armour & Artillery
2860 2870 2880 #Armd Cars up to post ww1 armd car
2620 2010 2630 #1924 tanks
2290 2300 2310 2900  #Great War Heavy Field Artillery  
2800 2450 21180 21190 #Early Static Anti-Air Artillery 

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5810 5820 #Manufacturing
5700 5710 5010 #Mechanized Agriculture
5600 5610 5620 5630 #Medicine
5800 5080 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5310 54010 54020 5316 #Computers & cryptografi

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680
14000 14010 #Improved Great War Hospital System
6540 6910 # Interwar

#Naval Doctrines
8010 8020 8040 8050 8030 8060 8070 8080 #Basic Theories
8500 8510 8520 8550 8560 # Naval Interdiction
8100 8110 8120 8150 8160 8170 8200 8210 #Naval supremacy
8900 8910 8920 8930 # Fleet in being
82500 #Fuel Oil Logistics

#Naval
3010 3020 3030 3040 #DD
3110 3120 3130 #Early Light Cruiser 
3210 3220 3230 #Early Heavy Cruiser
3310 3320 3330 #Interwar Battlecruiser  
3410 3420 3430 3440 3450 3456 #Early Battleship 
3610 3620 3630 #Short Range Submarine 
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships
12100 12110 #(Constructing Stuttgart-class)

}


deactivate = { 6010 6210 6570 6560 6390 }

dormant_ministers = { 385 }

##########

transports = 100
escorts = 45     #### Limited to reflect over-reliance on Hochseeflotte

#########  OOB (14500 for air and navy)  (14502 for land  )


########################################################################
############
#######Das Kaiserliche Deutsche Heer - 1936
#################

landunit = {   
	location = 131
	name   = "Oberste Heeresleitung" 
	id = {  type = 10100 id = 195  }

	Division = 
	{   
		id    = {  type = 10100 id = 196  } 
		name   = "Grosser Generalstab" 
		type   = hq
		model = 1
		strength = 35
		experience = 0
	} 
} 

##1. AOK

landunit = {										
	id 	= { type = 10100 id = 1 }
	name 	= "1. Armee"
	location = 49   #Grevenbroich [Aachen]
		
	division = {
		id 	= { type = 10100 id = 2 }
		name 	= "A.O.K. 1"
		type 	= hq
		model 	= 1
		strength = 40
		max_strength = 90
		experience = 0
		}
				
	#II. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 3 }
		name 	= "3. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	division = {
		id 	= { type = 10100 id = 4 }
		name 	= "4. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	#III. Armeekorps

	division = {
		id 	= { type = 10100 id = 5 }
		name 	= "5. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0		
		}
				
	division = {
		id 	= { type = 10100 id = 6 }
		name 	= "6. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}

	#IV. Armeekorps

	division = {
		id 	= { type = 10100 id = 7 }
		name 	= "7. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}
				
	division = {
		id 	= { type = 10100 id = 8 }
		name 	= "8. Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	#III. Reservekorps
	
	division = {
		id 	= { type = 10100 id = 11 }
		name 	= "5. Reserve-Division"
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}
						

	#IV. Reservekorps
	
	division = {
		id 	= { type = 10100 id = 13 }
		name 	= "7. Reserve-Division"
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}
												
	}	


##2. AOK

landunit = {										
	id 	= { type = 10100 id = 15 }
	name 	= "2. Armee"
	location = 55   #Monschau [Eupen]
		
	division = {
		id 	= { type = 10100 id = 16 }
		name 	= "A.O.K. 2"
		type 	= hq
		model 	= 1
		strength = 40
		max_strength = 90
		experience = 0
		}

	#Gardekorps
			
	division = {
		id 	= { type = 10100 id = 17 }
		name 	= "1. Garde-Infanterie-Division"
		type 	= infantry
		model 	= 5
		strength = 90
		extra 	= artillery
		brigade_model = 1
		experience = 0
		}			
			
	division = {
		id 	= { type = 10100 id = 18 }
		name 	= "2. Garde-Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		extra 	= artillery
		brigade_model = 1
		experience = 0
		}			
			
	#VII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 19 }
		name 	= "13. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= super_heavy_artillery
		brigade_model = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 20 }
		name 	= "14. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}		

	#X. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 21 }
		name 	= "19. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 22 }
		name 	= "20. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}				

	#X. Garde-Reservekorps
			
	division = {
		id 	= { type = 10100 id = 23 }
		name 	= "3. Garde-Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}	
				
	division = {
		id 	= { type = 10100 id = 24 }
		name 	= "1. Garde-Reserve-Division"  
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}					
			
	#VII. Reservekorps

	division = {
		id 	= { type = 10100 id = 25 }
		name 	= "13. Reserve-Division"
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}
					
	#X. Reservekorps	
			
	division = {
		id 	= { type = 10100 id = 27 }
		name 	= "19. Reserve-Division"
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}	

	division = {
		id 	= { type = 10100 id = 28 }
		name 	= "2. Reserve-Garde-Division" 
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}	
	}



##3. AOK

landunit = {										
	id 	= { type = 10100 id = 29 }
	name 	= "3. Armee"
	location = 99   #Prüm 
		
	division = {
		id 	= { type = 10100 id = 30 }
		name 	= "A.O.K. 3"
		type 	= hq
		model 	= 1
		strength = 40
		max_strength = 90
		experience = 0
		}	

	#XI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 31 }
		name 	= "22. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 32 }
		name 	= "38. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}

	#XII. (I. Sächsisches) Armeekorps
			
	division = {
		id 	= { type = 10100 id = 33 }
		name 	= "23. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 34 }
		name 	= "32. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}	

	#XIX. (II. Sächsisches) Armeekorps
			
	division = {
		id 	= { type = 10100 id = 35 }
		name 	= "24. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 36 }
		name 	= "40. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}	
	
	#XII. (Sächsisches) Reservekorps
			
	division = {
		id 	= { type = 10100 id = 37 }
		name 	= "23. Reserve-Division" 
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}
}		
			

##4. AOK

landunit = {										
	id 	= { type = 10100 id = 39 }
	name 	= "4. Armee"
	location = 106   #Lille
		
	division = {
		id 	= { type = 10100 id = 40 }
		name 	= "A.O.K. 4"
		type 	= hq
		model 	= 1
		strength = 40
		max_strength = 90
		experience = 0
		}	
				
	#VI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 41 }
		name 	= "11. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 42 }
		name 	= "12. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}				

	#VIII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 43 }
		name 	= "15. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 44 }
		name 	= "16. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}				

	#XVIII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 45 }
		name 	= "21. Infanterie-Division"  
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 46 }
		name 	= "25. Infanterie-Division" 
		type 	= infantry
		model 	= 5
		strength = 90
		experience = 0
		}				

	#VIII. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 47 }
		name 	= "15. Reserve-Division" 
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}	
			
	#XVIII. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 49 }
		name 	= "21. Reserve-Division" 
		type 	= infantry
		model 	= 5
		strength = 40
		max_strength = 90
		experience = 0
		}	
			
	#4. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 51 }
		name 	= "4. Ersatz-Division" 
		type 	= infantry
		model 	= 2
		strength = 40
		max_strength = 90
		experience = 0
		}		

	#8. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 52 }
		name 	= "8. Ersatz-Division" 
		type 	= infantry
		model 	= 2
		strength = 40
		max_strength = 90
		experience = 0
		}	
				
	}
}