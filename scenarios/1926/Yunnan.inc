
country = {
    tag = CYN  
    ai = "kaiserreich\1926_CYN.ai"

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

headofstate = { type = 9 id = 501011  }
headofgovernment = { type = 9 id = 501012 }

#### Resource Reserves

	# Resource Reserves
	energy		= 5000
	metal		= 5000
	rare_materials 	= 5000
	oil 		= 5000
	supplies 	= 10000
	money		= 50

	capital = 1390 # Kunming
	manpower = 200
	dissent = 0
        free = { ic = 25 supplies = 25 }

    ownedprovinces =      {
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267 1381
	 }
    controlledprovinces = {
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267 1381
	  }
    nationalprovinces =   {
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1302 1267 1381
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

#Infantry
1010  1020 1030 1040 1050 #1916 lgt. Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  

#Industrial
5700 #Early Agriculture
5600 #Medicine

# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580

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
			model = 4
		}
		division = {
	        	id = { type = 22100 id = 3 }
			name = "22. Duli Lü"
			type = infantry
			strength = 100
			model = 4
		}
		division = {
	        	id = { type = 22100 id = 4 }
			name = "23. Duli Lü"
			type = infantry
			strength = 50
			model = 4
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
			model = 4
		}
		division = {
	        	id = { type = 22100 id = 13 }
			name = "137. Bubing Shi"
			type = infantry
			strength = 100
			model = 4
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
			model = 4
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
			model = 4
		}
	}
	landunit = {
		location = 1381
		name = "21. Jun"
		id = { type = 22000 id = 49 }
		division = {
	        	id = { type = 22000 id = 50 }
			name = "21. Jun"
			type = infantry
			model = 4
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
			model = 3
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
			model = 3
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
			model = 3
		}
	}
	landunit = {
		location = 1388 # Wenshan
		name = "7. Lujun"
		id = { type = 22000 id = 156 }
		division = {
	        	id = { type = 22000 id = 159 }
			name = "7. Lujun"
			type = infantry
			model = 3
		}
	}
	landunit = {
		location = 1386
		name = "4. Jun"
		id = { type = 22000 id = 157 }
		division = {
	        	id = { type = 22000 id = 158 }
			name = "4. Jun"
			type = infantry
			model = 4
		}
	}
	
	
}  