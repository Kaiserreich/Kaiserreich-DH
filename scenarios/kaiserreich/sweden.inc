


country = {
    tag = SWE
ai = "kaiserreich\Sweden.ai"

	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 7
	political_left = 3
	free_market = 6
	professional_army = 3
	defense_lobby = 5
	interventionism = 4
    }

	headofgovernment = { type = 9 id = 7035 }



#### Resource Reserves

	manpower = 85
	capital =  2159
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

        SpyInfo  = {  country = "SWE" NumberOfSpies = 4  } 


    ownedprovinces =      {
		2152 2155 2154 2156 2157 2153 2161 2160 2158 2159 2165 2162 2164 2163 2167 2166
	 }
    controlledprovinces = {
		2152 2155 2154 2156 2157 2153 2161 2160 2158 2159 2165 2162 2164 2163 2167 2166
	  }
    nationalprovinces =   {
		2152 2155 2154 2156 2157 2153 2161 2160 2158 2159 2165 2162 2164 2163 2167 2166
	}

diplomacy = {
relation = { tag = BEL value = 100 }
relation = { tag = DEN value = 75 }
relation = { tag = ENG value = 80 }
relation = { tag = FIN value = 150 }
relation = { tag = GER value = 50 }
relation = { tag = HOL value = 100 }
relation = { tag = LUX value = 100 }
relation = { tag = NOR value = 150 }
relation = { tag = PER value = 50 }
relation = { tag = USA value = 75 }
}

transports = 20
escorts = 3    
	
	techapps = {
# Group C 1936 techs
#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter  
4600 4610 4620 4630 4120 4130 #Early Bomber 
4700 4710 #Basic Naval Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber

#Infantry
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
1830 1840 1850 1860 #Engineers
1010  1020 1030 1040 1050 1060 1070 1080 #Great War Infantry Division 
13060 13070 13080 1310 1320 1330 1340 #Great War Cavalry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car  
7600 7610 2620 2010 2630 #Great War Tank 
2290 2300 2310 #Great War Heavy Field Artillery 
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade

#Naval
3210 3220 3230 #Early Heavy Cruiser
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 #Interwar Light Cruiser
3610 3620 3630 #Short Range Submarine 
3310 3320 3330 #Great War Battlecruiser
3410 3420 3430 3440 3450 3456 3460 #Great War Battleship
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 #Troopships 

#Industrial 
5700 5710 5010 5020 #Mechanized Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering  
5190 #Basic Oil Refining
5470 #Faculty of Atomic Research
5600 5610 5620 5630 #Medicine

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Naval Doctrines 
8010 8020 8040 8050
# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Landdoctrine ww2 
6010 6020 # Superior Firepower
}

#########  OOB (...)

#5 infantry divisions.
	landunit =	{
	location = 2159
	name = "1a Armékåren"
	id = { type = 29600 id = 1 }
	
	division = {      
	id = { type = 29600 id = 2 } 	 
	name = "I. Fördelningen"	
	type = infantry 
	model = 7 
	extra = artillery	
	}
        division = {      
	id = { type = 29600 id = 3 } 	 
	name = "II. Fördelningen"	
	type = infantry 
	model = 7 
	extra = artillery	
	}
	}


	landunit =	{
	location = 2152
	name = "Övre Norrlandstrupper"
        id = { type = 29600 id = 4 }
		
	division = {      
	id = { type = 29600 id = 5 } 	 
	name = "V. Fördelningen"	
	type = infantry 
	model = 7
	}
	}

	landunit =	{
	location = 2155
	name = "Hemmaförsvaret"
        id = { type = 29600 id = 11 }
		
	division = {      
	id = { type = 29600 id = 12 } 	 
	name = "Landstormen"	
	type = militia
model = 4	}
	}



	airunit = {
	location = 2159
	base = 2159
	name = "1a Flygklren"
	id = { type = 29600 id = 13 }
		division = { id = { type = 29600 id = 14 } name = "1. Taktiska Bombflyggruppen" type = tactical_bomber model = 5 }
		division = { id = { type = 29600 id = 15 } name = "1. Marinbombflyggruppen" type = naval_bomber model = 1 }
		}


	
	navalunit = {
     location = 2159 #Berga/Muskö
     base = 2159
     name = "Kustflottan"
     id = { type = 29600 id = 16 }

         division = { id = { type = 29600 id = 17 } name = "HMS Sverige" type = heavy_cruiser model = 2 }
         division = { id = { type = 29600 id = 18 } name = "HMS Drottning Victoria" type = heavy_cruiser model = 2 }
         division = { id = { type = 29600 id = 19 } name = "HMS Gustav V" type = heavy_cruiser model = 2 }
         division = { id = { type = 29600 id = 21 } name = "HMS Clas Fleming" type = light_cruiser model = 1 }
         division = { id = { type = 29600 id = 22 } name = "HMS Gotland" type = light_cruiser model = 4 }
         division = { id = { type = 29600 id = 23 } name = "1. Jagarflottiljen" type = destroyer model = 3 }
         division = { id = { type = 29600 id = 25 } name = "1. Trängflottiljen" type = transport model = 1 }
         }

     navalunit = {
     location = 2159 #Berga/Muskö
     base = 2159
     name = "Alandshavseskader"
     id = { type = 29600 id = 26 }

         division = { id = { type = 29600 id = 27 } name = "HMS Äran" type = heavy_cruiser model = 1 }
         division = { id = { type = 29600 id = 28 } name = "HMS Tapperheten" type = heavy_cruiser model = 1 }
         division = { id = { type = 29600 id = 38 } name = "HMS Wasa" type = heavy_cruiser model = 1 }
         division = { id = { type = 29600 id = 39 } name = "HMS Dristigheten" type = escort_carrier model = 0 }
         }


     navalunit = {
     location = 2156 #Karlskronabasen
     base = 2156
     name = "Karlskrona Avdelningen"
     id = { type = 29600 id = 30 }

         division = { id = { type = 29600 id = 31 } name = "HMS Oscar II" type = heavy_cruiser model = 2 }
         division = { id = { type = 29600 id = 33 } name = "1. Ubatsflottiljen" type = submarine model = 1 }
         }

     navalunit = {
     location = 2152 #Göteborgsbasen
     base = 2152
     name = "Göteborgseskadern"
     id = { type = 29600 id = 34 }

         division = { id = { type = 29600 id = 35 } name = "HMS Manligheten" type = heavy_cruiser model = 1 } 
         division = { id = { type = 29600 id = 37 } name = "2. Ubatsflottiljen" type = submarine model = 1 }
         }
         }