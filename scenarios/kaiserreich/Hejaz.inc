

country = {
    tag = SAU 
    ai = "kaiserreich\Hatsemite Arabia.ai"


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 2
        defense_lobby = 5
        interventionism = 3
    }


#### cabinet

	headofstate = { type = 9 id = 63001 }
	headofgovernment = { type = 9 id = 63007 }
 	foreignminister = { type = 9 id = 63078  }
 	armamentminister = { type = 9 id = 63025 }
 	ministerofsecurity = { type = 9 id = 63027 }
	ministerofintelligence = { type = 9 id = 63033 }
	chiefofstaff = { type = 9 id = 63085 } #Muhammad Abd al-Qadir al-Afriqi
	chiefofarmy = { type = 9 id = 63045 } #Jafar al-Askari
	chiefofnavy = { type = 9 id = 63051 }
	chiefofair = { type = 9 id = 63053 } #H.R.M. Brooke-Popham

#### Resource Reserves

	manpower = 27
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 1049

    ownedprovinces =      {
	1040 1047 1045 1038 1039 1049
	 }
    controlledprovinces = {
	1040 1047 1045 1038 1039 1049
	  }
    nationalprovinces =   {
	1040 1047 1045 1038 1039 1049
	}

diplomacy = {
relation = { tag = AFG value = 50 }
relation = { tag = AUS value = 50 }
relation = { tag = CAN  value = 50 }
relation = { tag = EGY value = 125 }
relation = { tag = ITA value = -25 }
relation = { tag = OMN value = 125 }
relation = { tag = PER value = 100 }
relation = { tag = SOV value = 1 }
relation = { tag = OTT value = -150 }
relation = { tag = YEM value = 125 }
}


	
	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 #Interceptor 1918
4600 4610 4620 4630 #Tactical Bomber 1918
4300 4310 4320 #Multi-Role Fighter 1918

#Armour & Artillery
2860 2870 #Weltkrieg Armored Car
2290 2300 2310 2900 #Improved Weltkrieg Heavy Field Artillery
2800 #Weltkrieg Static Anti-Air Artillery
2810 #AA Brigade 1918
7600 7610 #SW Tank

#Infantry
1010  1020 1030 1040 1050 1060 #1918 lgt. Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 1350 #1918 Cavalry Division

#Industrial
5810 5820 5050 # Production
5700 5710 5010 #Modern Agriculture
5800 5080 #Improved Construction Engineering
5600 #Medicine
5190 # Basic oil conversion

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910

#Naval Doctrines
8010 8020 8040 8050

#Air Doctrines - ww1 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_ministers = { 63059 63060 63061 63062 63063 63064 63065 63066 63067 63068
					  #LEB & SYR
					  63098 63099 63100 63101 63102 63103 63104 63105 63106 63107 63108 63109 63110 63111 63112 63113
					  #IRQ
					  63114 63115 63116 63117 63118 63119 63120 63121 63122 63123 63124 63125 }
dormant_leaders = { 290015 #bin Abdulaziz
					#LEB & SYR
					290050 290051 290052 290053 290054 290055 290056 290060 290061 290062 290063 290064 290065 290066 290067 290068
					#IRQ
					290070 290071 290072 290073 290074 290075 290076 290077 290078 290079 290080 290081 }
dormant_teams = { #IRQ
				  8606 8612 8614 8621 8628 8630
				  #SYR
				  8616 8623 }

#########  OOB (...)
	landunit = {
	location = 1045
	name = "Arab Northern Army"
        id = { type = 22600 id = 1 }
	
		division = {
        	id = { type = 22600 id = 2 }
		name = "1st Arab Regular Infantry Division"
		type = infantry
		model = 6
		}

		division = {
        	id = { type = 22600 id = 3 }
		name = "Hedjaz Irregular Battalion"
		type = militia
		model = 4
                  }

        	division = {
        	id = { type = 22600 id = 4 }
                name = "Hashemite Cavalry Group"
                type = cavalry
		model = 7
		}
		}

}  