# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Peru ####
country = {
tag = PRU
ai = "kaiserreich\Peru.ai"
#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	4
political_left		=	3
free_market			=	4
freedom				=	4
professional_army	=	3
defense_lobby		=	5
interventionism		=	5

}

#### Cabinet ####

headofstate		= { type = 9 id = 39001 }
headofgovernment	= { type = 9 id = 39002 }

#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	10
manpower		=	65

capital			=	2016 # Lima


#### Provinces (Total = 5) ####

# Owned Provinces
ownedprovinces = {

2017 2015 2016 2011 2014 2012 2013 2018 

}

# Controlled Provinces
controlledprovinces = {

2017 2015 2016 2011 2014 2012 2013 2018

}

# National Provinces
nationalprovinces = {

2017 2015 2016 2011 2014 2012 2013 2018 2008

}

claimedprovinces = {  
2010 2033 2024
   }

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 100	} # Bolivia
relation = { tag = BRA value = 25	} # Brazil
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = COL value = 25	} # Colombia
relation = { tag = ARG value = 25	} # Union of La Plata
relation = { tag = VEN value = 25	} # Venezuela

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = FRA value = 25	} # Commune of France
relation = { tag = GER value = 25	} # Germany
relation = { tag = JAP value = 100	} # Japan
relation = { tag = RSI value = 25	} # Socialist Republic of Italy
relation = { tag = ENG value = 25	} # Union of Britain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = CHL value = -100	} # Chile
relation = { tag = ECU value = -50	} # Ecuador

# Global
relation = { tag = SPA value = -50	} # Kingdom of Spain

}

#### Technology ####
techapps = {

#Aircraft
4500 4510 4520 4530 4540 4550 #Interwar Fighter  

#Armour & Artillery  
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 #SW Tank 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010 1020 1030 1040 1050 1060 1070 #1918 Infantry Division
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 #Engineers
  
#Industrial
5700 5710 5010 #Modern Agriculture 
5800 5080  #Improved Construction Engineering 
5600 5610 #Medicine
 
#Naval
3410 #Turret BB
3210 3220 3230 #Early HC
3110 3120 3130 #Early Light Cruiser
3610 3620 3630 3640 #Short Range Submarine 
3010 3020 3030 3040 #Great War Destroyer 
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships

#Naval Doctrines
8010 8020 8040 8050 # Naval Firepower Doctrine

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Land Doctrines WWI - Entente line (default)

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 #Air Doctrines - ww2 techs
}

#### Order of Battle ####

## Army

# Garrison at Lima - CAPITAL
landunit = {
id = { type = 17600 id = 1 }
name = "Guardia Presidencial"
location = 2016 # Lima

division = {
id = { type = 17600 id = 2 }
name = "Guardia Presidencial"
strength = 100
type = garrison
model = 3
}

}

# Army at Lima - CAPITAL
landunit = {
id = { type = 17600 id = 3 }
name = "Primero Ejército"
location = 2016 # Lima

division = {
id = { type = 17600 id = 4 }
name = "1a División de Infantería"
strength = 100
model = 6
type = infantry
}

}

# Army at Trujillo
landunit = {
id = { type = 17600 id = 5 }
name = "Segundo Ejército"
location = 2014 # Trujillo

division = {
id = { type = 17600 id = 6 }
name = "1a Infantería de Montaña"
strength = 100
type = bergsjaeger
model = 6
}

}

# Army at Arequipa
landunit = {
id = { type = 17600 id = 7 }
name = "Ejército de Montaña"
location = 2017 # Arequipa

division = {
id = { type = 17600 id = 8 }
name = "2a Infantería de Montaña"
strength = 100
type = bergsjaeger
model = 6
}

}

## Navy

# Battle Fleet at Lima - CAPITAL
navalunit = { name = "Marina de Guerra del Perú" id = { type = 17600 id = 9 } location = 2016 base = 2016

division = { id = { type = 17600 id = 10 } name = "BAP 'Nuevo Huáscar'"		type = light_cruiser model = 2 }
division = { id = { type = 17600 id = 11 } name = "BAP 'Almirante Grau'"	type = heavy_cruiser model = 2 }
division = { id = { type = 17600 id = 12 } name = "BAP Flotilla 'Loreto'"	type = destroyer model = 3 }
division = { id = { type = 17600 id = 13 } name = "BAP Flotilla 'Velarde'"	type = destroyer model = 3 }
division = { id = { type = 17600 id = 14 } name = "BAP Flotilla 'Toro'"		type = submarine model = 3 } # class R
}

# Transport Fleet at at Lima - CAPITAL
navalunit = { name = "Flota de Transporte" id = { type = 17600 id = 15 } location = 2016 base = 2016

division = { id = { type = 17600 id = 16 } name = "BAP 'Adolfina'"	type = transport model = 1 }
}

## Air Force

}