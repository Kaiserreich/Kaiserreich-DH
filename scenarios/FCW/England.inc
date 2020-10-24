country = {
    tag = U07

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 10
        freedom = 7
        free_market = 2
        professional_army = 2
        defense_lobby = 7
        interventionism = 1
    }


#### Resource Reserves

SpyInfo  = {  country = "U07" NumberOfSpies = 4  } 

	capital = 29
manpower = 350
energy	=	5000  
metal	= 3000		
rare_materials =	1500	
oil =	2500	
supplies =	5000
money = 10
transports = 25

    ownedprovinces =      {
		20 23 26 27 29
	 }
    controlledprovinces = {
		20 23 26 27 29
	  }
    nationalprovinces =   {
		20 23 26 27 29
	}
    claimedprovinces = { 
	}

	techapps = {
# U07 1920 techs
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

dormant_teams = { 6646 }

#########  OOB (...)



landunit = {
		id = { type = 15500 id = 1 }
		name = "Southern Command"
		location = 29

			division = {  
			id = {  type = 15500 id = 2  } 
			name  = "3rd Infantry Division" 
			type  = infantry 
			model = 5
			strength = 75
			} 			

		}
landunit = { 
        id = { type = 27111 id = 30 } 
        name = "Western Command"
	#leader = Henry Mackinnon not in DB
        location = 27
	division = { 
		id = { type = 27111 id = 31 } 
		name = "42nd (East Lancashire) Division" 
		strength = 50
		type = infantry 
		model = 5
		experience = 0
		} 
	division = { 
		id = { type = 27111 id = 32 } 
		name = "53rd (Welsh) Division" 
		strength = 50
		type = infantry 
		model = 5
		experience = 0
		} 
	division = { 
		id = { type = 27111 id = 33 } 
		name = "55th (West Lancashire) Division" 
		strength = 50
		type = infantry 
		model = 5
		experience = 0
		} 
	division = { 
		id = { type = 27111 id = 34 } 
		name = "1st Mounted Division" 
		strength = 50
		type = cavalry
		model = 5
		experience = 0
		} 
	division = { 
		id = { type = 27111 id = 35 } 
		name = "Tanks Coprs" 
		strength = 50
		type = light_armor
		model = 0
		experience = 0
		} 	
 } 		


landunit = { 
        id = { type = 27111 id = 19 } 
        name = "Northern Command"
	leader = 10519 # Herbert Plumer
        location = 20
	division = { 
		id = { type = 27111 id = 20 } 
		name = "46th (North Midland) Division" 
		strength = 50
		type = infantry 
		model = 5
		} 
	division = { 
		id = { type = 27111 id = 21 } 
		name = "49th (West Riding) Division" 
		strength = 50
		type = infantry 
		model = 5
		} 
	division = { 
		id = { type = 27111 id = 22 } 
		name = "50th (Northumbrian) Division" 
		strength = 50
		type = infantry 
		model = 5
		} 
	division = { 
		id = { type = 27111 id = 23 } 
		name = "2nd Mounted Division" 
		strength = 50
		type = cavalry
		model = 5
		} 
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

#navalunit = { 
#        id = { type = 15500 id = 121 } 
#        name = "1nd Transport Squadron" 
#        location = 27 # Southampton 
#        base = 27 # Southampton 
#
#division = { id = { type = 15500 id = 122 } name = "3rd Transport Flotilla (A)" type = transport model = 0 } 
#division = { id = { type = 15500 id = 123 } name = "3rd Transport Flotilla (B)" type = transport model = 0 } 
#division = { id = { type = 15500 id = 124 } name = "4th Transport Flotilla (A)" type = transport model = 0 } 
#division = { id = { type = 15500 id = 125 } name = "4th Transport Flotilla (B)" type = transport model = 0 } 
#    	}
		
}