country = {
    tag = ENG
	
	ai = "kaiserreich\England.ai"
    flag_ext = _TUC
	name = TUC

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 9
        freedom = 7
        free_market = 2
        professional_army = 5
        defense_lobby = 7
        interventionism = 1
    }

#### Cabinet
headofstate = { type = 9 id = 557566 }
headofgovernment = { type = 9 id = 1212 }

#### Resource Reserves

SpyInfo  = {  country = "ENG" NumberOfSpies = 4  } 

	capital = 15
manpower = 28
energy	=	2000  
metal	= 1800		
rare_materials =	1420	
oil =	400	
supplies =	4000
transports = 200
escorts  = 30 
money = 300
dissent = 40

    ownedprovinces =      {
		15
	 }
    controlledprovinces = {
		15
	  }
    nationalprovinces =   {
		4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
	}
    claimedprovinces = { 
	}

diplomacy = {
relation = { tag = IRE value = -100 }
relation = { tag = U07 value = -200  }
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
6910 # Interwar

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
		id = { type = 16500 id = 1 }
		name = "Volunteer Force"
		location = 15

		division = {  
		id = {  type = 16500 id = 2  } 
		name  = "York Infantry" 
		type  = infantry 
		model = 6
		strength = 50
		max_strength = 50
		} 	

		division = {  
		id = {  type = 16500 id = 3  } 
		name  = "Hull Infantry" 
		type  = infantry 
		model = 6
		strength = 50
		max_strength = 50
		} 			

		}
		
 landunit = {
 name = "Yorkshire Popular Militia"
 location = 15
 id = { type = 16500 id = 4 }

  division = {
  id = { type = 16500 id = 5 }
  name = "Yorkshire Territorial"
  type = garrison
  model = 3
  strength = 40
  max_strength = 55
  locked = yes
  }
  }		

  landdivision = {
  dormant = yes
   id = { type = 16500 id = 6 }
   name = "Birmingham Militia"
   strength = 25
   max_strength = 35
   model = 4
   type = militia
 }  
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 7 }
   name = "Lancaster Militia"
   strength = 25
   max_strength = 35
   model = 4
   type = militia
 }
 
 landdivision = {
  dormant = yes
   id = { type = 16500 id = 8 }
   name = "Newcastle Militia"
   strength = 25
   max_strength = 35
   model = 4
   type = militia
 } 
 
  landdivision = {
  dormant = yes
   id = { type = 16500 id = 9 }
   name = "Lancaster Infantry"
   strength = 30
   max_strength = 30
   model = 6
   type = infantry
 } 
 
   landdivision = {
  dormant = yes
   id = { type = 16500 id = 10 }
   name = "Plymouth Infantry"
   strength = 30
   max_strength = 30
   model = 6
   type = infantry
 } 

  landdivision = {
  dormant = yes
   id = { type = 16500 id = 11 }
   name = "Portsmouth Infantry"
   strength = 30
   max_strength = 30
   model = 6
   type = infantry
 } 

   landdivision = {
  dormant = yes
   id = { type = 16500 id = 12 }
   name = "Strathclyde Militia"
   strength = 25
   max_strength = 25
   model = 4
   type = militia
 } 

  landdivision = {
  dormant = yes
   id = { type = 16500 id = 13 }
   name = "Lothian Militia"
   strength = 25
   max_strength = 25
   model = 4
   type = militia
 } 

 }