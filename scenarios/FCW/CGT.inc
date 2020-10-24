country = {
	tag = FRA

    flag_ext = _CGT
	name = CGT

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 9
        free_market = 1
        freedom = 4
        professional_army = 3
        defense_lobby = 6
        interventionism = 5
    }

	headofstate = { type = 9 id = 2324 }
	headofgovernment = { type = 9 id = 2325 }
 	foreignminister = { type = 9 id = 2274 }
 	armamentminister = { type = 9 id = 2275 }
 	ministerofsecurity = { type = 9 id = 2247  }
 	ministerofintelligence = { type = 9 id = 2253  }
 	chiefofstaff = { type = 9 id = 2260 }
 	chiefofarmy = { type = 9 id = 2259 }

	capital = 68

	# Resource Reserves
	oil 	=	500
	supplies =	500


	free = 		{
		oil 	=	20
		supplies =	50
		metal 	=	20
		energy =	20
		ic = 5
	}
	
        extra_tc = 110

	manpower = 150

	transports = 15
	escorts = 10

	ownedprovinces =      {
		45 63 69 73 74 85
	}
	controlledprovinces = {
		45 63 69 73 74 85
	}
	nationalprovinces =   {
		37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 97 98 99 100 101 102 103
	}

	techapps = {
# FRA 1920 techs
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


	}

##################
####FRENCH OOB####
##################

landunit = {
 id = { type = 10527 id = 1 }
 name = "GQG de l'Armée Populaire"
 location = 85

  division = {
     id = { type = 10527 id = 2 }
	   name = "Grand Quartier Général"
       type = hq 
	   model = 1
	   strength = 35
	   max_strength = 35
      } 
 }
 
 landunit = {
 id = { type = 10527 id = 3 }
 name = "GQG (1)"
 location = 85

  division = {  
	   id = { type = 10527 id = 4 }
	   name = "22ème Division d'Infanterie"
	   strength = 35 
	   max_strength = 35
	   experience = 5
	   type = infantry model = 5
      }   
	  division = {
	  id = { type = 10527 id = 5 }
	   name = "25ème Division d'Infanterie"
	   strength = 35 
	   max_strength = 35
	   experience = 5
	   type = infantry model = 5
      }
 }
 
 landunit = {
 id = { type = 10527 id = 6 }
 name = "GQG (2)"
 location = 77

	 division = {	  
	  id = { type = 10527 id = 7 }
	   name = "56ème Division d'Infanterie"
	   strength = 35
	   max_strength = 35
	   experience = 5
	   type = infantry model = 5
      }
	division = {
  id = { type = 10527 id = 8  }
	  name = "8ère Div. Légère de Cavalerie"
	  type = cavalry
	  model = 5
	  strength = 35
	  max_strength = 35
	}  
 }

landunit = {
 id = { type = 10527 id = 9 }
 name = "I Forces de l'Armée (1)"
 location = 69

  division = {
   id = { type = 10527 id = 10 }
	   name = "13ème Division d'Infanterie"
	   strength = 35
	   max_strength = 35
	   type = infantry 
	   model = 5
      }
	division = {
  id = { type = 10527 id = 11  }
	  name = "15ère Div. Légère de Cavalerie"
	  type = cavalry
	  model = 5
	  strength = 35
	  max_strength = 35
	}  
 }
 
 landunit = {
 id = { type = 10527 id = 12 }
 name = "I Forces de l'Armée (2)"
 location = 37
 
  division = {
   id = { type = 10527 id = 13 }
	   name = "14ème Division d'Infanterie"
	   strength = 30
	   max_strength = 30
	   type = infantry 
	   model = 5
      }
	division = {
  id = { type = 10527 id = 14  }
	  name = "20ère Div. Légère de Cavalerie"
	  type = cavalry
	  model = 5
	  strength = 30
	  max_strength = 30
	}  
 }

landunit = {
 id = { type = 10527 id = 15 }
 name = "II Forces de l'Armée"
 location = 74

	division = {
  id = { type = 10527 id = 16  }
	  name = "15ème Division d'Infanterie"
	  type = infantry
	  model = 5
	  strength = 35
	  max_strength = 35
	}  	
	division = {
  id = { type = 10527 id = 17  }
	  name = "18ème Division d'Infanterie"
	  type = infantry
	  model = 5
	  strength = 35
	  max_strength = 35
	}   
 }
 
 landunit = {
 id = { type = 10527 id = 18 }
 name = "III Forces de l'Armée"
 location = 73

  division = {
   id = { type = 10527 id = 19 }
	   name = "40ème Division d'Infanterie"
	   strength = 35
	   max_strength = 35
	   type = infantry 
	   model = 5
      }
	division = {
  id = { type = 10527 id = 20  }
	  name = "20ère Div. Légère de Cavalerie"
	  type = cavalry
	  model = 5
	  strength = 35
	  max_strength = 35
	}   
 }
 
  landunit = {
 id = { type = 10527 id = 21 }
 name = "IV Forces de l'Armée"
 location = 68

  division = {
  id = { type = 10527 id = 22  }
	  name = "32ème Division d'Infanterie"
	  type = infantry
	  model = 5
	  strength = 30
	  max_strength = 35
	}  	
 }

landunit = {
 id = { type = 10527 id = 23 }
 name = "Ière Forces de la Garde Territoriale"
 location = 71

  division = {
   id = { type = 10527 id = 24 }
	   name = "1ère Division de Defense Syndicaliste"
	   strength = 35
	   max_strength = 35
	   type = militia
	   model = 3
      }
	division = {
   id = { type = 10527 id = 25 }
	  name = "2ème Division de Defense Syndicaliste"
	   type = militia
	   model = 3
	  strength = 35
	  max_strength = 35
	}  
 }

landunit = {
 id = { type = 10527 id = 26 }
 name = "IIère Forces de la Garde Territoriale"
 location = 63

  division = {
   id = { type = 10527 id = 27 }
	   name = "3ème Division de Defense Syndicaliste"
	   strength = 35
	   type = militia
	   model = 3
	   max_strength = 35
      }
	division = {
   id = { type = 10527 id = 28 }
	  name = "4ème Division de Defense Syndicaliste"
	   type = militia
	   model = 3
	  strength = 35
	  max_strength = 35
	}   
 }
 
 landunit = {
 id = { type = 10527 id = 29 }
 name = "IIIère Forces de la Garde Territoriale"
 location = 45

  division = {
   id = { type = 10527 id = 30 }
	   name = "5ème Division de Defense Syndicaliste"
	   strength = 20
	   type = militia
	   model = 3
	   locked = yes
	   max_strength = 20
      }
	division = {
   id = { type = 10527 id = 31 }
	  name = "6ème Division de Defense Syndicaliste"
	   type = militia
	   model = 3
	  strength = 20
	  locked = yes
	  max_strength = 20
	}   
 }
 
  landunit = {
 id = { type = 10527 id = 32 }
 name = "IVère Forces de la Garde Territoriale"
 location = 73

  division = {
   id = { type = 10527 id = 33 }
	   name = "7ème Division de Defense Syndicaliste"
	   strength = 35
	   type = militia
	   model = 3
	   max_strength = 35
      }
	division = {
   id = { type = 10527 id = 34 }
	  name = "8ème Division de Defense Syndicaliste"
	   type = militia
	   model = 3
	  strength = 35
	  max_strength = 35
	}   
 }
 
   landunit = {
 id = { type = 10527 id = 35 }
 name = "Place de La Rochelle"
 location = 69

  division = {
   id = { type = 10527 id = 36 }
	   name = "Division de La Rochelle"
		type = garrison
		model = 2
		strength = 15
		max_strength = 20
		locked = yes
		experience = 0
      } 
 }   
 
 landunit = {
 id = { type = 10527 id = 37 }
 name = "Place de Lyon"
 location = 85

  division = {
   id = { type = 10527 id = 38 }
	   name = "Division de Lyon"
		type = garrison
		model = 2
		strength = 15
		max_strength = 20
		locked = yes
		experience = 0
      } 
 }
 
     landdivision = {
  dormant = yes
   id = { type = 10527 id = 39 }
   name = "Division de Defense d'Orleans"
   strength = 30
   max_strength = 30
   model = 2
   type = militia
 } 
 
    landdivision = {
  dormant = yes
   id = { type = 10527 id = 40 }
   name = "Division de Defense de Bordeaux"
   strength = 30
   max_strength = 30
   model = 2
   type = militia
 }     
 
 landdivision = {
  dormant = yes
   id = { type = 10527 id = 41 }
   name = "Division de Defense de Marseille"
   strength = 30
   max_strength = 30
   model = 2
   type = militia
 } 
 
  landdivision = {
  dormant = yes
   id = { type = 10527 id = 42 }
   name = "Division des bénévoles de Makhno"
   strength = 30
   max_strength = 30
   model = 2
   type = militia
 } 
 
#############################
#Armée de l'Air 1940 OOB####
#############################

airunit = {
		location = 39
		base = 39
        id = { type = 10527 id = 136 } 
		name = "Zone d'Opérations Aériennes Nord"

		division = {
	        id = { type = 10527 id = 137 } 
			name = "Groupe de Chasse 21"
			type = multi_role
			model = 1
			strength = 20
			max_strength = 35
				}
	}

}
