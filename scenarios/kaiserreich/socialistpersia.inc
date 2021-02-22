


country = {
    tag = U53
	
ai = "kaiserreich\Persia Socialist.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 7
        freedom = 5
        free_market = 8
        professional_army = 3
        defense_lobby = 3
        interventionism = 9
    }

#### cabinet
    headofstate = { type = 9 id = 153124 }
    headofgovernment = { type = 9 id = 153100 }
 	foreignminister = { type = 9 id = 153131 }
 	armamentminister = { type = 9 id = 153135 }
 	ministerofsecurity = { type = 9 id = 153141 }
 	ministerofintelligence = { type = 9 id = 153145 }
 	chiefofstaff = { type = 9 id = 153151 }
 	chiefofarmy = { type = 9 id = 153152 }
 	chiefofnavy = { type = 9 id = 153155 }        
 	chiefofair = { type = 9 id = 153108 }

#### Resource Reserves

	energy	=	1000   metal	=	1000	rare_materials =	500	oil =	500	supplies =	500
	money = 10

        SpyInfo  = {  country = "U53" NumberOfSpies = 3  } 

	capital = 1085

	manpower = 96


    ownedprovinces =      {
		1085 1080 1081 1082 1084 1083
	 }
    controlledprovinces = {
		1085 1080 1081 1082 1084 1083
	  }
    nationalprovinces =   {
		1085 1080 1081 1082 1084 1083 1095 1087 1089 1091 1090 1088 1086 1092 1094 1093
	}

diplomacy = {
relation = { tag = AZB value = 40 }
relation = { tag = AFG value = 23 }
relation = { tag = IRQ value = -31 }
relation = { tag = SAU value = -2 }
relation = { tag = RUS value = -54 }
relation = { tag = OTT value = -94 }
relation = { tag = PAK value = -64 }
relation = { tag = PRK value = 139 }
relation = { tag = IND value = -53 }
relation = { tag = PER value = -100 }
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
	
	landunit = {
	location = 1083
	name = "Azerbaijani People's Army"
        id = { type = 17700 id = 1 }
		division = {
        	id = { type = 17700 id = 2 }
		name = "2. Tabrizi Militia Division"
		strength = 33
		type = militia
		model = 4
		}
			division = {
        	id = { type = 17700 id = 3 }
		name = "3. Urmi Militia Division"
		type = militia
		strength = 25
		model = 4 }	
		}		

	    landunit = {
		name = "Tehran People's Defense Force"
		location = 1085
		id = { type = 17700 id = 4 }
		division = {
			id = { type = 17700 id = 5 }
			name = "1. Tehrani Mountain Rifle Division"
			type = bergsjaeger
			model = 7
			max_strength = 60
			strength = 60 }
	}

        landunit = {
		name = "Kurdish Peshmerga Army"
		location = 1080
		id = { type = 17700 id = 6 }
		division = {
			id = { type = 17700 id = 7 }
			name = "Mustafa Cavalry Division"
			type = cavalry
			model = 7
            max_strength = 60
			strength = 60 
			}	
		division = {
			id = { type = 17700 id = 8 }
			name = "Benyamin Cavalry Division"
			type = cavalry
			model = 7
            max_strength = 60
			strength = 60 
			}	
			
		}
		
	    landunit = {
		name = "Jangali Liberation Army"
		location = 1084
		id = { type = 17700 id = 9 }
		division = {
			id = { type = 17700 id = 10 }
			name = "4. Rasht Mountain Rifle Division"
			type = bergsjaeger
			model = 7
			max_strength = 60
			strength = 60 }
		division = {
			id = { type = 17700 id = 11 }
			name = "5. Sari Mountain Rifle Division"
			type = bergsjaeger
			model = 7
			max_strength = 60
			strength = 60 }
	}

}
