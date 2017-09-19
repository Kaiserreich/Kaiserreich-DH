# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Caribbean Federation ####
country = {
tag = GUY
ai = "kaiserreich\Caribbean Federation.ai"
flag_ext = _ent

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	6
political_left		=	3
free_market			=	9
freedom				=	7
professional_army	=	3
defense_lobby		=	3
interventionism		=	3

}

#### Cabinet ####

#### Resource Reserves ####

SpyInfo  = {  country = "GUY" NumberOfSpies = 3  } 

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	10
manpower		=	10

transports		=	40
escorts			=	10

capital =			1997 # Georgetown


#### Provinces (Total = 19) ####

# Owned Provinces
ownedprovinces = {

 1782 1774 1772 1771 1773 1757 1766 1997 2000 1758 1769 1764 1763 1770 1755 1760 1753 1754 1768 1767 1759 1752

}

# Controlled Provinces
controlledprovinces = {

 1782 1774 1772 1771 1773 1757 1766 1997 2000 1758 1769 1764 1763 1770 1755 1760 1753 1754 1768 1767 1759 1752


}

# National Provinces
nationalprovinces = {

 1782 1774 1772 1771 1773 1757 1766 1997 1998 2000 1758 1769 1764 1763 1770 1755 1760 1753 1754 1768 1767 1759 1752


}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 25	} # Bolivia
relation = { tag = BRA value = 25	} # Brazil
relation = { tag = CHL value = 25	} # Chile
relation = { tag = COL value = 25	} # Colombia
relation = { tag = ECU value = 25	} # Ecuador
relation = { tag = PRU value = 25	} # Peru
relation = { tag = ARG value = 25	} # Union of La Plata
relation = { tag = VEN value = -100	} # Venezuela, thief of Esequibo

# Global
relation = { tag = CAN value = 200	} # Canada
relation = { tag = VIC value = 150	} # Nat. France
relation = { tag = PAK value = 150	} # Delhi
relation = { tag = AST value = 150	} # Australasia
relation = { tag = JAP value = 25	} # Japan
relation = { tag = SPA value = 50	} # Kingdom of Spain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood

# Global
relation = { tag = FRA value = -50	} # Commune of France
relation = { tag = GER value = -50	} # Germany
relation = { tag = RSI value = -50	} # Socialist Republic of Italy
relation = { tag = ENG value = -100	} # Union of Britain

}

#### Technology ####
techapps = {

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 1340 #1918 cavalry division

# Armor & Artillery Technology
2620 2010 2630 #tanks
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 2450 21180 #1920s static AA

# Naval Technology
3010 3020 3030 3040 #Great War Destroyer 
3110 3120 3130 #Early Light Cruiser

#Aircraft
4500 4510 4520 4530 4540 4550 4010  #Early Fighter  
4600 4610 4620 4630 4120 #Interwar Bomber 
4300 4310 4320 4330 #Multirole fighter
7290 7300 7310 7320 #1922 CAS

# Industrial Technology
5800 5080  #Improved Construction Engineering
5190 # Basic Oil Refining

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)

#Naval Doctrines
8010  8020  8030  8040  8050  8070  8100  8110  8120

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

}

#### Order of Battle ####

## Army

# Army at Georgetown - CAPITAL
landunit = {
id = { type = 5555 id = 1 }
name = "Homeland Security"
location = 1997 # Georgetown - CAPITAL

division = {
id = { type = 5555 id = 2 }
name = "1st Infantry Division"
strength = 75
type = infantry
model = 7
}

division = {
id = { type = 5555 id = 3 }
name = "2nd Infantry Division"
strength = 65
type = infantry
model = 7
}

}

# Army at Cayenne
landunit = {
id = { type = 5555 id = 4 }
name = "Eastern Military District"
location = 2000 # Cayenne

division = {
id = { type = 5555 id = 5 }
name = "3rd Infantry Division"
strength = 55
type = infantry
model = 7
}

}

# Garrison at Jamaica
landunit = {
id = { type = 5555 id = 6 }
name = "Jamaican Defence Force"
location = 1782 # Jamaica

division = {
id = { type = 5555 id = 7 }
name = "Garrison of Jamaica"
strength = 55
type = garrison
model = 4
}

}

# Garrison at Bermuda
landunit = {
id = { type = 5555 id = 8 }
name = "Bermuda Defence Force"
location = 1773 # Bermuda

division = {
id = { type = 5555 id = 9 }
name = "Garrison of Bermuda"
strength = 40
type = garrison
model = 4
}

}

# Garrison at Rowne
landunit = {
id = { type = 5555 id = 10 }
name = "Bahamas Military District"
location = 1771 # Rowne

division = {
id = { type = 5555 id = 11 }
name = "Garrison of Andros"
strength = 55
type = garrison
model = 4
}

}

# Garrison at Trinidad
landunit = {
id = { type = 5555 id = 12 }
name = "Trinidad Military District"
location = 1758 # Trinidad

division = {
id = { type = 5555 id = 13 }
name = "Garrison of Trinidad"
strength = 60
type = garrison
model = 4
}

}

## Navy

# Battle Fleet at Georgetown - CAPITAL
navalunit = {
name = "Home Squadron"
id = { type = 5555 id = 14 }
location = 1997 # Georgetown - CAPITAL
base = 1997

division = { id = { type = 5555 id = 15 } name = "CFS 'Intrepid'"		type = light_cruiser model = 2 }
division = { id = { type = 5555 id = 16 } name = "CFS 'Jamaica' Flotilla"	type = destroyer model = 3 }
division = { id = { type = 5555 id = 17 } name = "CFS 'Trinidad' Flotilla"	type = destroyer model = 3 }
}

# Battle Fleet at Rowne
navalunit = {
name = "Bahamas Patrol Squadron"
id = { type = 5555 id = 18 }
location = 1997 # Rowne
base = 1997

division = { id = { type = 5555 id = 19 } name = "CFS 'Bahamas' Flotilla" type = destroyer model = 4 }
}

# Battle Fleet at St. George's
navalunit = {
name = "Patrol Squadron"
id = { type = 5555 id = 20 }
location = 1997 # St. George's
base = 1997

division = { id = { type = 5555 id = 21 } name = "CFS 'Ophelia' Flotilla" type = destroyer model = 3 }
}

# Transport Fleet at Georgetown - CAPITAL
navalunit = {
id = { type = 5555 id = 22 }
name = "Transport Fleet"
location = 1997 # Georgetown - CAPITAL
base = 1997

division = { id = { type = 5555 id = 23 } name = "CFS 'Emma' Flotilla"		type = transport model = 1 }
division = { id = { type = 5555 id = 24 } name = "CFS 'Anna' Flotilla"		type = transport model = 1 }
division = { id = { type = 5555 id = 25 } name = "CFS 'Katrina' Flotilla"	type = transport model = 1 }
}


## Air Force

# Tactical Bomber at Georgetown - CAPITAL
airunit = {
location = 1997 # Georgetown - CAPITAL
base = 1997
id = { type = 5555 id = 26 }
name = "Continental Squad"

division = {
id = { type = 5555 id = 27 }
name = "1st Bomber Wing"
type = tactical_bomber
model = 5
}

}

# Interceptor at Bermuda
airunit = {
id = { type = 5555 id = 28 }
name = "Northern Squad"
location = 1997 # Bermuda
base = 1997

division = {
id = { type = 5555 id = 29 }
name = "1st Interceptor Wing"
strength = 50
type = interceptor
model = 6
}

}


# Interceptor 
airunit = {
id = { type = 5555 id = 30 }
name = "Western Squad"
location = 1997 
base = 1997

division = {
id = { type = 5555 id = 31 }
name = "2nd Interceptor Wing"
strength = 60
type = interceptor
model = 6
}

}

}