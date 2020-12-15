country = {
    tag = U07
	
	ai = "kaiserreich\England.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 1
        freedom = 7
         free_market = 2
        professional_army = 2
        defense_lobby = 7
        interventionism = 1
    }


#### Cabinet
headofstate = { type = 9 id = 557558 }
headofgovernment = { type = 9 id = 557567 }

#### Resource Reserves

SpyInfo  = {  country = "U07" NumberOfSpies = 4  } 

	capital = 29
manpower = 28
energy	=	2000  
metal	= 1800		
rare_materials =	1420	
oil =	400	
supplies =	4000
transports = 200
escorts  = 30 
money = 300
dissent = 30

    ownedprovinces =      {
		4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20 21 22 23 24 25 26 27 28 29
	 }
    controlledprovinces = {
		4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20 21 22 23 24 25 26 27 28 29
	  }
    nationalprovinces =   {
		4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 25 26 27 28 29
	}
    claimedprovinces = { 
		35 36
	}
	
diplomacy = {
relation = { tag = IRE value = 150 }
relation = { tag = ENG value = -200  }
}	

	techapps = {
# ENG 1925 techs
#######################

#Infantry
1010 1020 1030 1040 1050 1060 1070 #interwar Infantry Division 
13060 13070 13080 1310 1320 1330 1340 1350 #interwar cavalry division 
1160 1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division 
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1930
1830 1840 1850 #Engineers
1396 #Motorized Divisions
1560 # Naval infantry

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #interceptors
4300 4310 4320 #MR Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4800 4810 #ww1 strategic bomber
7290 7300 7310 7320 #CAS

#Armour & Artillery
2860 2870 2880 #Armd Cars up to post ww1 armd car
2620 2010 2630 2640 #1924 tanks
2290 2300 2310 2900 2910 #Great War Heavy Field Artillery  
2800 2450 21180 #Early Static Anti-Air Artillery 
2810 2820 #Basic Anti-Air Artillery Brigade

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5810 5820 5830 5840 #Manufacturing
5700 5710 5010 #Mechanized Agriculture
5600 5610 5620 #Medicine
5800 5080 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5310 54010 54020 54030 5316 #Computers & cryptografi

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680
14000 14010 #Improved Great War Hospital System
6540 6910 # Interwar

#Naval Doctrines
8010 8020 8040 8050 8030 8060 8070 8080 #Basic Theories
8100 8110 8120 8150 8160 8170 8200 8210 #Naval supremacy
8900 8910 8920 8930 8940 # Fleet in being
82500 #Fuel Oil Logistics

#Naval
3010 3020 3030 3040 3050 #DD
3110 3120 3130 #Early Light Cruiser 
3210 3220 3230 #Early Heavy Cruiser
3310 3320 3330 #Interwar Battlecruiser  
3410 3420 3430 3440 3450 3456 #Early Battleship 
3610 3620 3630 #Short Range Submarine 
3720 3730 3736 3740 3750 #Torpedo & ASW 18
3810 3820 #Troopships


	}

dormant_teams = { 6646 }

#########  OOB (...)



landunit = {
		id = { type = 15500 id = 1 }
		name = "Aldershot Command"
		location = 28

		division = { 
			id = { type = 15500 id = 2 } 
			name = "General Headquarters" 
			strength = 50
			type = hq
			model = 1
			experience = 0
			} 
			division = {  
			id = {  type = 15500 id = 3  } 
			name  = "1th Infantry Division" 
			type  = infantry 
			model = 6
			strength = 30
			max_strength = 50
			} 	
}

landunit = {
		id = { type = 15500 id = 4 }
		name = "Eastern Command"
		location = 25			
			division = {  
			id = {  type = 15500 id = 5  } 
			name  = "1st Cavalry Division" 
			type  = cavalry
			model = 6
			strength = 30
			max_strength = 35
			extra = light_armor_brigade
			} 			
}

landunit = {
		id = { type = 15500 id = 6 }
		name = "Western Command"
		location = 17		
		
			division = {  
			id = {  type = 15500 id = 7  } 
			name  = "5nd Infantry Division" 
			type  = infantry 
			model = 6
			strength = 32
			max_strength = 50
			} 		
}

landunit = {
		id = { type = 15500 id = 8 }
		name = "Western Command"
		location = 17		
		
			division = {  
			id = {  type = 15500 id = 9  } 
			name  = "5nd Infantry Division" 
			type  = infantry 
			model = 6
			strength = 32
			max_strength = 50
			} 	
}
			
landunit = {
		id = { type = 15500 id = 10 }
		name = "London Command"
		location = 29				
			division = {  
			id = {  type = 15500 id = 11  } 
			name  = "2nd Cavalry Division" 
			type  = cavalry
			model = 6
			strength = 30
			max_strength = 35
			}  			
			
		}
		
landunit = {
		id = { type = 15500 id = 13 }
		name = "Northern Command"
		location = 13

			division = {  
			id = {  type = 15500 id = 14  } 
			name  = "8th Infantry Division" 
			type  = infantry 
			model = 6
			strength = 30
			max_strength = 35
			} 	
}

landunit = {
		id = { type = 15500 id = 15 }
		name = "Scottish Command"
		location = 11
			division = {  
			id = {  type = 15500 id = 16 } 
			name  = "Guards Division" 
			type  = infantry 
			model = 6
			strength = 50
			max_strength = 50
			} 			
		}	
		
 landunit = {
 name = "Midlowland Force"
 location = 12
 id = { type = 15500 id = 17 }

  division = {
  id = { type = 15500 id = 18 }
  name = "Midlowland Garrison"
  type = garrison
  model = 3
  strength = 30
  max_strength = 40
  locked = yes
  }
  }	

 landunit = {
 name = "Glamorgan Force"
 location = 22
 id = { type = 15500 id = 19 }

  division = {
  id = { type = 15500 id = 20 }
  name = "Glamorgan Garrison"
  type = garrison
  model = 3
  strength = 30
  max_strength = 40
  locked = yes
  }
  }	  
  
  landunit = {
 name = "Cornwall Force"
 location = 23
 id = { type = 15500 id = 21 }

  division = {
  id = { type = 15500 id = 22 }
  name = "Cornwall Garrison"
  type = garrison
  model = 3
  strength = 30
  max_strength = 40
  locked = yes
  }
  }	   
  
  landunit = {
 name = "East Anglia Force"
 location = 25
 id = { type = 15500 id = 23 }

  division = {
  id = { type = 15500 id = 24 }
  name = "East Anglia Garrison"
  type = garrison
  model = 3
  strength = 30
  max_strength = 40
  locked = yes
  }
  }	   
  
  landunit = {
 name = "Greater London Force"
 location = 29
 id = { type = 15500 id = 25 }

  division = {
  id = { type = 15500 id = 26 }
  name = "Greater London Garrison"
  type = garrison
  model = 3
  strength = 30
  max_strength = 40
  locked = yes
  }
  }	  
  
  landdivision = {
  dormant = yes
   id = { type = 16500 id = 27 }
   name = "3rd Infantry Division"
   strength = 40
   max_strength = 50
   model = 6
   type = infantry
 }     
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 28 }
   name = "5th Infantry Division"
   strength = 40
   max_strength = 50
   model = 6
   type = infantry
 }    
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 29 }
   name = "3rd Cavalry Division"
   strength = 40
   max_strength = 50
   model = 6
   type = infantry
 }   
 
  landdivision = {
  dormant = yes
   id = { type = 16500 id = 30 }
   name = "1st Canadian Infantry Div."
   strength = 40
   max_strength = 50
   model = 6
   type = infantry
   extra = artillery
   brigade_model = 1
 }    
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 31 }
   name = "2nd Canadian Infantry Div."
   strength = 40
   max_strength = 50
   model = 6
   type = infantry  
 }
 
  landdivision = {
  dormant = yes
   id = { type = 16500 id = 32 }
   name = "Expeditionary 'Maritimes' Div."
   strength = 40
   max_strength = 50
   model = 6
   type = infantry  
 }  
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 33 }
   name = "Expeditionary 'Prince of Wales' Div."
   strength = 40
   max_strength = 50
   model = 6
   type = infantry  
 }

navalunit = { 
        id = { type = 15500 id = 100 } 
        name = "Channel Fleet" 
        location = 27 # Southampton
        base = 27 # Southampton
 
        division = { id = { type = 15500 id = 101 } name = "HMS Lord Nelson" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 102 } name = "HMS Formidable" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 103 } name = "HMS Irresistible" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 104 } name = "HMS Implacable" type = battleship model = 1 } 
         division = { id = { type = 15500 id = 105 } name = "HMS Queen" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 106 } name = "HMS Prince of Wales" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 107 } name = "HMS Agamemnon" type = battleship model = 1 } 	
        division = { id = { type = 15500 id = 108 } name = "HMS Albemarle" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 109 } name = "HMS Cornwallis" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 110 } name = "HMS Duncan" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 111 } name = "HMS Canopus" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 112 } name = "HMS Glory" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 113 } name = "HMS Goliath" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 114 } name = "HMS Ocean" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 115 } name = "HMS Vengeance" type = battleship model = 1 } 
        division = { id = { type = 15500 id = 116 } name = "HMS Diamond" type = light_cruiser model = 0 } 
        division = { id = { type = 15500 id = 117 } name = "HMS Topaze" type = light_cruiser  model = 0 } 
        division = { id = { type = 15500 id = 118 } name = "HMS Proserpine" type = light_cruiser model = 0 } 
        division = { id = { type = 15500 id = 119 } name = "HMS Hermione" type = light_cruiser model = 0 } 
        division = { id = { type = 15500 id = 120 } name = "Channel Flotilla" type = destroyer model = 1 } 
    	}

navalunit = { 
        id = { type = 15500 id = 121 } 
        name = "1nd Transport Squadron" 
        location = 27 # Southampton 
        base = 27 # Southampton 

        division = { id = { type = 15500 id = 122 } name = "3rd Transport Flotilla (A)" type = transport model = 0 } 
        division = { id = { type = 15500 id = 123 } name = "3rd Transport Flotilla (B)" type = transport model = 0 } 
        division = { id = { type = 15500 id = 124 } name = "4th Transport Flotilla (A)" type = transport model = 0 } 
        division = { id = { type = 15500 id = 125 } name = "4th Transport Flotilla (B)" type = transport model = 0 } 
    	}

navalunit = { 
        id = { type = 15500 id = 126 } 
        name = "2th Transport Squadron" 
        location = 23 # Plymouth
        base = 23 # Plymouth
 
        division = { id = { type = 15500 id = 127 } name = "13th Transport Flotilla (A)" type = transport model = 0 } 
        division = { id = { type = 15500 id = 128 } name = "13th Transport Flotilla (B)" type = transport model = 0 } 
        division = { id = { type = 15500 id = 129 } name = "14th Transport Flotilla (A)"type = transport model = 0 } 
        division = { id = { type = 15500 id = 130 } name = "14th Transport Flotilla (B)" type = transport model = 0 } 
    	}
		
 }