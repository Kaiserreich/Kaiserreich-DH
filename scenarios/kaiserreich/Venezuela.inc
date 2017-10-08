# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Venezuela ####
country = {
tag = VEN
ai = "kaiserreich\Venezuela.ai"

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	7
political_left		=	2
free_market			=	7
freedom				=	5
professional_army	=	3
defense_lobby		=	5
interventionism		=	3

}

SpyInfo  = {  country = "VEN" NumberOfSpies = 2  } 

#### Cabinet ####

headofstate			= { type = 9 id = 38096 }
headofgovernment	= { type = 9 id = 38095 }

#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	20
manpower		=	35

capital			=	1993 # Caracas


#### Provinces (Total = 7) ####

# Owned Provinces
ownedprovinces = {

1988 1989 1995 1996 1992 1993

}

# Controlled Provinces
controlledprovinces = {

1988 1989 1995 1996 1992 1993

}

# National Provinces
nationalprovinces = {

1988 1989 1995 1996 1992 1993 1998

}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 25	} # Bolivia
relation = { tag = BRA value = 25	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = CHL value = 25	} # Chile
relation = { tag = ECU value = 25	} # Ecuador
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
relation = { tag = COL value = -50	} # Colombia

# Global

}

#### Technology ####
techapps = {
#Aircrafts
4500 4510 4520 4530 4540 4550 #Interwar Fighter  

#Industrial
5600 5610 5620 #Medicine
5810 5820 5050 #Manufactoring
5800 5080 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5700 5710 5010 5020 #Mechanized Agriculture

#Armour & Artillery
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2860 2870 2880 2020 #Basic Armoured Car
2810 2820 2510 #Basic Anti-Air Artillery Brigade 
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank 

#Infantry
1830 1840 1850 1860 #Engineers
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry

#Naval
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Landdoctrine ww2 - none?

 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 

}

#### Order of Battle ####

## Army

# Garrison at Caracas
landunit = {
id = { type = 15800 id = 1 }
name = "Guardia Presidencial"
location = 1993 # Caracas

division = {
id = { type = 15800 id = 2 }
name = "Guardia Presidencial"
strength = 100
type = garrison
model = 4
}

}

# Army at Caracas
landunit = {
id = { type = 15800 id = 3 }
name = "División de Infantería"
location = 1993 # Caracas

division = {
id = { type = 15800 id = 4 }
name = "División de Infantería"
strength = 100
type = infantry
model = 7
}

}

# Cavalry at Maracaibo
landunit = {
id = { type = 15800 id = 5 }
name = "División de Caballería"
location = 1988 # Maracaibo

division = {
id = { type = 15800 id = 6 }
name = "División de Caballería"
strength = 100
type = cavalry
model = 8
}

}

# Army at Ciudad Bolivar
landunit = {
id = { type = 15800 id = 7 }
name = "División de Infantería"
location = 1992 # Ciudad Bolivar

division = {
id = { type = 15800 id = 8 }
name = "División de Infantería"
strength = 100
type = infantry
model = 7
}

}

## Navy

# Battle Fleet at Maracaibo
navalunit = {
name = "Armada Bolivariana de Venezuela"
id = { type = 15800 id = 9 }
location = 1988 # Maracaibo
base = 1988

division = { id = { type = 15800 id = 10 } name = "ARBV Flotilla 'Caribe'"	type = destroyer model = 3 }
division = { id = { type = 15800 id = 11 } name = "ARBV Flotilla 'Warao'"	type = destroyer model = 3 }
}

# Transport Fleet at Maracaibo
navalunit = {
id = { type = 15800 id = 12 }
name = "Flota de Transporte"
location = 1988 # Maracaibo
base = 1988

division = { id = { type = 15800 id = 13 } name = "ARBV Flotilla 'Gabriela'" type = transport model = 1 }
}

## Air Force

}
