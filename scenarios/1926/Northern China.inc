###########################
#Country definition for CSX
###########################
province = { id = 1338 naval_base = 5 air_base = 4 anti_air = 1 } 
province = { id = 1334 naval_base = 4 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################

country = {
    tag = CSX
    ai = "kaiserreich\1926_CSX.ai"
        flag_ext = _26
	name = CSX26
        ai = "kaiserreich\Republican China.ai"
	
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 3
        freedom = 3
        free_market = 3
        professional_army = 3
        defense_lobby = 8
        interventionism = 8
    }
#### cabinet

headofstate = { type = 9 id = 978214 }
headofgovernment = { type = 9 id = 978215 }

#### Resource Reserves
	energy	= 200  metal = 200	rare_materials = 200	oil = 200 supplies = 9000
	money = 50
        free = { ic = 30 supplies = 35 }
	manpower = 150

	capital = 	1247



    ownedprovinces =      {
		1321 1323 1238 1333 1342 1345 1239 1343 1337 1334 1336 1339 1335 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1329 1330 
                1340 1341 1319 1324 1322 1320 1325 1316 1326 1317 1344 1241 1245 1269 1271 1256 1263 1257 1258 1338 1346 1348 1314 1315 1313 1318 1350 1351 1347
                1358 1357 1301 1310 1352 1353
	 }
    controlledprovinces = {
		1321 1323 1238 1333 1342 1345 1239 1343 1337 1334 1336 1339 1335 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1329 1330 
                1340 1341 1319 1324 1322 1320 1325 1316 1326 1317 1344 1241 1245 1269 1271 1256 1263 1257 1258 1346 1348 1314 1315 1313 1318 1350 1351 1347
                1358 1357 1301 1310 1352 1353
	  }
    nationalprovinces =   {
		1321 1323 1238 1333 1342 1345 1239 1343 1337 1334 1336 1339 1335 1247 1246 1251 1242 1254 1332 1252 1253 1248 1249 1250 1327 1243 1244 1329 1330 
                1340 1341 1319 1324 1322 1320 1325 1316 1326 1317 1344 1241 1245 1269 1271 1256 1263 1257 1258 1338 1346 1348 1314 1315 1313 1318 1350 1351 1347
                1358 1357 1301 1310 1352 1353
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
relation = { tag = JAP value = 50  }
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



	landunit =  {   
  location = 1247 
   name   = "Beijing Silingbu"  
   id    = {   type = 22000 id = 1   }  
   Division = {   
    id     = {   type = 22000 id = 2   }  
    name    = "Di'1 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  

   Division = {   
    experience = 20  
    id     = {   type = 22000 id = 35  }  
    name    = "Di'18 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  

   Division = {   
    experience = 20  
    id     = {   type = 22000 id = 36  }  
    name    = "Di'19 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
    Division = {   
    experience = 20  
    id     = {   type = 22000 id = 37  }  
    name    = "Di'20 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  

    Division = {   
    experience = 20  
    id     = {   type = 22000 id = 38  }  
    name    = "Di'21 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 

  landunit =  {   
  location = 1254
   name   = "Di'2 Shi"  
   id    = {   type = 22000 id = 3   }  
   Division = {  
    id     = {   type = 22000 id = 4   }  
    name    = "Di'2 Shi"  
    type    = infantry  
    model   = 5
    extra = artillery
    brigade_model = 2
    experience = 10
      }  
     } 
  landunit =  {   
  location = 1253
   name   = "Di'3 Shi"  
   id    = {   type = 22000 id = 5   }  
   Division = {   
    id     = {   type = 22000 id = 6   }  
    name    = "Di'3 Shi"  
    type    = infantry  
    model   = 5
    extra = artillery
    brigade_model = 2
    experience = 10
      }  
     } 
  landunit =  {   
  location = 1257
   name   = "Di'4 Shi"  
   id    = {   type = 22000 id = 7   }  
   Division = {   
    id     = {   type = 22000 id = 8   }  
    name    = "Di'4 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 
   landunit =  {   
  location = 1258
   name   = "Di'5 Shi"  
   id    = {   type = 22000 id = 9   }  
   Division = {   
    id     = {   type = 22000 id = 10   }  
    name    = "Di'5 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 
   landunit =  {   
  location = 1256
   name   = "Di'6 Shi"  
   id    = {   type = 22000 id = 11   }  
   Division = {  
    id     = {   type = 22000 id = 12   }  
    name    = "Di'6 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 
   landunit =  {   
  location = 1269
   name   = "Di'7 Shi"  
   id    = {   type = 22000 id = 13   }  
   Division = {  
    id     = {   type = 22000 id = 14   }  
    name    = "Di'7 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 
  landunit =  {   
  location = 1271
   name   = "Di'8 Shi"  
   id    = {   type = 22000 id = 15   }  
   Division = { 
    id     = {   type = 22000 id = 16   }  
    name    = "Di'8 Shi"  
    type    = infantry  
    model   = 5
    experience = 10
      }  
     } 
  landunit =  {   
  location = 1301
   name   = "Di'9 Shi"  
   id    = {   type = 22000 id = 17   }  
   Division = {   
    id     = {   type = 22000 id = 18   }  
    name    = "Di'9 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
  landunit =  {   
  location = 1310
   name   = "Di'10 Shi"  
   id    = {   type = 22000 id = 19   }  
   Division = {   
    id     = {   type = 22000 id = 20   }  
    name    = "Di'10 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
   landunit =  {   
  location = 1318
   name   = "Di'11 Shi"  
   id    = {   type = 22000 id = 21   }  
   Division = {   
    id     = {   type = 22000 id = 22   }  
    name    = "Di'11 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
   landunit =  {   
  location = 1353
   name   = "Di'12 Shi"  
   id    = {   type = 22000 id = 23  }  
   Division = {   
    id     = {   type = 22000 id = 24   }  
    name    = "Di'12 Shin"  
    type    = infantry  
    model   = 4
      }  
     } 
   landunit =  {   
  location = 1352
   name   = "Di'13 Shi"  
   id    = {   type = 22000 id = 25  }  
   Division = {   
    id     = {   type = 22000 id = 26   }  
    name    = "Di'13 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
   landunit =  {   
  location = 1357
   name   = "Di'14 Shi"  
   id    = {   type = 22000 id = 27  }  
   Division = {   
    id     = {   type = 22000 id = 28   }  
    name    = "Di'14 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
  landunit =  {   
  location = 1358
   name   = "Di'15 Shi"  
   id    = {   type = 22000 id = 29  }  
   Division = {   
    id     = {   type = 22000 id = 30   }  
    name    = "Di'15 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
  landunit =  {   
  location = 1329
   name   = "Di'16 Shi"  
   id    = {   type = 22000 id = 31  }  
   Division = {   
    id     = {   type = 22000 id = 32   }  
    name    = "Di'16 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 
  landunit =  {   
  location = 1332
   name   = "Di'17 Shi"  
   id    = {   type = 22000 id = 33  }  
   Division = {   
    id     = {   type = 22000 id = 34   }  
    name    = "Di'17 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 

  landunit =  {  
  location = 1337 
   name   = "Nanjing Silingbu"  
   id    = {   type = 22000 id = 39   }  
   Division = {    
    id     = {   type = 22000 id = 40   }  
    name    = "Di'22 Shi"  
    type    = infantry  
    model   = 5
    experience = 10 
      }  

   Division = {   
    id     = {   type = 22000 id = 41  }  
    name    = "Di'23 Shi"  
    type    = infantry  
    model   = 5
    experience = 10 
      }  

   Division = {   
    id     = {   type = 22000 id = 42  }  
    name    = "Di'24 Shi"  
    type    = infantry  
    model   = 5
    experience = 10 
      }  


    } 

landunit =  {   
   location = 1338 # Shanghai  
   name   = "Shanghai Baoantui"  
   id    = {   type = 22000 id = 43   }  
   Division =  {    
    id     = {   type = 22000 id = 44   }  
    name    = "Jiangsu Baoantui"  
    type    = militia  
    model   = 2
    strength = 20
      }  
     } 

landunit =  {   
  location = 1352
   name   = "Di'25 Shi"  
   id    = {   type = 22000 id = 45   }  
   Division = {   
    id     = {   type = 22000 id = 46   }  
    name    = "Di'25 Shi"  
    type    = infantry  
    model   = 4
      }  
     }  

landunit =  {   
  location = 1310
   name   = "Di'26 Shi"  
   id    = {   type = 22000 id = 47   }  
   Division = {   
    id     = {   type = 22000 id = 48   }  
    name    = "Di'26 Shi"  
    type    = infantry  
    model   = 4
      }  
     }  

landunit =  {   
  location = 1241
   name   = "Di'27 Shi"  
   id    = {   type = 22000 id = 78   }  
   Division = {   
    id     = {   type = 22000 id = 79   }  
    name    = "Di'27 Shi"  
    type    = infantry  
    model   = 4
      }  
     } 

landunit =  {  
  location = 1323
   name   = "Anyang Silingbu"  
   id    = {   type = 22000 id = 80   }  
   Division = {    
    id     = {   type = 22000 id = 81   }  
    name    = "Di'28 Shi"  
    type    = infantry  
    model   = 4
      }  

   Division = {   
    id     = {   type = 22000 id = 82  }  
    name    = "Di'29 Shi"  
    type    = infantry  
    model   = 4
      }  

    }  

landunit =   {   
   location = 1337 # Nanjing  
   name   = "Nanjing Baoantui"  
    # ## leader = #  
   id    = {   type = 22000 id = 89   }  
   Division = {  
    locked = yes 
    id     = {   type = 22000 id = 90   }  
    name    = "Nanjing Baoantui"  
    type    = garrison 
    model   = 1
      }  
     }  

navalunit = {
location = 1334 #Yingkou
base = 1334
name = "Republican Navy"
id = { type = 22000 id = 83 }

  division = { id = { type = 22000 id = 84 } name = "Ning-Hai" type = light_cruiser model = 1 }
  division = { id = { type = 22000 id = 85 } name = "Ying-Swei" type = light_cruiser model = 1 }
  division = { id = { type = 22000 id = 86 } name = "1. Quzujian Dadui" type = destroyer model = 0 }
  division = { id = { type = 22000 id = 87 } name = "2. Quzujian Daduin" type = destroyer model = 0 }
  division = { id = { type = 22000 id = 88 } name = "3. Quzujian Dadui" type = destroyer model = 0 }
  }
} 