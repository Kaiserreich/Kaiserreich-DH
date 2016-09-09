# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Colombia ####
country = {
tag = COL

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	7
political_left		=	7
free_market			=	8
freedom				=	7
professional_army	=	3
defense_lobby		=	5
interventionism		=	2

}

#### Cabinet ####

#### Resource Reserves

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	10
manpower		=	85

capital			=	1991 # Bogotá

SpyInfo  = {  country = "COL" NumberOfSpies = 2  } 

#### Provinces (Total = 7) ####

# Owned Provinces
ownedprovinces = {

1990 1991 1987 1986 1994 2009 1985 1756

}

# Controlled Provinces
controlledprovinces = {

1990 1991 1987 1986 1994 2009 1985 1756

}

# National Provinces
nationalprovinces = {

1990 1991 1987 1986 1994 2009 1985 1756

}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 25	} # Bolivia
relation = { tag = BRA value = 25	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = CHL value = 25	} # Chile
relation = { tag = PRU value = 25	} # Peru
relation = { tag = ARG value = 25	} # Union of La Plata

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = FRA value = 25	} # Commune of France
relation = { tag = GER value = 25	} # Germany
relation = { tag = JAP value = 25	} # Japan
relation = { tag = SPA value = 50	} # Kingdom of Spain
relation = { tag = RSI value = 25	} # Socialist Republic of Italy
relation = { tag = ENG value = 25	} # Union of Britain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = VEN value = -50	} # Venezuela
relation = { tag = ECU value = -50	} # Ecuador

# Global

}

#### Technology ####
techapps = {

# Infantry 
1010 1020 1030 1040 1050 1060 #Great War Infantry Division
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 1860 #Engineers

# Armor & Artillery Technology
7600 7610 2620 2010 #SW Tank 
2860 2870 2880 2020 #Basic Armoured Car
2290 #Great War Light Field Artillery
2800 2450 21180 21190 #Early Static Anti-Air Artillery
2810 2820 2510 #Basic Anti-Air Artillery Brigade


# Naval Technology
3010 3020 3030 3040 #Great War Destroyer 
3110 3120 3130 #Early Light Cruiser
3210 3220 3230 #Early Heavy Cruiser 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

# Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter

# Industrial 
5700 5710 5010 #Modern Agriculture
5800 5080 #Improved Construction Engineering
5600 5610 #Medicine

# Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower Focus Doctrine

# Naval Doctrines
8010 8050

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

}

#### Order of Battle ####

## Army

# Garrison at Bogotá - CAPITAL
landunit = {
id = { type = 23000 id = 1 }
name = "Guardia Presidencial"
location = 1991 # Bogotá

division = {
id = { type = 23000 id = 2 }
name = "Guardia Presidencial"
strength = 100
type = garrison
model = 3
}

}

# Cavalry at Barranquilla
landunit = {
id = { type = 23000 id = 3 }
name = "División de Caballería"
location = 1986 # Barranquilla

division = {
id = { type = 23000 id = 4 }
name = "División de Caballería"
strength = 100
type = cavalry
model = 5
}

}

# Army at Cúcuta
landunit = {
id = { type = 23000 id = 5 }
name = "División de Infantería"
location = 1990 # Cúcuta

division = {
id = { type = 23000 id = 6 }
name = "División de Infantería"
strength = 100
type = infantry
model = 5
}

}

# Army at Angostura Falls
landunit = {
id = { type = 23000 id = 7 }
name = "División de Infantería"
location = 1994 # Angostura Falls

division = {
id = { type = 23000 id = 8 }
name = "División de Infantería"
strength = 100
type = infantry
model = 5
}

}

## Navy

# Battle Fleet at Barranquilla
navalunit = {
name = "Armada Nacional Colombiana"
id = { type = 23000 id = 9 }
location = 1986 # Barranquilla
base = 1986

division = { id = { type = 23000 id = 10 } name = "ARC Flotilla 'Caldas'"		type = destroyer model = 3 }
division = { id = { type = 23000 id = 11 } name = "ARC Flotilla 'Antioquia'"	type = destroyer model = 3 }
}

# Transport Fleet at Barranquilla
navalunit = {
id = { type = 23000 id = 12 }
name = "Flota de Transporte"
location = 1986 # Barranquilla
base = 1986

division = { id = { type = 23000 id = 13 } name = "ARC Flotilla 'Sofia'" type = transport }
}

## Air Force

}