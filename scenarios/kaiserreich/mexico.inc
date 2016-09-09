country = {
   tag = MEX  

ai = "kaiserreich\mexico.ai"
flag_ext = _syn
policy = {
       date = { year = 0 month = january day = 0 }
       democratic = 4
       political_left = 8
       freedom = 6
       free_market = 1
       professional_army = 4
       defense_lobby = 4
       interventionism = 6
   }

headofstate = { type = 9 id = 36000  } 
headofgovernment = { type = 9 id = 36001 }
foreignminister = { type = 9 id = 36002 }  
armamentminister = { type = 9 id = 36003 }
ministerofsecurity = { type = 9 id = 36004 }  
ministerofintelligence = { type = 9 id = 36005 }
chiefofstaff = { type = 9 id = 36006 }
chiefofarmy = { type = 9 id = 36007 }
chiefofnavy = { type = 9 id = 36008 }        
chiefofair = { type = 9 id = 36009 }

#### Resource Reserves

energy = 1000   metal = 1000  rare_materials = 500 oil = 500 supplies = 500
money = 50

capital = 1974 

SpyInfo  = {  country = "MEX" NumberOfSpies = 3  } 

manpower = 200



   ownedprovinces =      {
 1966 1965 1970 1968 1974 1972 1971 1973 1967 1975 1976 1969 1978 1980 1977 1979 1981 1982
 }
   controlledprovinces = {
 1966 1965 1970 1968 1974 1972 1971 1973 1967 1975 1976 1969 1978 1980 1977 1979 1981 1982
  }
   nationalprovinces =   {
 1966 1965 1970 1968 1974 1972 1971 1973 1967 1975 1976 1969 1978 1980 1977 1979 1981 1982
}

diplomacy = {
relation = { tag = CAL value = -49 }
relation = { tag = TEX value = -24 }
relation = { tag = GUY value = -11 }
relation = { tag = ENG value = 51 }
relation = { tag = FRA value = 51 }
relation = { tag = GUA value = 35 }
relation = { tag = HOL value = -24 }
relation = { tag = ARG value = -26 }
relation = { tag = BRA value = 34 }
relation = { tag = USA value = -51 }
}

techapps = {

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum Supply 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division  
13060 13070 13080 1310 1320 1330 1340 1350 #1924 Cavalry Division  
1830 1840 1850 #Engineers 

#Armour & Artillery
7600 7610 2620 2010 2630 # Tank
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 2900 #Great War Heavy Field Artillery 
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Industrial
5700 5710 5010 #Modern Agriculture 
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 
5190 #Basic Oil Refining 
5600 #Medicine

#Naval
3810 #Troopships

# Land Doctrines WW1 - Entente (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
14000 #Great War Hospital System
# Land Doctrines WW2 - none
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
}

#########  OOB (...)
landunit = {
id = { type = 29500 id = 1 }
name = "Ejercito de Mexico"
location = 1974

 division = {
 id = { type = 29500 id = 3 }
 name = "I Division de Infanteria"
 strength = 100
 type = infantry
 model = 7
 }

 division = {
 id = { type = 29500 id = 4 }
 name = "II Division de Infanteria"
 strength = 100
 type = infantry
 model = 7
 }

 division = {
 id = { type = 29500 id = 5 }
 name = "III Division de Infanteria"
 strength = 100
 type = infantry
 model = 7
 extra = artillery
 }
 }
 
 landunit = {
id = { type = 29500 id = 31 }
name = "Ejército Libertador del Sur"
location = 1968
leader = 4569

 division = {
 id = { type = 29500 id = 2 }
 name = "Ejército Libertador del Sur"
 strength = 100
 type = infantry
 model = 8    #Special trained w. foreign eq.
 }

}

landunit = {
id = { type = 29500 id = 6 }
name = "Caballeria de Mexico"
location = 1976
 
 division = {
 id = { type = 29500 id = 7 }
 name = "I Division de Caballeria"
 strength = 100
 type = cavalry
 model = 7
 }

 division = {
 id = { type = 29500 id = 8 }
 name = "II Division de Caballeria"
 strength = 100
 type = cavalry
 model = 7
 }
 }

landunit = {
id = { type = 29500 id = 13 }
name = "Segundo Ejercito de Mexico"
location = 1979

 division = {
 id = { type = 29500 id = 14 }
 name = "IV Division de Infanteria"
 strength = 100
 type = infantry
 model = 7
 }

 division = {
 id = { type = 29500 id = 15 }
 name = "V Division de Infanteria"
 strength = 100
 type = infantry
 model = 7
 }
 
 }
 
 landunit = {
id = { type = 29500 id = 32 }
name = "División del Norte"
location = 1977
leader = 4570

 division = {
 id = { type = 29500 id = 16 }
 name = "División del Norte"
 strength = 100
 type = infantry
 model = 7
 }
}

airunit = {
id = { type = 29500 id = 11 }
name = "Fuerza Aerea Mexicana"
location = 1974
base = 1974

 division = { 
 id = { type = 29500 id = 12 } 
 name = "1a Grupo Aereo de Caza" 
 type = multi_role
 model = 3
 strength = 50 
 }
 }

navalunit = {
 id = { type = 29500 id = 20 }
 name = "Armada de Mexico"
 location = 1968
 base = 1968

 division = { 
 id = { type = 29500 id = 17 } 
 name = "Anáhuac" 
 type = battlecruiser
 model = 0 
 }

  division = { 
 id = { type = 29500 id = 19 } 
 name = "Progreso" 
 type = light_cruiser
 model = 2 
 }
 
 division = { 
 id = { type = 29500 id = 21 } 
 name = "Flotilla Salinas" 
 type = destroyer 
 model = 3 
 }

 division = { 
 id = { type = 29500 id = 18 } 
 name = "Flotilla G20-G24" 
 type = destroyer 
 model = 5 
 }
 
  division = { 
 id = { type = 29500 id = 10 } 
 name = "Flotilla G25-G29" 
 type = destroyer 
 model = 5 
 }


 }

}  