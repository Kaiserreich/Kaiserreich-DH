


country = {
tag = AST
ai = "kaiserreich\Australasia.ai"

policy = {
date = { year = 0 month = january day = 0 }
democratic = 4
political_left = 3
free_market = 7
freedom = 4
professional_army = 5
defense_lobby = 7
interventionism = 8
}

#### cabinet

headofstate = { type = 9 id = 56812 }
headofgovernment = { type = 9 id = 56511  }
foreignminister = { type = 9 id = 56502 }
armamentminister = { type = 9 id = 56503 }
ministerofsecurity = { type = 9 id = 56404  }
ministerofintelligence = { type = 9 id = 56505 }
chiefofstaff = { type = 9 id = 56835 } #Julius Bruche
chiefofarmy = { type = 9 id = 56831 } #Herbert Lloyd
chiefofnavy = { type = 9 id = 56822 } #Guy Gaunt
chiefofair = { type = 9 id = 56509 } #Philip Game

#### Resource Reserves
manpower = 45
energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
money = 20     transports = 60 escorts = 10

SpyInfo  = {  country = "AST" NumberOfSpies = 4  }

capital = 1707



ownedprovinces =      {
1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711
1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713
1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729
}
controlledprovinces = {
1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711
1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713
1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729
}
nationalprovinces =   {
1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711
1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713
1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729

}

diplomacy = {
relation = {   tag =  	GER	 value =		-80	   }
relation = {   tag =  	AUS	value = 		-40	   }
relation = {   tag =  	HUN	 value =		-40	   }
relation = {   tag =  	ITA	value = 		30	   }
relation = {   tag =  	SPA	value = 		20	   }
relation = {   tag =  	ENG	value = 		-80	   }
relation = {   tag =  	FRA	value = 		-40	   }
relation = {   tag =  	RSI	 value =		-40	   }
relation = {   tag =  	CAN	value = 		150	   }
relation = {   tag =  	VIC	value = 		40	   }
relation = {   tag =  	RUS	 value =		20	   }
relation = {   tag =  	CON	value = 		-20	   }
relation = {  tag =   	USA	value = 		60	 }
relation = {   tag =  	JAP	value = 		-50	   }


relation = { tag = EAF value = 60 guaranteed = { day = 29 month = december year = 1935   } 	   }
}



techapps = {
#AST 1936 techs
#Infantry
1830 1840 1850 1860 # Engineer Brigades
1010 1020 1030 1040 1050 1060 1070 1080 1090 # infantry
1560 #Naval Infantry
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 # Semi-Mot Cavalry
1160 1170 1180 1190 1200 1210 1220 1230 # 1935 Mountain
1910 1920 1930 1940 1950 1960 1970 # Rear Area Supply Dumps

#Vehicles & Artillery
2620 2010 2630 # Early Tank
2860 2870 2880 2020 # Armoured Cars
2290 2300 2310 #Field Artillery
2800 2450 21180 21190 #Interbellum III Static AA
2810 2820 2510 #Improved AA Bde

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Fighters
4300 4310 4320 4330 #Multi Role Fighters
4600 4610 4620 4630 4120 4130 #Tac & CAS Bombers
7290 7300 7310 7320 #CAS
4800 4810 4820 #Strategic Bombers
4700 4710 #Naval Bombers
4290 #Air Transports
4740 4750 4760 #Seaplanes

#Naval
3010 3020 3030 3040 3050 3060 #DDs
3110 3120 3130 3140 3150 #Light Cruisers
3210 3220 3230 3240 3250 #Heavy Cruisers
3310 3320 3330 #BCs
3410 3420 3430 3440 3450 3456 #BBs
3810 3820 #Troopships
3610 3620 3630 3640 #1924 submarine
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes
12100 12110 # LCV

#Industrial
5700 5710 5010 5020 #Agriculture
5810 5820 5050 5830 5060 #Machine Tools
5800 5080 5090 #Construction Egineering
5310 54010 54020 54030 #Computing Machine + Fire Controls
5316 5326 #Decryption
5410 #Radar
5190 #Oil Refining
5600 5610 5620 5630 #Medicine

#Secret Weapons
7600 7610 #Experimental ww1 Tanks

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 9020 9030 27560 27570 27580 27590 27600 #ww1 Doctrines
27460 27470 9010 #Interwar Doctrines
9140

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
14000 14010 14020 #Great War Hospital System

#Naval Doctrines
8010  8020  8030  8040  8050  8070  8100  8110  8120 8900 8910 8920 8930 8940 8950 8150 8160 8060 8080 82300 8500 8510 8520 8550
81650 8200

deactivate = { 6010 6210 6570 6560 6390 }

dormant_leaders = { 54126 54127 }

dormant_teams = { 543 544 545 546 } #doctrine teams

############################################################################################
#########  OOB (...)

landunit = {
id = { type = 30001 id = 1 }
name = "1st Military District"
location = 1707
division = {
id = { type = 10600 id = 46 }
name = "The A.E.F."
strength = 100
type = hq
model = 1
}
division = {
id = { type = 30001 id = 2 }
name = "1st Military District"
strength = 100
type = infantry
extra = artillery
brigade_model = 6
model = 7
}
}


landunit = {
id = { type = 30001 id = 3 }
name = "2nd Military District"
location = 1705
division = {
id = { type = 30001 id = 4 }
name = "2nd Military District"
strength = 100
type = garrison
model = 4
}
}


landunit = {
id = { type = 30001 id = 5 }
name = "New Guinea Defence Force"
location = 1607

division = {
id = { type = 30001 id = 6 }
name = "1st Australian Infantry Div."
strength  = 20
max_strength = 20
type = infantry
model = 7
extra = artillery
brigade_model = 6
}

division = {
id = { type = 30001 id = 195 }
name = "2nd Australian Infantry Div."
strength  = 20
max_strength = 20
type = infantry
model = 7
extra = artillery
brigade_model = 6
}

division = {
id = { type = 30001 id = 18 }
name = "1st Australian Cavalry Div."
strength  = 20
max_strength = 20
type = cavalry
model = 8
}
}


landunit = {
id = { type = 30001 id = 7 }
name = "3rd Military District"
location = 1696
division = {
id = { type = 30001 id = 8 }
name = "3rd Military District"
strength = 100
model = 4
type = garrison }
}


landunit = {
id = { type = 30001 id = 9 }
name = "4th Military District"
location = 1701
division = {
id = { type = 30001 id = 10 }
name = "4th Military District"
strength = 100
type = infantry
model = 7
}
}


landunit = {
id = { type = 30001 id = 11 }
name = "Broome Garrison"
location = 1698
division = {
id = { type = 30001 id = 12 }
name = "Broome Garrison"
strength  = 30
max_strength = 30
locked = yes
type = garrison
model = 4
}
}

landunit = {
id = { type = 30001 id = 13 }
name = "Port Moresby Garrison"
location = 1607
division = {
id = { type = 30001 id = 14 }
name = "Port Moresby Garrison"
strength  = 30
max_strength = 30
locked = yes
type = garrison
model = 4
extra = anti_air
brigade_model = 0
}
}


landunit = {
id = { type = 30001 id = 15 }
name = "Western Australia Defence Force"
location = 1690

division = {
id = { type = 30001 id = 16 }
name = "3rd Australian Infantry Div."
strength  = 20
max_strength = 20
type = infantry
model = 7
extra = artillery
brigade_model = 6
}

division = {
id = { type = 30001 id = 17 }
name = "2nd Australian Cavalry Div."
strength  = 20
max_strength = 20
type = cavalry
model = 8
}
}


################### Australian Air Force #######################

### An approximation of the 13 squadron airforce in 1936.###

airunit = {
location = 1705
base = 1705
id = { type = 10500 id = 15 }
name = "No.1 RAAF Tactical Bomber Group"
division = {
id = { type = 10500 id = 16 }
name = "No.1 RAAF Tactical Bomber Group"
strength = 100
type = tactical_bomber model = 5 }
}


########## Australasian Navy ##############


navalunit = {
name = "Capital Fleet"

id = { type = 30001 id = 218 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 219 } name = "HMAS Malaya" type = Battleship model = 4 }
division = { id = { type = 30001 id = 220 } name = "HMAS Benbow" type = Battleship model = 4 }
division = { id = { type = 30001 id = 221 } name = "HMAS Emperor of India" type = Battleship model = 4 }
division = { id = { type = 30001 id = 222 } name = "HMAS Ajax" type = Battleship model = 3 }
division = { id = { type = 30001 id = 278 } name = "HMAS Temeraire" type = Battleship model = 2 }
division = { id = { type = 30001 id = 223 } name = "HMAS Albatross" type = escort_carrier model = 0 }
division = { id = { type = 30001 id = 280 } name = "HMAS Pegasus" type = escort_carrier model = 0 }
division = { id = { type = 30001 id = 224 } name = "HMAS Carlisle" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 225 } name = "HMAS Delhi" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 226 } name = "HMAS Dragon" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 227 } name = "HMAS Enterprise" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 228 } name = "HMAS Calcutta" type = light_cruiser model = 3 }
}

navalunit = {
name = "Battlecruiser Fleet"
id = { type = 30001 id = 229 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 230 } name = "HMAS Hood" type = Battlecruiser model = 2 }
division = { id = { type = 30001 id = 231 } name = "HMAS Repulse" type = Battlecruiser model = 2 }
division = { id = { type = 30001 id = 232 } name = "HMAS Australia" type = battlecruiser model = 1 }
division = { id = { type = 30001 id = 233 } name = "HMAS New Zealand" type = battlecruiser model = 1 }
division = { id = { type = 30001 id = 279 } name = "HMAS Royal Sovereign" type = battlecruiser model = 1 }
division = { id = { type = 30001 id = 234 } name = "HMAS Leander" type = light_cruiser model = 4 }
division = { id = { type = 30001 id = 235 } name = "HMAS Cairo" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 236 } name = "HMAS Adelaide" type = light_cruiser model = 3 }
division = { id = { type = 30001 id = 237 } name = "HMAS Hobart" type = light_cruiser model = 3 }
}

navalunit = {
name = "Heavy cruiser Fleet"
id = { type = 30001 id = 238 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 239 } name = "HMAS Canberra" type = heavy_cruiser model = 3 }
division = { id = { type = 30001 id = 240 } name = "HMAS Effingham" type = heavy_cruiser model = 3 }
division = { id = { type = 30001 id = 241 } name = "HMAS Hawkins" type = heavy_cruiser model = 3 }
division = { id = { type = 30001 id = 242 } name = "HMAS Suffolk" type = heavy_cruiser model = 3 }
division = { id = { type = 30001 id = 243 } name = "HMAS Carnarvon" type = heavy_cruiser model = 2 }
division = { id = { type = 30001 id = 244 } name = "11th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 245 } name = "12th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 246 } name = "13th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 247 } name = "14th Destroyer Flotilla" type = destroyer model = 3 }
}

navalunit = {
name = "Reserve Fleet"
id = { type = 30001 id = 248 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 250 } name = "HMAS Melbourne" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 251 } name = "HMAS Glasgow" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 252 } name = "HMAS Constance" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 253 } name = "HMAS Sydney" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 254 } name = "HMAS Chatham" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 255 } name = "HMAS Brisbane" type = light_cruiser model = 1 }
division = { id = { type = 30001 id = 281 } name = "HMAS Birmingham" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 282 } name = "HMAS Ceres" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 283 } name = "HMAS Chatham" type = light_cruiser model = 2 }
division = { id = { type = 30001 id = 284 } name = "HMAS Colombo" type = light_cruiser model = 2 }
}

navalunit = {
name = "Destroyer Fleet"
id = { type = 30001 id = 274 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 256 } name = "1st Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 257 } name = "2nd Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 258 } name = "3rd Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 259 } name = "4th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 260 } name = "5th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 261 } name = "6th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 262 } name = "7th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 263 } name = "8th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 264 } name = "9th Destroyer Flotilla" type = destroyer model = 3 }
division = { id = { type = 30001 id = 265 } name = "10th Destroyer Flotilla" type = destroyer model = 3 }
}

navalunit = {
name = "Transport Fleet"
id = { type = 30001 id = 276 }
location = 1707
base = 1707
division = { id = { type = 30001 id = 266 } name = "TPF 1" type = transport model = 1 }
division = { id = { type = 30001 id = 267 } name = "TPF 2" type = transport model = 1 }
division = { id = { type = 30001 id = 268 } name = "TPF 3" type = transport model = 1 }
division = { id = { type = 30001 id = 269 } name = "TPF 4" type = transport model = 1 }
division = { id = { type = 30001 id = 270 } name = "TPF 5" type = transport model = 1 }
division = { id = { type = 30001 id = 271 } name = "TPF 6" type = transport model = 1 }
}

navalunit = {
name = "Submarine Task Force"
id = { type = 30001 id = 272 }
location = 1697
base = 1697
division = { id = { type = 30001 id = 273 } name = "1st Submarine Flotilla" type = submarine model = 3 }
division = { id = { type = 30001 id = 275 } name = "2nd Submarine Flotilla" type = submarine model = 3 }
}




division_development = {
name = "HMAS Brooke"
type = battlecruiser
model = 3
cost = 3.1
id = { type =  30001    id  =  277   }
date = { year = 1937 month = february day = 13 }
}

landunit = {
id = { type = 10600 id = 1 }
name = "New Zealand Expeditionary Force"
location = 1722


division = {
id = { type = 10600 id = 8 }
name = "1st NZ Infantry Division"
strength  = 20
max_strength = 20
type = infantry
model = 7
}
division = {
id = { type = 10600 id = 2 }
name = "2nd NZ Infantry Division"
strength  = 20
max_strength = 20
type = infantry
model = 7
extra = engineer
brigade_model = 3
}
division = {
id = { type = 10600 id = 5 }
name = "3rd NZ Infantry Division"
strength  = 20
max_strength = 20
type = infantry
model = 7
}
division = {
id = { type = 10600 id = 11 }
name = "4th NZ Infantry Division"
strength  = 20
max_strength = 20
type = infantry
model = 7
extra = anti_air
brigade_model = 0
}
}


landunit = {
id = { type = 10600 id = 3 }
name = "1st Mounted Rifles Division"
location = 1696

division = {
id = { type = 10600 id = 4 }
name = "1st Mounted Rifles Division"
strength  = 20
max_strength = 20
type = cavalry
model = 8
}
}


landunit = {
id = { type = 10600 id = 6 }
name = "2nd Mounted Rifles Division"
location = 1716

division = {
id = { type = 10600 id = 7 }
name = "2nd Mounted Rifles Division"
strength  = 20
max_strength = 20
type = cavalry
model = 8
}
}


landunit = {
id = { type = 10600 id = 9 }
name = "3rd Mounted Rifles Division"
location = 1711

division = {
id = { type = 10600 id = 10 }
name = "3rd Mounted Rifles Division"
strength  = 20
max_strength = 20
type = cavalry
model = 8
}
}

landunit = {
id = { type = 10600 id = 12 }
name = "Darwin Garrison"
location = 1697
division = {
id = { type = 10600 id = 13 }
name = "Darwin Garrison"
strength  = 50
max_strength = 50
locked = yes
type = militia
model = 4
}
}

#################################################################################################################################################
# Dormant Units - Conscription
###############################

# Mounted Rifles
######################
# Conscription
landdivision = {
dormant = yes
id = { type = 10600 id = 14 }
name = "1st Mounted Rifles Division"
strength  = 100
type = cavalry
model = 8
}


landdivision = {
dormant = yes
id = { type = 10600 id = 15 }
name = "2nd Mounted Rifles Division"
strength  = 100
type = cavalry
model = 8
}


landdivision = {
dormant = yes
id = { type = 10600 id = 16 }
name = "3rd Mounted Rifles Division"
strength  = 100
type = cavalry
model = 8
}


# Volunteers
landdivision = {
dormant = yes
id = { type = 10600 id = 17 }
name = "1st Mounted Rifles Division"
strength  = 30
type = cavalry
model = 8
}


landdivision = {
dormant = yes
id = { type = 10600 id = 18 }
name = "2nd Mounted Rifles Division"
strength  = 30
type = cavalry
model = 8
}


landdivision = {
dormant = yes
id = { type = 10600 id = 19 }
name = "3rd Mounted Rifles Division"
strength  = 30
type = cavalry
model = 8
}


# Australian Expeditionary Force
##################################
# Conscription
landdivision = {
dormant = yes
id = { type = 10600 id = 20 }
name = "3rd Australian Infantry Div."
strength  = 100
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 21 }
name = "2nd Australian Cavalry Div."
strength  = 100
type = cavalry
model = 8
}

landdivision = {
dormant = yes
id = { type = 10600 id = 22 }
name = "1st Australian Infantry Div."
strength  = 100
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 23 }
name = "2nd Australian Infantry Div."
strength  = 100
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 24 }
name = "1st Australian Cavalry Div."
strength  = 100
type = cavalry
model = 8
}

# Volunteers
landdivision = {
dormant = yes
id = { type = 10600 id = 25 }
name = "3rd Australian Infantry Div."
strength  = 30
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 26 }
name = "2nd Australian Cavalry Div."
strength  = 30
type = cavalry
model = 8
}

landdivision = {
dormant = yes
id = { type = 10600 id = 27 }
name = "1st Australian Infantry Div."
strength  = 30
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 28 }
name = "2nd Australian Infantry Div."
strength  = 30
type = infantry
model = 9
extra = artillery
brigade_model = 6
}

landdivision = {
dormant = yes
id = { type = 10600 id = 29 }
name = "1st Australian Cavalry Div."
strength  = 30
type = cavalry
model = 8
}

# New Zealand Expeditionary Force
####################################
# Full Conscription
landdivision = {
dormant = yes
id = { type = 10600 id = 30 }
name = "1st NZ Infantry Division"
strength  = 100
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 31 }
name = "2nd NZ Infantry Division"
strength  = 100
type = infantry
model = 9
extra = engineer
brigade_model = 3
}
landdivision = {
dormant = yes
id = { type = 10600 id = 32 }
name = "3rd NZ Infantry Division"
strength  = 100
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 33 }
name = "4th NZ Infantry Division"
strength  = 100
type = infantry
model = 9
extra = anti_air
brigade_model = 0
}

# Partial Conscription
landdivision = {
dormant = yes
id = { type = 10600 id = 34 }
name = "1st NZ Infantry Division"
strength  = 75
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 35 }
name = "2nd NZ Infantry Division"
strength  = 75
type = infantry
model = 9
extra = engineer
brigade_model = 3
}
landdivision = {
dormant = yes
id = { type = 10600 id = 36 }
name = "3rd NZ Infantry Division"
strength  = 75
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 37 }
name = "4th NZ Infantry Division"
strength  = 75
type = infantry
model = 9
extra = anti_air
brigade_model = 0
}

# Volunteers
landdivision = {
dormant = yes
id = { type = 10600 id = 38 }
name = "1st NZ Infantry Division"
strength  = 30
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 39 }
name = "2nd NZ Infantry Division"
strength  = 30
type = infantry
model = 9
extra = engineer
brigade_model = 3
}
landdivision = {
dormant = yes
id = { type = 10600 id = 40 }
name = "3rd NZ Infantry Division"
strength  = 30
type = infantry
model = 9
}
landdivision = {
dormant = yes
id = { type = 10600 id = 41 }
name = "4th NZ Infantry Division"
strength  = 30
type = infantry
model = 9
extra = anti_air
brigade_model = 0
}

############################################################################################
######### Additional Garrisons

landunit = {
id = { type = 10600 id = 42 }
name = "Melbourne Garrison"
location = 1708
division = {
id = { type = 10600 id = 43 }
name = "Melbourne Garrison"
strength  = 30
max_strength = 30
locked = yes
type = garrison
model = 4
}
}

landunit = {
id = { type = 10600 id = 44 }
name = "Brisbane Garrison"
location = 1704
division = {
id = { type = 10600 id = 45 }
name = "Brisbane Garrison"
strength  = 30
max_strength = 30
locked = yes
type = garrison
model = 4
extra = anti_air
brigade_model = 0
}
}


}
