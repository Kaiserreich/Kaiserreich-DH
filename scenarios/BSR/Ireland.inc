


country = {
tag = IRE
	puppet = U07
	control = U07
	
ai = "kaiserreich\Ireland.ai"
policy = {
date = { year = 0 month = january day = 0 }
democratic = 4
political_left = 2
freedom = 9
free_market = 7
professional_army = 3
defense_lobby = 4
interventionism = 2
}

#### cabinet
headofstate = { type = 9 id = 25001 }
headofgovernment = { type = 9 id = 25002 }
foreignminister = { type = 9 id = 25058 }
armamentminister = { type = 9 id = 25083 }
ministerofsecurity = { type = 9 id = 25102 }
ministerofintelligence = { type = 9 id = 25116 }
chiefofstaff = { type = 9 id = 25126 }
chiefofarmy = { type = 9 id = 25138 }
chiefofnavy = { type = 9 id = 25148 }
chiefofair = { type = 9 id = 25158 }

#### Resource Reserves
capital = 34
manpower = 30

energy	=	1000  
metal	= 450		
rare_materials = 800		
supplies =	350
transports = 200
escorts  = 30 
money = 25
dissent = 25

SpyInfo  = {  country = "IRE" NumberOfSpies = 3  }

ownedprovinces =      {
30 31 32 33 34 35 36
}
controlledprovinces = {
30 31 32 33 34 35 36
}
nationalprovinces =   {
30 31 32 33 34 35 36
}

diplomacy = {
relation = { tag = U07 value = 150 }
relation = { tag = ENG value = -100  }
}

techapps = {

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
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540
14000 14010 #Improved Great War Hospital System

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

dormant_ministers = { 25161 25162 }

#########  OOB (...)

landunit = {
id = { type = 21500 id = 1 }
name = "Regiment of Rifle"
location = 34

division = {
id = { type = 21500 id = 2 }
name = "Rifle Battalions"
strength = 55
max_strength = 60
type = infantry
model = 4
}
}

landunit = {
id = { type = 21500 id = 3 }
name = "Mainland Force"
location = 31

division = {
id = { type = 21500 id = 4 }
name = "Cavalry Squadron"
strength = 45
max_strength = 60
type = cavalry
model = 6
extra = armored_car
brigade_model = 2
}
}


navalunit = {
id = { type = 21500 id = 5 }
name = "Irish Republic Navy"
location = 34
base = 30

division = {
id = { type = 21500 id = 6 }
name = "1st Destroyer Flotilla"
type = destroyer
model = 2
}

division = {
id = { type = 21500 id = 7 }
name = "2nd Destroyer Flotilla"
type = destroyer
model = 2
}
}

landunit = {
name = "Ulster Republic Force"
location = 36
id = { type = 12700 id = 333 }

division = {
id = { type = 12700 id = 334 }
name = "1st Ulster Regiment"
type = garrison
strength = 22
model = 3
max_strength = 40
locked = yes
}

division = {
id = { type = 12700 id = 335 }
name = "2nd Ulster Regiment"
type = garrison
strength = 22
model = 3
max_strength = 40
locked = yes
}
}

}
