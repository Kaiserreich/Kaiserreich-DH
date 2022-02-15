


country = {
    tag = MAN  

	ai = "kaiserreich\Fengtian.ai"
	#puppet = JAP

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 6
        defense_lobby = 8
        interventionism = 8
    }

#### cabinet
	headofstate = { type = 9 id = 58033 } #Zhang Zuolin
	headofgovernment = { type = 9 id = 58401 } #Yan Xishan
	#headofgovernment = { type = 9 id = 58066 } #Zang Shiyi
	foreignminister = { type = 9 id = 58059 } #Wu Jinglian
	armamentminister = { type = 9 id = 58129 } #Peng Xian
	ministerofsecurity = { type = 9 id = 58157 } #Yu Zhen
	ministerofintelligence = { type = 9 id = 58210 } #Xu Zuyi
	chiefofstaff = { type = 9 id = 58046 } #Zhang Xueliang
	chiefofarmy = { type = 9 id = 58228 } #Wu Guangxin
	chiefofnavy = { type = 9 id = 58256 } #Shen Honglie
	chiefofair = { type = 9 id = 58205 } #Feng Yong

#### Resource Reserves
	energy	=	200  metal	=	200	rare_materials =	200	oil =	200	supplies =	300
	money = 50

	SpyInfo = { country = "MAN" NumberOfSpies = 3 }

	manpower = 150

	capital = 1208

	free = { ic = 8 }

    ownedprovinces = {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218
		1201 1208 1209 1210 1211 1214 1215 1217 1197 1198 1216 1235 1236
	}
    controlledprovinces = {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218
		1201 1208 1209 1210 1211 1214 1215 1217 1197 1198 1216 1235 1236
	}
    nationalprovinces = {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218
		1201 1208 1209 1210 1211 1214 1215 1217 1197 1198 1216 1235 1236
	}

diplomacy = {
	relation = { tag = CHI value = -10 }
	relation = { tag = CSX value = 10 }
	relation = { tag = CXB value = -75 }
	relation = { tag = CYN value = -25 }
	relation = { tag = CGX value = -75 }
	relation = { tag = GER value = -55 }
	relation = { tag = RUS value = 40 }
	relation = { tag = PRI value = 30 }
	relation = { tag = JAP value = 50 access = yes }
	}

	blueprints = { 6010 6020 } #Superior Firepower Doctrine
	techapps = {


# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #1924 Interceptor
4600 4610 4620 4630 4120 #1924 Tacbomber
4300 4310 4320 4330 #1926 Multirole
7290 7300 7310 7320 #1922 CAS
4740 4750 4760 #1918 Seaplane

#Armour & Artillery
2860 2870 2880 #Interwar Armoured Car
2290 2300 2310 2900 2910 2920 2930 #1930 Field Artillery
7600 7610 2620 2010 2630 #SW Tank
2800 2450 #1921 Static Anti-Air Artillery
2810 #1918 AA Bde

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 1350 #1928 Cavalry Division
1830 1840 #Engineers

#Industrial
5700 #Early Agriculture
5600 #Medicine
5810 5820 #Manufactoring
5800 5080 # Basic Construction Engineering

#Naval
3110 3120 3130 #Light Cruiser
3610 3620 3630 #Sub 1915
3010 3020 3030 #Chang Feng Class DD
12100 #Seaplane Carrier
3810 #Troopships
3720 #Torpedoes

#Naval Doctrines
8010 8020 8050 8060 8070 8080

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

	}

dormant_leaders = { #JAP
		250200 250201 250202 250203 250204 250205 250206 250207 250208 250209 250210 250211 250212 250213 250214 250215
		250216 250217 250218 250219 250220 250221 250222 250223 250224 250225
		}

dormant_ministers = { #JAP (not slept are 58309 58312-17 58328 58330)
		58300 58301 58302 58303 58304 58305 58306 58307 58308 58310 58311 58318 58319 58320 58321 58322 58323 58324 58325
		58326 58327 58329 58331 58332 58333 58334 58335 58336 58337 58338 58339 58340 58341 58342 58343 58344 58345 58346
		58347 58348 58349 58350 58351 58352 58353 58354 58355 58356 58357 58358 58359 58360 58361 58362 58363 58364 58365
		#58002 58003 58004 58112 #LW versions of Gao Chongmin & Lu Guangji
		58450 58451 #Puyi (more Qing ministers in the future)
		}

dormant_teams = { 6437 6443 6444 6449 #JAP
		6451 6452 6454 6456 6457 6458 6459 6460 6461 6463 6464 6465 6466 6467 6468 6469 #united China
		6453 6455 6462 #EAF
		}

#########  OOB (...)

	landunit = {
	location = 1208
	id = { type = 28500 id = 1 }
	name = "1 Fang'tien Jüntuan"

		division = {
		id = { type = 28500 id = 2 }
		name = "7 Man'chu Lü"
		type = d_01
		model = 7
		strength = 40
		extra = rocket_artillery
		brigade_model = 6
		}
	}


	landunit = {
	location = 1237
	id = { type = 28500 id = 3 }
	name = "1 Changde Jüntuan"

		division = {
		id = { type = 28500 id = 4 }
		name = "9 Man'chu Lü"
		type = infantry
		model = 7
		extra = artillery
		brigade_model = 5
		strength = 100
		}
		division = {
		id = { type = 28500 id = 5 }
		name = "11 Man'chu Lü"
		type = d_01
		model = 7
		strength = 100
		}
		division = {
		id = { type = 28500 id = 6 }
		name = "26 Man'chu Lü"
		type = infantry
		model = 7
		strength = 100
		}
		division = {
		id = { type = 28500 id = 7 }
		name = "3 Man'chu Qi'Bing"
		type = cavalry
		model = 7
		extra = armored_car
		brigade_model = 2
		strength = 100
		}
	}


	landunit = {
	location = 1200
	id = { type = 28500 id = 8 }
	name = "2 Ji'lin Jüntuan"

		division = {
		id = { type = 28500 id = 9 }
		name = "8 Man'chu Lü"
		type = infantry
		model = 7
		strength = 100
		extra = artillery
		brigade_model = 5
		}
		division = {
		id = { type = 28500 id = 10 }
		name = "2 Man'chu Qi'Bing"
		type = cavalry
		model = 7
		strength = 100
		extra = armored_car
		brigade_model = 2
		}
		division = {
		id = { type = 28500 id = 11 }
		name = "1 Man'chu Qi'Bing"
		type = cavalry
		model = 7
		strength = 100
		extra = armored_car
		brigade_model = 2
		}
	}

	landunit = {
	location = 1201
	id = { type = 28500 id = 12 }
	name = "3 Qiqihar Jüntuan"

		division = {
		id = { type = 28500 id = 13 }
		name = "9 Man'chu Lü"
		type = d_01
		model = 7
		strength = 75
		extra = rocket_artillery
		brigade_model = 6
		}
	}

	landunit = {
	location = 1199
	id = { type = 28500 id = 14 }
	name = "4 Harbin Jüntuan"

		division = {
		id = { type = 28500 id = 15 }
		name = "10 Man'chu Lü"
		type = infantry
		model = 7
		strength = 50
		extra = light_armor_brigade
		brigade_model = 1
		}
	}

	landunit = {
	location = 1202
	id = { type = 28500 id = 16 }
	name = "5 Chengde Jüntuan"

		division = {
		id = { type = 28500 id = 17 }
		name = "12 Man'chu Lü"
		type = d_01
		model = 7
		strength = 100
		}
	}

	landunit = {
	location = 1197
	id = { type = 28500 id = 18 }
	name = "4 Harbin Jüntuan"

		division = {
		id = { type = 28500 id = 19 }
		name = "18 Man'chu Lu"
		type = infantry
		model = 7
		strength = 50
		}
		division = {
		id = { type = 28500 id = 20 }
		name = "19 Man'chu Lu"
		type = infantry
		model = 7
		strength = 50
		extra = artillery
		brigade_model = 5
		}
	}

	landunit = {
	location = 1206
	id = { type = 28500 id = 21 }
	name = "4 Harbin Jüntuan"

		division = {
		id = { type = 28500 id = 22 }
		name = "20 Man'chu Lu"
		type = infantry
		model = 7
		strength = 50
		extra = light_armor_brigade
		brigade_model = 1
		}
	}

	landunit = {
	location = 1209
	id = { type = 28500 id = 23 }
	name = "4 Harbin Jüntuan"

		division = {
		id = { type = 28500 id = 24 }
		name = "20 Man'chu Lu"
		type = infantry
		model = 7
		strength = 50
		extra = artillery
		brigade_model = 5
		}
	}

    airunit = {
	location = 1208
	base = 1208
	id = { type = 28500 id = 60 }
	name = "Di'1 Man'chu Kongjun"
		division = { id = { type = 28500 id = 62 } name = "1 Man'chu TAC Hong'zha'ji" strength = 100 type = tactical_bomber model = 4 }
		division = { id = { type = 28500 id = 66 } name = "1 Man'chu Zhan'dou'ji" strength = 100 type = interceptor model = 6 }
	}

	navalunit = {
	location = 1218 #Yingkou
	base = 1218
	name = "Fengtian Navy"
	id = { type = 29600 id = 79 }
		division = { id = { type = 29600 id = 80 } name = "Zhenhai" type = escort_carrier model = 0 }
		division = { id = { type = 29600 id = 81 } name = "Zhuang'he" type = light_cruiser model = 2 }
		division = { id = { type = 29600 id = 82 } name = "Fu'xian" type = light_cruiser model = 2 }
		division = { id = { type = 29600 id = 83 } name = "1 Man'chu TBS Bingtuan" type = destroyer model = 3 }
		division = { id = { type = 29600 id = 84 } name = "2 Man'chu TBS Bingtuan" type = destroyer model = 3 }
		division = { id = { type = 29600 id = 85 } name = "3 Man'chu TBS Bingtuan" type = destroyer model = 3 }
		division = { id = { type = 29600 id = 86 } name = "1 Man'chu Qian'ting'bu" type = submarine model = 2 }
		}
}