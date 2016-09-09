


country = {
    tag = SER  
ai = "kaiserreich\Serbia.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 5
        free_market = 5
        professional_army = 3
        defense_lobby = 7
        interventionism = 6
    }


#### cabinet
headofstate = { type = 9 id = 547054 }

headofgovernment = { type = 9 id = 547002  }
#### Resource Reserves


	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 15

SpyInfo  = {  country = "SER" NumberOfSpies = 2  } 

	capital = 338

	  manpower = 155

    ownedprovinces =      {
	338 339 340 342 327 330 
	 }
    controlledprovinces = {
	338 339 340 342 327 330
	  }
    nationalprovinces =   {
	338 339 340 342 327 330 329
	}

diplomacy = {
relation = { tag = BUL value = 25 }
relation = { tag = CZE value = 50 }
relation = { tag = FIN value = 35 }
relation = { tag = FRA value = 50 }
relation = { tag = GER value = 50 }
relation = { tag = CAN value = 50 }
relation = { tag = VIC value = 50 }
relation = { tag = RUS value = 50 }
relation = { tag = GRE value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = HUN value = 80 }
relation = { tag = ITA value = 75 }
relation = { tag = ROM value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = OTT value = 100 }
}

dormant_leaders        = {  547047 547048 547049 547050 547051
							}
	
	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter 
4600 4610 4620 4630 4120 #Interwar Bomber 
7290 7300 7310 #CAS

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #Great War Infantry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1930 Cavalry Division 
1830 1840 1850 1860 #Engineers

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 2900 2910 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank
2800 2450 #Early Static Anti-Air Artillery 

#Industrial
5600 #Medicine
5810 5820 5050 # Production
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5800 5080 5090 #Improved Construction Engineering 
5700 5710 5010 #Agriculture 

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Land Doctrines
14000 14010 #Improved Great War Hospital System
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 # Great War Land Doctrines 
6010

#Naval
3810 #Troopships 

#Naval Doctrines
8010 8020 8030 8040 8050 # Engagement Theories


	}

#########  OOB (...)



landunit = {
id = { type = 19800 id = 1 }
location = 338
name = "I. Srpska Armija"

  division = {
  id = { type = 19800 id = 2 }
  name = "1. Timocka Pesadijska Divizija"
  strength = 100
  type = infantry
  model = 6
  extra = artillery
  brigade_model = 4
                }

        }


landunit = {
id = { type = 19800 id = 3 }
location = 327
name = "II. Srpska Armija"

  division = {
  id = { type = 19800 id = 4 }
  name = "2. Branicevska Pesadijska Divizija"
  strength = 100
  type = infantry
  model = 7
  extra = artillery
  brigade_model = 5
                }

  division = {
  id = { type = 19800 id = 5 }
  name = "Planinski Odred"
  strength = 100
  model = 6
  type = bergsjaeger
                }

  division = {
  id = { type = 19800 id = 6 }
  name = "1. Pozarevacka Konjicka Divizija"
  strength = 100
  type = cavalry
  model = 6
            }

        }

landunit = {
id = { type = 19800 id = 7 }
name = "III. Srpska Armija"
location = 330

  division = {
  id = { type = 19800 id = 8 }
  name = "3. Vucevicka Pesadijska Divizija"
  strength = 100
  type = infantry
  model = 6
  extra = artillery
  brigade_model = 4
            }

  division = {
  id = { type = 19800 id = 9 }
  name = "2. Zagubicka Konjicka Divizija"
  strength = 100
  type = cavalry
  model = 6
            }
          }


landunit = {
id = { type = 19800 id = 24 }
location = 339
name = "IV. Srpska Armija"

  division = {
  id = { type = 19800 id = 25 }
  name = " 4. Dunavska Pesadijska Divizija"
  strength = 70
  model = 6
  type = infantry
            }

  division = {
  id = { type = 19800 id = 26 }
  name = "5. Kucevska Pesadijska Divizija"
  strength = 100
  model = 6
  type = infantry
            }

          }

	airunit = {
 	location = 338
	base = 338
 	id = { type = 19800 id = 27 }
 	name = "Operativno Zrakoplovstvo"

  division = {
   id = { type = 19800 id = 28 }
   name = "1. Vazduhoplovni Lovacki Puk"
   strength = 40
   type = interceptor
   model = 6
             }

  division = {
   id = { type = 19800 id = 29 }
   name = "1. Takticki Bombarderski Puk"
   strength = 30
   type = tactical_bomber
   model = 4
             }
         }

}  