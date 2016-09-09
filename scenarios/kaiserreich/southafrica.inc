


country = {
    tag = SAF  

ai = "kaiserreich\South Africa.ai"


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 6
        free_market = 8
        professional_army = 5
        defense_lobby = 2
        interventionism = 6
    }

#### cabinet
    headofstate = { type = 9 id = 70100} # James Hertzog
    headofgovernment = { type = 9 id = 70029 } # DF Malan
     foreignminister = { type = 9 id = 70032} # Eric Louw
     armamentminister = { type = 9 id = 70048 } # Charles T. te Water
     ministerofsecurity = { type = 9 id = 70056 } # N. J. van der Merwe
     ministerofintelligence = { type = 9 id = 70065 } # B.J. Schoeman
     chiefofstaff = { type = 9 id = 70072 } # Leonard Beyers
     chiefofarmy = { type = 9 id = 70080 } # Pierre van Ryneveld
     chiefofnavy = { type = 9 id = 70082 } # Jeannot de la Tourier    
     chiefofair = { type = 9 id = 70085 } # Adolph Malan

#### Resource Reserves
	capital = 	876
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 20

SpyInfo  = {  country = "SAF" NumberOfSpies = 3  } 

    nationalprovinces   = {   879 880 875 881 872 876 878 873 874 877 869 870 868 871 866 867   } 
  ownedprovinces     = {   879 880 875 881 872 876 878 873 874 877 869 870 868 871 866 867   } 
  controlledprovinces  = {   879 880 875 881 872 876 878 873 874 877 869 870 868 871 866 867   } 

diplomacy = {
relation = { tag = AST value = -25  }
relation = { tag = BEL value = 25 }
relation = { tag = CAN value = -50  }
relation = { tag = ENG value = -120  }
relation = { tag = FRA value = -50 }
relation = { tag = GER value = 100 }
relation = { tag = IRE value = -25 }
relation = { tag = PAK value = -25 }
relation = { tag = VIC value = -25 }
relation = { tag = GUY value = -25 }
relation = { tag = POR value = 50 }
relation = { tag = USA value = 25 }
relation = { tag = CON value = 25 }
}


	
	techapps = {

# UK 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
7290 7300 7310 7320 #CAS


#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
7600 7610 2620 2010 2630 #Great War Tank
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1830 1840 1850 #Engineers
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 #Basic Cavalry Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture 
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5190 #Basic Oil Refining 
5600 5610 5620 #Medicine

#Naval
3010 3020 3030 3040 #Great War Destroyer 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6560 6030 6110 6120 # Trench Warfare doctrine (land)
14000 14010 14020 #Great War Hospital System 


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  9140 

#Naval Doctrines
8010  8020  8030  8040  8050  8070  8100  8110  8120 8900 8910 8920 8930 8940 8950 8150 8160 8060 8080 82300 8500 8510 8520 8550
81650 8200
}

#########  OOB (...)
	landunit = {
		name = "Cape Command"
		location = 880
		id = { type = 26600 id = 1 }

			division = {
			id = { type = 26600 id = 2 }
			name = "Cape Command Garrison"
			type = infantry
			model = 7
			strength = 40
			}
			}

		landunit = {
		name = "Witwatersrand Command"
		location = 876
		id = { type = 26600 id = 3 }

			division = {
			id = { type = 26600 id = 4 }
			name = "Witwatersrand Command Garrison"
			type = infantry
			model = 7
			strength = 80
			}
			}

		landunit = {
		name = "Natal Command"
		location = 872
		id = { type = 26600 id = 5 }

			division = {
			id = { type = 26600 id = 6 }
			name = "Natal Command Garrison"
			type = infantry
			model = 7
			strength = 40
			}
			}

navalunit = {
	name = "South African Fleet"
	id = { type =  26600      id =    9  }
	location =     880     ####  [South African]
	base =    880     

division = { id = { type = 26600  id =    7  } name =  "SAS Horn"   type = light_cruiser model = 3    }
division = { id = { type = 26600  id =    8  } name =  "Patrol Squadron"   type =  destroyer model = 3    }
}

#################################################################################################################################################
# Dormant Units 
#################

######################
# Native Units of the High Commission Territories

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 10 }
   	name = "Basotho Stam Krag"
   	strength  = 100
   	type = militia
	model = 0
        }

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 11 }
   	name = "Tswana Stam Krag"
   	strength  = 100
   	type = militia
	model = 0
        }

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 12 }
   	name = "Swazi Stam Krag"
   	strength  = 100
   	type = militia
	model = 0
        }

######################
# Union of South Africa Native Units

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 13 }
   	name = "Verkenners"
 	type = militia
  	model = 5
  	strength = 100 
        }

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 14 }
   	name = "1. Askari Kommando"
 	type = d_01
  	model = 6
  	strength = 100 
        }

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 15 }
   	name = "2. Askari Kommando"
 	type = d_01
  	model = 6
  	strength = 100 
        }

# Now these really should be Light Infantry once Strat.Mod gets implemented

######################
# 4th Boer War

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 16 }
   	name = "Matabele Stämme"
 	type = militia
  	model = 5
  	strength = 100 
        }

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 17 }
   		name = "Kronenkranich Kampfgruppe"
   		strength  = 60
 		max_strength = 60
   		type = cavalry
		model = 10
		}

  	landdivision = {
	dormant = yes
   	id = { type = 26600 id = 18 }
   	name = "Kronenkranich Askari Kommando"
 	type = d_01
  	model = 9
  	strength = 100 
        }



}  