country = {
    tag = UCS  
	#ai = "kaiserreich\Yunnan.ai"

	puppet = CGX

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		freedom = 3
		free_market = 4
		professional_army = 2
		defense_lobby = 9
		interventionism = 1
	}

#### cabinet
headofstate = { type = 9 id = 99039 } #Yang Sen
headofgovernment = { type = 9 id = 99018 } #Liu Xiang
foreignminister = { type = 9 id = 99102 } #Zhang Biguo
armamentminister = { type = 9 id = 99142 } #Liu Hangchen
ministerofsecurity = { type = 9 id = 99076 } #Wang Zanxu
ministerofintelligence = { type = 9 id = 99143 } #Liu Hangchen
chiefofstaff = { type = 9 id = 99053 } #Guo Changming (Wang Lingji [99227] also an option)
chiefofarmy = { type = 9 id = 99249 } #Guo Rudong (Qiao Yifu [99244] also an option)
chiefofnavy = { type = 9 id = 99061 } #Zheng Dongqin
chiefofair = { type = 9 id = 99265 } #Jiang Kui

#### Resource Reserves

	energy		= 200
	metal		= 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1297
	manpower = 200

	free = { ic = 7 }

	SpyInfo = { country = "UCS" NumberOfSpies = 3 }

	ownedprovinces = {
		1291 1292 1293 1297 1261 1262 1296 1298 1267 1302 1299 1301
	}
	controlledprovinces = {
		1291 1292 1293 1297 1261 1262 1296 1298 1267 1302 1299 1301
	}
	nationalprovinces = {
		1291 1292 1293 1297 1261 1262 1296 1298 1267 1302 1299 1301
	}

diplomacy = {
relation = { tag = EAF value = -100  } 
relation = { tag = GER value = 50 }
relation = { tag = CGX value = 50 }
relation = { tag = JAP value = -75 }
relation = { tag = MAN value = -75 }
relation = { tag = MEN value = -75 }
relation = { tag = CYN value = 25 }
relation = { tag = CSX value =  25 }
relation = { tag = UIR value = -100 }
relation = { tag = UCS value = -50 }
relation = { tag = UGS value = 50 }
}

	techapps               = { #Warlord Technologies: Proudly serving warlord states since 2021
  #Infantry Tech
  1010 1020 1030 1040 1050 1060 1070 1080 #1926 Infantry
  1160 1170 1180 1190 1200 1210 1220 1230 #1925 Mountain Infantry
  1830 1840 1850 #1921 Engineering Brigade
  13060 13070 13080 1310 1320 1330 1340 1350 #1924 Cavalry
  1910 1920 1930 1940 1950 1960 1970 #1924 Logistics
  
  # Armor and Artillery
  2860 2870 2880 #1921 Armored Car
  2290 2300 2310 2900 2910 2920 #1924 Artillery
  2800 2450 #1921 Static Anti-Air Artillery
  2810 #AA Brigade 1918
  
  # Aircraft
  4500 4510 4520 4530 4540 4550 # Interceptor 1918
  4600 4610 4620 4630 # Tactical Bomber 1918
  7290 7300 7310 # 1918 Ground attack aircraft
  
  #Industrial 
  5810 5820 5050 5830 # Manufacturing support systems
  5800 5080 # Basic Construction Engineering
  5190 # Basic Oil Refining
  5310 54010 # Automatic feed tabulator
  5316 # Ciphering Machine 
  5700 5710 5010 # Modern Agriculture
  5600 5610 # Indirect Blood transfusions
  
  #Land Doctrine Techs
  6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 #Weltkrieg Doctrine, Entente Side
  6390 # Light Infantry doctrine
  
  #Secret Weapons SHHHHHHH TOP SECRET
  7600 7610 # Heavy Tank
 
  # Air Doctrines
  27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 #Weltkrieg and Interwar Doctrines pre-1936
   }

	dormant_teams = { 4611 4614 } #Panzhihua Iron and Steel
}