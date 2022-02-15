
country = {
    tag = CYN  
    ai = "kaiserreich\Yunnan.ai"
	
		puppet = CGX

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 6
		political_left = 4
		freedom = 3
		free_market = 3
		professional_army = 3
		defense_lobby = 5
		interventionism = 3
	}

#### cabinet
#Tang Jiyao starting cabinet
headofstate = { type = 9 id = 501019 } #Tang Jiyao
headofgovernment = { type = 9 id = 501045 } #Zhou Zhongyue
foreignminister = { type = 9 id = 501069 } #Li Yuegai
armamentminister = { type = 9 id = 501082 } #Wang Jiuling
ministerofsecurity = { type = 9 id = 501053 } #Tang Jiyu
ministerofintelligence = { type = 9 id = 501086 } #Dong Ze
chiefofstaff = { type = 9 id = 501141 } #Wang Zhaoxiang (Gao Yinhuai [501146] also an option)
chiefofarmy = { type = 9 id = 501056 } #Hu Ying
chiefofnavy = { type = 9 id = 501105 } #Zeng Shuhuai
chiefofair = { type = 9 id = 501178 } #Liu Peiquan

#Long Yun starting cabinet
#headofstate = { type = 9 id = 501024 } #Long Yun
#headofgovernment = { type = 9 id = 501054 } #Hu Ying (Zhang Weihan [501049] also an option)
#foreignminister = { type = 9 id = 501050 } #Zhang Weihan (Gong Zizhi [501072] also an option)
#armamentminister = { type = 9 id = 501090 } #Lu Chongren
#ministerofsecurity = { type = 9 id = 501113 } #Ding Zhaoguan
#ministerofintelligence = { type = 9 id = 501169 } #Yang Hongguang (An Enpu [501048] also an option)
#chiefofstaff = { type = 9 id = 501150 } #Sun Du (Gao Yinhuai [501146] also an option)
#chiefofarmy = { type = 9 id = 501162 } #Huang Yucheng (Gao Yinhuai [501147] also an option)
#chiefofnavy = { type = 9 id = 501173 } #Lu Daoyuan
#chiefofair = { type = 9 id = 501178 } #Liu Peiquan
#### Resource Reserves

	# Resource Reserves
	energy		= 250
	metal		= 250
	rare_materials 	= 100
	oil 		= 100
	supplies 		= 250
	money		= 50

	capital = 1390 # Kunming
	manpower = 200
	dissent = 0
  
        free = { ic = 10 } 

SpyInfo  = {  country = "CYN" NumberOfSpies = 2  } 

    ownedprovinces =      {
		1389 1390 1384 1385 1387 1386 1388
	 }
    controlledprovinces = {
		1389 1390 1384 1385 1387 1386 1388
	  }
    nationalprovinces =   {
		1389 1390 1384 1385 1387 1386 1388
	}
	claimedprovinces = {
	1300 1304 1303 1305 1296 1297 1298 1262 1292 1293 1291 1261 1267 1302 1299
	}

diplomacy = {
relation = { tag = CSX value = -75 }
relation = { tag = JAP value = -75 }
relation = { tag = MAN value = -75 }
relation = { tag = MEN value = -75 }
relation = { tag = CGX value = -75 }
relation = { tag = BUR value = 24 }
relation = { tag = TIB value = 24 }
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
  6390 6400 # Light Infantry doctrine
  
  #Secret Weapons SHHHHHHH TOP SECRET
  7600 7610 # Heavy Tank
 
  # Air Doctrines
  27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 #Weltkrieg and Interwar Doctrines pre-1936
   }

#########  OOB (...)


	landunit = {
		location = 1390 # Kunming
		name = "Yunnan Jingbei"
		leader = 501003 # Long Yun
		id = { type = 22100 id = 1 }
		division = {
	        	id = { type = 22100 id = 2 }
			name = "21. Duli Lü"
			type = infantry
			strength = 100
			model = 5
		}
		division = {
	        	id = { type = 22100 id = 3 }
			name = "22. Duli Lü"
			type = infantry
			strength = 100
			model = 5
		}
		division = {
	        	id = { type = 22100 id = 4 }
			name = "23. Duli Lü"
			type = infantry
			strength = 50
			model = 5
		}

	}
	landunit = {
		location = 1299 # Nanchong
		name = "24. Jun"
		leader = 501019 # Huang Yucheng
		id = { type = 22100 id = 11 }
		division = {
	        	id = { type = 22100 id = 12 }
			name = "136. Bubing Shi"
			type = infantry
			strength = 100
			model = 5
		}
		division = {
	        	id = { type = 22100 id = 13 }
			name = "137. Bubing Shi"
			type = infantry
			strength = 100
			model = 5
		}

	}

	landunit = {
		location = 1302
		name = "Sichuan Baoantui"
		id = { type = 22000 id = 270 }
		division = {
	        	id = { type = 22000 id = 271 }
			name = "Sichuan Baoantui"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1267
		name = "47. Jun"
		id = { type = 22000 id = 122 }
		division = {
	        	id = { type = 22000 id = 123 }
			name = "47. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1261
		name = "21. Jun"
		id = { type = 22000 id = 49 }
		division = {
	        	id = { type = 22000 id = 50 }
			name = "21. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1298
		name = "23. Jun"
		id = { type = 22000 id = 57 }
		division = {
	        	id = { type = 22000 id = 58 }
			name = "23. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1300
		name = "44. Jun"
		id = { type = 22000 id = 109 }
		division = {
	        	id = { type = 22000 id = 110 }
			name = "44. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1303
		name = "45. Jun"
		id = { type = 22000 id = 113 }
		division = {
	        	id = { type = 22000 id = 114 }
			name = "45. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1388 # Wenshan
		name = "7. Lujun"
		id = { type = 22000 id = 156 }
		division = {
	        	id = { type = 22000 id = 157 }
			name = "7. Lujun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1387
		name = "4. Jun"
		id = { type = 22000 id = 12 }
		division = {
	        	id = { type = 22000 id = 13 }
			name = "4. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1262
		name = "5. Jun"
		id = { type = 22000 id = 15 }
		division = {
	        	id = { type = 22000 id = 16 }
			name = "5. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1297
		name = "20. Jun"
		id = { type = 22000 id = 45 }
		division = {
	        	id = { type = 22000 id = 46 }
			name = "20. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1291
		name = "Guizhou Silingbu"
		id = { type = 22000 id = 218 }
		division = {
	        	id = { type = 22000 id = 219 }
			name = "Guizhou Silingbu"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1390
		name = "Guizhou Baoantui"
		id = { type = 22000 id = 272 }
		division = {
	        	id = { type = 22000 id = 273 }
			name = "Guizhou Baoantui"
			type = infantry
			model = 5
		}
		division = {
	        	id = { type = 22000 id = 274 }
			name = "Guizhou Yunnan"
			type = infantry
			model = 5
		}
	}
}  