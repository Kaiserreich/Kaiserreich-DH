


country = {
    tag = ETH  


    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 3
        professional_army = 5
        defense_lobby = 8
        interventionism = 2
    }

#### cabinet

headofstate			= { type = 9 id = 65001 }
headofgovernment		= { type = 9 id = 65002 }
foreignminister			= { type = 9 id = 65094 }
armamentminister		= { type = 9 id = 65149 }
ministerofsecurity		= { type = 9 id = 65186 }
ministerofintelligence	        = { type = 9 id = 65006 }
chiefofstaff			= { type = 9 id = 65007 }
chiefofarmy			= { type = 9 id = 65008 }
chiefofnavy			= { type = 9 id = 65009 }
chiefofair			= { type = 9 id = 65010 }

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 825
	manpower = 80


    ownedprovinces =      {
		820 819 821 822 823 818 829 825 830 826 831 828 815 816 817 824
	 }
    controlledprovinces = {
		820 819 821 822 823 818 829 825 830 826 831 828 815 816 817 824
	  }
    nationalprovinces =   {
		820 819 821 822 823 818 829 825 830 826 831 828 827 824
	}

SpyInfo  = {  country = "ETH" NumberOfSpies = 2  } 

diplomacy = {
relation = { tag = ENG value = -50 }
relation = { tag = FRA value = 25 }
relation = { tag = IRE value = 100 }
relation = { tag = ITA value = -70 }
relation = { tag = JAP value = 35 }
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
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Naval
3010 3020 3030 3040 #GW DD
3610 #Dive Boat
3810 #Troopships
#Naval Doctrines
8010 8020 8040 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 

	}

#########  OOB (31000 )


landunit = {
id = { type = 31000 id = 5 }
location = 820
name = "Provincial Guard"

  division = {
        id = { type = 31000 id = 6 }
  name = "Martyrs of Adwa"
  type = infantry
  strength  = 15
  extra = artillery
  model = 5
  }

  division = {
        id = { type = 31000 id = 7 }
  name = "Local Militia"
  type = militia
  strength  = 60
  model = 3
  }
  }

landunit = {
id = { type = 31000 id = 8 }
location = 819
name = "Ogaden Garrison"

division = {
        id = { type = 31000 id = 9 }
  name = "Tribal Militia"
  type = militia
  strength  = 60
  model = 3
  }

division = {
        id = { type = 31000 id = 10 }
  name = "Lions of Judah"
  type = infantry
  strength  = 15
  model = 5
  }
}

landunit = {
id = { type = 31000 id = 11 }
location = 836
name = "Army of Somalia"

division = {
        id = { type = 31000 id = 12 }
  name = "Somali Detachment"
  type = d_01
  strength  = 60
  model = 5
  }
}

	landunit = {
id = { type = 31000 id = 1 }
location = 825
name = "Imperial Army"

  division = {
        id = { type = 31000 id = 2 }
  name = "Imperial Bodyguard"
  type = infantry
  strength  = 60
  extra = artillery
  model = 6
  }

  division = {
        id = { type = 31000 id = 3 }
  name = "'Menelik' Division"
  type = bergsjaeger
  strength  = 20
  model = 5
  }

  division = {
        id = { type = 31000 id = 4 }
  name = "'Yohannes' Division"
  type = infantry
  strength  = 20
  model = 6
  }
  }

landunit = {
id = { type = 31000 id = 13 }
location = 825
name = "Negus' personal guard"

  division = {
        id = { type = 31000 id = 14 }
  name = "Imperial Bodyguard"
  type = infantry
  strength  = 60
  extra = artillery
  model = 7
  }
}

        airunit = {
location = 825
base = 825
id = { type = 31000 id = 15 }
name = "Imperial Air Force"

division = {
        id = { type = 31000  id = 16 }
  name = "Fighter/Scout Squadron"
  type = multi_role
  model = 2
  strength = 50
  }
}
}
