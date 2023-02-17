


country = {
    tag = CHC
	ai = "kaiserreich\Shangqing Tianguo.ai"

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 3
		free_market = 1
		freedom = 2
		professional_army = 3
		defense_lobby = 10
		interventionism = 5
	}

#### cabinet
	headofstate = { type = 9 id = 51011 } #Zhang Tianran
	headofgovernment = { type = 9 id = 51015 } #Chu Minyi
	#headofgovernment = { type = 9 id = 51013 } #Sun Suzhen
	foreignminister = { type = 9 id = 51014 } #Sun Suzhen (Chu Minyi [51016], Shi Taixu [51035] & Xia Jiquan [51031] also options)
	armamentminister = { type = 9 id = 51048 } #Liu Zishan (Gu Ruzhang [51056], Ding Jingchen [51039] & Yin Renxian [51053] also options)
	ministerofsecurity = { type = 9 id = 51082 } #Xue Dian (Yang Yuting [51076], Ma Liang [51047] & Xiao Changming [51080] also options)
	ministerofintelligence = { type = 9 id = 51037 } #Yin Ruizhi
	chiefofstaff = { type = 9 id = 51106 } #Zhou Yawei
	chiefofarmy = { type = 9 id = 51128 } #Fu Zhensong (Liu Zhennian [51134] also an option)
	chiefofnavy = { type = 9 id = 51148 } #Zhao Qi (Wen Shude [51147] also an option)
	chiefofair = { type = 9 id = 51159 } #Zhu Binhou (Li Zaolin [51160] also an option)
	#possible Japanese puppet gov
		#headofstate = { type = 9 id = 51200 } #Yin Rugeng
		#headofgovernment = { type = 9 id = 51203 } #Yuan Liang
		#foreignminister = { type = 9 id = 51201 } #Yin Rugeng (Nishi Haruhiko [51208] also an option)
		#armamentminister = { type = 9 id = 51206 } #Yin Tong
		#ministerofsecurity = { type = 9 id = 51204 } #Yuan Liang (Nishi Haruhiko [51209] also an option)
		#ministerofintelligence = { type = 9 id = 51211 } #Tatsumi Eiichi
		#chiefofstaff = { type = 9 id = 51210 } #Tatsumi Eiichi
		#chiefofarmy = { type = 9 id = 51212 } #Saito Ryu
		#chiefofnavy = { type = 9 id = 51146 } #Qu Tongfeng

#### Resource Reserves
	capital = 1259 # Yan'an

	SpyInfo  = { country = "CHC" NumberOfSpies = 3 }

	# Resource Reserves

	energy		= 200
	metal		= 200
	rare_materials 		= 100
	oil 		= 100
	supplies 	= 800
	money		= 50

	manpower = 350

	free = { ic = 9 }

    ownedprovinces = {
	1259 1255 1260 1269 1271 1256 1263 1257 1258
	}
    controlledprovinces = {
	1259 1255 1260 1269 1271 1256 1263 1257 1258
	}
    nationalprovinces = {
	1259 1255 1260 1269 1271 1256 1263 1257 1258
	}
    claimedprovinces = {
		1378 1360 1301 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1318 1347
		1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1359 1368 1369 1370 1373 1374 1375
		1376 1377 1379 1380 1381 1382 1383 1361 1362 1363 1364
		1202 1216 1235 1236 1240 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218
		1201 1208 1209 1210 1211 1214 1215 1217 1197 1198
		1268 1270 1264 1272 1265 1266 1283 1284 1285 1273 1279 1280 1281 1277 1274 1275 1282 1276
		1389 1390 1384 1385 1387 1386 1388 1292 1293 1291 1300 1303 1261 1262 1296 1297 1298 1299
		1302 1267 1338 1358 1371 1346 1294 1286 1287 1288 1289 1278 1295 1290 1328 1331 1241 1245 1365 1367
		1321 1323 1238 1333 1342 1345 1239 1343 1337 1334 1336 1339 1335 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1329 1330
		1340 1341 1319 1324 1322 1320 1325 1316 1326 1317 1344 1219 1372
	}

diplomacy = {
		relation = { tag = JAP value = -100 }
		relation = { tag = MAN value = -100 }
		relation = { tag = CHI value = -200 }
		relation = { tag = CGX value = -200 }
		relation = { tag = CYN value = -200 }
		relation = { tag = CSX value = -200 }
		relation = { tag = CXB value = -200 }
		relation = { tag = SOV value = 100 }
		relation = { tag = MON value = 25 }
		relation = { tag = SIK value = 40 }
}

dormant_ministers = {
	51200 51201 51202 51203 51204 51205 51206 51207 51208 51209 51210 51211 51212 #Japanese puppet
	}

dormant_teams = {
	8302 8303 8304 8305 8307 8309 8310 8321 8323 8328 8329 8330 8332 8337 8339
	8341 8342 8354 8355
	}

dormant_leaders = {
	76083 76084 #Japanese puppet
	}

	techapps = {

# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #1924 Interceptor
4600 4610 4620 4630 #1918 Tacbomber
4300 4310 4320 #1918 Multirole
7290 7300 7310 #1918 CAS
4740 4750 4760 #1918 Seaplane

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Weltkrieg Heavy Field Artillery
2800 #Weltkrieg Static Anti-Air Artillery
7600 7610 #SW Tank

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
1910 1920 1930 1940 1950 1960 #1918 Logistics
1160 1170 1180 #1907 Mountain Division
13060 13070 13080 1310 1320 1330 1340 #1921 Cavalry Division
1830 #1911 Engineers

#Industrial
5800 5080 #Basic Construction Engineering
5700 5710 #Agriculture
5810 #Manufacturing
5310 #Research

#Naval
3110 3120 #Scout Cruiser
3010 3020 #Fleet Destroyer
3810 #Troopships

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6390 6400 #Light Infantry doctrine
14000 # Hospital systems

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval Doctrines
8010 8020 8050 8060 8070

	}

#########  OOB (...)
landunit = {
		location = 1259 # Yan'an
		name = "1. Fangmianjun"
		id = { type = 24000 id = 1 }
		division = {
	        	id = { type = 24000 id = 2 }
			name = "1. Juntuan"
			type = bergsjaeger
			experience = 20
			model = 6
		}
		division = {
			experience = 20
	        	id = { type = 24000 id = 3 }
			name = "3. Juntuan"
			type = bergsjaeger
			model = 5
		}
		division = {
			experience = 20
	        	id = { type = 24000 id = 4 }
			name = "5. Juntuan"
			type = bergsjaeger
			model = 5
		}
		division = {
			experience = 20
	        	id = { type = 24000 id = 5 }
			name = "8. Juntuan"
			type = infantry
			model = 6
		}
		division = {
			experience = 20
	        	id = { type = 24000 id = 6 }
			name = "9. Juntuan"
			type = infantry
			model = 6
		}
                dig_in = 20.000 
	}
	landunit = {
		location = 1260
		name = "2. Fangmianjun"
		id = { type = 24000 id = 7 }
		division = {
			experience = 20
	        	id = { type = 24000 id = 8 }
			name = "2. Juntuan"
			type = militia
			model = 4
		}
		division = {
			experience = 20
	        	id = { type = 24000 id = 9 }
			name = "6. Juntuan"
			type = militia
			model = 4
		}
                dig_in = 20.000 
	}
	landunit = {
		location = 1257 # Xianyang
		name = "4. Fangmianjun"
		id = { type = 24000 id = 10 }
		division = {
	        	id = { type = 24000 id = 11 }
			name = "4. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 12 }
			name = "9. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 13 }
			name = "30. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 14 }
			name = "31. Jun"
			type = militia
			model = 4
		}
                dig_in = 20.000 
	}
	landunit = {
		location = 1255 # Yan'an
		name = "15. Juntuan"
		id = { type = 24000 id = 15 }
		division = {
	        	id = { type = 24000 id = 16 }
			name = "25. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 17 }
			name = "26. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 18 }
			name = "27. Jun"
			type = militia
			model = 4
		}
		division = {
	        	id = { type = 24000 id = 19 }
			name = "28. Jun"
			type = militia
			model = 4
		}
             dig_in = 20.000 
	}

}  