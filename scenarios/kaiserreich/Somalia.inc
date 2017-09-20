


country = {
tag = SOM  

   policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 5
        professional_army = 1
        defense_lobby = 7
        interventionism = 6
    }

#### cabinet

headofstate = { type = 9 id = 575001 } 
headofgovernment = { type = 9 id = 575005 }
foreignminister = { type = 9 id = 575009 }  
armamentminister = { type = 9 id = 575016 }
ministerofsecurity = { type = 9 id = 575030  }  
ministerofintelligence = { type = 9 id = 575038 }
chiefofstaff = { type = 9 id = 575044 }
chiefofarmy = { type = 9 id = 575049 }
chiefofnavy = { type = 9 id = 575054 }        
chiefofair = { type = 9 id = 575059 }

#### Resource Reserves


	energy	=	1000   metal	=	1000	rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	836
	manpower = 16


    ownedprovinces =      {
		818 832 834 828 827 826 835 836 837 838  
	 }
    controlledprovinces = {
		818 832 834 828 827 826 835 836 837 838 
	  }
    nationalprovinces =   {
		818 832 834 828 827 826 835 836 837 838 
	}

diplomacy = {
relation = { tag = ITA value = -100 } #Old Colonizers
relation = { tag = CAN value = -100 }
relation = { tag = GER value = 100 }
relation = { tag = AUS value = 50 }
relation = { tag = OTT value = 150 } #The Caliph
relation = { tag = ETH value = -150 } #Territorial rivals
}

SpyInfo  = {  country = "SOM" NumberOfSpies = 2  } 
	
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

#########  OOB
	landunit = {
	location = 836
	name = "Ciidanka Mogadishu"

		division = {
		name = "2. Maleeshiyada 'Mogadishu' "
		type = militia
		model = 5
		strength  = 100
		}

		division = {
		name = "3. Qeybinta Lugta 'Warsangali'"
		type = infantry
        model = 5
		strength  = 100
		}
	}

	landunit = {
	location = 835
	name = "Ciidanka Hobyo"
	
		division = {
		name = "3. Maleeshiyada 'Eyl'"
		type = militia
		model = 5
		strength  = 100
		}
	}
	
	landunit = {
	location = 832
	name = "Ciidanka Warsangali"
	
		division = {
		name = "1. Qeybinta Lugta 'Soomaliweyn'"
		type = infantry
        model = 5
		strength  = 100
		}		
		
		division = {
		name = "2. Qeybinta Lugta"
		type = infantry
        model = 5
		strength  = 100
		}		
		
		division = {
		name = "4. Qeybinta Lugta"
		type = infantry
        model = 5
		strength  = 100
		
		}		
		
		division = {
		name = "5. Qeybinta Lugta 'Marehan'"
		type = infantry
        model = 5
		strength  = 100
		}
		}
		
	landunit = {
	location = 827
	name = "Ciidamada Xuduudda" 
		
		division = {
		name = "1. Maleeshiyada 'Askar Hassan'"
		type = militia
		model = 5
		strength  = 100
		}
		
				division = {
		name = "1. Qeybinta Iyo Awr 'Darwish'"
		type = infantry
        model = 5
		strength  = 100
		}
}
}
		