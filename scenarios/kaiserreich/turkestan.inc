


country = {
    tag = KYG  
ai = "kaiserreich\Turkestan.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        freedom = 2
        free_market = 2
        professional_army = 1
        defense_lobby = 9
        interventionism = 1
    }

#### cabinet
	headofstate = { type = 9 id = 521071 }
	headofgovernment = { type = 9 id = 521072 }
	foreignminister = { type = 9 id = 521022 }
	armamentminister = { type = 9 id = 521095 }
	ministerofsecurity = { type = 9 id = 521084 }
	ministerofintelligence = { type = 9 id = 521043 }
	chiefofstaff = { type = 9 id = 521091 }
	chiefofarmy = { type = 9 id = 521094 }
	chiefofnavy = { type = 9 id = 521055 }
	chiefofair = { type = 9 id = 521090 }

#### Resource Reserves
	capital = 1100
	manpower = 28
	energy	= 1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

SpyInfo  = {  country = "KYG" NumberOfSpies = 2  } 

    ownedprovinces = { 1103 1105 1104 1106 1099 1100 1102 1097 1098 1112 }

    controlledprovinces = { 1103 1105 1104 1106 1099 1100 1102 1097 1098 1112 }

    nationalprovinces = { 1103 1105 1104 1106 1099 1100 1102 1097 1098 1112 }

diplomacy = {

relation = { tag = RUS value = -35 } 
relation = { tag = KAZ value = -90 } 
relation = { tag = AFG value = 50 } 
relation = { tag = PER value = 40 } 
relation = { tag = CXB value = -40 } 
}


	
	techapps = {


# Group D 1936 techs
#######################

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car  
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1010  1020 1030 1040 1050 1060 #Great War Infantry Division  
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1830 1840 1850 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture
5800 5080 #Improved Construction Engineering 
5600 5610 #Medicine

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6570 6300 # Human Wave, mobility

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_leaders = { 521065 521066 521067 521068 } #KAZ

dormant_ministers = { #KAZ
					  521150 521151 521152 521153 521154 521155 521156 521157 521158 521159 521160
					  521161 521162 521163 521164 521165 }

dormant_teams = { 11704
				  11705 11709 11710 11713 11714 11718 } #KAZ teams

#########  OOB (...)
landunit = {
 id = { type = 17345  id = 1 }
 name = "1. Ordu"
 location = 1105

  	division = {
   	id = { type = 17345  id = 2 }
   	name = "1. Süvari Tümeni"
   	strength = 100
   	type = cavalry
	model = 6
             }
  	division = {
   	id = { type = 17345  id = 3 }
   	name = "2. Süvari Tümeni"
   	strength = 100
   	type = cavalry
	model = 6
             }
  	division = {
   	id = { type = 17345  id = 4 }
   	name = "1. Piyade Tümeni"
   	strength = 100
   	type = infantry
	model = 6
   	extra = artillery 
        }
	}

landunit = {
 id = { type = 17345  id = 5 }
 name = "2. Ordu"
 location = 1102

  	division = {
   	id = { type = 17345  id = 6 }
   	name = "2. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
        }

  	division = {
   	id = { type = 17345  id = 7 }
   	name = "3. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
        }

landunit = {
 id = { type = 17345  id = 8 }
 name = "3. Ordu"
 location = 1098

  	division = {
   	id = { type = 17345  id = 9 }
   	name = "4. Piyade Tümeni"
   	strength = 80
   	type = bergsjaeger
	model = 6
   	extra = artillery 
             }
  	division = {
   	id = { type = 17345  id = 10 }
   	name = "5. Piyade Tümeni"
   	strength = 80
	model = 4
   	type = militia
             }
  	division = {
   	id = { type = 17345  id = 11 }
   	name = "6. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
             }
}

}  