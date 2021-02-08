


country = {
    tag = MON
    flag_ext = _NAT
ai = "kaiserreich\Mongolia.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 1
        freedom = 2
        free_market = 2
        professional_army = 8
        defense_lobby = 8
        interventionism = 9
    }


#### cabinet

	headofstate = { type = 9 id = 94105 }
	headofgovernment = { type = 9 id = 94113 }
	foreignminister = { type = 9 id = 94106 }
	armamentminister = { type = 9 id = 94128 }
	ministerofsecurity = { type = 9 id = 94121 }
	ministerofintelligence = { type = 9 id = 94107 }
	chiefofstaff = { type = 9 id = 94011 } #Andrey S. Bakich
	chiefofarmy = { type = 9 id = 94163 } #Mikhail Tornovsky
	chiefofair = { type = 9 id = 94130 } #Valentin Veselovsky

#### Resource Reserves

        SpyInfo  = {  country = "MON" NumberOfSpies = 2  } 

	# Resource Reserves
	energy	=	200   metal	=	200	rare_materials =	100	oil =	200	supplies =	500
	money = 10

	manpower = 10

	capital = 1124


    ownedprovinces =      {
	1124 1123 1125 1121 1122 1120 1119 1167 1168 1169 1146 1147 1158
	 }
    controlledprovinces = {
	1124 1123 1125 1121 1122 1120 1119 1167 1168 1169 1146 1147 1158	
	  }
    nationalprovinces =   {
        1124 1123 1125 1121 1122 1120 1119 1167 1168 1169 1146 1147 1158 1238 1239 1240
	}

diplomacy = {
relation = { tag = RUS value = -40 }
relation = { tag = CXB value = -10 }
relation = { tag = JAP value = 70 }
relation = { tag = MAN value = 20 }
relation = { tag = CSX value = -10 }
}

dormant_ministers = { 94131 94132 94133 94134 94136 94141 94142 94158 94159 94160 }


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 #Interwar Fighter 
 
#Armour & Artillery
2860 #Interwar Armoured Car 
2290 #Light Field Artillery  
7600 7610 #SW Tank 

#Infantry
1010 1020 1030 1040 1050 1060 #ww1 Infantry Division  
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 #1928 Cavalry Division 
1160  1170 1180 1190 #Mountain Division 

#Industrial
5700 #Early Agriculture
5800 5080 #Improved Construction Engineering

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

#Land Doctrines
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6210 6220 # Mobility focus & spearhead




	}

#########  OOB (...)

landunit = {
location = 1124
name = "Armija Mongol Nayramdakh"
id = { type = 30500 id = 1 }

	division = {
        id = { type = 30500 id = 2 }
	name = "1. Mongol Strelkovaya Div."
	type = infantry
	model = 6
	extra = artillery
        brigade_model = 2
	}

	division = {
        id = { type = 30500 id = 3 }
	name = "2. Nayramdakh Kavaleriyskaya Div."
	type = cavalry
	model = 8
	}

	division = {
        id = { type = 30500 id = 4 }
	name = "3. Nayramdakh Kavaleriyskaya Div."
	type = cavalry
	model = 8
	}

	division = {
        id = { type = 30500 id = 5 }
	name = "2. Mongol Strelkovaya Div."
	type =  infantry
	model = 6
	}
	}

landunit = {
		location = 1119
        id = { type = 30500 id = 6 }
		name = "1ya Tunska Armiya"

		division = {
	        id = { type = 30500 id = 7 }
			name = "3. Tuvanska Strelkovaya Div."
			type = infantry
			model = 6
			strength = 100
				}
	}

landunit = {
location = 1123
name = "Yugo-Zapadnaya Armija"
id = { type = 30500 id = 8 }
	
division = {
        experience = 20
        id = { type = 30500 id = 9 }
	name = "1. Nayramdakh Kavaleriyskaya Div."
	type = cavalry
	model = 8
	}
division = {
        experience = 20
        id = { type = 30500 id = 13 }
	name = "4. Nayramdakh Kavaleriyskaya Div."
	type = cavalry
	model = 8
	}
        }      

landunit = {
		location = 1122
        id = { type = 30500 id = 10 }
		name = "Yugo-Vostochnaya Armija"

		division = {
	        id = { type = 30500 id = 11 }
			name = "4. Mongol Strelkovaya Div."
			type = infantry
			model = 6
			strength = 80
				}
                  division = {
	        id = { type = 30500 id = 12 }
			name = "5. Mongol Strelkovaya Div."
			type = infantry
			model = 6
			strength = 80
				}
	}
}