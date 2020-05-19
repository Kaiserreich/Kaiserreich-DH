


country = {
    tag = MAN  

        ai = "kaiserreich\Fengtian.ai"
	puppet = JAP

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 3
        defense_lobby = 8
        interventionism = 8
    }
#### cabinet
headofstate = { type = 9 id = 58001 }
headofgovernment = { type = 9 id = 58002 }
#### Resource Reserves
	energy	=	200  metal	=	200	rare_materials =	200	oil =	200	supplies =	300
	money = 50

        SpyInfo  = {  country = "MAN" NumberOfSpies = 3  } 

	manpower = 150

	capital = 	1208

        free = { ic = 8 }

    ownedprovinces =      {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198
	 }
    controlledprovinces = {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198
	  }
    nationalprovinces =   {
		1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 
                1201 1208 1209 1210 1211 1214 1215 1217 1197 1198
	}

diplomacy = {
relation = { tag = CHI value = -10 }
relation = { tag = CSX value = 10  }
relation = { tag = CXB value = -75 }
relation = { tag = CYN value = -25 }
relation = { tag = CGX value = -75 }
relation = { tag = GER value = -55 }
relation = { tag = RUS value = 40  }
relation = { tag = PRI value = 30  }
relation = { tag = JAP value = 50 access = yes }
}

dormant_ministers = { 58052 58053 58054 58055 58056 58057 58058 58059 }

dormant_teams = { 6428 6405 6433 6434 6401 6406 6416 6438 6404 6426 6400 }


	
	techapps = {


# Group E 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter
7290 7300 7310 7320 #1922 CAS
4740 #Early Seaplane

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
13060 13070 13080 1310 1320 1330 1340 1350 #1924 Cavalry Division 
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
8010 8020 8050 8070

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

	}

#########  OOB (...)



	landunit = {
	location = 1208
        id = { type = 28500 id = 1 }
	name = "1 Fang'tien Jüntuan"

		division = {
	        id = { type = 28500 id = 2 }
		name = "7 Man'chu Lü"
		type = militia
		model = 4
		strength  = 40
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
		strength  = 100
		}
		

                division = {
	        id = { type = 28500 id = 5 }
		name = "11 Man'chu Lü"
		type = bergsjaeger
		model = 8
		strength  = 100
		}
		

                division = {
	        id = { type = 28500 id = 6 }
		name = "26 Man'chu Lü"
		type = infantry
		model = 7
		strength  = 100
		}
		

                division = {
	        id = { type = 28500 id = 7 }
		name = "3 Man'chu Qi'Bing"
		type = cavalry
		model = 7
                extra = armored_car
				brigade_model = 2
      		strength  = 100
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
                extra = artillery
				brigade_model = 5
		strength  = 100
		}

		division = {
	        id = { type = 28500 id = 13 }
		name = "2 Man'chu Qi'Bing"
		type = cavalry
		model = 7
                extra = armored_car
				brigade_model = 2
      		strength  = 100
		}
		}

	landunit = {
	location = 1201
        id = { type = 28500 id = 16 }
	name = "3 Qiqihar Jüntuan"

		division = {
	        id = { type = 28500 id = 17 }
		name = "9 Man'chu Lü"
		type = militia
		model = 4
		strength  = 75
		}
		}

	landunit = {
	location = 1199
        id = { type = 28500 id = 23 }
		name = "4 Harbin Jüntuan"

		division = {
	        id = { type = 28500 id = 24 }
		name = "10 Man'chu Lü"
		type = infantry
		model = 7
		strength  = 50
		extra = light_armor_brigade
		brigade_model = 1
		}
		}

	landunit = {
	location = 1202
        id = { type = 28500 id = 33 }
	name = "5 Chengde Jüntuan"

		division = {
	        id = { type = 28500 id = 34 }
		name = "12 Man'chu Lü"
		type = bergsjaeger
		model = 7
		strength  = 100
		}
		}

landunit = {
location = 1197
        id = { type = 28500 id = 25 }
  name = "4 Harbin Juntuan"

  division = {
        id = { type = 28500 id = 26 }
  name = "18 Man'chu Lu"
  type = infantry
  model = 7
  strength  = 50
  }

                division = {
        id = { type = 28500 id = 27 }
  name = "19 Man'chu Lu"
  type = infantry
  model = 7
  strength  = 50
  }
  }

        landunit = {
location = 1206
        id = { type = 28500 id = 28 }
  name = "4 Harbin Juntuan"

  division = {
        id = { type = 28500 id = 29 }
  name = "20 Man'chu Lu"
  type = infantry
  model = 7
  strength  = 50
  extra = light_armor_brigade
		brigade_model = 1
  }
  }

        landunit = {
location = 1209
        id = { type = 28500 id = 30 }
  name = "4 Harbin Juntuan"

  division = {
        id = { type = 28500 id = 31 }
  name = "20 Man'chu Lu"
  type = infantry
  model = 7
  strength  = 50
  }
  }

        airunit = { 
        location = 1208 id = { type = 28500 id = 60 } name = "Di'1 Man'chu Kongjun"
		base = 1208
		division = { id = { type = 28500 id = 62 } name = "1 Man'chu TAC Hong'zha'ji" strength = 100 type = tactical_bomber model = 4 }
		division = { id = { type = 28500 id = 66 } name = "1 Man'chu Zhan'dou'ji" strength = 100 type = interceptor model = 6 }
	}


navalunit = {
location = 1218 #Yingkou
base = 1218
name = "Fengtian Navy"
id = { type = 29600 id = 80 }

  division = { id = { type = 28500 id = 81 } name = "Zhuang'he" type = light_cruiser model = 2 }
  division = { id = { type = 29600 id = 82 } name = "Fu'xian" type = light_cruiser model = 2 }
  division = { id = { type = 29600 id = 83 } name = "1 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 29600 id = 84 } name = "2 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 29600 id = 85 } name = "3 Man'chu TBS Bingtuan" type = destroyer model = 3 }
  division = { id = { type = 28500 id = 86 } name = "1 Man'chu Qian'ting'bu" type = submarine model = 2 }

  }

}  