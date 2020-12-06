


country = {
    tag = KAZ  
    puppet = RUS
    name = KAZ_RUS_NAME
ai = "kaiserreich\Kazakh.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
      democratic = 5
        political_left = 2
        freedom = 4
        free_market = 3
        professional_army = 3
        defense_lobby = 4
        interventionism = 7
    }

#### cabinet
	headofstate = { type = 9 id = 520012 }
	headofgovernment = { type = 9 id = 520013 }
	foreignminister = { type = 9 id = 520017 }
	armamentminister = { type = 9 id = 520042 }
	ministerofsecurity = { type = 9 id = 520023 }
	ministerofintelligence = { type = 9 id = 520025 }
	chiefofstaff = { type = 9 id = 520030 }
	chiefofarmy = { type = 9 id = 520054 }
	chiefofnavy = { type = 9 id = 520052 }
	chiefofair = { type = 9 id = 520039 }
#### Resource Reserves

       SpyInfo  = {  country = "KAZ" NumberOfSpies = 2  } 

	capital = 504
	manpower = 28
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

    ownedprovinces =      {
	706 1113 1118 1116 1117 507 505 506 504 1114 1110 1111 503 500 1108 1109 1101 1107
	 }
    controlledprovinces = {
	706 1113 1118 1116 1117 507 505 506 504 1114 1110 1111 503 500 1108 1109 1101 1107
	  }
    nationalprovinces =   {
	706 1113  1118 1115 1116 1117 501 502 498 499 507 505 506 504 1114 1110 1111 503 500 1108 1109 1101 1107
	}

diplomacy = {
relation = { tag = KYG value = -120 }
relation = { tag = RUS value = 40 }
relation = { tag = SIK value = 80 }
relation = { tag = OTT value = 80 }
relation = { tag = AZB value = 90 }
relation = { tag = ARM value = -20 }
relation = { tag = TAN value = 60 }
relation = { tag = MON value = 50 }
}


	
	techapps = {
# Group D 1936 techs
#######################
#Infantry
1010 1020 1030 1040 1050 1060 #1918 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division

#Armour and artillery
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 #ww1 static AA
2810 #ww1 AA bde

#Aircraft
4500 4510 4520 4530 4540 4550 #up to 1918 interceptor
4300 4310 4320 #Up to 1916 MR Fighter

#Industrial
5700 5710 #Early agric mechanization
5800 5080 #Construction engineerings
5190 #Basic Oil refining

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 #Up to pre ww1 tech
14000 14010 #Hospitals
	}

#########  OOB (...)

landunit = {
 	id = { type = 17350      id = 1 }
 	name = "2ya Armiya Qazakhi"
 	location = 504

  		division = {
   		id = { type = 17350      id = 2 }
   		name = "1.Kavaleriiskaya Diviziya"
   		strength = 80
		model = 5
   		type = cavalry
             	}

  		division = {
   		id = { type = 17350      id = 3 }
   		name = "1. Strelkovaya Diviziya"
   		strength = 80
		model = 5
   		type = cavalry
             	}

  		division = {
   		id = { type = 17350      id = 4 }
   		name = "3. Strelkovaya Diviziya"
   		strength = 80
		model = 5
   		type = infantry
   		}
		}

landunit = {
 	id = { type = 17350      id = 5 }
 	name = "1ya Armiya Qazakhi"
 	location = 1113

  		division = {
   		id = { type = 17350      id = 6 }
   		name = "2. Strelkovaya Diviziya"
   		strength = 100
		model = 5
   		type = infantry
             	}

  		division = {
  	 	id = { type = 17350      id = 7 }
   		name = "4. Strelkovaya Diviziya"
   		strength = 100
		model = 5
   		type = infantry
		}

        division = {
   	id = { type = 17350      id = 8 }
   	name = "4. Strelkovaya Diviziya"
  	 strength = 100
   	type = infantry
        model = 5
             }

  	division = {
   	id = { type = 17350      id = 9 }
   	name = "5. Strelkovaya Diviziya"
   	strength = 100
	model = 5
   	type = infantry
             }

  	division = {
   	id = { type = 17350      id = 10 }
   	name = "6. Strelkovaya Diviziya"
   	strength = 30
	model = 5
   	type = infantry
             }
		}




}  