# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Chile ####
country = {
tag = CHL

#### Domestic Policy ####
policy = {
date = { year = 0 month = january day = 0 }

democratic			=	6
political_left		=	5
free_market			=	9
freedom				=	7
professional_army	=	9
defense_lobby		=	6
interventionism		=	6

}

#### Cabinet ####

#headofstate				= { type = 9 id =  }
#headofgovernment		= { type = 9 id =  }
foreignminister			= { type = 9 id = 44059 }
armamentminister		= { type = 9 id = 44076 }
ministerofsecurity		= { type = 9 id = 44097 }
ministerofintelligence	= { type = 9 id = 44103 }
chiefofstaff			= { type = 9 id = 44112 }
chiefofarmy				= { type = 9 id = 44123 }
chiefofnavy				= { type = 9 id = 44132 }
chiefofair				= { type = 9 id = 44140 }


#### Resource Reserves ####

energy			=	2000
metal			=	2000
rare_materials	=	1000
oil				=	1000
supplies		=	750
money			=	20
manpower		=	95

transports		=	20

capital			=	2023 # Santiago


#### Provinces (Total = 8) ####

# Owned Provinces
ownedprovinces = {

2031 2032 2023 2022 2025 2024 2030 2043

}

# Controlled Provinces
controlledprovinces = {

2031 2032 2023 2022 2025 2024 2030 2043

}

# National Provinces
nationalprovinces = {

2031 2032 2023 2022 2025 2024 2030 2043

}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BRA value = 50	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = COL value = 25	} # Colombia
relation = { tag = ECU value = 25	} # Ecuador
relation = { tag = ARG value = 50	} # Union of La Plata
relation = { tag = VEN value = 25	} # Venezuela

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = FRA value = 25	} # Commune of France
relation = { tag = JAP value = 25	} # Japan
relation = { tag = GER value = 25	} # Germany
relation = { tag = RSI value = 25	} # Socialist Republic of Italy
relation = { tag = ENG value = 25	} # Union of Britain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = BOL value = -50	} # Bolivia
relation = { tag = PRU value = -50	} # Peru

# Global
relation = { tag = SPA value = -100	} # Kingdom of Spain

}

#### Technology ####
techapps = {

# Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division  
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 1860 #Engineers

#Secret Weapons
7600 7610 #SW Tank

# Armor & Artillery Technology
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

# Naval 
3410 3420 3430 3440 3450 #Almirante Latorre Battleship
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 #Early Light Cruiser 
3210 #Early Heavy Cruiser
3610 3620 3630 3640 #Submarine (O'Brien class)
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

# Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter

#Industrial 
5800 5080 #Improved Construction Engineering
5700 5710 5010 5020 #Mechanized Agriculture
5310 54010 54020 5316 5326 #Computers & cryptografi
5600 5610 #Medicine

# Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 #Firepower Focus

#Naval Doctrines 
8010 8020 8040 8050 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

}

#### Order of Battle ####

## Army

# Garrison at Santiago - CAPITAL
landunit = {
id = { type = 12500 id = 1 }
name = "Guardia Presidencial"
location = 2023 # Santiago

division = {
id = { type = 12500 id = 2 }
name = "Guardia Presidencial"
strength = 100
model = 3
type = garrison
}

}

# Army at Santiago - CAPITAL
landunit = {
id = { type = 12500 id = 3 }
name = "Primero Ejército Chileno"
location = 2025 # Santiago

division = {
id = { type = 12500 id = 4 }
name = "División 'Guerreros de Santiago'"
strength = 100
model = 6
type = bergsjaeger
}

division = {
id = { type = 12500 id = 5 }
name = "División Ligera Chilena"
strength = 100
model = 6
type = d_01
}

}

# Army at Antofagasta
landunit = {
id = { type = 12500 id = 6 }
name = "Ejército de Frontera"
location = 2024 # Antofagasta

division = {
id = { type = 12500 id = 7 }
name = "Guardia de Frontera"
strength = 100
model = 6
type = infantry
}

division = {
id = { type = 12500 id = 8 }
name = "Reservas Chilenas"
strength = 100
model = 6
type = d_01
}

}

## Navy

# Battle Fleet at Santiago - CAPITAL
navalunit = { name = "Armada de Chile" id = { type = 12500 id = 9 } location = 2023 base = 2023

division = { id = { type = 12500 id = 10 } name = "CSN 'Blanco Encalada'"				type = heavy_cruiser model = 0 }
division = { id = { type = 12500 id = 11 } name = "CSN 'Almirante Cochrane'"			type = heavy_cruiser model = 0 }
division = { id = { type = 12500 id = 12 } name = "CSN Flotilla 'Almirante Condell'"	type = destroyer model = 5 }
division = { id = { type = 12500 id = 13 } name = "CSN Flotilla 'Almirante Lynch'"		type = destroyer model = 5 }
division = { id = { type = 12500 id = 14 } name = "CSN Flotilla 'Carrera'"				type = submarine model = 3 } #Capitan O'brien class
}

# Transport Fleet at Santiago - CAPITAL
navalunit = { name = "Flota de Transporte" id = { type = 12500 id = 15 } location = 2023 base = 2023

division = { id = { type = 12500 id = 16 } name = "CSN Flotilla 'Catalina'"		type = transport model = 1 }
division = { id = { type = 12500 id = 17 } name = "CSN Flotilla 'Francisca'"	type = transport model = 1 }
}

## Air Force

}