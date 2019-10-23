


country = {
    tag = PRI
    control = JAP

ai = "kaiserreich\Transamur.ai"
	puppet = JAP





	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        freedom = 2
        free_market = 4
        professional_army = 5
        defense_lobby = 3
        interventionism = 3
    }

SpyInfo  = {  country = "PRI" NumberOfSpies = 2  } 

#### cabinet

headofstate = { type = 9 id = 527001  }
headofgovernment = { type = 9 id = 527002 }


 	foreignminister = { type = 9 id = 527003 }
 	armamentminister = { type = 9 id =  527004  }
 	ministerofsecurity = { type = 9 id =   527005  }
 	ministerofintelligence = { type = 9 id =  527090  }

	chiefofstaff = { type = 9 id = 527007 }
	chiefofair = { type = 9 id = 527067 }
	chiefofarmy = { type = 9 id = 527092 }
	chiefofnavy = { type = 9 id = 527047 }       
#### Resource Reserves

	capital = 1191
	manpower = 28
energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	transports = 20


    ownedprovinces =      {

		1191 1196 1193 1192 1195 1194 1190 1185
	 }
    controlledprovinces = {

		1191 1196 1193 1192 1195 1194 1190 1185
	  }
    nationalprovinces =   {
		1191 1196 1193 1192 1195 1194 1190 1185 1187 1188 1175 1189 1174 1176 1170 1171 1178 1180
                1186 1181 1182 1183 1184
	}
    claimedprovinces = { 
                1177 1179 1161 1163 1164 1168 1167 1169 1070 1162 1166
        }

diplomacy = {

relation = { tag = MAN value = 60 }
relation = { tag = JAP value = 160 }
relation = { tag = RUS value = -80 }
relation = { tag = MON value = 30 }
}


	
	techapps = {
#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4700 4710 #Naval Bomber
7290 7300 7310 7320 #CAS

#Armour & Artillery
2860 #Interwar Armoured Car  
2290 2300 2310 2900 2910 2920 #1924FA
7600 7610 2620 2010 2630 #SW Tank 
2800 2450 #Early Static Anti-Air Artillery 
2810 #1918 AA Bde

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 1090 #1931 Infantry Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240 #1930 Mountain Division
1910 1920 1930 1940 1950 1960 1970 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1932 Cavalry Division 
1830 1840 #Engineers

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Industrial
5810 5820 5050 #Manufacturing
5700 5710 5010 5020 #Mechanized Agriculture 
5800 5080 5090 #Improved Construction Engineering
5600 5610 5620 #Medicine
5190 #Basic Oil Refining 
5310 54010 54020 54030 #Computers & cryptografi
5316 5326 5327

# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6010 6020 # Superior Firepower
14000 14010 14020 #Great War Hospital System 

#Naval
3010 3020 3030 3040 3050 3060 #1933 Destroyer 
3110 3120 3130 3140 3150 #1930 Light Cruiser
3810 3820 #1925 transport
3610 3620 3630 3640 #1924 submarine
3720 3730 3736 3740 3750 #1925 torpedo
3900 #ASW 1918
3210 3220 3230 3240 3250 #1930 heavy cruiser
12100 # LCV

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 # Engagement Theories
8100 8110 8120 8150 # Naval Supremacy
8500 8510 8520 8550 8560 8600 8610 # Naval Interdiction
8900 8910 8920 8930 8940 8950 # Engagement Tactics - Fleet-in-Being column
81650 # Subsidiary Carrier Role
81700 81710 # Aerial Supremacy column
81850 81860 # Scouting Focus column
82300 82310 # Amphibious Warfare
82500 # Logistic Support
	}
	
	dormant_teams = { 12725 }

#########  OOB (...)

landunit = {
 	id = { type = 17343 id = 1 }
 	name = "2y Transamur Korpus"
 	location = 1185

  		division = {
   		id = { type = 17343 id = 2 }
   		name = "1. Strelkovaya Diviziya"
   		strength = 80
   		type = infantry
		model = 8
   		extra = artillery 
		brigade_model = 5
             	}
  		
		division = {
   		id = { type = 17343 id = 3 }
   		name = "5. Strelkovaya Diviziya"
   		strength = 80
		model = 8
   		type = infantry
             	}

  		division = {
   		id = { type = 17343 id = 4 }
   		name = "3. Strelkovaya Diviziya"
   		strength = 80
		model = 8
   		type = infantry
   		extra = artillery 
		brigade_model = 5
		}
		}


	landunit = {
 	id = { type = 17343 id = 5 }
 	name = "1y Transamur Korpus"
 	location = 1191

  		division = {
   		id = { type = 17343 id = 6 }
   		name = "2. Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 8
             	}

  		division = {
   		id = { type = 17343 id = 7 }
   		name = "4. Strelkovaya Diviziya"
   		strength = 80
   		type = infantry
		model = 8
             	}

  		division = {
   		id = { type = 17343 id = 8 }
   		name = "6. Strelkovaya Diviziya"
   		strength = 80
   		type = infantry
		model = 8
             	}

  		division = {
  		id = { type = 17343 id = 9  }
   		name = "1. Kavaleriyskaya  Diviziya"
   		strength = 80
   		type = cavalry
		model = 8
		extra = armored_car
		brigade_model = 2
             	}

  		division = {
   		id = { type = 17343 id = 10 }
   		name = "2. Kavaleriyskaya  Diviziya"
   		strength = 80
   		type = cavalry
		model = 8
   		extra = light_armor_brigade
		brigade_model = 2
             	}

                division = {
   		id = { type = 17343 id = 11 }
   		name = "3. Kavaleriyskaya  Diviziya"
   		strength = 80
   		type = cavalry
		model = 8
   		extra = light_armor_brigade
		brigade_model = 2
             	}
        	}


	

airunit = {
 	id = { type = 17343 id = 13 }
 	name = "I. Transamur Aviatsionnyi Korpus"
 	location = 1191
	base = 1191

  		division = {
   		id = { type = 17343 id = 14 }
   		name = "1. BAD"
   		strength = 100
   		type = tactical_bomber
   		model = 5
             	}
                division = { 
                id  = { type = 17343 id = 23 }
                name     = "1. IAD"
                strength = 100
                type     = interceptor
                model    = 7
    }
          	}

navalunit = {
 id = { type = 17343 id = 15 }
 name = "Zaamurskiy Flot"
 location = 1191 #Vladivostok
 base = 1191
   division = {   id = { type = 17343 id = 31 }   name = "Admiral Kolchak" type = battleship model = 2 extra= naval_torpedoes_s brigade_model= 2 }#Formerly the Settsu
   division = {   id = { type = 17343 id = 32 }   name = "Ataman Semenov" type = battleship model = 1 extra= naval_torpedoes_s brigade_model= 2 }#Formerly the Kashima
   division = {   id = { type = 17343 id = 33 }   name = "General Kappel" type = battleship model = 1 extra= naval_torpedoes_s brigade_model= 2 }#Formerly the Mikasa
   division = {   id = { type = 17343 id = 24 }   name = "Vladivostok"  type = light_cruiser model = 3 }
   division = {   id = { type = 17343 id = 29 }   name = "Askold"  type = light_cruiser model = 2 } #Light Cruisers of the former Imperial Pacific Squadron
   division = {   id = { type = 17343 id = 28 }   name = "Zhemchug"  type = light_cruiser model = 2 }
   division = {   id = { type = 17343 id = 16 }   name = "1. Flotiliya Esmintsev"  type = destroyer model = 3 }
   division = {   id = { type = 17343 id = 25 }   name = "2. Flotiliya Esmintsev"  type = destroyer model = 2 }#Destroyers of the former Imperial Pacific Squadron
   division = {   id = { type = 17343 id = 26 }   name = "3. Flotiliya Esmintsev"  type = destroyer model = 2 }
 }
 navalunit = {
 id = { type = 17343 id = 36 }
 name = "Podvodnaya Lodka Flot"
 location = 1191 #Vladivostok
 base = 1191
   division = {   id = { type = 17343 id = 17 }   name = "1. Flotiliya Podlodok"  type = submarine model = 2 }
   division = {   id = { type = 17343 id = 18 }   name = "2. Flotiliya Podlodok"  type = submarine model = 2 }
   division = {   id = { type = 17343 id = 19 }   name = "3. Flotiliya Podlodok"  type = submarine model = 2 }
   division = {   id = { type = 17343 id = 20 }   name = "4. Flotiliya Podlodok"  type = submarine model = 1 }
   division = {   id = { type = 17343 id = 21 }   name = "5. Flotiliya Podlodok"  type = submarine model = 1 }
 }

 navalunit = {
 id = { type = 17343 id = 37 }
 name = "Transportniy Flot"
 location = 1191 #Vladivostok
 base = 1191
   division = {   id = { type = 17343 id = 27 }   name = "4. Flotiliya Esmintsev"  type = destroyer model = 2 }
   division = {   id = { type = 17343 id = 22 }   name = "1. Transportnaya Flotiliya" type = transport model = 1 }
 }

 division_development =
   { name  = "Nakhodka"
     type  = heavy_cruiser
     model = 3
     cost  = 1.5
     id    = { type = 17343 id = 38 }
     date  = { year = 1936 month = april day = 15 }
   }

 division_development =
   { name  = "Artyom"
     type  = heavy_cruiser
     model = 3
     cost  = 1.5
     id    = { type = 17343 id = 39 }
     date  = { year = 1936 month = april day = 29 }
   }
 }