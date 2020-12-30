


country = {
    tag = ARM  
ai = "kaiserreich\Armenia.ai"
	puppet = OTT
	control = OTT

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        freedom = 2
        free_market = 4
        professional_army = 5
        defense_lobby = 8
        interventionism = 4
    }

#### cabinet
	headofstate 		= { type = 9 id = 515031 } #Semeno Ter-Petrossian
	headofgovernment	= { type = 9 id = 515030 } #Mehmed Esad Pasha
	chiefofstaff		= { type = 9 id = 515041 } #Movses Silikyan

#### Resource Reserves

SpyInfo  = {  country = "ARM" NumberOfSpies = 2  } 

capital = 711
	manpower = 28

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	free = { ic = 2 oil = 0 energy = 4 metal = 2 rare_materials = 1 money = 0 manpower = 0 } #new Mar2020

    ownedprovinces =      {
		711 714 
	 }
    controlledprovinces = {
		711 714  
	  }
    nationalprovinces =   {
		711 714 712
	}

diplomacy = {
relation = { tag = OTT value = 120 }
relation = { tag = ITA value = 100 }
relation = { tag = RUS value = 50 }
relation = { tag = PER value = 30 }

relation = { tag = AZB value = -90 }
relation = { tag = GEO value = -60 }
relation = { tag = KAZ value = 10 }
relation = { tag = TRA value = 20 }
}


	
	techapps = {

# Group D 1936 techs
#######################

#Infantry
1010 1020 1030 1040 1050 1060 #1918 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division

#Armour and artillery
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
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6630 6640 6660 #ww1 defensive doctrines
6540 6910 6010 #Land Doctrines Firepower Doctrine


	}

#########  OOB (...)

### Army
 landunit = {
 	id = { type = 17348    id = 1 }
 	name = "I. Hayastani Korpus"
 	location = 711

  		division = {
   		id = { type = 17348    id = 3 }
   		name = "Narodnaya Gvardiya"
   		strength = 80
   		type = militia
		model = 3
             	}

  	
          	}


### Navy

### Airforce

}  