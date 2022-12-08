country = {
tag = VIE
puppet = UPR
ai = "kaiserreich\minor_default.ai" #we need a dedicated AI file for them
policy = {
date = { year = 0 month = january day = 0 }
democratic = 4
political_left = 3
free_market = 5
freedom = 6
professional_army = 6
defense_lobby = 7
interventionism = 6
}

peacetime_ic_mod = 0.75

#headofstate = { type = 9 id = 36 } #we will figure out ministers soon.jpg
#headofgovernment = { type = 9 id = 386 }
#foreignminister = { type = 9 id = 68 }
#armamentminister = { type = 9 id = 77 }
#ministerofsecurity = { type = 9 id = 121 }
#ministerofintelligence = { type = 9 id = 12 }
#chiefofstaff = { type = 9 id = 257 }
#chiefofarmy = { type = 9 id = 255 }
#chiefofnavy = { type = 9 id = 9 }
#chiefofair = { type = 9 id = 273 }




#### Resource Reserves

SpyInfo  = {  country = "VIE" NumberOfSpies = 4  }

capital = 1395

manpower = 75

energy	=	100   metal	= 100		rare_materials =	50	oil =	50	supplies =	100
money	=	70
free = { ic = 5 }

ownedprovinces = {
1397 1394 1396 1405 1395 1391 1404 1392 1393 #Indochine
}

controlledprovinces = {
1397 1394 1396 1405 1395 1391 1404 1392 1393 #Indochine
}

nationalprovinces = {
1399 1403 1397 1398 1396 1395 1392 1393 #Indochine
}

claimedprovinces = {
1400 1401 1402 1394 1391 1404 1405
}

diplomacy = {
relation = { tag = EAF value = 100 } 
relation = { tag = GER value = 200 }
relation = { tag = UPR value = -75 }
relation = { tag = JAP value = -75 }
relation = { tag = MAN value = -75 }
relation = { tag = MEN value = -75 }
}


techapps = {
#German Colony 20s techs
#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1924
1830 1840 1850 #Engineers

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 #1918 tanks

#Naval
3010 3020 3030 3040 3050 #Up to 1923 DD
3110 3120 3130 3140 #Up to IW CL
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #1922 CAS

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineerings
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


}