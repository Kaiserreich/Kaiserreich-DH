


country = {
    tag = SCH
ai = "kaiserreich\Switzerland.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        freedom = 7
        free_market = 9
        professional_army = 2
        defense_lobby = 8
        interventionism = 1
    }

#### cabinet

#### Resource Reserves
	capital = 392
	manpower = 135
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 25


    ownedprovinces =      {
		391 392 389 390
	 }
    controlledprovinces = {
		391 392 389 390
	  }
    nationalprovinces =   {
		391 392 389 390
	}

SpyInfo  = {  country = "SCH" NumberOfSpies = 4  } 

diplomacy = {
relation = { tag = HUN value = 45 }
relation = { tag = AUS value = 45 }
relation = { tag = ITA value = -23 }
relation = { tag = ENG value = -12 }
relation = { tag = FRA value = -24 }
relation = { tag = GER value = 79 }
relation = { tag = RUS value = 100 }
relation = { tag = USA value = 100 }
}


	
	techapps = {
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 
7600 7610 2620 2010 2630 #Great War Tank

#Infantry 
1010  1020 1030 1040 1050 1060 1070 1080 #Great War Infantry Division 
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1830 1840 1850 1860 #Engineers

#Industrial
5810 5820 5050 5830 #Manufactoring
5700 5710 5010 5020 #Mechanized Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5800 5080  5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5600 5610 5620 5630 #Medicine

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 6020 #Firepower Focus Doctrine 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

#########  OOB (...)

#####################
####Swiss 36OOB####
#####################

landunit = {
 id = { type = 30600 id = 1 }
 location = 389
 name = "I Armeekorps"

  division = {
   id = { type = 30600 id = 2 }
   name = "1. Felddivision"
   strength = 100
   type = infantry
   model = 7
   extra = artillery
             }
}

#############################
##############################

landunit = {
 id = { type = 30600 id = 3 }
 location = 390
 name = "II Corps d' Armée"

  division = {
   id = { type = 30600 id = 4 }
   name = "2. Division d' Infanterie"
   strength = 100
   type = infantry
   model = 7
   extra = anti_air
}

   division = {
   id = { type = 30600 id = 5 }
   name = "1. Alpenjägerdivision"
   strength = 30
   model = 7
   type = bergsjaeger
             }

           }

############################
#############################

landunit = {
 id = { type = 30600 id = 6 }
 location = 392
 name = "III Corpa di Armata"

  division = {
   id = { type = 30600 id = 7 }
   name = "3. Divisione di Fanteria"
   strength = 100
   type = infantry
   model = 7
   extra = anti_tank
             }

  division = {
   id = { type = 30600 id = 8 }
   name = "4. Felddivisionen"
   strength = 100
   model = 7
   type = infantry
             }

division = {
   id = { type = 30600 id = 9 }
   name = "2eme Div. de Infanterie de Montagne"
   strength = 30
   type = bergsjaeger
   model = 7
             }

           }

################################
################################

landunit = {
 id = { type = 30600 id = 10 }
 location = 391
 name = "IV Armeekorps"

  division = {
   id = { type = 30600 id = 11 }
   name = "5. Division d' Infanterie"
   strength = 100
   type = infantry
   model = 7
   extra = engineer
   brigade_model = 2
             }

  division = {
   id = { type = 30600 id = 12 }
   name = "6. Divisione di Fanteria"
   strength = 100
   type = infantry
   model = 7
             }

division = {
   id = { type = 30600 id = 13 }
   name = "3. Divisione di Alpinisti"
   strength = 30
   type = bergsjaeger
   model = 7
             }

           }

	airunit = {
 	id = { type = 30600 id = 14 }
 	location = 392
	base = 392
 	name = "Heeren Luftwaffe Abteilung 1"

  		division = {
   		id = { type = 30600 id = 15 }
   		name = "Taktikkampfgeschwader 1"
   		strength = 40
   		type = tactical_bomber
   		model = 5
             	}
         	}

############################
#############################


}  