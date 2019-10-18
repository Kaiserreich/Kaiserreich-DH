###########################
#Country definition for CSX
###########################
province = { id = 1338 naval_base = 5 air_base = 4 anti_air = 1 } 
province = { id = 1334 naval_base = 4 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################

country = {
    tag = CSX # Nanjing Clique
    ai = "KAISERREICH\1926_CSXnew.ai"
        flag_ext = _26new
	name = CSX26_new
		
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

headofstate = { type = 9 id = 978294 } # Sun Chuanfang
headofgovernment = { type = 9 id = 978295 } # Sun Chuanfang

#### Resource Reserves
	energy	= 200  metal = 200	rare_materials = 200	oil = 200 supplies = 5000
	money = 50
        free = { ic = 20 supplies = 35 }
	manpower = 25

	capital = 1337 # Nanjing



    ownedprovinces =      {
		 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360
	 }
    controlledprovinces = {
		1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360
	  }
    nationalprovinces =   {
		1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360
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
  location = 1318
   name   = "Di'11 Shi"  
   id    = {   type = 22000 id = 21   }  
   Division = {   
    id     = {   type = 22000 id = 22   }  
    name    = "Di'11 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
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
	strength = 70
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
	strength = 70
      }  
     } 
   landunit =  {   
  location = 1358
   name   = "Di'14 Shi"  
   id    = {   type = 22000 id = 27  }  
   Division = {   
    id     = {   type = 22000 id = 28   }  
    name    = "Di'14 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
      }  
     }  
  landunit =  {   
  location = 1336
   name   = "Di'16 Shi"  
   id    = {   type = 22000 id = 31  }  
   Division = {   
    id     = {   type = 22000 id = 32   }  
    name    = "Di'16 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
      }  
	Division = {   
    id     = {   type = 22000 id = 34   }  
    name    = "Di'17 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
      } 
	Division = {   
    id     = {   type = 22000 id = 35   }  
    name    = "Di'17 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
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
	strength = 70
      }
	Division = {   
    id     = {   type = 22000 id = 49   }  
    name    = "Di'26 Shi"  
    type    = infantry  
    model   = 4
	strength = 70
      }
     }    

landunit =   {   
   location = 1337 # Nanjing  
   name   = "Nanjing Baoantui"   
   id    = {   type = 22000 id = 89   }  
   Division = {  
    locked = yes 
    id     = {   type = 22000 id = 90   }  
    name    = "Nanjing Baoantui"  
    type    = garrison 
    model   = 1
      }  
     }  
} 