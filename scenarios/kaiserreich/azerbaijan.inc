


country = {
    tag = AZB  
ai = "kaiserreich\Azerbaijan.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 6
        free_market = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }

#### cabinet
	headofstate = { type = 9 id = 516038 }
	headofgovernment = { type = 9 id = 516039 }
 	foreignminister = { type = 9 id = 516040  }
 	armamentminister = { type = 9 id = 516041 }
 	ministerofsecurity = { type = 9 id = 516042 }
 	ministerofintelligence = { type = 9 id = 516043 }
 	chiefofstaff = { type = 9 id = 516044 }
 	chiefofarmy = { type = 9 id = 516045 }
 	chiefofnavy = { type = 9 id = 516046  }        
 	chiefofair = { type = 9 id = 516047  }

#### Resource Reserves
	capital = 713 
	manpower = 28

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	free = { ic = 2 oil = 0 energy = 4 metal = 2 rare_materials = 1 money = 0 manpower = 0 } #new Mar2020

    ownedprovinces =      {
		712 713
	 }
    controlledprovinces = {
		712 713
	  }
    nationalprovinces =   {
		714 713 712 1082 1083
	}

diplomacy = {
relation = { tag = OTT value = 170 }
relation = { tag = ENG value = 50 }
relation = { tag = RUS value = -20 }
relation = { tag = PER value = 60 }

relation = { tag = GEO value = -30 }
relation = { tag = ARM value = -120 }
relation = { tag = KAZ value = 90 }
relation = { tag = TRA value = -30 }
}

SpyInfo  = {  country = "AZB" NumberOfSpies = 2  } 
	
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
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6010 # Firepower focus
14000 14010 #Hospitals


	}

#########  OOB (...)
landunit = {
 	id = { type = 17347   id = 1 }
 	name = "I. Azarbaycan Korpus"
 	location = 713

  		division = {
   		id = { type = 17347   id = 2 }
   		name = "1. Strelkovaya Diviziya"
   		strength = 70
		model = 5
   		type = infantry
             	}

  		division = {
   		id = { type = 17347   id = 3 }
   		name = "3. Strelkovaya Diviziya"
   		strength = 70
		model = 5
   		type = infantry
             	}

  		division = {
   		id = { type = 17347    id = 4 }
   		name = "2. Strelkovaya Diviziya"
   		strength = 70
		model = 5
   		type = infantry
             	}
           	}



}  