# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Patagonia Workers Front ####
country = {
tag = U50
puppet = CHL

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	2
political_left		=	7
free_market			=	2
freedom				=	2
professional_army	=	2
defense_lobby		=	7
interventionism		=	8

}

SpyInfo  = {  country = "U50" NumberOfSpies = 4  } 

#### Cabinet ####
#headofstate				= { type = 9 id =  } #Antonio Soto (Not in DH yet)
#headofgovernment		= { type = 9 id =  } #Rodolfo Ghiodi (Not in DH yet)
#foreignminister			= { type = 9 id =  } #Jose Descoubiere (Not in DH yet)	
#armamentminister		= { type = 9 id = } #Fanny Jackobsy (Not in DH Yet)
#ministerofsecurity		= { type = 9 id =  } #Elvira Rawnson (Not in DH yet)
ministerofintelligence	= { type = 9 id = 35252 } #Domingo Mercante
chiefofstaff			= { type = 9 id = 35253 } #Domingo Mercante
chiefofarmy				= { type = 9 id = 35263 } #Eduardo Avalos
chiefofnavy				= { type = 9 id = 35289 } #Domingo Mercante
chiefofair				= { type = 9 id = 35290 } #Eduardo Avalos
dissent = 3

#Minister portait IDs
#Antonio Soto - Antonio_Soto
#Rodolfo Ghiodi - Rodolfo_Ghiodi
#Jose Descoubiere - no portrait (didn't find any)
#Fanny Jabcovsky - Fanny_Jabcovsky
#Elvira Rawson - Elvira_Rawson

#Leader portrait IDs
#Alfredo Fonte - Alfredo_Fonte
#Fanny Jabcovsky - Fanny_Jabcovsky
#Paulina Mansurova - Paulina_Mansurova
#Miguel Arcangel Roscigna - Miguel_Roscigna
#Michaela Feldman - Mika_Feldman
#Marc Augler - no portrait (didn't find any)
#Kurt Gustav Wilckins - Kurt_Gustav_Wilckens
#Esteban Lucich - Esteban_Lucich
#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	20
manpower		=	50

transports		=	5

capital			=	2038 # Trelew

#### Provinces (Total = 20) ####

# Owned Provinces
ownedprovinces = {

2034 2035 2036 2037 2038 2039

}

# Controlled Provinces
controlledprovinces = {

2034 2035 2036 2037 2038 2039

}

# National Provinces
nationalprovinces = {

2034 2035 2036 2037 2038 2039

}

 claimedprovinces = {
 2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2044 2049 
        }
#### Relations ####
diplomacy = {

## Negative Relations

# Neighborhood
relation = { tag = GUY value = -25	} # Caribbean Federation
relation = { tag = ARG value = -200	} # Argentina
relation = { tag = COL value = -25	} # Colombia
relation = { tag = ECU value = -25	} # Ecuador
relation = { tag = PRU value = -25	} # Peru
relation = { tag = VEN value = -25	} # Venezuela

# Global
relation = { tag = CAN value = -25	} # Canada
relation = { tag = GER value = -50	} # Germany
relation = { tag = JAP value = -25	} # Japan
relation = { tag = SPA value = -25	} # Kingdom of Spain
relation = { tag = USA value = -25	} # United States
relation = { tag = BOL value = -100	} # Bolivia
relation = { tag = BRA value = -100	} # Brazil

## Positive Relations

# Neighborhood

relation = { tag = CHL value = 200	} # Chile

# Global
relation = { tag = FRA value = 50	} # Commune of France
relation = { tag = RSI value = 50	} # Socialist Republic of Italy
relation = { tag = ENG value = 50	} # Union of Britain

}

#### Technology ####
techapps = {
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Early Fighter 
4600 4610 4620 4630 4120 4130 #Early Bomber 
4740 4750 4760 #SEAPLANES
7290 7300 7310 7320 #CAS

#Armour & Artillery
7600 7610 2620 2010 2630 #Great War Tank 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 1090 #1931 Infantry Division 
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
1830 1840 1850 1860 #Engineers

#Industrial
5600 5610 5620 #Medicine
5700 5710 5010 5020 #Mechanized Agriculture
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 #Improved Construction Engineering   
5310 54010 54020 54030 5316 5326 #Computers & cryptografi

#Naval
3010 3020 3030 3040 3050 #Improved Destroyer 
3110 3120 3130 3140 #Interwar Light Cruiser
3210 3220 3230 3240 #Early Heavy Cruiser 
3410 3420 3430 #Rivadavia, she was a Dreadnought
3610 3620 3630 3640 #1924 Submarine, at the gates of Tarantino class
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower Focus Doctrine

#Naval Doctrines
8010 8020 8040 8050 




}

#### Order of Battle ####

# Army
landunit = 
   {  id       = {  type = 15600 id = 60  } 
     name     = "Ejercito de Patagonia" 
     location = 2038 
     Division = 
     {  id       = {  type = 15600 id = 6000  } 
       name     = "I División de Infantería" 
       strength   = 50 
	   max_strength = 50
       type     = infantry 
	   model    = 6
      } 
	  }
	  }