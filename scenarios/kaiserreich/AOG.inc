


country = {
    tag = CGX  
ai = "kaiserreich\AOG.ai"

	puppet = GER


	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 3
		freedom = 3
		free_market = 5
		professional_army = 5
		defense_lobby = 5
		interventionism = 2
	}

#### cabinet
	headofstate = { type = 9 id = 502001 } #AOG Board of Directors
	headofgovernment = { type = 9 id = 502025 } #Alexander von Falkenhausen
	foreignminister = { type = 9 id = 502036 } #Enno Paul Bracklo
	armamentminister = { type = 9 id = 502051 } #John Rabe
	ministerofsecurity = { type = 9 id = 502033 } #Horst Baerensprung
	ministerofintelligence = { type = 9 id = 502056 } #Zhu Jiahua
	chiefofstaff = { type = 9 id = 502086 } #Hermann Voigt-Ruscheweyh
	chiefofarmy = { type = 9 id = 502073 } #Hans Sehmsdorf
	chiefofnavy = { type = 9 id = 502112 } #Conrad Patzig
	chiefofair = { type = 9 id = 502118 } #Kurt-Bertram von Döring

#### Resource Reserves
		energy		= 200
		metal		= 200
		rare_materials 	= 100
		oil 		= 100
		supplies 	= 100
		money		= 50
		transports	= 60
  
	capital = 1369 #Guangzhou
	manpower = 200

	free = { ic = 7 energy = 16 metal = 8 }

SpyInfo  = { country = "CGX" NumberOfSpies = 3 }

    ownedprovinces =      {
		1360 1356 1357 1359 1368 1369 1370 1373 1374 1375 1376 1377 1379 1380 1381 1382 1383 1328 1331
	 }
    controlledprovinces = {
		1360 1356 1357 1359 1368 1369 1370 1373 1374 1375 1376 1377 1379 1380 1381 1382 1383 1328 1331
 
	  }
    nationalprovinces =   {
		1360 1356 1357 1359 1368 1369 1370 1373 1374 1375 1376 1377 1379 1380 1381 1382 1383 1328 1331
	}

diplomacy = {
relation = { tag = EAF value = 100 guaranteed = { day = 29 month = december year = 1935 } }
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

dormant_ministers = { #Liangguang Clique/Guangxi Republic 502150-502349
	502150 502151 502152 502153 502154 502155 502156 502157 502158 502159 502160 502161 502162 502163 502164 502165 502166 502167 502168 502169 502170 502171 502172 502173 502174
	502175 502176 502177 502178 502179 502180 502181 502182 502183 502184 502185 502186 502187 502188 502189 502190 502191 502192 502193 502194 502195 502196 502197 502198 502199
	502200 502201 502202 502203 502204 502205 502206 502207 502208 502209 502210 502211 502212 502213 502214 502215 502216 502217 502218 502219 502220 502221 502222 502223 502224
	502225 502226 502227 502228 502229 502230 502231 502232 502233 502234 502235 502236 502237 502238 502239 502240 502241 502242 502243 502244 502245 502246 502247 502248 502249
	502250 502251 502252 502253 502254 502255 502256 502257 502258 502259 502260 502261 502262 502263 502264 502265 502266 502267 502268 502269 502270 502271 502272 502273 502274
	502275 502276 502277 502278 502279 502280 502281 502282 502283 502284 502285 502286 502287 502288 502289 502290 502291 502292 502293 502294 502295 502296 502297 502298 502299
	502300 502301 502302 502303 502304 502305 502306 502307 502308 502309 502310 502311 502312 502313 502314 502315 502316 502317 502318 502319 502320 502321 502322 502323 502324
	502325 502326 502327 502328 502329 502330 502331 502332 502333 502334 502335 502336 502337 502338 502339 502340 502341 502342 502343 502344 502345 502346 502347 502348 502349
	#New Guangxi Clique 502400-502431
	502400 502401 502402 502403 502404 502405 502406 502407 502408 502409 502410 502411 502412 502413 502414 502415 502416 502417 502418 502419 502420 502421 502422 502423 502424
	502425 502426 502427 502428 502429 502430 502431
	}

dormant_teams = { #Liangguang Clique/Guangxi Republic
	8702 8715 8719 8735 8736 8737 8738 8739 8740 8741 8742 8743 8744 8745 8746 8747 8748 8749 }

dormant_leaders = { #Liangguang Clique/Guangxi Republic 502100-502219
	502100 502101 502102 502103 502104 502105 502106 502107 502108 502109 502110 502111 502112 502113 502114 502115 502116 502117 502118 502119 502120 502121 502122 502123 502124
	502125 502126 502127 502128 502129 502130 502131 502132 502133 502134 502135 502136 502137 502138 502139 502140 502141 502142 502143 502144 502145 502146 502147 502148 502149
	502150 502151 502152 502153 502154 502155 502156 502157 502158 502159 502160 502161 502162 502163 502164 502165 502166 502167 502168 502169 502170 502171 502172 502173 502174
	502175 502176 502177 502178 502179 502180 502181 502182 502183 502184 502185 502186 502187 502188 502189 502190 502191 502192 502193 502194 502195 502196 502197 502198 502199
	502200 502201 502202 502203 502204 502205 502206 502207 502208 502209 502210 502211 502212 502213 502214 502215 502216 502217 502218 502219
	#New Guangxi Clique 502250-502285
	502250 502251 502252 502253 502254 502255 502256 502257 502258 502259 502260 502261 502262 502263 502264 502265 502266 502267 502268 502269 502270 502271 502272 502273 502274
	502275 502276 502277 502278 502279 502280 502281 502282 502283 502284 502285 502286
	}

#########  OOB (...)


	
	landunit = {
		location = 1369 # Guangzhou
		name = "1. Juntuan"
		### leader = # Chen Jitang
		id = { type = 22400 id = 1 }
		division = {
			experience = 20
	        	id = { type = 22400 id = 2 }
			name = "Xunlian Bubing Shi"
			type = infantry
			strength = 100
			model = 7
		}
		division = {
			experience = 10
	        	id = { type = 22400 id = 3 }
			name = "1. Duli Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 4 }
			name = "Jingbei Lü"
			type = militia
			strength = 50
			model = 3
		}
	}
	landunit = {
		location = 1368 # Shaoguan
		name = "1. Jun"
		### leader = # Yu Hanmou
		id = { type = 22400 id = 5 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 6 }
			name = "1. Bubing Shi"
			type = infantry
			strength = 100
			model = 7
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 7 }
			name = "2. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 8 }
			name = "3. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1375 # Shantou
		name = "2. Jun"
		### leader = # Chang Ta
		id = { type = 22400 id = 9 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 10 }
			name = "4. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 11 }
			name = "5. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 12 }
			name = "6. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1304 # Maoming
		name = "3. Jun"
		### leader = # Yu Hanmou
		id = { type = 22400 id = 13 }
		division = {
			
	        	id = { type = 22400 id = 14 }
			name = "7. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			
	        	id = { type = 22400 id = 15 }
			name = "8. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			
	        	id = { type = 22400 id = 16 }
			name = "9. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1378 # Guilin
		name = "4. Juntuan"
		### leader = # Li Zongren
		id = { type = 22400 id = 17 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 18 }
			name = "19. Lujun"
			type = infantry
			strength = 30
			model = 6
		}
	}
	landunit = {
		location = 1380 # Liuzhou
		name = "7. Jun"
		### leader = # Liao Lei
		id = { type = 22400 id = 19 }
		division = {
			
	        	id = { type = 22400 id = 20 }
			name = "19. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			
	        	id = { type = 22400 id = 21 }
			name = "21. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			
	        	id = { type = 22400 id = 22 }
			name = "22. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
		division = {
			
	        	id = { type = 22400 id = 23 }
			name = "24. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1379 # Nanning
		name = "15. Jun"
		### leader = # Xia Wei
		id = { type = 22400 id = 24 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 25 }
			name = "42. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 26 }
			name = "43. Bubing Shi"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 27 }
			name = "44. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 28 }
			name = "45. Bubing Shi"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1369 # Guangzhou
		name = "Guangdong Jingbei"
		id = { type = 22400 id = 29 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 30 }
			name = "Guangdong Baoantui"
			type = infantry
			strength = 100
			model = 6
		}
	}
	landunit = {
		location = 1378 # Guilin
		name = "Guangxi Jingbei"
		id = { type = 22400 id = 31 }
		division = {
			experience = 5
	        	id = { type = 22400 id = 32 }
			name = "Guangdong Baoantui"
			type = infantry
			strength = 100
			model = 6
		}
		division = {
			experience = 5
	        	id = { type = 22400 id = 33 }
			name = "Guangdong Bubing Jun"
			type = militia
			strength = 100
			model = 3
		}
	}
	landunit = {
		location = 1314 # Hainan
		name = "Hainan Jingbei"
		id = { type = 22400 id = 34 }
		division = {
			experience = 10
	        	id = { type = 22400 id = 35 }
			name = "9. Duli Lü"
			type = infantry
			strength = 50
			model = 6
		}
	}

	landunit = {
		location = 1381 # Bose
		name = "9. Jun"
		### leader = 50089 # Hao Menglin
		id = { type = 22000 id = 20 }
		division = {
			experience = 10
	        	id = { type = 22000 id = 21 }
			name = "9. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1380 # Liuzhou
		name = "28. Jun"
	#	leader = X # ?
		id = { type = 22000 id = 67 }
		division = {
			experience = 5
	        	id = { type = 22000 id = 68 }
			name = "28. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1301 # Guilin
		name = "Hunan Xi Jingbei"
		### leader = #
		id = { type = 22000 id = 192 }
		division = {
			experience = 5
	        	id = { type = 22000 id = 193 }
			name = "34. Xin Bubing Shi"
			type = infantry
			max_strength = 50
			strength = 50
			model = 6
		}
	}
	landunit = {
		location = 1315 # Wuzhou
		name = "Ningbo Jingbei"
		### leader = #
		id = { type = 22000 id = 215 }
		division = {
	        	id = { type = 22000 id = 216 }
			name = "37. Duli Bubing Lü"
			type = infantry
			max_strength = 25
			strength = 25
			model = 6
		}
	}
	landunit = {
		location = 1313 # Shaoguan
		name = "20. Jun"
		### leader = 50162 # Guo Rudong
		id = { type = 22000 id = 106 }
		division = {
	        	id = { type = 22000 id = 107 }
			name = "20. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1369 # Guangzhou
		name = "2. Jun"
		### leader = 50050 # Jiang Dingwen
		id = { type = 22000 id = 6 }
		division = {
	        	id = { type = 22000 id = 7 }
			name = "2. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1381 # Chao'an
		name = "16. Jun"
		### leader = # Li Yunyan
		id = { type = 22000 id = 36 }
		division = {
	        	id = { type = 22000 id = 37 }
			name = "16. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1375 # Shantou
		name = "36. Jun"
		### leader = # Chou Hunyuan
		id = { type = 22000 id = 87 }
		division = {
	        	id = { type = 22000 id = 88 }
			name = "36. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1376 # Bose
		name = "14. Lujun"
		### leader = #
		id = { type = 22000 id = 161 }
		division = {
	        	id = { type = 22000 id = 162 }
			name = "14. Lujun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1305 # Liuzhou
		name = "18. Jun"
		### leader = 50219 # Luo Zhuoying
		id = { type = 22000 id = 38 }
		division = {
	        	id = { type = 22000 id = 39 }
			name = "18. Jun"
			type = infantry
			model = 6
		}
	}
	landunit = {
		location = 1304 # Guilin
		name = "26. Jun"
		### leader = 50104 # Xiao Zhichu
		id = { type = 22000 id = 62 }
		division = {
	        	id = { type = 22000 id = 63 }
			name = "26. Jun"
			type = infantry
			model = 6
		}
	}


###### AIR FORCE OOB ######


	airunit = {
		location = 1369 # Guangzhou
		name = "Guangxi Kongjun"
		base = 1369 # Guangzhou
		id = { type = 22400 id = 38 }
		division = {
			id = { type = 22400 id = 39 }
			name = "Guangxi Hang Kong Dui"
                        type = multi_role model = 3  
			max_strength = 40
			strength = 20
		}
	}

###### NAVY OOB ######

	navalunit = {
		location = 1369 # Guangzhou
		name = "Guangdong Haijun"
                base = 1369 # Guangzhou
		id = { type = 22400 id = 40 }
	
		division = {
			id = { type = 22400 id = 43 }
			name = "1. Yunshuji Dadui"
			type = transport
			model = 1
		}
	}

}  