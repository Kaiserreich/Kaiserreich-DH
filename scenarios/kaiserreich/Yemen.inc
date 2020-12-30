 
 ############################## 
 # Country definition for YEM # 
 ############################## 
  
 country = 
 {  tag                    = YEM 
   # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
   transports = 100
   oil                    = 200 
   supplies               = 200 
   money                  = 10 
   manpower               = 1 
   capital                = 1050 

   free = { ic = 1 oil = 0 energy = 2 metal = 1 rare_materials = 1 money = 0 manpower = 0 } #new Mar2020

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 4 
     free_market       = 4 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
	peacetime_ic_mod       = 0.6
   nationalprovinces      = {  1050 1053 1051  } 
   ownedprovinces         = {  1050  } 
   controlledprovinces    = {  1050  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps = {

#Armour & Artillery
2290 #Light Field Artillery

#Infantry
1010  1020 1030 1040 1050 #1916 lgt. Infantry Division 
13060 13070 13080 1310 1320 1330 #1916 Cavalry Division
1910 1920 1930 1940 #Supply

#Industrial
5700 #Early Agriculture

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WW2 - none

	}

   diplomacy = 
   {  relation = {  tag = AST value = 150  } 
     relation = {  tag = BHU value = 150  } 
     relation = {  tag = CAN value = 150  } 
     relation = {  tag = ENG value = 150  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = ITA value = 50  } 
     relation = {  tag = NEP value = 150  } 
     relation = {  tag = NZL value = 150  } 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 150  } 
     relation = {  tag = SAU value = 125  } 
     relation = {  tag = TUR value = 35  } 
     relation = {  tag = USA value = 100  } 
    } 
   SpyInfo                = {  country = "YEM" NumberOfSpies = 1  } 
   headofstate            = {  type = 9 id = 93001  } 
   headofgovernment       = {  type = 9 id = 93118  } 
   foreignminister        = {  type = 9 id = 93007  } 
   armamentminister       = {  type = 9 id = 93013  } 
   ministerofsecurity     = {  type = 9 id = 93024  } 
   ministerofintelligence = {  type = 9 id = 93030  } 
   chiefofstaff           = {  type = 9 id = 93035  } 
   chiefofarmy            = {  type = 9 id = 93042  } 
   chiefofnavy            = {  type = 9 id = 93049  } 
   chiefofair             = {  type = 9 id = 93054  } 

   dormant_ministers = { 93094 93095 }

   landunit = {  
     id  = {  type = 16800 id = 1  } 
     name     = "Royal Yemenite Army" 
     location = 1050 
     Division = {  
       id    = {  type = 16800 id = 2  } 
       name  = "Royal Division" 
       type  = cavalry 
       model = 5
       strength = 80 
      } 
    } 
  } 
 
