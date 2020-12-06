


country = {
    tag = ROM  

ai = "kaiserreich\Romania.ai"
policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 1
        freedom = 3
        free_market = 2
        professional_army = 3
        defense_lobby = 7
        interventionism = 6
    }

        headofstate = { type = 9 id = 22001 }
	headofgovernment = { type = 9 id = 22002 }
	foreignminister = { type = 9 id = 22003 }
 	armamentminister = { type = 9 id = 22004 }
 	ministerofsecurity = { type = 9 id = 22005   }
 	ministerofintelligence = { type = 9 id = 22006 }
 	chiefofstaff = { type = 9 id = 22007 }
 	chiefofarmy = { type = 9 id = 22008 }
 	chiefofnavy = { type = 9 id = 22009 }        
 	chiefofair = { type = 9 id = 22010  }

#### cabinet

SpyInfo  = {  country = "ROM" NumberOfSpies = 3  } 

#### Resource Reserves

	capital = 316
	manpower = 150
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 15


    ownedprovinces =      {
	312 315 311 308 316 314 310 313 306 305 309 299 298 297 303 304 302
	 }
    controlledprovinces = {
	312 315 311 308 316 314 310 313 306 305 309 299 297 298 303 304 302
	  }
    nationalprovinces =   {
	312 315 311 308 316 314 310 313 306 305 309 299 297 303 298 304 302 300 301 291 293 285 295 286 296 292 289 287 288 621 307
	}

diplomacy = {
relation = { tag = BUL value = 25 }
relation = { tag = CZE value = 20 }
relation = { tag = ENG value = 50 }
relation = { tag = FIN value = 40 }
relation = { tag = FRA value = 50 }
relation = { tag = GER value = 50 }
relation = { tag = GRE value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = HUN value = 1 }
relation = { tag = ITA value = 50 }
relation = { tag = POL value = 40 }
relation = { tag = SOV value = 1 }
relation = { tag = OTT value = 100 }
relation = { tag = SER value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}


	
	techapps = {
# Group C 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4600 4610 4620 4630 4120 4130 #Early Bomber 
4740 4750 4760 #SEAPLANES
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
7290 7300 7310 7320 #CAS

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
7600 7610 2620 2010 2630 #Tankette 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 #Engineers
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division  
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 

#Industrial
5700 5710 5010 #Modern Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5600 5610 5620 #Medicine

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer
3610 3620 #Short Range Submarine 
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships
 


#Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 6020 # Superior Firepower
14000 14010 #Improved Great War Hospital System

#Naval Doctrines
8010 8040 8050 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_teams = { 2905 2919 2920 }

#########  OOB (...)


landunit = {
location = 316 #Bucharesti
name = "Armata de Nord"
        id = { type = 20600 id = 5 }

  division = {
  id = { type = 20600 id = 6 }
  name = "Divizie 1 Infanterie"
  type = infantry
  strength = 100
  model = 6
  extra = artillery
  brigade_model = 5
  }

  division = {
  id = { type = 20600 id = 7 }
  name = "Divizie 3 Infanterie"
  type = infantry
  model = 6
  strength = 100
  }
  }

landunit = {
location = 316 #Bucuresti
name = "Armata Reserva"
        id = { type = 20600 id = 8 }

  division = {
  id = { type = 20600 id = 9 }
  name = "Divizie Reserva Buzau"
  type = militia
  model = 4
  strength = 100
  }

  division = {
  id = { type = 20600 id = 10 }
  name = "Divizie Reserva Tulcea"
  type = militia
  model = 4
  strength = 100
  }
  }

landunit = {
location = 314 #Bucuresti
name = "Armata I"
        id = { type = 20600 id = 14 }

  division = {
  id = { type = 20600 id = 15 }
  name = "Divizie 2 Infanterie"
  type = infantry
  model = 6
  strength = 100
  extra = anti_air
  }

  division = {
  id = { type = 20600 id = 16 }
  name = "Divizie 4 Infanterie"
  type = infantry
  model = 6
  strength = 100
  }

  division = {
  id = { type = 20600 id = 17 }
  name = "Divizie 5 Infanterie"
  type = infantry
  model = 6
  strength = 100
  }
  division = {
  id = { type = 20600 id = 37 }
  name = "Divizie 8 Infanterie"
  type = infantry
  model = 6
  strength = 100
}
}

landunit = {
location = 311
name = "Armata II"
        id = { type = 20600 id = 18 }

  division = {
  id = { type = 20600 id = 19 }
  name = "Divizie 6 Infanterie"
  type = infantry
  model = 6
  strength = 100
  }

  division = {
  id = { type = 20600 id = 20 }
  name = "Divizie 7 Infanterie"
  type = infantry
  model = 6
  extra = artillery
  brigade_model = 5
  strength = 100
  }
  division = {
  id = { type = 20600 id = 36 }
  name = "Brigada I Mixta"
  type = infantry
  model = 6
  extra = artillery
  brigade_model = 5
  strength = 40
}
}

landunit = {
location = 308 
name = "Grup Namaesti"
        id = { type = 20600 id = 33 }

  division = {
  id = { type = 20600 id = 34 }
  name = "Divizie 1 Cavalerie"
  type = cavalry
  model = 6
  strength = 60
  extra = artillery
  brigade_model = 5
  }

  division = {
  id = { type = 20600 id = 35 }
  name = "Divizie 2 Cavalerie"
  type = cavalry
  model = 6
  strength = 60
  }
}



	navalunit = {
	location = 310 #Tulchea
	base = 310
	name = "Flota Romania de Mare"
	id = { type = 20600 id = 40 }
			
			division = {
			id = { type = 20600 id = 41 }
			name = "NFR 'Domnitorul Alexander' Flotila"
			type = destroyer
			model = 2
			}

			division = {
			id = { type = 20600 id = 49 }
			name = "NFR 'Delfinul' Flotila"
			type = submarine
			model = 1
			}
			}

	airunit = {
	location = 316 #Bucuresti
	base = 316
	name = "Gruparea Aeriana de Lupta"
	id = { type = 20600 id = 42 }
	
		division = {
		id = { type = 20600 id = 43 }
		name = "Grup 1 Avion de Vanatoare"
		type = interceptor
		model = 6
		strength = 50
		}

		division = {
		id = { type = 20600 id = 44 }
		name = "Grup 1 Tactic Bombardier"
		type = tactical_bomber
		model = 4
		strength = 10
		}

		division = {
		id = { type = 20600 id = 45 }
		name = "Grup 1 Hidroavioane"
		type = naval_bomber
		model = 1
		strength = 28
		}
		}

}  