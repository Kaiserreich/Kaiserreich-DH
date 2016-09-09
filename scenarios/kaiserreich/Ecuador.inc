# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Ecuador ####
country = {
tag = ECU

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	7
political_left		=	6
free_market			=	8
freedom				=	5
professional_army	=	3
defense_lobby		=	5
interventionism		=	1

}

#### Cabinet ####

#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	10
manpower		=	25

capital			=	2042 # Quito


#### Provinces (Total = 4) ####

# Owned Provinces
ownedprovinces = {

2040 2042 2007 2008 2041 2033 2010

}

# Controlled Provinces
controlledprovinces = {

2040 2042 2007 2008 2041 2033 2010

}

# National Provinces
nationalprovinces = {

2040 2042 2007 2008 2041 2033 2010

}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 25	} # Bolivia
relation = { tag = BRA value = 25	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = CHL value = 25	} # Chile
relation = { tag = ARG value = 25	} # Union of La Plata
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
relation = { tag = COL value = -50	} # Colombia
relation = { tag = PRU value = -50	} # Peru

# Global
relation = { tag = SPA value = -100	} # Kingdom of Spain

}

#### Technology ####
techapps = {

#Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1830 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture  
5800 5080 #Improved Construction Engineering
5600 #Medicine

#Naval
3010 3020 3030 3040 3050 #Large DD
3810 #Troopships

# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

}

#### Order of Battle ####

## Army

# Garrison at Quito - CAPITAL
landunit = {
id = { type = 29000 id = 1 }
name = "Guardia Presidencial"
location = 2042 # Quito

division = {
id = { type = 29000 id = 2 }
name = "Guardia Presidencial"
strength = 100
type = garrison
model = 3
}

}

# Cavalry at Iquitos
landunit = {
id = { type = 29000 id = 3 }
name = "División de Caballería"
location = 2008 # Iquitos

division = {
id = { type = 29000 id = 4 }
name = "División de Caballería"
strength = 100
type = cavalry
model = 6
}

}

# Army at Tigre
landunit = {
id = { type = 29000 id = 5 }
name = "División de Infantería"
location = 2010 # Tigre

division = {
id = { type = 29000 id = 6 }
name = "División de Infantería"
strength = 100
type = infantry
model = 6
}

}

# Army at Guayaquil
landunit = {
id = { type = 29000 id = 7 }
name = "División de Milicia"
location = 2033 # Guayaquil

division = {
id = { type = 29000 id = 8 }
name = "División de Milicia"
strength = 100
type = militia
model = 3
}

}

## Navy

# Battle Fleet at Quito
navalunit = {
name = "Armada del Ecuador"
id = { type = 29000 id = 9 }
location = 2040 # Quito
base = 2040

division = { id = { type = 29000 id = 10 } name = "BAE Flotilla 'Guayas'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 11 } name = "BAE Flotilla 'El Oro'"	type = destroyer model = 3 }
}

# Transport Fleet at Quito - CAPITAL
navalunit = {
id = { type = 29000 id = 12 }
name = "Flota de Transporte"
location = 2040 # Quito - CAPITAL
base = 2040

division = { id = { type = 29000 id = 13 } name = "BAE Flotilla 'Agata'" type = transport model = 1 }
}

## Air Force

}