###########################
#Country definition for MAN
###########################
province = { id = 1218 naval_base = 4 air_base = 3 anti_air = 1 } 
province = { id = 1208 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################


country = {
    tag = MAN  

	name = MAN26_new
        ai = "KAISERREICH\Fengtian.ai"
	
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

	headofstate = { type = 9 id = 58001 } # Zhang Zuolin
	headofgovernment = { type = 9 id = 58015 } # Zhang Zongchang

#### Resource Reserves
	energy	=	200  metal	=	200	rare_materials =	200	oil =	500	supplies = 8000
	money = 50
        free = { ic = 25 supplies = 35 oil = 10 }
	manpower = 50

	capital = 1208



    ownedprovinces =      {
		1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1240 1241 1242 1243 1244 1245 1246 1247 1323 1327 1329 1330 1331 1332
	 }
    controlledprovinces = {
		1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1240 1241 1242 1243 1244 1245 1246 1247 1323 1327 1329 1330 1331 1332
	  }
    nationalprovinces =   {
		1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1240 1241 1242 1243 1244 1245 1246 1247 1323 1327 1329 1330 1331 1332
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
	location = 1208
        id = { type = 28500 id = 1 }
	name = "1 Fang'tien Jüntuan"

		division = {
	        id = { type = 28500 id = 2 }
		name = "7 Man'chu Lü"
		type = militia
		model = 3
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
		model = 5
                extra = artillery
		brigade_model = 3
		strength  = 70
		}
		
                division = {
	        id = { type = 28500 id = 5 }
		name = "11 Man'chu Lü"
		type = infantry
		model = 5
		strength  = 70
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
		model = 5
                extra = artillery
		brigade_model = 3
		strength  = 70
		}

		division = {
	        id = { type = 28500 id = 13 }
		name = "2 Man'chu Qi'Bing"
		type = cavalry
		model = 5
                extra = armored_car
		brigade_model = 0
      		strength  = 70
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
		model = 3
		strength  = 100
		}
		}

	landunit = {
	location = 1199
        id = { type = 28500 id = 23 }
		name = "9 Harbin Jüntuan"

		division = {
	        id = { type = 28500 id = 24 }
		name = "10 Man'chu Lü"
		type = infantry
		model = 3
		strength  = 70
		}
		division = {
	        id = { type = 28500 id = 25 }
		name = "11 Man'chu Lü"
		type = infantry
		model = 3
		strength  = 70
		}
		}

	landunit = {
	location = 1202
        id = { type = 28500 id = 33 }
	name = "5 Chengde Jüntuan"

		division = {
	        id = { type = 28500 id = 34 }
		name = "12 Man'chu Lü"
		type = infantry
		model = 3
		strength  = 70
		}
}

  landunit = {
	location = 1217
        id = { type = 28500 id = 49 }
	name = "11 Anshan Jüntuan"

		division = {
                locked = yes 
	        id = { type = 28500 id = 50 }
		name = "23 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1220
        id = { type = 28500 id = 51 }
	name = "12 Dandong Jüntuan"

		division = {
                locked = yes 
	        id = { type = 28500 id = 52 }
		name = "25 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1211
        id = { type = 28500 id = 36 }
	name = "13 Hunjiang Jüntuan"

		division = {
                locked = yes 
	        id = { type = 28500 id = 37 }
		name = "24 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1215
        id = { type = 28500 id = 38 }
	name = "14 Fushun Jüntuan"

		division = {
                locked = yes 
	        id = { type = 28500 id = 39 }
		name = "26 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1212
        id = { type = 28500 id = 40 }
	name = "14 Yanji Jüntuan"

		division = {
                locked = yes 
	        id = { type = 28500 id = 41 }
		name = "27 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1205
        id = { type = 28500 id = 42 }
	name = "15 Mudanjiang Jüntuan"

		division = {
                locked = yes
	        id = { type = 28500 id = 43 }
		name = "28 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1202
        id = { type = 28500 id = 44 }
	name = "17 Mudanjiang Jüntuan"

		division = {
                locked = yes
	        id = { type = 28500 id = 45 }
		name = "29 Man'chu Lü"
		type = infantry
		model = 5
		}
		}

  landunit = {
	location = 1204
        id = { type = 28500 id = 46 }
	name = "16 Mudanjiang Jüntuan"

		division = {
                locked = yes
	        id = { type = 28500 id = 47 }
		name = "30 Man'chu Lü"
		type = infantry
		model = 5
		}
		}
landunit =  {   
  location = 1247 
   name   = "Beijing Silingbu"  
   id    = {   type = 28500 id = 48   }  
   Division = {   
    id     = {   type = 28500 id = 86   }  
    name    = "Di'1 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
	strength = 70
      }  

   Division = {   
    experience = 20  
    id     = {   type = 28500 id = 87  }  
    name    = "Di'18 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
	strength = 70
      }  

   Division = {   
    experience = 20  
    id     = {   type = 28500 id = 88  }  
    name    = "Di'19 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
	strength = 70
      }  
    Division = {   
    experience = 20  
    id     = {   type = 28500 id = 89  }  
    name    = "Di'20 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
	strength = 70
      }  

    Division = {   
    experience = 20  
    id     = {   type = 28500 id = 53  }  
    name    = "Di'21 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
	strength = 70
      }  
     }
landunit =  {   
  location = 1241
   name   = "Di'27 Shi"  
   id    = {   type = 28500 id = 54   }  
   Division = {   
    id     = {   type = 28500 id = 55   }  
    name    = "Di'27 Shi"  
    type    = infantry  
    model   = 4
	strength = 60
      }  
     } 
landunit =  {  
  location = 1323
   name   = "Anyang Silingbu"  
   id    = {   type = 28500 id = 56  }  
   Division = {    
    id     = {   type = 28500 id = 57  }  
    name    = "Di'28 Shi"  
    type    = infantry  
    model   = 4
	strength = 60
      }  

   Division = {   
    id     = {   type = 28500 id = 58  }  
    name    = "Di'29 Shi"  
    type    = infantry  
    model   = 4
	strength = 60
      }  

    }

        airunit = { 
        location = 1208 id = { type = 28500 id = 60 } name = "Di'1 Man'chu Kongjun"
		base = 1208
		division = { id = { type = 28500 id = 66 } name = "1 Man'chu Zhan'dou'ji" strength = 100 type = interceptor model = 3 }
	}


navalunit = {
location = 1218 #Yingkou
base = 1218
name = "Fengtian Navy"
id = { type = 29600 id = 80 }

  division = { id = { type = 28500 id = 81 } name = "Zhuang'he" type = light_cruiser model = 1 }
  division = { id = { type = 29600 id = 82 } name = "Fu'xian" type = light_cruiser model = 1 }
  division = { id = { type = 29600 id = 83 } name = "1 Man'chu TBS Bingtuan" type = destroyer model = 0 }
  division = { id = { type = 29600 id = 84 } name = "2 Man'chu TBS Bingtuan" type = destroyer model = 0 }
  division = { id = { type = 29600 id = 85 } name = "3 Man'chu TBS Bingtuan" type = destroyer model = 0 }

  }

}  