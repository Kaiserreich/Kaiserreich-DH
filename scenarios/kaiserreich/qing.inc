


country = {
    tag = CSX  

ai = "kaiserreich\Qing.ai"
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 7
		interventionism = 1
	}


#### cabinet

	headofstate = { type = 9 id = 503048 } #Aisin-Gioro Puyi PA
	headofgovernment = { type = 9 id = 503032 } #Yan Huiqing, or Zhang Shaozeng [503072], or Li Genyuan [503074]
	foreignminister = { type = 9 id = 503039 } #Gu Weijun
	armamentminister = { type = 9 id = 503217 } #Ling Wenyuan
	ministerofsecurity = { type = 9 id = 503297 } #Qian Wenxuan
	ministerofintelligence = { type = 9 id = 503441 } #Liu Menggeng
	chiefofstaff = { type = 9 id = 503384 } #Jiang Baili
	chiefofarmy = { type = 9 id = 503045 } #Wu Peifu
	chiefofnavy = { type = 9 id = 503473 } #Wu Yulin
	chiefofair = { type = 9 id = 503503 } #Qin Guoyong

#### Resource Reserves

	SpyInfo = { country = "CSX" NumberOfSpies = 4 }

	# Resource Reserves
	energy = 200
	metal = 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1247 # Beijing
	manpower = 200

	free = { ic = 5 }

    ownedprovinces = {
		1313 1314 1315 1321 1323 1238 1239 1336 1339 1247 1246 1251 1242 1254 1252 1253 1248 1249 1250 1327 1243 1244
		1341 1319 1324 1322 1320 1325 1316 1326 1317 1259 1255 1260 1269 1271 1256 1263 1257 1258 1245
	}
    controlledprovinces = {
		1313 1314 1315 1321 1323 1238 1239 1336 1339 1247 1246 1251 1242 1254 1252 1253 1248 1249 1250 1327 1243 1244
		1341 1319 1324 1322 1320 1325 1316 1326 1317 1259 1255 1260 1269 1271 1256 1263 1257 1258 1245
	}
    nationalprovinces = {
		1313 1314 1315 1321 1323 1247 1238 1336 1339 1239 1246 1251 1242 1254 1252 1253 1248 1249 1250 1327 1243 1244
		1341 1319 1324 1322 1320 1325 1316 1326 1317 1259 1255 1260 1269 1271 1256 1263 1257 1258 1245
	}
    claimedprovinces = {
		1378 1360 1301 1304 1305 1306 1307 1308 1309 1310 1311 1312 1318 1347 1337 1345 1340
		1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1359 1368 1369 1370 1373 1374 1375
		1376 1377 1379 1380 1381 1382 1383 1259 1255 1260 1269 1271 1256 1263 1257 1258 1342 1343
		1202 1216 1235 1236 1240 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 1344
		1201 1208 1209 1210 1211 1214 1215 1217 1197 1198 1361 1362 1363 1364 1372 1329 1330 1332 1333 1334 1335
		1268 1270 1264 1272 1265 1266 1283 1284 1285 1273 1279 1280 1281 1277 1274 1275 1282 1276
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299 1219
		1302 1267 1338 1358 1371 1346 1294 1286 1287 1288 1289 1278 1295 1290 1328 1331 1241 1365 1367
	}

diplomacy = {
	relation = { tag = EAF value = 60 access = yes guaranteed = { day = 29 month = december year = 1935 } }
	relation = { tag = JAP value = -100 }
	relation = { tag = MAN value = -20 }
	relation = { tag = CHC value = -120 }
	relation = { tag = CGX value = 10 }
	relation = { tag = GER value = 70 }
	relation = { tag = RUS value = 20 }
	relation = { tag = MON value = -10 }
	relation = { tag = CYN value = -20 }
	relation = { tag = CXB value = -20 }
}



	techapps = {

#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1160 1170 1180 1190 1200 1210 #1918 Mountain Division
13060 13070 13080 1310 1320 1330 #Great War Cavalry Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply
1830 1840 #Engineers

#Armour & Artillery
2860 2870 2880 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery
7600 7610 2620 2010 #SW Tank

#Naval
3110 3120 3130 #Light Cruiser
3210 3220 #Heavy Cruiser
3410 #Turret BB
3010 3020 3030 #Chang Feng Class DD
3810 #Troopships
3720 3730 #Torpedoes

#Aircrafts
4500 4510 4520 4530 4540 #Interwar Fighter
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 #Multirole fighter
4800 4810 #ww1 strategic bomber
4700 #ww1 navalbomber
7290 7300 #CAS

#Industrial
5800 5080 #Improved Construction Engineering
5700 #Agriculture
5980 #Spec Equipment Rough terrain
5600 #Medicine
5810 #Scientific Management
5310 #Census tabulating

#Naval Doctrines
8010 8020 8050 8060 8070
8100 8110 #Coastal Defense

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9010 9030 9020 27560 27460 27470 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6570 6300 #Manpower Focus
14000 #Improved Great War Hospital System

}

dormant_leaders = { #Shanxi Clique/GMJ 504000-504115
	}

dormant_ministers = { #Shanxi Clique/GMJ 505000-505198
	505000 505001 505002 505003 505004 505005 505006 505007 505008 505009 505010 505011 505012 505013 505014 505015 505016 505017 505018 505019 505020 505021 505022 505023 505024
	505025 505026 505027 505028 505029 505030 505031 505032 505033 505034 505035 505036 505037 505038 505039 505040 505041 505042 505043 505044 505045 505046 505047 505048 505049
	505050 505051 505052 505053 505054 505055 505056 505057 505058 505059 505060 505061 505062 505063 505064 505065 505066 505067 505068 505069 505070 505071 505072 505073 505074
	505075 505076 505077 505078 505079 505080 505081 505082 505083 505084 505085 505086 505087 505088 505089 505090 505091 505092 505093 505094 505095 505096 505097 505098 505099
	505100 505101 505102 505103 505104 505105 505106 505107 505108 505109 505110 505111 505112 505113 505114 505115 505116 505117 505118 505119 505120 505121 505122 505123 505124
	505125 505126 505127 505128 505129 505130 505131 505132 505133 505134 505135 505136 505137 505138 505139 505140 505141 505142 505143 505144 505145 505146 505147 505148 505149
	505150 505151 505152 505153 505154 505155 505156 505157 505158 505159 505160 505161 505162 505163 505164 505165 505166 505167 505168 505169 505170 505171 505172 505173 505174
	505175 505176 505177 505178 505179 505180 505181 505182 505183 505184 505185 505186 505187 505188 505189 505190 505191 505192 505193 505194 505195 505196 505197 505198
	}

dormant_teams = {
	8802 8803 8804 8811 8819 8821 8822 #Fengtian
	8807 8812 8879 8880 #EAF
	8823 8824 8835 8837 8848 8851 8852 8859 8876 8877 #United China
	8836 8865 #South China
	}

#########  OOB (...)
#Qing term for division was 'Zhen'. The RoC used 'Shi', replacing the use of 'Zhen'.
#German trained: 'De Xie', national army: 'Guojun', new army 'Xinjun'

landunit = {
	location = 1247 # Beiping
	name = "1. Jun"
	### leader = #
	id = { type = 22300 id = 1 }
		division = {
			experience = 10
			id = { type = 22300 id = 2 }
			name = "Manzu Jin Weidui"
			type = infantry
			strength = 100
			model = 6
			extra = rocket_artillery
			brigade_model = 5
		}
		division = {
			experience = 20
			id = { type = 22300 id = 3 }
			name = "De Xie 1. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
			extra = artillery
			brigade_model = 3
		}
		division = {
			experience = 20
			id = { type = 22300 id = 4 }
			name = "De Xie 2. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
			extra = artillery
			brigade_model = 3
		}
		division = {
			experience = 20
			id = { type = 22300 id = 5 }
			name = "De Xie 3. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
			extra = artillery
			brigade_model = 3
		}
	}
landunit = {
	location = 1245 # Tangshan
	name = "2. Jun"
	id = { type = 22300 id = 6 }
		division = {
			experience = 10
			id = { type = 22300 id = 7 }
			name = "Xinjun 4. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
			division = {
			experience = 10
			id = { type = 22300 id = 8 }
			name = "Xinjun 5. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 9 }
			name = "Xinjun 6. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 10 }
			name = "Zhili 10. Bubing Zhen"
			type = d_01
			strength = 100
			model = 6
		}
	}
landunit = {
	location = 1246 # Zhangyuan
	name = "3. Jun"
	### leader = #
	id = { type = 22300 id = 11 }
		division = {
			experience = 10
			id = { type = 22300 id = 12 }
			name = "Xinjun 7. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 13 }
			name = "Xinjun 8. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 14 }
			name = "Zhili 11. Bubing Zhen"
			type = d_01
			strength = 100
			model = 6
		}
	}
landunit = {
	location = 1244 # Changzhou
	name = "4. Jun"
	### leader = #
	id = { type = 22300 id = 15 }
		division = {
			experience = 10
			id = { type = 22300 id = 16 }
			name = "Zhili 12. Bubing Zhen"
			type = d_01
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 17 }
			name = "Zhili 13. Bubing Zhen"
			type = d_01
			model = 6
		}
	}
landunit = {
	location = 1339 # Suzhou
	name = "5. Jun"
	### leader = #
	id = { type = 22300 id = 18 }
		division = {
			experience = 10
			id = { type = 22300 id = 19 }
			name = "Xinjun 9. Bubing Zhen"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 20 }
			name = "Zhili 14. Bubing Zhen"
			type = d_01
			strength = 100
			model = 6
		}
	}
landunit = {
	location = 1320 # Xuchang
	name = "6. Jun"
	### leader = #
	id = { type = 22300 id = 21 }
		division = {
			experience = 10
			id = { type = 22300 id = 22 }
			name = "Xinjun 1. Qibing Zhen"
			type = cavalry
			strength = 100
			model = 6
		}
	}
landunit = {
	location = 1317 # Wuhan
	name = "7. Jun"
	### leader = #
	id = { type = 22300 id = 23 }
		division = {
			experience = 10
			id = { type = 22300 id = 24 }
			name = "Zhili 15. Bubing Zhen"
			type = d_01
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 25 }
			name = "Zhili 16. Bubing Zhen"
			type = d_01
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 26 }
			name = "Zhili 17. Bubing Zhen"
			type = d_01
			model = 6
		}
	}
landunit = {
	location = 1322 # Luoyang
	name = "8. Jun"
	### leader = #
	id = { type = 22300 id = 27 }
		division = {
			experience = 10
			id = { type = 22300 id = 28 }
			name = "Zhili 18. Bubing Zhen"
			type = d_01
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 29 }
			name = "Zhili 19. Bubing Zhen"
			type = d_01
			model = 6
		}
		division = {
			experience = 10
			id = { type = 22300 id = 30 }
			name = "Zhili 20. Bubing Zhen"
			type = d_01
			model = 6
		}
	}
landunit = {
	location = 1243 # Baoding
	name = "9. Jun"
	### leader = #
	id = { type = 22300 id = 31 }
		division = {
			id = { type = 22300 id = 32 }
			name = "Zhili 21. Bubing Zhen"
			type = d_01
			model = 6
		}
	}
landunit = {
	location = 1252 # Taiyuan
	name = "1. Shanxi Lujun"
	### leader = #
	id = { type = 22300 id = 33 }
		division = {
			experience = 20
			id = { type = 22300 id = 34 }
			name = "Di 1. Shi"
			type = infantry
			strength = 100
			model = 6
			extra = artillery
			brigade_model = 3
		}
		division = {
			experience = 20
			id = { type = 22300 id = 35 }
			name = "Di 2. Shi"
			type = infantry
			strength = 100
			model = 6
			extra = artillery
			brigade_model = 3
		}
	}
landunit = {
	location = 1251 # Datong
	name = "2. Shanxi Lujun"
	### leader = #
	id = { type = 22300 id = 36 }
		division = {
			experience = 20
			id = { type = 22300 id = 37 }
			name = "Di 3. Shi"
			type = d_01
			strength = 100
			model = 6
			extra = rocket_artillery
			brigade_model = 5
		}
		division = {
			experience = 20
			id = { type = 22300 id = 38 }
			name = "Di 4. Shi"
			type = d_01
			strength = 100
			model = 6
			extra = rocket_artillery
			brigade_model = 5
		}
	}
landunit = {
	location = 1253 # Linfen
	name = "3. Shanxi Lujun"
	id = { type = 22300 id = 39 }
		division = {
			experience = 20
			id = { type = 22300 id = 40 }
			name = "Di 5. Shi"
			type = d_01
			strength = 100
			model = 6
			extra = rocket_artillery
			brigade_model = 5
		}
		division = {
			experience = 20
			id = { type = 22300 id = 41 }
			name = "Di 6. Shi"
			type = d_01
			model = 6
			extra = rocket_artillery
			brigade_model = 5
		}
	}

######################
### Air Force
######################

airunit = {
	location = 1247
	base = 1247
	name = "Di'1 Kongjun"
	id = { type = 22300 id = 400 }
		division = {
			id = { type = 22300 id = 401 }
			name = "1. Zhandouji Dadui"
			type = interceptor
			model = 6
			strength = 100
		}
		division = {
			id = { type = 22300 id = 402 }
			name = "2. Zhandouji Dadui"
			type = interceptor
			model = 6
			strength = 100
		}
	}
airunit = {
	location = 1247
	base = 1247
	name = "Di'2 Kongjun"
	id = { type = 22300 id = 403 }
		division = {
			id = { type = 22300 id = 404 }
			name = "1. TAC Hongzhaji Dadui"
			type = tactical_bomber
			model = 4
			strength = 100
		}
	}

######################
### Navy
######################

navalunit = {
	name = "Imperial Fleet of China"
	id = { type = 22300 id = 300 }
	location = 1241
	base = 1241
		division = { id = { type = 22300 id = 323 } name = "Long Wei" type = battleship model = 2 } # sold by German Empire formerly SMS Markgraf
		division = { id = { type = 22300 id = 324 } name = "Wu Wei" type = battleship model = 2 } # sold by German Empire formerly SMS Kronprinz
		division = { id = { type = 22300 id = 301 } name = "Nan'Shin" type = battleship  model = 1 } #Pre Dreadnought bought from Germany
		division = { id = { type = 22300 id = 302 } name = "Ping'hai" type = heavy_cruiser model = 1 }
		division = { id = { type = 22300 id = 303 } name = "Ning'hai" type = heavy_cruiser model = 1 }
		division = { id = { type = 22300 id = 304 } name = "Hai-Chen" type = light_cruiser model = 2 }
		division = { id = { type = 22300 id = 305 } name = "Chao-Hao" type = light_cruiser model = 2 }
		division = { id = { type = 22300 id = 306 } name = "1. Quzujian Dadui" type = destroyer model = 2 }
		division = { id = { type = 22300 id = 307 } name = "2. Quzujian Dadui" type = destroyer model = 2 }
		division = { id = { type = 22300 id = 308 } name = "3. Quzujian Dadui" type = destroyer model = 2 }
		division = { id = { type = 22300 id = 309 } name = "4. Quzujian Dadui" type = destroyer model = 2 }
	}
navalunit = {
	name = "Imperial Submarine Fleet"
	id = { type = 22300 id = 320 }
	location = 1241
	base = 1241
		division = { id = { type = 22300 id = 321 } name =  "1. Qianting Budui" type = submarine model = 1 }
		division = { id = { type = 22300 id = 322 } name =  "2. Qianting Budui" type = submarine model = 1 }
	}
}
