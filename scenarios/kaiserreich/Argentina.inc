# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Argentina ####
country = {
tag = ARG
ai = "kaiserreich\La Plata.ai"

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	2
political_left		=	2
free_market			=	7
freedom				=	2
professional_army	=	6
defense_lobby		=	7
interventionism		=	5

}

SpyInfo  = {  country = "ARG" NumberOfSpies = 3  } 

#### Cabinet ####

dissent = 20

#headofstate				= { type = 9 id =  } #Manuel Carles (Not in DH yet)
#headofgovernment		= { type = 9 id =  } #Manuel Carles (Not in DH yet)
foreignminister			= { type = 9 id = 35073 } #Julio A. Roca
armamentminister		= { type = 9 id = 35004 } #Alberto Hueyo
ministerofsecurity		= { type = 9 id = 35131 } #Hortensio Quijano
ministerofintelligence	= { type = 9 id = 35006 } #Jorge de la Torre
chiefofstaff			= { type = 9 id = 35167 } #Carlos O. Marquez
chiefofarmy				= { type = 9 id = 35184 } #Manuel Savio
chiefofnavy				= { type = 9 id = 35009 } #Pedro S. Casal
chiefofair				= { type = 9 id = 35010 } #Antonio Parodi

#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	20
manpower		=	150

transports		=	20

capital			=	2050 # Buenos Aires

#### Provinces (Total = 20) ####

# Owned Provinces
ownedprovinces = {

2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2044 2049 

}

# Controlled Provinces
controlledprovinces = {

2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2044 2049 

}

# National Provinces
nationalprovinces = {

2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2044 2049 

}

 claimedprovinces = {
           2034 2035 2036 2037 2038 2039  
        }
#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = GUY value = 25	} # Caribbean Federation

relation = { tag = COL value = 25	} # Colombia
relation = { tag = ECU value = 25	} # Ecuador
relation = { tag = PRU value = 25	} # Peru
relation = { tag = VEN value = 25	} # Venezuela

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = GER value = 100	} # Germany
relation = { tag = JAP value = 25	} # Japan
relation = { tag = SPA value = 25	} # Kingdom of Spain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = BOL value = -100	} # Bolivia
relation = { tag = BRA value = -100	} # Brazil
relation = { tag = CHL value = -100	} # Chile

# Global
relation = { tag = FRA value = -50	} # Commune of France
relation = { tag = RSI value = -50	} # Socialist Republic of Italy
relation = { tag = ENG value = -50	} # Union of Britain

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

# Garrison at Buenos Aires - CAPITAL
landunit = {
id = { type = 12000 id = 1 }
name = "Guardia Presidencial"
location = 2050 # Buenos Aires

division = {
id = { type = 12000 id = 2 }
name = "Guardia Presidencial"
strength = 100
type = garrison
model = 4
}

}

# Garrison at Falklands
landunit = {
id = { type = 12000 id = 3 }
name = "Guardia Malvina"
location = 2045 # Falklands

division = {
id = { type = 12000 id = 4 }
name = "Guardia Malvina"
strength = 100
type = garrison
model = 4
}

}


# Army at Concordia
landunit = {
id = { type = 12000 id = 7 }
name = "Ejército de Concordia"
location = 2049 # Concordia

division = {
id = { type = 12000 id = 8 }
name = "División 'Guerreros da Liberdad'"
strength = 100
type = infantry
model = 8
}

}


# Army at Asunción
landunit = {
id = { type = 12000 id = 11 }
name = "Ejército de Asunción"
location = 2047 # Asunción

division = {
id = { type = 12000 id = 12 }
name = "División 'Guaraní'"
strength = 100
type = infantry
model = 8
}

}

# Army at Corrientes
landunit = {
id = { type = 12000 id = 13 }
name = "Ejército de Corrientes"
location = 2051 # Corrientes

division = {
id = { type = 12000 id = 14 }
name = "División 'Veteranos de 35'"
strength = 100
type = infantry
model = 8
}

}

# Army at San Miguel de Tucumán
landunit = {
id = { type = 12000 id = 15 }
name = "Infantería de Montaña"
location = 2026 # San Miguel de Tucumán

division = {
id = { type = 12000 id = 16 }
name = "Infantería de Montaña"
strength = 100
type = bergsjaeger
model = 7
}

}

## Navy

 # Battle Fleet at Bahia Blanca
 navalunit = { name = "Armada de La Plata" id = { type = 12000 id = 17 } location = 2050 base = 2050

 division = { id = { type = 12000 id = 35 } name = "ARP 'Argentina'"            type = battleship model = 4 } # sold by German Empire formerly SMS Grosser Kurfürst
 division = { id = { type = 12000 id = 22 } name = "ARP 'Rivadavia'"        type = battleship model = 4 }
 division = { id = { type = 12000 id = 18 } name = "ARP 'Moreno'"            type = battleship model = 4 }
 division = { id = { type = 12000 id = 19 } name = "ARP 'Pueyrredón'"    type = heavy_cruiser model = 1 }
 division = { id = { type = 12000 id = 20 } name = "ARP 'Almirante Brown'"        type = heavy_cruiser model = 4 }
 division = { id = { type = 12000 id = 21 } name = "ARP 'Veintecinco de Mayo'"            type = heavy_cruiser model = 4 }
 division = { id = { type = 12000 id = 25 } name = "ARP Flotilla 'Catamarca'"    type = destroyer model = 2 strength = 80 max_strength = 80 }
 division = { id = { type = 12000 id = 26 } name = "ARP Flotilla 'Cervantes'"        type = destroyer model = 4 strength = 40 max_strength = 40 }
 division = { id = { type = 12000 id = 27 } name = "ARP Flotilla 'Santa Fé'"        type = submarine model = 5 strength = 60 max_strength = 60 }


 }

 # Transport Fleet at Bahia Blanca
 navalunit = {
 id = { type = 12000 id = 28 }
 location = 2050
 base = 2050
 name = "Flota de Transporte Naval"
 division = { id = { type = 12000 id = 29 } name = "ARP Flotilla 'Eva'"        type = transport model = 1 }
 division = { id = { type = 12000 id = 30 } name = "ARP Flotilla 'Cristina'"    type = transport model = 1 }
 }

## Air Force

# Fighter at Asunción
airunit = {
id = { type = 12000 id = 31 }
name = "1o Grupo de Aviación"
location = 2050
base = 2050

division = {
id = { type = 12000 id = 32 }
name = "Escuadra 'Guerreros Del Cielo'"
strength = 100
type = interceptor
model = 6
}

}

# Fighter at Montevideo
airunit = {
id = { type = 12000 id = 33 }
name = "2o Grupo de Aviación"
location = 2050
base = 2050

division = {
id = { type = 12000 id = 34 }
name = "Escuadra 'Protectores'"
strength = 100
type = multi_role
model = 3
}

}

}