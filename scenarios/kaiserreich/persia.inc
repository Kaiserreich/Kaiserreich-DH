


country = {
    tag = PER 
ai = "kaiserreich\Persia.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }
#### cabinet

    headofstate = { type = 9 id = 53238  }
    headofgovernment = { type = 9 id = 53038 }
 	foreignminister = { type = 9 id = 53057 }
 	armamentminister = { type = 9 id = 53207 }
 	ministerofsecurity = { type = 9 id = 53168 }
 	ministerofintelligence = { type = 9 id = 53169 }
 	chiefofstaff = { type = 9 id = 53225 } 
 	chiefofarmy = { type = 9 id = 53186 }
 	chiefofnavy = { type = 9 id = 53103 } 
 	chiefofair = { type = 9 id = 53010 } 

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

        SpyInfo  = {  country = "PER" NumberOfSpies = 3  } 

	capital = 1088

	manpower = 96


    ownedprovinces =      {
		 1095 1087 1089 1091 1090 1088 1086 1092 1094 1093
	 }
    controlledprovinces = {
		 1095 1087 1089 1091 1090 1088 1086 1092 1094 1093
	  }
    nationalprovinces =   {
		 1095 1087 1089 1091 1090 1088 1086 1092 1094 1093 1085 1080 1081 1082 1084 1083
	}

diplomacy = {
relation = { tag = AZB value = 111 }
relation = { tag = AFG value = 107 }
relation = { tag = IRQ value = 124 }
relation = { tag = SAU value = 109 }
relation = { tag = RUS value = -24 }
relation = { tag = OTT value = -54 }
relation = { tag = PAK value = -64 }
relation = { tag = PRK value = -89 }
relation = { tag = IND value = 24 }
}


	
	techapps = {
# Group E 1936 techs
#######################

#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Medicine
5600
#Engineers
1830 1840 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350
#Early Agriculture
5700
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WW2 - none
7290 7300 7310 7320 #1922 CAS

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Industrial
5310 #Computers & cryptografi
5810 5820 #Manufactoring
5800 5080 #Improved Construction Engineering 

	}

	deactivate = { 6010 6210 6570 6560 6390 } 

	dormant_ministers = { 53221 }

	dormant_leaders = { #AZB 440080-440088
						440080 440081 440082 440083 440084 440085 440086 440087 440088
						#ARM 440090-440100
						440090 440091 440092 440093 440094 440095 440096 440097 440098 440099 4400100 }

	dormant_teams = { 6103 6123 6126 #AZB
					  6130 #ARM
					  6119 6136 6137 6138 }

#########  OOB (...)


	landunit = {
	location = 1087
	name = "Lasgar Parsi"
        id = { type = 16600 id = 1 }
		division = {
        	id = { type = 16600 id = 2 }
		name = "1. Dastebandi Sarbaze Piyade"
		type = infantry
		model = 7
		extra = artillery 
	        brigade_model = 5
		}
	
		division = {
        	id = { type = 16600 id = 3 }
		name = "1. Dastebandi Savareh"
		type = cavalry
		model = 8
		}
		}

	landunit = {
	location = 1088
	name = "Lasgar Parsi"
        id = { type = 16600 id = 4 }
		division = {
        	id = { type = 16600 id = 5 }
		name = "2. Dastebandi Sarbaze Piyade"
		type = infantry
		model = 6
                extra = artillery 
	        brigade_model = 5
		}
	
		division = {
        	id = { type = 16600 id = 6 }
		name = "3. Dastebandi Sarbaze Piyade"
		type = infantry
		model = 6
		}
		}
		
	    landunit = {
		name = "Tehran Gendarmerie Corps"
		location = 1086
		id = { type = 16600 id = 7 }
		division = {
			id = { type = 16600 id = 8 }
			name = "Persian Gendarmerie Division"
			type = bergsjaeger
			model = 7
			max_strength = 60
			strength = 60 }
	}

        landunit = {
		name = "Persian Cossack Brigade"
		location = 1086
		id = { type = 16600 id = 9 }
		division = {
			id = { type = 16600 id = 10 }
			name = "Persian Cossack Battalions 1&2"
			type = cavalry
			model = 7
            max_strength = 60
			strength = 60 }	
	}

	landunit = {
	location = 1086
	name = "Shiraz Division"
        id = { type = 16600 id = 11 }
		division = {
        	id = { type = 16600 id = 12 }
		name = "4. Dastebandi Sarbaze Piyade"
		type = infantry
		model = 6
            extra = artillery 
	        brigade_model = 5
		}
			division = {
        	id = { type = 16600 id = 13 }
		name = "5. Dastebandi Sarbaze Piyade"
		type = infantry
		strength = 50
		model = 6 }	
		}
		
	landunit = {
	location = 1092
	name = "Azerbaijani Division"
        id = { type = 16600 id = 14 }
		division = {
        	id = { type = 16600 id = 15 }
		name = "6. Dastebandi Sarbaze Piyade"
		type = infantry
		model = 6
		}
			division = {
        	id = { type = 16600 id = 16 }
		name = "7. Dastebandi Sarbaze Piyade"
		type = infantry
		strength = 50
		model = 6 }	
		}		

	
 navalunit = {
 name = "Persian Navy"
 id = { type = 16601 id = 17 }
 location = 1091 #Gameroon
 base = 1091 #Gameroon
 division = { id = { type = 16601 id = 18 } name = "Qajar" type = light_cruiser model = 2 }
 division = { id = { type = 16601 id = 19 } name = "Persepolis" type = light_cruiser model = 2 }
 division = { id = { type = 16601 id = 20 } name = "Babr" type = destroyer model = 3 }
 division = { id = { type = 16601 id = 21 } name = "Shahrokh" type = destroyer model = 3 }
 }	
}  