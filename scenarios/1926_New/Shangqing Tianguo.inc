###########################
#Country definition for CHC
###########################
province = { id = 1259 landfort = 2 } 
province = { id = 1260 landfort = 2 } 
province = { id = 1255 landfort = 2 } 

##################
#Country main data
##################

country = {
    tag = CHC # Shanxi Clique
    ai = "KAISERREICH\1926_CHCnew.ai"
	flag_ext = _26
	name = CHC26_new
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 3
		free_market = 1
		freedom = 2
		professional_army = 3
		defense_lobby = 8
		interventionism = 3
	}
#### cabinet
	headofstate = { type = 9 id = 51073 } # Yan Xishan
	headofgovernment = { type = 9 id = 51072 } # Yan Xishan
 	chiefofarmy = { type = 9 id = 51005  }

#### Resource Reserves
	capital = 1259 # Yan'an

	# Resource Reserves

energy		= 200
metal		= 200
rare_materials 		= 100
oil 		= 100
supplies 	= 800
money		= 50
free = { ic = 15 supplies = 15 }

	manpower = 350



    ownedprovinces =      {
	1238 1239 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1269 1271 
	 }
    controlledprovinces = {
	1238 1239 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1269 1271
	  }
    nationalprovinces =   {
	1238 1239 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1269 1271
	}

diplomacy = {
		relation = { tag = JAP value = -100 }
		relation = { tag = MAN value = 25 }
		relation = { tag = CHI value = 25 }
		relation = { tag = CGX value = -50 }
		relation = { tag = CYN value = -50 }
		relation = { tag = CSX value = -50 }
		relation = { tag = SOV value = 100 }
		relation = { tag = MON value = 25 }
		relation = { tag = SIK value = 40 }
}


	
	techapps = {

# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter

#Armour & Artillery
2860 #Interwar Armoured Car  
2290 2300 2310 2900 2910 2920 #1924FA
7600 7610 2620 2010 2630 #SW Tank 
2800 2450 #1921 Static Anti-Air Artillery 
2810 #1918 AA Bde

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1350 #1924 Cavalry Division 
1830 1840 #Engineers

#Industrial
5700 #Early Agriculture
5600 #Medicine
5810 5820 #Manufactoring
5800 5080 # Basic Construction Engineering

#Naval
3810 #Troopships

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580
	}

#########  OOB (...)
landunit = {
		location = 1259 # Yan'an
		name = "1. Fangmianjun"
		id = { type = 24000 id = 1 }
		division = {
	        	id = { type = 24000 id = 2 }
			name = "1. Juntuan"
			type = infantry
			experience = 5
			model = 5
		}
		division = {
			experience = 5
	        	id = { type = 24000 id = 3 }
			name = "3. Juntuan"
			type = infantry
			model = 4
		}
		division = {
			experience = 5
	        	id = { type = 24000 id = 13 }
			name = "3. Juntuan"
			type = infantry
			model = 4
		}
	}
	landunit = {
		location = 1260
		name = "2. Fangmianjun"
		id = { type = 24000 id = 7 }
		division = {
			experience = 5
	        	id = { type = 24000 id = 8 }
			name = "2. Juntuan"
			type = infantry
			model = 4
		}
		division = {
			experience = 5
	        	id = { type = 24000 id = 9 }
			name = "6. Juntuan"
			type = infantry
			model = 4
		}
		division = {
			experience = 5
	        	id = { type = 24000 id = 14 }
			name = "6. Juntuan"
			type = infantry
			model = 4
		}
	}
	landunit = {
		location = 1255 # Xianyang
		name = "4. Fangmianjun"
		id = { type = 24000 id = 10 }
		division = {
	        	id = { type = 24000 id = 11 }
			name = "4. Jun"
			type = infantry
			model = 3
		}
		division = {
	        	id = { type = 24000 id = 12 }
			name = "9. Jun"
			type = infantry
			model = 3
		}
		division = {
	        	id = { type = 24000 id = 15 }
			name = "9. Jun"
			type = infantry
			model = 3
		}
	}

}  