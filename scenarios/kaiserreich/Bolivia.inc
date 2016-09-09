# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Bolivia ####
country = {
tag = BOL
ai = "kaiserreich\Bolivia.ai"

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	7
political_left		=	6
free_market			=	8
freedom				=	7
professional_army	=	7
defense_lobby		=	8
interventionism		=	5

}


#### Cabinet ####

headofstate			= { type = 9 id = 43001 }
headofgovernment	= { type = 9 id = 43002 }


#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	10
manpower		=	25

capital			=	2020 # La Paz


#### Provinces (Total = 6) ####

# Owned Provinces
ownedprovinces = {

2064 2021 2020 2019 2063

}

# Controlled Provinces
controlledprovinces = {

2064 2021 2020 2019 2063

}

# National Provinces
nationalprovinces = {

2064 2021 2020 2019 2063 2025

}

claimedprovinces = {
		2046
	}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BRA value = 100	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = CHL value = 25	} # Chile
relation = { tag = COL value = 25	} # Colombia
relation = { tag = ECU value = 25	} # Ecuador
relation = { tag = PRU value = 100	} # Peru
relation = { tag = VEN value = 25	} # Venezuela

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = FRA value = 25	} # Commune of France
relation = { tag = GER value = 25	} # Germany
relation = { tag = JAP value = 25	} # Japan
relation = { tag = RSI value = 25	} # Socialist Republic of Italy
relation = { tag = ENG value = 25	} # Union of Britain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = ARG value = 	-100} # Union of La Plata

# Global

relation = { tag = GER value = -100	} # Germany
relation = { tag = SPA value = -100	} # Kingdom of Spain
relation = { tag = CON value = -100	} # MittelAfrika
relation = { tag = BLR value = -100	} # Weissruthenien

}

#### Technology ####
techapps = {

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division

# Armor & Artillery Technology
2620 2010 2630 #tanks
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 2450 21180 #1920s static AA

#Secret Weapons (for tanks only)
7600 #Tank experiments

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber

#Industrial
5800 5080 5090 #Construction engineerings

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 #Into firepower focus
14000 #Hospitals

# Naval Doctrines - NONE: Bolivia is a landlocked country

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

}

#### Order of Battle ####

## Army

# Garrison at La Paz
landunit = {
id = { type = 17000 id = 1 }
name = "Guardia Presidencial"
location = 2020 # La Paz - CAPITAL

division = {
id = { type = 17000 id = 2 }
name = "Guardia Presidencial"
strength = 100
model = 3
type = garrison
}

}

# Army at Santa Cruz
landunit = {
id = { type = 17000 id = 3 }
name = "Primero Ejército de Frontera"
location = 2021 # Santa Cruz

division = {
id = { type = 17000 id = 4 }
name = "1a División Boliviana"
strength = 100
model = 7
type = infantry
}

division = {
id = { type = 17000 id = 5 }
name = "1a Patrulla Fronteriza"
strength = 100
model = 7
type = d_01
}

}

# Army at Sucre
landunit = {
id = { type = 17000 id = 6 }
name = "Segundo Ejército de Frontera"
location = 2064 # Sucre

division = {
id = { type = 17000 id = 7 }
name = "2a División Boliviana"
strength = 100
model = 7
type = infantry
}

division = {
id = { type = 17000 id = 8 }
name = "2a Patrulla Fronteriza"
strength = 100
model = 7
type = d_01
}

}

## Navy - NONE: Bolivia is a landlocked country

## Air Force

}