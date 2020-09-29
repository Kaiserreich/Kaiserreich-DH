


country = {
    tag = HOL

ai = "kaiserreich\Holland.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        free_market = 9
        freedom = 10
        professional_army = 5
        defense_lobby = 1
        interventionism = 1
    }

#### cabinet
	headofstate = { type = 9 id = 8001 }
	headofgovernment = { type = 9 id = 8002 }
	foreignminister = { type = 9 id = 8066 }
	armamentminister = { type = 9 id = 8004 }
	ministerofsecurity = { type = 9 id = 8005 }
	ministerofintelligence = { type = 9 id = 8006 }
	chiefofstaff = { type = 9 id = 8157 } #Izaak Reynders
	chiefofarmy = { type = 9 id = 8154 } #Godfried van Voorst tot Voorst
	chiefofnavy = { type = 9 id = 8028 } #Hendrikus Ferwerda
	chiefofair = { type = 9 id = 8236 } #Johan G.W. Zegers

#### Resource Reserves

SpyInfo  = {  country = "HOL" NumberOfSpies = 4  } 

	capital = 122
	manpower = 3
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money	=	40



    ownedprovinces =      {
		#Homeland
		125 122 123 118 119 124 120 121
		1639 1640 1635 1761 1637 1636 1638 1648 1651 1649 1654 1653 1655 1656 1643 1619 1644 1645 
                              1615 1657 1630 1631  1628 1627 1632 1633 1660 1658 1659 1620 1621 1622 1616 1599 1600 1641 1601 1642 1595 1596 1598 
                              1597 1762  1999  1634 1629 1623 1618 1594 1647 1646 1650 1652
	 }
    controlledprovinces = {
		#Homeland
		125 122 123 118 119 124 120 121
		1639 1640 1761 1635 1637 1636 1638 1648 1651 1649 1654 1653 1655 1656 1643 1619 1644 1645 
                              1615 1657 1630 1631  1628 1627 1632 1633 1660 1658 1659 1620 1621 1622 1616 1599 1600 1641 1601 1642 1595 1596 1598 
                              1597 1762  1999  1634 1629 1623 1618 1594 1647 1646 1650 1652
	  }
    nationalprovinces =   {
		125 122 123 118 119 124 120 121
	}

dormant_teams = { 2301 2314 2315 2324 } #BEL teams

dormant_leaders = { }

diplomacy = {
relation = {   tag =    	BEL	value = 		24	   }  
relation = {   tag =  	GER	 value =		79	   }  
relation = {   tag =  	AUS	value = 		49	   }  
relation = {   tag =  	HUN	 value =		20	   }  
relation = {   tag =  	SPA	value = 		50	   }  
relation = {   tag =  	ENG	value = 		-24	   }  
relation = {   tag =  	FRA	value = 		-89	   }  
relation = {   tag =  	CAN	value = 		30	   }  
relation = {   tag =  	VIC	value = 		50	   }  
relation = {   tag =  	RUS	 value =		10	   }  
relation = {   tag =  	OTT	 value =		30	   }  
relation = {   tag =  	CON	value = 		40	   }  
relation = { tag =	USA	value = 		30	 }
relation = {   tag =  	JAP	value = 		40	   }  
}


	
	techapps = {

# Group C 1936 techs
#######################
#Infantry
1830 1840 1850 1860 #Engineers
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1560 #1922 Naval Infantry

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 2900 2910 2920 #Great War Heavy Field Artillery
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade
7600 7610 2620 2010 2630 2640 #Light armor brigades only techs / advanced Light armor

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 3150 3160 #De ruyter Light Cruiser
3210 3220 3230 #Improved Heavy Cruiser 
3310 3320 3330 #Heavy Battlecruiser (just to let player build project 1047 if they want it, they have to research it)
3410 3420 3430 3440 3450 #Early Battleship
3610 3620 3630 3640 3650 #KXVI class
12100 12110 #Converted Light Carrier
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 3820 #1925 transport

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter
4800 4810 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4900 4910 4920 #CAG 34
4740 4750 4760 4770 4780 #Seaplanes 1928

#Industrial
5700 5710 5010 5020 #Modern Agriculture
5310 54010 54020 54030 5316 5326 #Computers & cryptography
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering
5470 #Faculty of Atomic Research
5600 5610 5620 5630 #Medicine
5190 #Basic Oil Refining
5410 #Basic Decimetric Radar Warning Sites

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Defensive Focus Grand Battleplan Path
6560 6030
14000 14010 14020 #Great War Hospital System


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval Doctrines
8050  8070 8010 8020 8030 8040 8060 8080
81300 81310 81320 81330 81340
8500 8510 8520 # Naval Interdiction
8100 8110 8120 # Naval Supremacy
82300 # Amphib
82500 # Logistic Support
81650 # Carrier Doctrine

	}

#########  OOB (...)

	transports = 150
	escorts = 21

	landunit = {
	id = { type = 18500 id = 1 }
	location = 122
	name = "1e Legerkorps"
		division = { id = { type = 18500 id = 2 } name = "1e Divisie"	type = infantry model = 7 extra = artillery brigade_model = 4 }
		division = { id = { type = 18500 id = 3 } name = "2e Divisie"   type = infantry model = 7	}
	}

	landunit = {
	id = { type = 18500 id = 4 }
	location = 124
	name = "2e Legerkorps"
		division = { id = { type = 18500 id = 5 } name = "3e Divisie"	type = infantry model = 7 extra = artillery brigade_model = 4 }
		division = { id = { type = 18500 id = 6 } name = "4e Divisie"	type = infantry	model = 7 }
	}

	landunit = {
	id = { type = 18500 id = 7 }
	location = 119
	name = "3e Legerkorps"
		division = { id = { type = 18500 id = 8 } name = "5e Divisie"	type = infantry model = 7 extra = artillery brigade_model = 4 }
		division = { id = { type = 18500 id = 9 } name = "6e Divisie"	type = infantry	model = 7 }
	}

	landunit = {
	id = { type = 18500 id = 10 }
	location = 120
	name = "4e Legerkorps"
		division = { id = { type = 18500 id = 11 } name = "7e Divisie"	type = infantry model = 7 extra = artillery brigade_model = 4 }
		division = { id = { type = 18500 id = 12 } name = "8e Divisie"	type = infantry	model = 7 }
	}

	landunit = {
	id = { type = 18500 id = 13 }
	location = 1647
	name = "Koninklijk Nederlands Indisch Leger"
		division = { id = { type = 18500 id = 14 } name = "Ie Divisie 'Java'"	type = d_01 model = 7 extra = armored_car brigade_model = 2 }
	}

	landunit = {
	id = { type = 18500 id = 43 }
	name = "Soerabaja Divisie"
	location = 1653
	division = { id = { type = 18500 id = 44 } name = "IIIe Divisie 'Java'"	type = d_01 model = 7 extra = police brigade_model = 1 }
	}

	landunit = {
	id = { type = 18500 id = 45 }
	name = "Tjilegon Divisie"
	location = 1648 #Tjilegon, protecting the port
	division = { id = { type = 18500 id = 46 } name = "IIe Divisie 'Java'"	type = d_01 model = 7 }
	}

	navalunit = {
 id = { type = 18500 id = 17 }
 location = 122
 base = 122
 name = "Koninklijke Vloot"
 division = { id = { type = 18500 id = 68 } name = "HrMs Orestes" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 69 } name = "HrMs Iazon" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 71 } name = "3e Torpedobootjager Smaldeel" type = destroyer model = 3 }
 division = { id = { type = 18500 id = 72 } name = "4e Torpedobootjager Smaldeel" type = destroyer model = 4 }
 division = { id = { type = 18500 id = 23 } name = "1e Transport Smaldeel" type = transport model = 1 }
 division = { id = { type = 18500 id = 24 } name = "2e Transport Smaldeel" type = transport model = 1 }
 division = { id = { type = 18500 id = 25 } name = "3e Transport Smaldeel" type = transport model = 1 }
 division = { id = { type = 18500 id = 26 } name = "4e Transport Smaldeel" type = transport model = 1 }
 }

 navalunit = {
 id = { type = 18500 id = 27 }
 location = 1653 #Soerabaja
 base = 1653
 name = "Nederlands Onderzeeër Flottielje"
 division = { id = { type = 18500 id = 34 } name = "1e Oost Indie Onderzeeër Flottielje" type = submarine model = 3 }
 division = { id = { type = 18500 id = 74 } name = "2e Oost Indie Onderzeeër Flottielje" type = submarine model = 3 }
 division = { id = { type = 18500 id = 35 } name = "3e Oost Indie Onderzeeër Flottielje" type = submarine model = 4 }
 division = { id = { type = 18500 id = 39 } name = "4e Oost Indie Onderzeeër Flottielje" type = submarine model = 3 }
 division = { id = { type = 18500 id = 40 } name = "5e Oost Indie Onderzeeër Flottielje" type = submarine model = 3 }
 division = { id = { type = 18500 id = 41 } name = "6e Oost Indie Onderzeeër Flottielje" type = submarine model = 3 }
 }

 navalunit = {
 id = { type = 18500 id = 50 } 
 location = 1653 #
 base = 1653
 name = "Nederlands Indische Slagschip Flottielje"
 division = { id = { type = 18500 id = 51 } name = "HrMs Gouden Leeuw" type = carrier model = 1 extra = cag brigade_model = 1 }
 division = { id = { type = 18500 id = 52 } name = "HrMs Aemilia" type = battleship model = 6 }
 division = { id = { type = 18500 id = 53 } name = "HrMs Mercurius" type = battleship model = 6 }
 division = { id = { type = 18500 id = 54 } name = "HrMs Groote Liefde" type = battleship model = 6 }
 division = { id = { type = 18500 id = 55 } name = "HrMs Sint Matheeus" type = battleship model = 6 }
 division = { id = { type = 18500 id = 60 } name = "HrMs Hollandia" type = battlecruiser model = 2 }
 division = { id = { type = 18500 id = 61 } name = "HrMs Zeeland" type = battlecruiser model = 2 }
 division = { id = { type = 18500 id = 62 } name = "HrMs Gelderland" type = battlecruiser model = 2 }
 division = { id = { type = 18500 id = 63 } name = "HrMs Flores" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 64 } name = "HrMs Sumatra" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 65 } name = "HrMs Soemba" type = light_cruiser model =2 }
 division = { id = { type = 18500 id = 66 } name = "HrMs Celebes" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 67 } name = "HrMs Java" type = light_cruiser model = 2 }
 division = { id = { type = 18500 id = 70 } name = "HrMs Komeet" type = heavy_cruiser model = 2 }
 division = { id = { type = 18500 id = 21 } name = "1e Torpedobootjager Smaldeel" type = destroyer model = 5 }
 division = { id = { type = 18500 id = 73 } name = "5e Torpedobootjager Smaldeel" type = destroyer model = 4 }
 division = { id = { type = 18500 id = 75 } name = "6e Torpedobootjager Smaldeel" type = destroyer model = 4 }
 }

	airunit = { 
	id = { type = 18500 id = 36 }
	location = 122 #Amsterdam
	base = 122
	name = "1e Jagervleugel"
		division = { 
		id = { type = 18500 id = 37 }
		name = "1e Jagereskadron"
		type = interceptor
		model = 7
		}
	}
		airunit = { 
	id = { type = 18500 id = 38 }
	location = 1653 #Soerabaja
	base = 1653
	name = "1e Torpedovleugel"
		division = { 
		id = { type = 18500 id = 42 }
		name = "1e Eskadron Torpedobommenwerpers"
		type = naval_bomber
		model = 2
		}
	}

}  