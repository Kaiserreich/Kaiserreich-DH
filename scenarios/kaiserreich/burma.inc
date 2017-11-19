


country = {
    tag = BUR  
ai = "kaiserreich\Burma.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 2
        free_market = 4
        professional_army = 5
        defense_lobby = 3
        interventionism = 3
    }

     

     
	headofstate = { type = 9 id = 563001 }
	headofgovernment = { type = 9 id = 563002 }
 	foreignminister = { type = 9 id = 563003 }
 	#armamentminister = { type = 9 id = 579004 }
 	ministerofsecurity = { type = 9 id = 563005 }
 	ministerofintelligence = { type = 9 id = 563006 }
 	chiefofstaff = { type = 9 id = 563007 }
 	chiefofarmy = { type = 9 id = 563008 }
 	chiefofnavy = { type = 9 id = 563009 }        
 	chiefofair = { type = 9 id = 563010 }

#### Resource Reserves

	manpower = 28  
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 1410

    ownedprovinces =      {
1411 1409 1420 1419 1415 1410 1417 1412 1407 1408 1406 1414
	 }
    controlledprovinces = {
1411 1409 1420 1419 1415 1410 1417 1412 1407 1408 1406 1414
	  }
    nationalprovinces =   {
1411 1409 1420 1419 1415 1410 1417 1416 1418 1412 1413 1407 1408 1406 1414
	 
	}

diplomacy = {

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
# Inf support 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800
#SW Tank 
7600 7610
#Early Infantry Division  
1010 1020 1030 1040 1050 1060 1070
#Early Mountain Division
1160  1170 1180 1190 1200 1210 1220 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 
	}

#########  OOB (...)

### Army

landunit = {
 id = { type = 18234    id = 1 }
 name = "Burma Territorial Force"
 location = 1415

    division = {
    id = { type = 18324    id = 2 }
    name = "11th Battalion, Burma Rifles"
    strength = 80
    type = infantry
	model = 5
             }



          }
landunit = {
 id = { type = 18234    id = 3 }
 name = "Burma Railways Battalion"
 location = 1417



   division = {
    id = { type = 17348    id = 4 }
    name = "Upper Burma Battalion"
    strength = 60
    type = militia
	model = 3
             }

  
          }
landunit = {
 id = { type = 18234    id = 5 }
 name = "Rangoon Field Brigade R.A."
 location = 1415

   
   division = {
    id = { type = 18234    id = 6 }
    name = "Rangoon Battalion"
    strength = 50
    type = militia
	model = 3
             }

  
          }
landunit = {
 id = { type = 18234    id = 7 }
 name = "The Mandalay Battalion"
 location = 1410

   
   division = {
    id = { type = 18234    id = 8 }
    name = "Burma Military Police"
    strength = 50
    type = militia
	model = 3
             }

  
          }

### Navy

### Airforce

}  