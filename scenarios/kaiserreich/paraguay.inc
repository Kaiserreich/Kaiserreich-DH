 
 ############################## 
 # Country definition for PAR # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PAR
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2047 
	manpower               = 1 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     freedom           = 3 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 8 
    } 
	
#### Cabinet ####
headofstate				= { type = 9 id = 42013 } #José Felix Estigarribia
headofgovernment		= { type = 9 id = 42085 } #Luís Alberto Riart
foreignminister			= { type = 9 id = 42028 } #Horacío Chiriani Cotor
armamentminister		= { type = 9 id = 42004 } #Federico Chaves
ministerofsecurity		= { type = 9 id = 42097 } #Felipe Molas Lopez
ministerofintelligence	= { type = 9 id = 42076 } #Felipe Molas Lopez
chiefofstaff			= { type = 9 id = 42098 } #Horacío Chiriani Cotor
chiefofarmy				= { type = 9 id = 42055 } #Juan Manuel Frutos
chiefofnavy				= { type = 9 id = 42061 } #Enrico T. Rizzo
chiefofair				= { type = 9 id = 42010 } #Vicente Almonacid

   nationalprovinces      = {  2046 2047  } 
   ownedprovinces         = {  2046 2047  } 
   controlledprovinces    = {  2046 2047  } 
   
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = { 
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610 
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080  

#Medicine
5600 5610
#Engineers
1830 1840 
# Land Doctrine WW1 - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrine WW2 - none
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = 50  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = BOL value = -50  } 
     relation = {  tag = CHL value = 35  } 
     relation = {  tag = COL value = 10  } 
     relation = {  tag = ECU value = 25  } 
     relation = {  tag = PRU value = 25  } 
     relation = {  tag = URU value = 20  } 
     relation = {  tag = USA value = 75  } 
     relation = {  tag = VEN value = 10  } 
    } 
   SpyInfo                = {  country = "PAR" NumberOfSpies = 4  } 
 
   landunit = 
   {  id       = {  type = 15600 id = 60  } 
     name     = "Ejercito de Paraguay" 
     location = 2047 
     Division = 
     {  id       = {  type = 15600 id = 6000  } 
       name     = "I División de Infantería" 
       strength   = 50 
	   max_strength = 50
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 15600 id = 6001  } 
       name     = "CVI Brigada de Policia Nacional" 
       strength   = 60 
       type     = militia 
	   model    = 3
      } 
    } 
  } 
 
