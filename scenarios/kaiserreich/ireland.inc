


country = {
tag = IRE

ai = "kaiserreich\Ireland.ai"
policy = {
date = { year = 0 month = january day = 0 }
democratic = 5
political_left = 2
freedom = 8
free_market = 7
professional_army = 3
defense_lobby = 4
interventionism = 2
}

#### cabinet
headofstate = { type = 9 id = 25001 }
headofgovernment = { type = 9 id = 25002 }
foreignminister = { type = 9 id = 25058 }
armamentminister = { type = 9 id = 25069 }
ministerofsecurity = { type = 9 id = 25102 }
ministerofintelligence = { type = 9 id = 25116 }
chiefofstaff = { type = 9 id = 25126 }
chiefofarmy = { type = 9 id = 25139 }
chiefofnavy = { type = 9 id = 25148 }
chiefofair = { type = 9 id = 25158 }

#### Resource Reserves
capital = 34
manpower = 30

energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
money = 10

SpyInfo  = {  country = "IRE" NumberOfSpies = 3  }

ownedprovinces =      {
31 30 34 32 33 35 36
}
controlledprovinces = {
31 30 34 32 33 35 36
}
nationalprovinces =   {
31 30 34 32 33 35 36
}

diplomacy = {
relation = {   tag =    	BEL	value = 		20	   }
relation = {   tag =  	GER	 value =		40	   }
relation = {   tag =  	AUS	value = 		20	   }
relation = {   tag =  	SPA	value = 		20	   }
relation = {   tag =  	ENG	value = 		-40	   }
relation = {   tag =  	FRA	value = 		10	   }
relation = {   tag =  	CAN	value = 		-60	   }
relation = {   tag =  	VIC	value = 		-30	   }
relation = {   tag =  	OTT	 value =		20	   }
relation = { tag =	USA	value = 		50	 }
}



techapps = {
#Armour & Artillery
2860 2870 2880 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery
7600 7610 2620 2010 #SW Tank
2800 2450 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 Infantry Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1924 Supply
13060 13070 13080 1310 1320 #Great War Cavalry Division
1830 1840 1850 #Engineers
1160  1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division

#Industrial
5600 5610 5620 #Medicine
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 #Manufactoring
5190 #Basic Oil Refining
5800 5080 #Improved Construction Engineering

#Naval
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 3820 #Troopships
3010 3020 3030 3040 3050 #Great War Destroyer
3410 3420 3430 3440 3450 #Early Battleship
3110 3120 3130 #Early Light Cruiser
3210 3220 3230 #Early Heavy Cruiser
3610 3620 3630 #Ocean-going Submarine
3310 3320 3330 #Heavy Battlecruiser

# Aircraft
4500 4510 4520 4530 4540 4550 #1918 Interceptor
4600 4610 4620 4630 #Up to 1918 Tac Bomber

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6390 # Light Infantry
14000 14010 #Improved Great War Hospital System

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics

}

dormant_ministers = { 25161 25162 }

#########  OOB (...)

landunit = {
id = { type = 21500 id = 1 }
name = "Regiment of Rifle"
location = 34

division = {
id = { type = 21500 id = 2 }
name = "1/2/3/4/5 Rifle Battalions"
strength = 90
max_strength = 100
type = infantry
model = 6
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
strength = 30
model = 3
max_strength = 50
locked = yes
}

division = {
id = { type = 12700 id = 335 }
name = "2nd Ulster Regiment"
type = garrison
strength = 30
model = 3
max_strength = 50
locked = yes
}
}

}
