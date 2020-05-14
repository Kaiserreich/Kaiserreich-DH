
country = {
    tag = CYN  
    ai = "kaiserreich\Yunnan.ai"

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 1
		interventionism = 1
	}

#### cabinet
headofstate = { type = 9 id = 501001 }
headofgovernment = { type = 9 id = 501002 }
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
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267
	 }
    controlledprovinces = {
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267
	  }
    nationalprovinces =   {
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267
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
	
	techapps = {

# Group E 1936 techs
#######################

#Armour & Artillery
2860 #AC
2290 #Light Field Artillery
7600 7610 #SW Tank

#Infantry
1010 1020 1030 1040 1050 1060 #1918 lgt. Infantry Division
1160 1170 1180 #1907 Mountain Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division

#Industrial
5800 5080 #Improved Construction Engineering
5810 #Scientific Management
5700 #Early Agriculture
5600 #Medicine

#Aircrafts
4500 4510 4520 4530 4540 #Interceptor 1917
4600 4610 4620 4630 #Tactical Bomber 1918

# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

	}

#########  OOB (...)


	landunit = {
		location = 1390 # Kunming
		name = "Yunnan Jingbei"
		leader = 501006 # Long Yun
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
		leader = 501004 # Liu Wenhui
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