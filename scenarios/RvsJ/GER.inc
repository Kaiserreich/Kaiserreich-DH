###########################
#Country definition for GER
###########################
province = { id = 1328 naval_base = 5 air_base = 5 ic = { size = 1 current_size = 1 } } #Tsingtau

##################
#Country main data
##################
country = {
	tag = GER
	manpower = 50
	energy = 0
	metal = 0
	rare_materials = 0
	oil = 500
	supplies = 10000000
	money = 0
	capital = 1328
	extra_tc = 10
	transports = 20
	escorts = 10
	free = { ic = 20 oil = 40 }

	nationalprovinces = { 1328 1331 1241 1245 }
	ownedprovinces = { 1328 1331 1241 1245 }
	controlledprovinces = { 1328 1331 1241 1245 }


techapps = {
	# Germany 1936 techs
#######################
#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Early Infantry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 #SEMI-MOTORIZED CAVALRY 
1396 # Motorized Infantry
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1830 1840 1850 1860 #Engineers
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
1560 1570 1580 #Marine Divisions

#Armour & Artillery
2860 2870 2880 2020 2150 #Basic Armoured Car 
7600 7610 2620 2010 2630 2640 2646 2650 2030 #Early Tank
2290 2300 2310 2900 2910 2920 2930 #Early Field Artillery 
2800 2450 21180 21190 21200 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer 
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser 
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser 
3310 3320 3330 3340 #Early Battlecruiser
3410 3420 3430 3440 3450 3456 3460 3470 #Early Battleship 
3610 3620 3630 3640 3650 #Improved Submarine 
3510 3520 3530 #Early Air Carrier (Graff Zeppelin)
12100 12110 12120 12130 #(Constructing Stuttgart-class)
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 3820 #Troopships 1926

#Aircrafts
4290 4250 #Basic Air Transport
4300 4310 4320 4330 4340 #Multirole fighter
7290 7300 7310 7320 4400 #CAS
4800 4810 4820 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter 
4600 4610 4620 4630 4120 4130 #Early Bomber
4740 4750 4760 #SEAPLANES
4900 4910 #CAG

#Industrial
5810 5820 5050 5830 5060 #Manufacturing
5800 5080 5090 #Improved Construction Engineering 
5190 5200 #Basic Oil Refining
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5470 5480 #Faculty of Atomic Research
5560 #Exp. Rocket
5700 5710 5010 5020 #Mechanized Agriculture 
5600 5610 5620 5630 #Medicine

# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
#6210 6220 6230 6250 6900 WW2 Land Doctrines
14000 14010 14020 #Great War Hospital System 
6010 6020 # Superior firepower (land)

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080
82300 # Amphib
82500 # Naval Logistics
8900 8910 8920 8930 8940 8950 # Fleet in being
8600 8610 # Trade Interdiction Submarine
8100 8110 8120 8150 8160 8170 8200 8210 # Naval Supremacy
81650 # Subsidiary carrier role
}

	policy = { democratic = 3 political_left = 4 freedom = 6 free_market = 7 professional_army = 8 defense_lobby = 8 interventionism = 8 }

	headofgovernment = { type = 9 id = 278 }
	headofstate = { type = 9 id = 36 }
	foreignminister = { type = 9 id = 61 }
	chiefofstaff = { type = 9 id = 7 }
	chiefofair = { type = 9 id = 273 }
	armamentminister = { type = 9 id = 346 }
	chiefofarmy = { type = 9 id = 184 }
	chiefofnavy = { type = 9 id = 265 }
	ministerofsecurity = { type = 9 id = 122 }
	ministerofintelligence = { type = 9 id = 137 }

landunit = {
	control = GER
	id = { type = 10602 id = 1 }
	name = "Tsingtao Komandatur"
	location = 1328
        division = {
	locked = yes
	id = { type = 10602 id = 2 }
	name = "Tsingtao Komandatur"
	type = hq
	model = 3
	strength = 100
	max_strength = 100
	extra = sp_artillery
	brigade_model = 2 
        } 
        }

landunit = {
	control = GER
	id = { type = 10178 id = 3 }
	name = "XXV.Armeekorps"
	location = 1328
        division = {
	locked = yes
	id = { type = 10178 id = 4 }
	name = "3. Schutztruppen Division"
	type = marine
	model = 2
	strength = 100
	max_strength = 100
	extra = artillery
	brigade_model = 2 
        }
        division = {
	locked = yes
	id = { type = 10178 id = 5 }
	name = "52. Panzer batalion"
	type = armor
	strength = 30
	max_strength = 30
	model = 0 
        } 
        }

navalunit = {
	name = "Ostasienschwadron"
	id = { type = 14500 id = 264 }
	location = 1328 ###[Dalian]
	base = 1328
        division = {
	id = { type = 14500 id = 265 }
	name = "SMS Graf Zeppelin"
	type = carrier
	model = 1
	extra = cag
	brigade_model = 1 
        }
        division = {
	id = { type = 14500 id = 266 }
	name = "SMS Hindenburg"
	type = battlecruiser
	model = 1 
        }
        division = {
	id = { type = 14500 id = 267 }
	name = "SMS Mackensen"
	type = battlecruiser
	model = 2
        }
        division = {
	id = { type = 14500 id = 268 }
	name = "SMS Derfflinger"
	type = battlecruiser
	model = 1
        }
        division = {
	id = { type = 14500 id = 269 }
	name = "SMS Admiral Pohl"
	type = heavy_cruiser
	model = 4 
        }
        division = {
	id = { type = 14500 id = 270 }
	name = "SMS Bonn"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 14500 id = 271 }
	name = "SMS Bamburg"
	type = light_cruiser
	model = 1 }
        division = {
	id = { type = 14500 id = 272 }
	name = "SMS Bayreuth"
	type = light_cruiser
	model = 4 
        }
        division = {
	id = { type = 14500 id = 273 }
	name = "9. Zerstörergeschwader"
	type = destroyer
	model = 5
        }
        division = {
	id = { type = 14500 id = 274 }
	name = "18. Zerstörergeschwader"
	type = destroyer
	model = 4 
        }
        division = {
	id = { type = 14500 id = 275 }
	name = "19. Zerstörergeschwader"
	type = destroyer
	model = 4
        } 
        }

        airunit = {
	id = { type = 14500 id = 320 }
	name = "Luftflotte VI"
	location = 1328
	home = 1328
	base = 1328
        division = {
	id = { type = 14500 id = 321 }
	name = "Kampfgeschwader 26"
	model = 8
	brigade_model = 1
	type = tactical_bomber 
        }
        division = {
	id = { type = 14500 id = 322 }
	name = "Seeaufklärungsgruppe 125"
	model = 2
	type = naval_bomber 
        }
        division = {
	id = { type = 14500 id = 323 }
	name = "Jagdgeschwader 7"
	model = 9
	type = interceptor 
        } 
        } 

}