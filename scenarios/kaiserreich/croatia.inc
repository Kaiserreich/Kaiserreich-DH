


country = {
    tag = CRO
	ai = "kaiserreich\Croatia.ai"
    flag_ext = _hun

	puppet = HUN

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 4
        freedom = 6
        free_market = 6
        professional_army = 7
        defense_lobby = 6
        interventionism = 8
    }

#### cabinet
	headofstate = { type = 9 id = 30034 } #Stjepan barun Sarkotic (Stefan Sarkotic Freiherr von Lovcen)
	headofgovernment = { type = 9 id = 30045 } #Ivo Pilar
	foreignminister = { type = 9 id = 30074 } #Josip Bombelles
	armamentminister = { type = 9 id = 30101 } #Stanko Sverljuga
	ministerofsecurity = { type = 9 id = 30132 } #Nikola Zvonimir Bjelovucic
	ministerofintelligence = { type = 9 id = 30180 } #Fedor Dragojlov
	chiefofstaff = { type = 9 id = 30178 } #Ivan Percevic
	chiefofarmy = { type = 9 id = 30188 } #Stjepan Duic
	chiefofnavy = { type = 9 id = 30212 } #Marijan Polic
	chiefofair = { type = 9 id = 30225 } #Emil Uzelac

#### Resource Reserves
	capital = 352

	manpower = 28

	SpyInfo  = { country = "CRO" NumberOfSpies = 2 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10      transports = 20

	free = { ic = 4 }

ownedprovinces = { 337 344 345 352 347 350 351 343
			#357 353 358 355 354 356 #BOS
			#335 332 #MTN
			}
controlledprovinces = { 337 344 345 352 347 350 351 343
			#357 353 358 355 354 356 #BOS
			#335 332 #MTN
			}
nationalprovinces = { 337 344 345 352 347 350 351 343
			#357 353 358 355 354 356 #BOS
			#335 332 #MTN
			}

diplomacy = {
	relation = { tag = BEL value = 30 }
	relation = { tag = BLR value = 60 }
	relation = { tag = BUL value = 40 }
	relation = { tag = GER value = 120 }
	relation = { tag = LAT value = 80 }
	relation = { tag = LIT value = 40 }
	relation = { tag = POL value = 20 }
	relation = { tag = AUS value = 120 }
	relation = { tag = HUN value = 160 }
	relation = { tag = ITA value = 50 }
	relation = { tag = SPA value = 60 }
	relation = { tag = ENG value = -80 }
	relation = { tag = FRA value = -60 }
	relation = { tag = RSI value = -70 }
	relation = { tag = RUS value = 50 }
	relation = { tag = OTT value = -50 }
	relation = { tag = JAP value = -10 }
}

dormant_leaders = { #Slovenia 44200-44246
	44200 44201 44202 44203 44204 44205 44206 44207 44208 44209 44210 44211 44212 44213 44214 44215 44216 44217 44218 44219 44220 44221 44222 44223 44224
	44225 44226 44227 44228 44229 44230 44231 44232 44233 44234 44235 44236 44237 44238 44239 44240 44241 44242 44243 44244 44245 44246
	44007 44024 44052 44056 44059 44069 44070 44072 44080 44082 44087 #Bosnia
	}

dormant_ministers = { #Slovenia 30300-30375
	30300 30301 30302 30303 30304 30305 30306 30307 30308 30309 30310 30311 30312 30313 30314 30315 30316 30317 30318 30319 30320 30321 30322 30323 30324
	30325 30326 30327 30328 30329 30330 30331 30332 30333 30334 30335 30336 30337 30338 30339 30340 30341 30342 30343 30344 30345 30346 30347 30348 30349
	30350 30351 30352 30353 30354 30355 30356 30357 30358 30359 30360 30361 30362 30363 30364 30365 30366 30367 30368 30369 30370 30371 30372 30373 30374
	30375
	30089 30144 30154 30155 30157 30158 30164 30165 30166 30167 30168 30181 30193 30194 #Bosnia
	}

dormant_teams = { 31030
	31003 31005 31028 #Slovenia
	31007 31008 #Bosnia
	}

	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
7290 7300 7310 7320 #1922 CAS
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber

# Armor & Artillery Technology
7600 7610 #Tank experiments
2620 2010 2630 #tanks
2860 2870 2880 #1921 Arm-cars
2290 2300 2310 2900 2910 2920 #1924 Artillery
2800 2450 21180 #1920s static AA
2810 2820 #1924 AA Bde

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 1340 1350 #1924 cavalry division
1910 1920 1930 1940 1950 1960 1970 #1924 Supply
1830 1840 1850 #1921 Engineers

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 #Early agric mechanization
5800 5080 #Construction engineerings
5810 5820 5050 5830 #Manu. support systems
5190 #Basic Oil refining
5600 5610 5620 #Early Pharmacology
5310 54010 54020 5316 5326 #Computers & cryptography

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 #Into firepower focus
14000 14010 #Hospitals

#Naval
3010 3020 3030 3040 3050 #1923 DD
3410 3420 3430 3440 3450 #1913 BB
3110 3120 3130 3140 #1922 CL
3210 3220 3230 3240 #1922 CA
3610 3620 3630 3640 #1924 SS
3810 3820 #1926 Troopship
3720 3730 3736 3740 3750 3900 #1927 Torpedo & ASW 1918

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 #Coastal Defense
	}

#########  OOB (...)

landunit = {
	id = { type = 25000 id = 1 }
	location = 352
	name = "Landwehr"
		division = {
			id = { type = 25000 id = 2 }
			name = "Domobranska Pjesacka Divizija" #Illyrien
			strength = 70
			type = infantry
			model = 7
			extra = artillery
			brigade_model = 5
		}
		division = {
			id = { type = 25000 id = 3 }
			name = "1. Pesadijska Divizija" #Illyrien
			strength = 50
			type = d_01
			model = 7
			extra = rocket_artillery
			brigade_model = 6
		}
		division = {
			id = { type = 25000 id = 4 }
			name = "2. Pesadijska Divizija" #Illyrien
			strength = 50
			type = d_01
			model = 7
			extra = rocket_artillery
			brigade_model = 6
		}
	}

airunit = {
	id = { type = 25000 id = 5 }
	name = "Zapovjednistvo zracnih snaga"
	location = 347
	base = 347
		division = {
			id = { type = 25000 id = 6 }
			name = "4. zrakoplovna lovacka skupina"
			type = interceptor
			model = 6
			strength = 50
		}
		division = {
			id = { type = 25000 id = 7 }
			name = "5. zrakoplovna bombarderska skupina"
			type = naval_bomber
			model = 0
			strength = 25
		}
	}

}  