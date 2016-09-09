###########################
#Country definition for MON
###########################
province = { id = 1124 air_base = 2 anti_air = 1 ic = { size = 2 current_size = 2 } } # Urga

##################
#Country main data
##################
country = {
	tag = MON
	manpower = 50
	oil = 500
	supplies = 10000
	capital	= 1124
	puppet = RUS
	control	= RUS
	extra_tc = 20
	free = { oil = 30 ic = 30 supplies = 15 }

	nationalprovinces = { 1124 1120 1122 1125 1121 }
	ownedprovinces	= { 1124 1120 1122 1125 1121 }
	controlledprovinces = { 1124 1120 1122 1125 1121 }

	techapps = {
	
#Infantry 
1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 #1939 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 #1939 Mountain Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 #1939 Cavalry Division
1830 1840 1850 1860 1870 #Engineers
1560 1570 1580 1590 # 1937 Marine division
1670 # 1938 Airborne division
1396 1400 # 1939 Motorized division
1910 1920 1930 1940 1950 1960 1970 1980 1990 #Interbellum 1930 Supply 

#Armour & Artillery
7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 #1939 Tank 
2860 2870 2880 2020 2150 #Basic Armoured Car 
2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 #Early Field Artillery 
2800 2450 21180 21190 21200 2460 #Early Static Anti-Air Artillery 
2810 2820 2510 2520 #Basic Anti-Air Artillery Brigade 
2100 # 1939 Heavy tank
2200 # Early Self-Propelled Artillery
2400 2410 # Anti-Tank Artillery
	
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4600 4610 4620 4630 4120 #Early Bomber 
4300 4310 4320 4330 4340 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4290 # Transports
4740 4750 4760 #SEAPLANES
7290 7300 7310 7320 #1922 CAS
	
#Industrial	
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 5327 5320 #Computers & cryptografi
5810 5820 5050 #manufactoring
5800 5080 #Construction Engineering 
5190 #Basic Oil Refining 
5600 5610 5620 #Medicine
5560 #Exp. Rocket

# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
14000 14010 14020 14030 # Hospital System 
6010 6020 6040 6050 6060 6070 # Superior firepower (land)
6900 # Armored division formation

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040
9140 9145
9090 9100 9110 9120 9130
9050 9060 9070 9080
9190 9200 9210 9220 9230 9240
}

	policy = { democratic = 3 political_left = 4 freedom = 4 free_market = 6 professional_army = 4 defense_lobby = 6 interventionism = 6 }
        headofstate = { type = 9 id = 94132 }
	headofgovernment = { type = 9 id = 94140 }

dormant_leaders        = {  330025
							}

landunit = {
	location = 1120
	name = "Armija Mongol Nayramdakh"
	id = { type = 30500 id = 1 }
        division = {
	id = { type = 30500 id = 2 }
	name = "1. Mongol Strelkovaya Div."
	type = infantry
	strength = 100
	model = 9
	extra = artillery
	brigade_model = 5 
        }
        division = {
	id = { type = 30500 id = 3 }
	name = "2. Nayramdakh Kavaleriyskaya Div."
	strength = 100
	model = 10
	type = cavalry 
        }
        division = {
	id = { type = 30500 id = 4 }
	name = "3. Nayramdakh Opolcheniya Div."
	strength = 100
	model = 10
	type = cavalry 
        }
        division = {
	id = { type = 30500 id = 5 }
	name = "4. Nayramdakh Opolcheniya Div."
	strength = 100
	model = 9
	type = infantry 
        }
        } 

}
