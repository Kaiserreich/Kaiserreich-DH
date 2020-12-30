


country = {
    tag = GLD

ai = "kaiserreich\Galicia.ai"
	puppet = AUS
	



	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 3
        freedom = 6
        free_market = 4
        professional_army = 3
        defense_lobby = 4
        interventionism = 3
    }
#### cabinet

	headofstate = { type = 9 id = 551001 } #Karol Olbracht Habsburg
	headofgovernment = { type = 9 id = 551016 } #Alfred Antoni Potocki
	foreignminister = { type = 9 id = 551040 } #Jerzy Potocki
	armamentminister = { type = 9 id = 551085 } #Aleksander Litwinowicz
	ministerofsecurity = { type = 9 id = 551059 } #Marian Dabrowski
	ministerofintelligence = { type = 9 id = 551032 } #Kazimierz Switalski
	chiefofstaff = { type = 9 id = 551073 } #Wlodzimierz Zagórski
	chiefofarmy = { type = 9 id = 551088 } #Józef Haller von Hallenburg
	chiefofnavy = { type = 9 id = 551090 } #Bogumil Nowotny
	chiefofair = { type = 9 id = 551098 } #Wladyslaw Kalkus

#### Resource Reserves

capital = 242
	manpower = 28
	free = { ic = 3 }


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

SpyInfo  = {  country = "GLD" NumberOfSpies = 2  } 

    ownedprovinces =      {
235 237 236 239 242 241 238 300 240 301
	 }
    controlledprovinces = {
235 237 236 239 242 241 238 300 240 301
	  }
    nationalprovinces =   {
235 237 236 239 242 241 238 300 240 301
	}

diplomacy = {
relation = {   tag =	BEL value = 40 }
relation = {   tag =	BLR value = 60 }
relation = {   tag =	BUL value = 30 }
relation = {   tag =	GER value = 80 }
relation = {   tag =	LAT value = 50 }
relation = {   tag =	LIT value = 60 }
relation = {   tag =	POL value = 80 }
relation = {   tag =	UKR value = 50 }
relation = {   tag =	AUS value = 170 }
relation = {   tag =	HUN value = 100 }
relation = {   tag =	ITA value = 20 }
relation = {   tag =	SPA value = 20 }
relation = {   tag =	ENG value = -20 }
relation = {   tag =	FRA value = -40 }
relation = {   tag =	RUS value = 10 }
relation = {   tag =	OTT value = 40 }
relation = {   tag =	JAP value = -10 }
}



	techapps = {

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber

# Armor & Artillery Technology
2620 2010 2630 #tanks
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 2450 21180 #1920s static AA

#Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division


#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Industrial
5700 5710 #Early agric mechanization
5800 5080 #Construction engineerings
5190 #Basic Oil refining

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into firepower focus
14000 #Hospitals


	}

#########  OOB (...)

landunit = {
id = { type = 18600 id = 1 }
location = 242
name = "Korpus Zachodni"
  division = { id = { type = 18600 id = 2 } name = "1 Dywizja Legionow" type = infantry model = 6 strength = 100 extra = armored_car brigade_model = 1 }
}

landunit = {
id = { type = 18600 id = 3 }
location = 240
name = "Korpus Wschodni"
  division = { id = { type = 18600 id = 4 } name = "2 Dywizja Legionow" type = infantry model = 6 strength = 100 }
}

}  