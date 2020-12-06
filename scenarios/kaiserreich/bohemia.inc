


country = {
    tag = CZE  
    ai = "kaiserreich\Bohemia.ai"
    puppet = AUS


    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 4
        free_market = 8
        freedom = 7
        professional_army = 5
        defense_lobby = 7
        interventionism = 5
    	}


	headofstate = { type = 9 id = 24154 }
	headofgovernment = { type = 9 id = 24175 }
	foreignminister = { type = 9 id = 24060 }
	armamentminister = { type = 9 id = 24067 } #Karl von Skoda
	ministerofsecurity = { type = 9 id = 24085 }
	ministerofintelligence = { type = 9 id = 24104 }
	chiefofstaff = { type = 9 id = 24183 }
	chiefofarmy = { type = 9 id = 24182 }
	chiefofnavy = { type = 9 id = 24138 }
	chiefofair = { type = 9 id = 24143 } #Rudolf Holeka

SpyInfo  = {  country = "CZE" NumberOfSpies = 3  } 

#### Resource Reserves

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	manpower = 150

	capital = 207


    ownedprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

    controlledprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

    nationalprovinces = { 205 199 204 200 207 198 197 196 201 206 203 202 }

dormant_leaders = { 18038 }

dormant_ministers = { 24184 24185 24186 24187 }

diplomacy = {
relation = { tag = BEL value = 40 }
relation = { tag = BLR value = 70 }
relation = { tag = BUL value = 30 }
relation = { tag = GER value = 100 }
relation = { tag = LAT value = 60 }
relation = { tag = LIT value = 40 }
relation = { tag = POL value = 50 }
relation = { tag = AUS value = 150 }
relation = { tag = HUN value = 80 }
relation = { tag = ITA value = 40 }
relation = { tag = SPA value = 40 }
relation = { tag = ENG value = -50 }
relation = { tag = FRA value = -70 }
relation = { tag = RSI value = -20 }
relation = { tag = VIC value = 30 }
relation = { tag = RUS value = 80 }
relation = { tag = OTT value = 30 }
relation = { tag = USA value = 40 }
relation = { tag = JAP value = -10 }
}


	
	techapps = {

# Group C 1936 techs
#######################

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
2620 2010 2630 2640 #1924 tanks

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #CAS

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineerings
5190 #Basic Oil refining
5810 5820 5050 5830 5060 5070 #Manufacturing up to impr Mac tools
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

	}

#########  OOB (26000 )


landunit = {
       id = { type = 26000 id = 1 }
location = 202
name = "Landwehr"

 division = {
        id = { type = 26000 id = 2 }
 name = "1/4 Böhmische Landwehrbrigaden"
 type = militia
 model = 4
 strength  = 50
               max_strength = 50
 }
 
 division = {
        id = { type = 26000 id = 3 }
 name = "2/3 Böhmische Landwehrbrigaden"
 type = militia
 strength  = 50
               max_strength = 50
 model = 4
 }
               }


}  