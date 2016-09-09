


country = {
    tag = TRA  

ai = "kaiserreich\Cossack.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        freedom = 7
        free_market = 5
        professional_army = 7
        defense_lobby = 9
        interventionism = 8
    }

#### cabinet
	headofstate = { type = 9 id = 523001 }
	headofgovernment = { type = 9 id = 523014 }
 	foreignminister = { type = 9 id = 523018  }
 	armamentminister = { type = 9 id = 523023 }
 	ministerofsecurity = { type = 9 id = 523030 }
 	ministerofintelligence = { type = 9 id = 523036 }
 	chiefofstaff = { type = 9 id = 523038 }
 	chiefofarmy = { type = 9 id = 523042 }
 	chiefofnavy = { type = 9 id = 523058  }        
 	chiefofair = { type = 9 id = 523046  }
#### Resource Reserves

SpyInfo  = {  country = "TRA" NumberOfSpies = 2  } 

	capital = 691
	manpower = 28
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10


    ownedprovinces =      {
		694 693 695 696 691 692 697 662 698 701 703 705 702 700 699 704 644 643 645 642 649
	 }
    controlledprovinces = {
		694 693 695 696 691 692 697 662 698 701 703 705 702 700 699 704 644 643 645 642 649
	  }
    nationalprovinces =   {
		694 693 695 696 691 692 697 662 698 701 703 705 702 700 699 704 644 643 645 642 649
	}

diplomacy = {
relation = { tag = ARM value = -20 }
relation = { tag = AZB value = -20 }
relation = { tag = GEO value = -40 }
relation = { tag = UKR value = -60 }
relation = { tag = KAZ value = 20 }
relation = { tag = GER value = 80 }
relation = { tag = RUS value = 20 }
}

dormant_leaders        = {  523052
                            
							}

	
	techapps = {
# Group D 1936 techs
#######################
#Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 #Great War Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 1350 1360 #1928 Cavalry Division - Cossacks!
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1830 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture  
5800 5080 #Improved Construction Engineering
5600 #Medicine
5190 #Basic Oil Refining 

#Land Doctrines
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6210 # Mobility focus 
14000 14010 #Great War Hospital System 

#Naval
3010 3020 3030 3040 #GW DD
3610 #Dive Boat
3810 #Troopships

#Naval Doctrines
8010 8020 8040 8050 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010


	}

#########  OOB (...)
landunit = {
 	id = { type = 17349 id = 1 }
 	name = "Don Cossack Host"
	 location = 645

  		division = {
   		id = { type = 17349 id = 2 }
   		name = "2ya 'Gorkovskaya'Strelk. Div."
   		strength = 100
   		type = infantry
		model = 5
             	}

  		division = {
  		id = { type = 17349 id = 3 }
   		name = "1. Kavaleriyskaya Diviziya"
   		strength = 100
   		type = cavalry
		model = 8
             	}

  		division = {
   		id = { type = 17349 id = 4 }
   		name = "2. Kavaleriyskaya Diviziya"
   		strength = 100
  	 	type = cavalry
		model = 8
             	}

                division = {
   		id = { type = 17349 id = 5 }
   		name = "6. Kavaleriyskaya Diviziya"
   		strength = 100
  	 	type = cavalry
		model = 8
             	}
            	}

landunit = {
 	id = { type = 17349     id = 6 }
 	name = "Kuban Cossack Host"
 	location = 691

  		division = {
   		id = { type = 17349 id = 7 }
   		name = "1ya Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 5
            	}

  		division = {
   		id = { type = 17349 id = 8 }
   		name = "3. Kavaleriyskaya Diviziya"
   		strength = 100
   		type = cavalry
		model = 8
             	}

  		division = {
   		id = { type = 17349 id = 9 }
   		name = "4. Kavaleriyskaya Diviziya"
   		strength = 100
   		type = cavalry
		model = 8
             	}

                division = {
   		id = { type = 17349 id = 10 }
   		name = "5. Kavaleriyskaya Diviziya"
   		strength = 100
  	 	type = cavalry
		model = 8
             	}
         	}


navalunit = { 
    id = { type = 17349 id = 11 }
    name     = "Chernomorskiy Flot"
    location = 644 # Rostov
    base     = 644
    
    division = { id = { type = 17349 id = 12 }
      name  = "1. Flotiliya Esmintsev"
      type  = destroyer
      strength = 40
      model = 3
    }
    
  }

}  