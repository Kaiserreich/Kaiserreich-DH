


country = {
    tag = CXB  
	ai = "kaiserreich\Xibei San Ma.ai"
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 10
		interventionism = 3
	}


#### cabinet

	headofstate = { type = 9 id = 504008 } #Ma Fuxiang
	headofgovernment = { type = 9 id = 504012 } #Ma Hongbin
	foreignminister = { type = 9 id = 504044 } #Ma Liangjun
	armamentminister = { type = 9 id = 504046 } #Ma Fuchen
	ministerofsecurity = { type = 9 id = 504003 } #Ma Lin
	ministerofintelligence = { type = 9 id = 504072 } #Zhang Peiyuan
	chiefofstaff = { type = 9 id = 504018 } #Ma Hongkui
	chiefofarmy = { type = 9 id = 504076 } #Ma Biao
	chiefofair = { type = 9 id = 504023 } #Ma Bufang

#### Resource Reserves

SpyInfo  = {  country = "CXB" NumberOfSpies = 2  } 

	# Resource Reserves
	energy		= 200
	metal		= 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	free = { ic = 8 oil = 0 energy = 0 metal = 0 rare_materials = 0 money = 0 manpower = 0 } #new Mar2020

	capital = 1281 # Golmud
	manpower = 200
	dissent = 25

	ownedprovinces =      {
		1268 1270 1264 1272 1265 1266 1283 1284 1285 1273 1279 1280 1281 1277 1274 1275 1282 1276
	}
	controlledprovinces = {
		1268 1270 1264 1272 1265 1266 1283 1284 1285 1273 1279 1280 1281 1277 1274 1275 1282 1276
	}
	nationalprovinces =   {
		1268 1270 1264 1272 1265 1266 1283 1284 1285 1273 1279 1280 1281 1277 1274 1275 1282 1276
	}

diplomacy = {

}


	
	techapps = {
# Group E 1936 techs
#######################

#Armour & Artillery
2860 #AC
2290 #Light Field Artillery 

#Infantry
1010  1020 1030 1040 1050 1060 #1918 lgt. Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  

#Industrial
5700 #Early Agriculture
5600 #Medicine

# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 


	}

#########  OOB (...)

landunit = {
		location = 1273 # Yinchuan
		name = "15. Lujun"
		### leader = 504004 # Ma Hongkui
		id = { type = 22200 id = 1 }
		division = {
			experience = 40
	        	id = { type = 22200 id = 2 }
			name = "35. Bubing Shi"
			type = infantry
			strength = 100
			model = 5
		}
	}
	landunit = {
		location = 1276 # Yinchuan
		name = "11. Jun"
		### leader = 504005 # Ma Hongbin
		id = { type = 22200 id = 3 }
		division = {
			experience = 10
	        	id = { type = 22200 id = 4 }
			name = "Xin 7. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
		division = {
			experience = 40
	        	id = { type = 22200 id = 5 }
			name = "Xin 7. Qibing Shi"
			type = cavalry
			max_strength = 100
			strength = 100
			model = 5
		}
	}
	landunit = {
		location = 1277 # Xining
		name = "Xin 2. Jun"
		### leader = 504006 # Ma Hongbin
		id = { type = 22200 id = 7 }
		division = {
			experience = 20
	        	id = { type = 22200 id = 8 }
			name = "Xin 9. Bubing Shi"
			type = infantry
			strength = 100
			model = 5
		}
		division = {
			experience = 40
	        	id = { type = 22200 id = 9 }
			name = "1. Qibing Lü"
			type = cavalry
			strength = 100
			model = 5
		}
	}
	landunit = {
		location = 1266 # Yumen
		name = "Tunganistan Jun"
		### leader = # Ma Hushan
		id = { type = 22200 id = 11 }
		division = {
			experience = 10
	        	id = { type = 22200 id = 12 }
			name = "Tungan Shi"
			type = militia
			strength = 50
			model = 3
		}
	}

	landunit = {
		location = 1272 # Bayan Hot
		name = "3. Jun"
		### leader = # Zeng Wanzhong
		id = { type = 22000 id = 9 }
		division = {
			experience = 20
	        	id = { type = 22000 id = 10 }
			name = "3. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1270 # Linhe
		name = "10. Jun"
		### leader = 50112 # Xu Yuanquan
		id = { type = 22000 id = 23 }
		division = {
			experience = 20
	        	id = { type = 22000 id = 24 }
			name = "10. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1274 # Qarqan
		name = "15. Jun"
		### leader = 50214 # Liu Mao'en
		id = { type = 22000 id = 33 }
		division = {
	        	id = { type = 22000 id = 34 }
			name = "15. Jun"
			type = infantry
			model = 5
		}
	}
	landunit = {
		location = 1283 # Geermu
		name = "25. Jun"
		### leader = 50307 # Wan Yaohuang
		id = { type = 22000 id = 60 }
		division = {
			experience = 20
	        	id = { type = 22000 id = 61 }
			name = "25. Jun"
			type = infantry
			model = 5
		}
		dig_in = 20.000 
	}
	landunit = {
		location = 1285 #
		name = "31. Jun"
		### leader = # Liang Guanying
		id = { type = 22000 id = 75 }
		division = {
			experience = 20
	        	id = { type = 22000 id = 76 }
			name = "31. Jun"
			type = infantry
			model = 5
		}
		dig_in = 20.000 
	}
	landunit = {
		location = 1279 # Kaxgar
		name = "41. Jun"
		### leader = 50263 # Sun Zhen
		id = { type = 22000 id = 99 }
		division = {
			experience = 40
	        	id = { type = 22000 id = 100 }
			name = "41. Jun"
			type = infantry
			model = 5
		}
		dig_in = 20.000 
	}
	landunit = {
		location = 1268 # Yinchuan
		name = "25. Bubing Shi"
		### leader = 50154 # Guan Linzheng
		id = { type = 22000 id = 174 }
		division = {
			experience = 40
	        	id = { type = 22000 id = 175 }
			name = "25. Bubing Shi"
			type = infantry
			max_strength = 50
			strength = 50
			model = 5
		}
		dig_in = 20.000 
	}
 
	landunit = {
	location = 1281
	name = "Xin'jiang Jun"
		id = { type = 25600 id = 775 }
		division = {
			id = { type = 22000 id = 776 }
		name = "1 Xin'jiang Shi"
		type = infantry
		model = 5
		}
		division = {
			id = { type = 22000 id = 777 }
		name = "7 Xin'jiang Jun"
		type = militia
		model = 3
		}
		division = {
			id = { type = 22000 id = 778 }
		name = "8 Xin'jiang Jun"
		type = militia
		model = 3
		}
	}
}