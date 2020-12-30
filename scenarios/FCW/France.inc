country = {
    tag = VIC
	
	flag_ext = _nor
	name = VIC_NOR_NAME

	policy = {
        date = { year = 0 month = january day = 0 }
		 democratic = 9 
		 political_left = 8
		 free_market = 10 
		 freedom = 10 
		 professional_army = 4
		 defense_lobby = 8 
		 interventionism = 8 
    }

	headofstate = { type = 9 id = 551794 }
	headofgovernment = { type = 9 id = 551797 }

#### Resource Reserves

SpyInfo  = {  country = "VIC" NumberOfSpies = 4  } 

	capital = 66
manpower = 450
energy	=	10000  
metal	= 3000		
rare_materials =	1500	
oil =	2500	
supplies =	20000
money = 10
transports = 25
dissent = 35

extra_tc = 90
 
    ownedprovinces =      {
		37 39 40 64 68 82 86 88 89 
		38 41 42 43 44 46 47 48 54 57 58 59 60 61 62 65 66 67 70 71 72 75 76 77 78 79 80 81 83 84 87 90 91 92 93 94 95  97 98  727 734 735 736 745 746 747 748 749
	 }
    controlledprovinces = {
		37 39 40 64 68 82 86 88 89 
		38 41 42 43 44 46 47 48 54 57 58 59 60 61 62 65 66 67 70 71 72 75 76 77 78 79 80 81 83 84 87 90 91 92 93 94 95  97 98  727 734 735 736 745 746 747 748 749
	  }
    nationalprovinces =   {
		37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107
	}
    claimedprovinces = { 
		727 734 735 736 745 746 747 748 749
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

dormant_leaders = { 24167 #Makhno }
dormant_teams = { 6646 }

#########  OOB (...)



landunit = {
		id = { type = 13500 id = 1 }
		name = "Corps d'armée colonial"
		location = 727
			division = {  
			id = {  type = 13500 id = 2  } 
			name  = "1ère Div. d'Infanterie coloniale" 
			type  = infantry 
			model = 6
			strength = 25
			max_strength = 35
			} 			
			division = {
			id = { type = 13500 id = 3 }
			name = "1ère Div. Légère Motorisée coloniale"
			type = infantry
			model = 6
			strength = 25
			max_strength = 35
			extra = armored_car
			brigade_model = 2
			}
		}

  landunit = 
  {  id    = {  type = 10000 id = 4  } 
   name   = "GQG d'Orlèans" 
   location = 66
   Division = 
   {  id  = {  type = 10000 id = 5  } 
    name = "Grand Quartier Général" 
    type = hq 
	model = 1
    strength = 35
	max_strength = 35
	experience = 0
    }   
   }  
   
   landunit = 
  {  id    = {  type = 10000 id = 6  } 
   name   = "Coprs d'Angers" 
   location = 59
   Division = 
   {  id  = {  type = 10000 id = 7  } 
    name = "8ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 8  } 
    name = "9ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    }   
   }    
   
   landunit = 
  {  id    = {  type = 10000 id = 9  } 
   name   = "Corps d'Orlèans" 
   location = 66
	Division = 
   {  id  = {  type = 10000 id = 10  } 
    name = "10ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 11  } 
    name = "1ère Division de Cavalerie" 
    type = cavalry
    strength = 35
	max_strength = 35
	model = 5
	experience = 0
    } 	
   }  
   
     landunit = 
  {  id    = {  type = 10000 id = 12  } 
   name   = "Corps de Belfort" 
   location = 97
   Division = 
   {  id  = {  type = 10000 id = 13  } 
    name = "3ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 14  } 
    name = "19ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 55
	experience = 0
    } 	
   }   
     
  landunit = 
  {  id    = {  type = 10000 id = 15  } 
   name   = "Ier Corps d'Armée (1)" 
   location = 54
   Division = 
   {  id  = {  type = 10000 id = 16  } 
    name = "Vème Armée" 
    type = hq 
	model = 1
    strength = 55
	max_strength = 55
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 17  } 
    name = "1ère Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   } 
   
   landunit = 
  {  id    = {  type = 10000 id = 18  } 
   name   = "Ier Corps d'Armée (2)" 
   location = 95
   Division = 
   {  id  = {  type = 10000 id = 19  } 
    name = "17ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 20  } 
    name = "12ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 55
	experience = 0
    } 	
   }   
   
   
  landunit = 
  {  id    = {  type = 10000 id = 21  } 
   name   = "IIème Corps d'Armée" 
   location = 57
   Division = 
   {  id  = {  type = 10000 id = 22  } 
    name = "4ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 23  } 
    name = "3ème Division de Cavalerie" 
    type = cavalry
    strength = 55
	max_strength = 55
	model = 5
	experience = 0
    } 
   }
   
  landunit = 
  {  id    = {  type = 10000 id = 24  } 
   name   = "IIIème Corps d'Armée" 
   location = 97 
   Division = 
   {  id  = {  type = 10000 id = 25  } 
    name = "5ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 26  } 
    name = "6ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 55
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 27  } 
   name   = "IVème Corps d'Armée" 
   location = 83
   Division = 
   {  id  = {  type = 10000 id = 28  } 
    name = "26ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 29  } 
    name = "10ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
   }
   
  landunit = 
  {  id    = {  type = 10000 id = 30  } 
   name   = "IVème Corps d'Armée (2)" 
   location = 89
   Division = 
   {  id  = {  type = 10000 id = 31  } 
    name = "20ème Division d'Infanterie	" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 55
	experience = 0
    }    
	Division = 
   {  id  = {  type = 10000 id = 32  } 
    name = "24ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
	}
	
  landunit = 
  {  id    = {  type = 10000 id = 33  } 
   name   = "Vème Corps d'Armée" 
   location = 90 
   Division = 
   {  id  = {  type = 10000 id = 34  } 
    name = "12ème Division d'Infanterie" 
    type = infantry 
	model = 5
    strength = 55
	max_strength = 55
    extra = artillery 
	brigade_model = 0
	experience = 0
    }    
   Division = 
   {  id  = {  type = 10000 id = 35  } 
    name = "4ème Division de Cavalerie" 
    type = cavalry 
	model = 5
    strength = 55
	max_strength = 55
	experience = 0
    } 
   } 

  landunit = 
  {  id    = {  type = 10000 id = 36  } 
   name   = "IXème Corps d'Armée" 
   location = 60
   Division = 
   {  id  = {  type = 10000 id = 37  } 
    name = "81e Division d'Infanterie de territoriale" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 35
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 38  } 
    name = "89e Division d'Infanterie territoriale" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 35
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 39  } 
    name = "103e Division d'Infanterie territoriale" 
    type = infantry 
	model = 5
    strength = 35
	max_strength = 35
	experience = 0
    } 
   } 
   
  landunit = 
  {  id    = {  type = 10000 id = 40  } 
   name   = "Place de Brest" 
   location = 37
   Division = 
   {  id  = {  type = 10000 id = 41  } 
    name = "Division de Brest" 
    type = garrison
	model = 2
    strength = 25
	max_strength = 25
    locked = yes
	experience = 0
    } 
   }    
 
   landunit = 
  {  id    = {  type = 10000 id = 42  } 
   name   = "Place de Bordeaux" 
   location = 68
   Division = 
   {  id  = {  type = 10000 id = 43  } 
    name = "Division de Bordeaux" 
    type = garrison
	model = 2
    strength = 25
	max_strength = 25
    locked = yes
	experience = 0
    } 
   }

   landunit = 
  {  id    = {  type = 10000 id = 44  } 
   name   = "Place d'Orlèans" 
   location = 66
   Division = 
   {  id  = {  type = 10000 id = 45  } 
    name = "Division d'Orlèans" 
    type = garrison
	model = 2
    strength = 15
	max_strength = 25
    locked = yes
	experience = 0
    } 
   }  

   landunit = 
  {  id    = {  type = 10000 id = 46  } 
   name   = "Place de Bayeux" 
   location = 85
   Division = 
   {  id  = {  type = 10000 id = 47  } 
    name = "Division de Bayeux" 
    type = garrison
	model = 2
    strength = 5
	max_strength = 25
    locked = yes
	experience = 0
    } 
   }  

   landunit = 
  {  id    = {  type = 10000 id = 48  } 
   name   = "Place de Marseille" 
   location = 89
   Division = 
   {  id  = {  type = 10000 id = 49  } 
    name = "Division de Marseille" 
    type = garrison
	model = 2
    strength = 15
	max_strength = 25
    locked = yes
	experience = 0
    } 
	}
	
#  landunit = 
#  {  id    = {  type = 10000 id = 50  } 
#   name   = "Xème Corps d'Armée" 
#   location = 72
#   Division = 
#   {  id  = {  type = 10000 id = 51  } 
#    name = "88e Division d'Infanterie de territoriale" 
#    type = infantry 
#	model = 5
#    strength = 35
#	max_strength = 35
#	experience = 0
#    } 
#   Division = 
#   {  id  = {  type = 10000 id = 52  } 
#    name = "95e Division d'Infanterie territoriale" 
#    type = infantry 
#	model = 5
#    strength = 35
#	max_strength = 35
#	experience = 0
#    } 
#   } 	
 
 ### French fleet, 2752 
 navalunit = {   
     id = {  type = 10000 id = 500  }  
 name = "1ère Flotte"  
     base = 86 # Toulon
     location = 86 # Toulon  
  
     Division = {  id = {  type = 10000 id = 501  } name = "Courbet" type = battleship model = 2  }  
     Division = {  id = {  type = 10000 id = 502  } name = "Jean Bart" type = battleship model = 2  }  
     Division = {  id = {  type = 10000 id = 503  } name = "Danton" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 504  } name = "Mirabeau" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 505  } name = "Diderot" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 506  } name = "Condorcet" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 507  } name = "Vergniaud" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 508  } name = "Voltaire" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 509  } name = "Démocratie" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 531  } name = "D'Entrecasteaux" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 532  } name = "Pothuau" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 533  } name = "Bruix" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 534  } name = "Latouche Treville" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 535  } name = "Chateaurenault" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 536  } name = "Jurien de la Graviere" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 537  } name = "1ère Escadrille de Torpilleurs" type = destroyer model = 2  }  
     Division = {  id = {  type = 10000 id = 538  } name = "2ème Escadrille de Torpilleurs" type = destroyer model = 2  }  
     Division = {  id = {  type = 10000 id = 539  } name = "3ème Escadrille de Torpilleurs" type = destroyer model = 1  }  
     Division = {  id = {  type = 10000 id = 540  } name = "4ème Escadrille de Torpilleurs" type = destroyer model = 0  } 
     Division = {  id = {  type = 10000 id = 613  } name = "16ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
     Division = {  id = {  type = 10000 id = 614  } name = "17ème Escadrille de Torpilleurs" type = destroyer model = 0  }   
    } 

airunit = {
	location = 727
	base = 727
	id = { type = 13500 id = 218 }
	name = "4ème Groupe de Bombardement"

	division = { id = { type = 13500 id = 219 } name = "Groupe de Bombardement Tactique 6" strength = 55 type = tactical_bomber model = 5 }
	}


navalunit = {
 name = "1ere Flotte, Capital"
 id = { type = 13501 id = 300 }
 location = 727 #### [Algerie]
 base = 727

 division = { id = { type = 13501 id = 301 } name = "Bretagne" type = battleship model = 3 }
 }

 navalunit = {
 name = "10eme Flotte, Transport du Réserve"
 id = { type = 13501 id = 405 }
 location = 735 #### [Oran]
 base = 735
 division = { id = { type = 13501 id = 406 } name = "TP. 1" type = transport model = 1 }
 division = { id = { type = 13501 id = 407 } name = "TP. 2" type = transport model = 1 }
 division = { id = { type = 13501 id = 408 } name = "TP. 3" type = transport model = 1 }
 }


 navalunit = {
 name = "11eme Sub Flotte"
 id = { type = 13501 id = 413 }
 location = 748 #### [Dakar]
 base = 748

 division = { id = { type = 13501 id = 417 } name = "S. 1." type = submarine model = 1 }
 division = { id = { type = 13501 id = 418 } name = "S. 2." type = submarine model = 1 }
 division = { id = { type = 13501 id = 425 } name = "S. 3." type = submarine model = 1 }
 }

 }