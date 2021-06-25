


country = {
    tag = UPE  
#ai = "kaiserreich\AOG.ai"

	puppet = GER


	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 3
		freedom = 3
		free_market = 4
		professional_army = 7
		defense_lobby = 7
		interventionism = 5
	}

#### cabinet
	headofstate = { type = 9 id = 97009 } #Wolfgang Wegener
	headofgovernment = { type = 9 id = 97021 } #Albert Hahl
	foreignminister = { type = 9 id = 97028 } #Felix von Luckner
	armamentminister = { type = 9 id = 97026 } #Karl Helfferich
	ministerofsecurity = { type = 9 id = 97029 } #Felix von Luckner
	ministerofintelligence = { type = 9 id = 97074 } #Erich Hüttenhain
	chiefofstaff = { type = 9 id = 97095 } #Josias zu Waldeck und Pyrmont
	chiefofarmy = { type = 9 id = 97081 } #Kurt von Tippelskirch
	chiefofnavy = { type = 9 id = 97010 } #Wolfgang Wegener
	chiefofair = { type = 9 id = 97151 } #Gottlob Müller
#### Resource Reserves
		energy		= 200
		metal		= 200
		rare_materials 	= 100
		oil 		= 100
		supplies 	= 100
		money		= 50
		transports	= 150
  
	capital = 1432 #Singapore
	manpower = 200

        free = { ic = 10 energy = 20 }

SpyInfo  = {  country = "UPE" NumberOfSpies = 5  } 

    ownedprovinces =      {
		1432 1437 1438 1234 1365 1367 1624 1625 1626 1670 1671 1748 1668 1669 1684 1685 1686 1667 1676 1665 1666 1674 1675 1681 1677 1678 1679
		1680 1682 1687 1602 1605 1610 1603 1724 1725 1726 1727 1587 1589 1588 1591 1590 1593 1582 1592
		1581 1583 1584 1585 1586  1730 1749 1731 1750 1744 1743 1740 1732 1746 1741 1742 1399 1400 1401 1402 1403 1398
	 }
    controlledprovinces = {
		1432 1437 1438 1234 1365 1367 1624 1625 1626 1670 1671 1748 1668 1669 1684 1685 1686 1667 1676 1665 1666 1674 1675 1681 1677 1678 1679
		1680 1682 1687 1602 1605 1610 1603 1724 1725 1726 1727 1587 1589 1588 1591 1590 1593 1582 1592
		1581 1583 1584 1585 1586  1730 1749 1731 1750 1744 1743 1740 1732 1746 1741 1742 1399 1400 1401 1402 1403 1398
 
	  }
    nationalprovinces =   {
		1432 1437 1438 1234 1365 1367 1624 1625 1626 1670 1671 1748 1668 1669 1684 1685 1686 1667 1676 1665 1666 1674 1675 1681 1677 1678 1679
		1680 1682 1687 1602 1605 1610 1603 1724 1725 1726 1727 1587 1589 1588 1591 1590 1593 1582 1592
		1581 1583 1584 1585 1586  1730 1749 1731 1750 1744 1743 1740 1732 1746 1741 1742 1399 1400 1401 1402 1403 1398 
	}

diplomacy = {
		relation = { tag = EAF value = 100 guaranteed = { day = 29 month = december year = 1935   } 	   } 
relation = { tag = GER value = 200 }
relation = { tag = JAP value = -75 }
relation = { tag = MAN value = -75 }
relation = { tag = MEN value = -75 }
relation = { tag = CSX value = -75 }
relation = { tag = VIE value = 125 access = yes }
}


	
	techapps = {
#German Colony 20s techs
#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
1560 1570 #1925 Naval Infantry
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1924
1830 1840 1850 #Engineers

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 #1919 Tanks

#Naval
3010 3020 3030 3040 3050 #Up to 1923 DD
3110 3120 3130 3140 #Up to IW CL
3610 3620 3630 3640 #1924 Submarine
12100 12110 12120 #1920 Light Carrier
3810 3820 #1925 Troopship
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 4780 #1928 Seaplanes
4700 4710 #1924 Naval Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #1922 CAS
4900 #1922 CAG

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineerings
5310 54010 54020 #Analog Fire control
5316 5326 5327 #Early Decryption
5190 #Basic Oil refining
5810 5820 5050 5830 5060 5070 #Manufacturing up to impr Mac tools
5600 5610 5620 #Medicine
55000 #Mining 1935

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into superior firepower
14000 14010 #Hospitals

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Naval Doctrines (all ww1 doctrines learned by Germany)
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 81340 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics
}

#########  OOB (...)

landunit = {
name = "Auslands Festungs Kommando Singapore"
location = 1432
id = { type = 14502 id = 122 }
division = {
id = { type = 14502 id = 123 }
name = "Auslands Festungs Kommando Singapore"
type = garrison
model = 4
strength = 50  }
}

landunit = {
location = 1365 ### Haikou
name = "Auslands Kommando Hainan"
id = { type = 14502 id = 110 }
division = {
id = { type = 14502 id = 111 }
name = "Auslands Festungs Kommando Hainan"
type = d_01
model = 7
strength = 50
}
}

landunit = {
location = 1432    ### [Indochina]
name = "2. Schutztruppen Division"
id = { type = 14502 id = 99 }
division = {
id = { type = 14502 id = 101 }
name = "2. Schutztruppen Division"
type = marine
model = 2
strength = 100
}
}


landunit = {
location = 1395   ### [Hanoi]
name = "3. Schutztruppen Division"
id = { type = 14502 id = 102  }
division = {
id = { type = 14502 id = 103  }
name = "3. Schutztruppen Division"
type = marine
model = 2
strength = 100
}
}



landunit = {
location = 1667  ### [Truk]
name = "4. Schutztruppen Division"
id = { type = 14502 id = 104 }
division = {
id = { type = 14502 id = 105 }
name = "4. Schutztruppen Division"
type = marine
model = 2
strength = 100
}
}

landunit = {
location = 1432  ### (Singapore)
name = "OHL Hauptquartier Asien"
id = { type = 14502 id = 136 }
division = {
id = { type = 14502 id = 137 }
name = "Hauptquartier Asien"
type = hq
model = 2
strength = 100
}
}

landunit = {
location = 1399  ### [Saigon]
name = "Auslands Kommando Südostasien"
id = { type = 14502 id = 107  }
division = {
id = { type = 14502 id = 106  }
name = "Auslands Kommando Südostasien"
type = d_01
model = 7
strength = 100
}
}

landunit = {
location = 1365 ### Haikou

name = "Auslands Kommando China"
id = { type = 14502 id = 108  }
division = {
id = { type = 14502 id = 109 }
name = "Auslands Kommando China"
type = d_01
model = 7
strength = 100
}
}

landunit = {
location = 1602   ###    Neuguinea

name = "Auslands Kommando Neuguinea"
id = { type = 14502 id = 118 }
division = {
id = { type = 14502 id = 119 }
name = "Auslands Kommando Neuguinea"
type = d_01
model = 7
strength = 50
}
}
# Air OOB
airunit = {
		location = 1432 # Singapore
		name = "Luftflotte Asien"
		base = 1432 # Singapore
		id = { type = 14501 id = 2008 }
		division = {
			id = { type = 14501 id = 2009 }
			name = "Luftflotte Asien"
              type = multi_role model = 3  
			max_strength = 40
			strength = 20
		}
	}
	
airunit = { 
location = 1399 
id = { type = 15300 id = 2010 } 
name = "Luftwaffe Vietnam"
base = 1399
division = { id = { type = 15300 id = 2011 } name = "Gemischte Staffel 1" strength = 6 type = tactical_bomber model = 4 }
division = { id = { type = 15300 id = 2012 } name = "Autonomes Luftgeschwader 1" strength = 30 type = interceptor model = 6 }
}

#Navy OOB Insert German Name Here

navalunit = {
name = "Ostasienschwadron"
id = { type = 14500 id = 264 }
location = 1432
base = 1432 ### Singapore
division = { id = { type = 14500 id = 265 } name =  "SMS Blumenthal" type = carrier  model = 1  extra = cag brigade_model = 1  }
division = { id = { type = 14500 id = 365 } name =  "SMS Roon" type = escort_carrier   model = 0  }
division = { id = { type = 14500 id = 358 } name =  "SMS Helgoland" type = battleship  model = 2  }
division = { id = { type = 14500 id = 359 } name =  "SMS Posen" type = battleship  model = 2  }
division = { id = { type = 14500 id = 360 } name =  "SMS Nassau" type = battleship   model = 2 }
division = { id = { type = 14500 id = 361 } name =  "SMS König Albert" type = battleship   model = 2 }
division = { id = { type = 14500 id = 364 } name =  "SMS Rheinland" type = battleship   model = 2 }
division = { id = { type = 14500 id = 266 } name =  "SMS Hindenburg" type = battlecruiser  model = 1 }
division = { id = { type = 14500 id = 362 } name =  "SMS Von der Tann" type = battlecruiser  model = 1 }
division = { id = { type = 14500 id = 267 } name =  "SMS Mackensen" type = battlecruiser  model = 2   }
division = { id = { type = 14500 id = 268 } name =  "SMS Derfflinger" type = battlecruiser  model = 1   }
division = { id = { type = 14500 id = 363 } name =  "SMS Fürst Bismarck" type = battlecruiser  model = 0 }
division = { id = { type = 14500 id = 269 } name =  "SMS Admiral Pohl" type = heavy_cruiser model = 4 }
division = { id = { type = 14500 id = 270 } name =  "SMS Bonn" type = light_cruiser  model = 4 }
division = { id = { type = 14500 id = 271 } name =  "SMS Bamberg" type = light_cruiser  model = 4 }
division = { id = { type = 14500 id = 272 } name =  "SMS Bayreuth" type = light_cruiser  model = 4 }
division = { id = { type = 14500 id = 373 } name =  "SMS Bayreuth" type = light_cruiser  model = 2 }
division = { id = { type = 14500 id = 371 } name =  "SMS Stuttgart"  type = light_cruiser model = 2 }
division = { id = { type = 14500 id = 372 } name =  "SMS Niobe"  type = light_cruiser model = 2 }
division = { id = { type = 14500 id = 273 } name =  "9. Zerstörergeschwader" type = destroyer   model = 5   }
division = { id = { type = 14500 id = 274 } name =  "18. Zerstörergeschwader" type = destroyer    model = 4  }
division = { id = { type = 14500 id = 275 } name =  "19. Zerstörergeschwader" type = destroyer    model = 4  }

}

navalunit = {
name = "Unterseebootsflotte Asien "
id = { type = 14500 id = 276 }
location = 1432 #### Singapore
base = 1432
division = { id = { type = 14500 id = 277 } name =  "6. Unterseebootsflottille" type = submarine  model = 3 }
division = { id = { type = 14500 id = 278 } name =  "7. Unterseebootsflottille" type = submarine model = 3  }
division = { id = { type = 14500 id = 279 } name =  "8. Unterseebootsflottille" type = submarine model = 3  }

}

navalunit = {
name = "Karolinenflotte "
id = { type = 14500 id = 280 }
location = 1667 #### Truk
base = 1667
division = { id = { type = 14500 id = 281 } name =  "SMS Freiherr von Sanders" type = battlecruiser  model = 2  }
division = { id = { type = 14500 id = 366 } name =  "SMS Prinz Heinrich" type = battlecruiser  model = 0 }
division = { id = { type = 14500 id = 282 } name =  "SMS Metz" type = light_cruiser  model = 3 }
division = { id = { type = 14500 id = 368 } name =  "SMS Strassburg" type = light_cruiser  model = 2 }
division = { id = { type = 14500 id = 369 } name =  "SMS Augsburg" type = light_cruiser  model = 2 }
division = { id = { type = 14500 id = 283 } name =  "10. Zerstörergeschwader" type = destroyer   model = 3   }

}

navalunit = {
name = "III. Truppentransporterflottille"
id = { type = 14500 id = 313 }
location = 1432
base = 1432
division = { id = { type = 14500 id = 352 } name = "13. Truppentransporterflottille" type = transport model = 1 }
division = { id = { type = 14500 id = 353 } name = "14. Truppentransporterflottille" type = transport model = 1 }
division = { id = { type = 14500 id = 354 } name = "15. Truppentransporterflottille" type = transport model = 1 }
}
}