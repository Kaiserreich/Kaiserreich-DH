


country = {
    tag = PHI  


	puppet = USA
	control = USA


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        freedom = 4
        free_market = 5
        professional_army = 1
        defense_lobby = 3
        interventionism = 1
    }

#### cabinet

#### Resource Reserves
	energy	=	200   metal	=	200	rare_materials =	200	oil =	200	supplies =	500
	money = 10

	manpower = 150

        SpyInfo  = {  country = "PHI" NumberOfSpies = 2  } 

	capital = 1565



    ownedprovinces =      {
		1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579
	 }
    controlledprovinces = {
		1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579
	  }
    nationalprovinces =   {
		1572 1571 1565 1569 1566 1567 1570 1568 1577 1575 1573 1576 1574 1580 1578 1579
	}

diplomacy = {
relation = { tag = AST value = 40 }
relation = { tag = GER value = 5 }
relation = { tag = JAP value = 1 }
relation = { tag = LIB value = 200 }
relation = { tag = NZL value = 25 }
relation = { tag = USA value = 200 }
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
1010  1020 1030 1040 1050 1060
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Engineers
1830 

# Basic Construction Engineering
5800 5080 
# Improved Construction Engineering 
5090  
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WWII - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 

	}



	transports = 10


#########  OOB (...)

	landunit = {
	id = { type = 11804 id = 1 }
	location = 1565
	name = "Manila Garrison"

		division = {
		id = { type = 11804 id = 2 }
		strength = 30
		max_strength = 30
		name = "Philippine Constabulary"
		type = garrison
		model = 3
	}
	}


}  