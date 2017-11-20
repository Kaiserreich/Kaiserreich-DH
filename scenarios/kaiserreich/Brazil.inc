# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Brazil ####
country = {
tag = BRA
ai = "kaiserreich/Brazil.ai"

#### Domestic Policy ####
policy = {

date = { year = 0 month = january day = 0 }

democratic			=	7
political_left		=	2
free_market			=	8
freedom				=	7
professional_army	=	5
defense_lobby		=	6
interventionism		=	3

}

#### Cabinet ####

headofstate				= { type = 9 id = 34399 }
headofgovernment		= { type = 9 id = 39999 }
foreignminister			= { type = 9 id = 34081 }
armamentminister		= { type = 9 id = 34107 }
ministerofsecurity		= { type = 9 id = 34116 }
ministerofintelligence	= { type = 9 id = 34143 }
chiefofstaff			= { type = 9 id = 34153 }
chiefofarmy				= { type = 9 id = 34172 }
chiefofnavy				= { type = 9 id = 34180 }
chiefofair				= { type = 9 id = 34193 }

SpyInfo  = {  country = "BRA" NumberOfSpies = 3  } 

#### Resource Reserves ####

energy			=	1000
metal			=	1000
rare_materials	=	500
oil				=	500
supplies		=	500
money			=	20
manpower		=	370

dissent			=	3

transports		=	20

capital			=	2075 # Rio de Janeiro


#### Provinces (Total = 23) ####

# Owned Provinces
ownedprovinces = {

 2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006

}

# Controlled Provinces
controlledprovinces = {

 2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006

}

# National Provinces
nationalprovinces = {

 2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006
}

#### Relations ####
diplomacy = {

## Positive Relations

# Neighborhood
relation = { tag = BOL value = 100	} # Bolivia
relation = { tag = GUY value = 25	} # Caribbean Federation
relation = { tag = CHL value = 25	} # Chile
relation = { tag = COL value = 25	} # Colombia
relation = { tag = ECU value = 25	} # Ecuador
relation = { tag = PRU value = 25	} # Peru
relation = { tag = VEN value = 25	} # Venezuela

# Global
relation = { tag = CAN value = 25	} # Canada
relation = { tag = FRA value = 25	} # Commune of France
relation = { tag = JAP value = 25	} # Japan
relation = { tag = POR value = 100	} # Portugal
relation = { tag = RSI value = 25	} # Socialist Republic of Italy
relation = { tag = ENG value = 25	} # Union of Britain
relation = { tag = USA value = 25	} # United States

## Negative Relations

# Neighborhood
relation = { tag = ARG value = -100	} # Union of La Plata

# Global
relation = { tag = GER value = -100	} # Germany
relation = { tag = CON value = -100	} # MittelAfrika
relation = { tag = BLR value = -100	} # Weissruthenien

}

#### Technology ####
techapps = {
#Aircraft
4500 4510 4520 4530 4540 4550 4010  #Early Fighter  
4600 4610 4620 4630 4120 #Interwar Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 #ww1 strategic bomber
4740 4750 4760 #Seaplanes
7290 7300 7310 7320 #CAS

#Infantry
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1830 1840 1850 1860 #Engineers
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Great War Infantry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 # 1928 Cavalry 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division 

#Armour & Artillery
2860 2870 2880 2020#Basic Armoured Car 
2620 2010 2630 #Great War Tank 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Naval
3010 3020 3030 #Great War Destroyer 
3110 #Early Light Cruiser 
3210 3220 3230 #Early Heavy Cruiser 
3410 3420 3430 3440 #Great War Battleship 
3610 3620 #Short Range Submarine 
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5700 5710 5010 #Modern Agriculture  
5810 5820 5050 5830 #Manufactoring
5800 5080  #Improved Construction Engineering
5600 5610 5620 #Medicine
 
#Land Doctrines
14000 14010 #Improved Great War Hospital System
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)

#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval Doctrines
8010 8020 8030 8040 8050 # Engagement Theories
}

deactivate = { 6010 6210 6570 6560 6390 }

#### Order of Battle ####

 ## Army

 # Garrison at Rio de Janeiro - CAPITAL
 landunit = {
 id = { type = 18000 id = 1 }
 name = "Guarda Presidencial"
 location = 2075 # Capital

 division = {
 id = { type = 18000 id = 2 }
 name = "Guarda Presidencial"
 strength = 100
 model = 4
 type = garrison
 }

 }

 # Army at Porto Alegre
 landunit = {
 id = { type = 18000 id = 3 }
 name = "2o Exército Brasileiro"
 location = 2058 # Porto Alegre

 division = {
 id = { type = 18000 id = 4 }
 name = "2a Divisao de Infantaria"
 strength = 100
 type = infantry
 model = 8
 }

 division = {
 id = { type = 18000 id = 5 }
 name = "2a Divisao de Caçadores"
 strength = 100
 type = d_01
 model = 7
 }

 }

 # Army at Curitiba
 landunit = {
 id = { type = 18000 id = 6 }
 name = "1o Exército Brasileiro"
 location = 2057 # Curitiba

 division = {
 id = { type = 18000 id = 7 }
 name = "1a Divisao de Infantaria"
 strength = 100
 type = infantry
 model = 8
 }

 division = {
 id = { type = 18000 id = 8 }
 name = "1a Divisao de Caçadores"
 strength = 100
 type = d_01
 model = 7
 }

 }

 # Cavalry at Mato Grosso
 landunit = {
 id = { type = 18000 id = 9 }
 name = "3o Exército Brasileiro"
 location = 2060 # Mato Grosso

 division = {
 id = { type = 18000 id = 10 }
 name = "1a Divisao de Cavalaria"
 strength = 100
 type = cavalry
 model = 8
 }

 }

################# DORMANT UNITS - WILL BE USED ON THE CIVIL WARS!
landdivision = {
	dormant = yes
		id = { type = 18000 id = 659004 }
name = "Bando de Cangaceiros"
strength = 10
max_strength = 10
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659005 }
name = "Bando de Cangaceiros"
strength = 10
max_strength = 10
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659006 }
name = "Milícia Popular do Norte"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659007 }
name = "1a. Milícia Popular Paulista"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659008 }
name = "2a. Milícia Popular Paulista"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659009 }
name = "Milícia Popular Fluminense"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659010 }
name = "Milícia Popular de Maracaju"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659011 }
name = "Força Pública do Ceará"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659012 }
name = "Força Pública do Paraná"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659013 }
name = "Força Pública de Pernambuco"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659014 }
name = "Força Pública de São Paulo"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659015 }
name = "Força Pública do Rio de Janeiro"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659016 }
name = "Força Pública do Mato Grosso"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659017 }
name = "Batalhão Patriótico Chapada Diamantina"
strength = 10
max_strength = 10
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659018 }
name = "Camisas-Verdes de São Paulo"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659019 }
name = "Camisas-Verdes do Rio de Janeiro"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659020 }
name = "Camisas-Verdes do Rio Grande do Norte"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659021 }
name = "Camisas-Verdes de Minas Gerais - Legião de Outubro"
strength = 20
max_strength = 20
type = militia
model = 3
}

landdivision = {
	dormant = yes
		id = { type = 18000 id = 659022 }
name = "Camisas-Verdes do Paraná"
strength = 20
max_strength = 20
type = militia
model = 1
}

## Navy

 # Battle Fleet at Rio de Janeiro - CAPITAL
 navalunit = { name = "1a Armada Brasileira" id = { type = 18000 id = 12 } location = 2075 base = 2075

 division = { id = { type = 18000 id = 13 } name = "E-1 'Minas Gerais'"        type = battleship model = 3 }
 division = { id = { type = 18000 id = 14 } name = "C-1 'Bahia'"                    type = light_cruiser model = 2 }
 division = { id = { type = 18000 id = 17 } name = "Flotilha 'Piauí'"                type = destroyer model = 2 }
 }

 # Transport Fleet at Rio de Janeiro - CAPITAL
 navalunit = {
 id = { type = 18000 id = 19 }
 location = 2075
 base = 2075
 name = "2a Armada Brasileira"
 division = { id = { type = 18000 id = 20 } name = "Flotilha de Transportes 'Amanda'"    type = transport model = 1 }
 division = { id = { type = 18000 id = 21 } name = "Flotilha de Transportes 'Helen'"    type = transport model = 1 }
 }

# Fighter at Rio de Janeiro - CAPITAL
 airunit = {
 id = { type = 18000 id = 22 }
 name = "1a Força Aérea do Brasil"
 location = 2075
 base = 2075

 division = {
 id = { type = 18000 id = 23 }
 name = "1o Grupo de Defesa Aérea 'Jambock'"
 strength = 100
 type = multi_role
 model = 3
 }

 }

}