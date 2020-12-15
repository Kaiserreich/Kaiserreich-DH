##############################
# Country definition for U00 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U00
  puppet             = GER
  control            = GER
  capital            = 232 # Warsaw
  extra_tc           = 50
  manpower           = 250
  # Resource Reserves
  energy         = 3000
  metal          = 3000
  rare_materials = 1250
  oil            = 1500
  supplies       = 20000
  money          = 50
  free = {
	oil 		   = 5
  }   

  nationalprovinces      = { 223 227 228 229 230 231 232 233 234 243 246 250 252 254 255 258 259 260 262 263 }
  ownedprovinces         = { 223 227 228 229 230 231 232 233 234 243 246 250 252 254 255 258 259 260 262 263 }
  controlledprovinces    = { 223 227 228 229 230 231 232 233 234 243 246 250 252 254 255 258 259 260 262 263 }
  claimedprovinces       = { 245 244 249 247 253 251 248 256 257 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 2
    free_market       = 6
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 920910 } # J.K.M. Mindaugaas III
  headofgovernment       = { type = 9 id = 920911 } # Stanislaw Narutowicz

  landunit = {
    id       = { type = 18600 id = 7 }
    name     = "Armia Lodz"
    location = 223
    division = {
      id             = { type = 18600 id = 8 }
      name           = "2 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 9 }
      name           = "10 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = anti_air
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 10 }
      name           = "29 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 18600 id = 11 }
    name     = "Armia Lublin"
    location = 243
    division = {
      id             = { type = 18600 id = 12 }
      name           = "18 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 13 }
      name           = "28 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 14 }
      name           = "30 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = anti_tank
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 18600 id = 34 }
    name     = "Armia Warszawa"
    location = 232
    division = {
      id             = { type = 18600 id = 1706 }
      name           = "Army HQ"
      type           = hq
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 35 }
      name           = "Mazowiecka B.K."
      type           = cavalry
      model          = 7
      extra          = engineer
      brigade_model  = 1
    }
    division = {
      id             = { type = 18600 id = 36 }
      name           = "1 DP Legionуw im. Pilsudskiego"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 37 }
      name           = "5 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 38 }
      name           = "11 Karpacka Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 39 }
      name           = "24 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 18600 id = 40 }
    name     = "Armia Byalostok"
    location = 254
    division = {
      id             = { type = 18600 id = 41 }
      name           = "20 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 42 }
      name           = "25 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 43 }
      name           = "1 Dywizja Zmotoryzowana"
      type           = motorized
      model          = 1
      extra          = anti_tank
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 26500 id = 1 }
    name     = "Lietuvos Armija"
    location = 258
    division = {
      id             = { type = 26500 id = 2 }
      name           = "I Pestininku Divizija"
      type           = infantry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 26500 id = 3 }
      name           = "II Pestininku Divizija"
      type           = infantry
      model          = 7
      extra          = artillery
      strength       = 60
    }
    division = {
      id             = { type = 26500 id = 4 }
      name           = "III Pestininku Divizija"
      type           = infantry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 26500 id = 5 }
      name           = "IV Pestininku Divizija"
      type           = infantry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 26500 id = 6 }
      name           = "V Pestininku Divizija"
      type           = infantry
      model          = 7
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 18600 id = 44 }
    name     = "Armia Chelm"
    location = 246
    division = {
      id             = { type = 18600 id = 45 }
      name           = "2 Dywizja Zmotoryzowana"
      type           = motorized
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 18600 id = 46 }
      name           = "3 Dywizja Zmotoryzowana"
      type           = motorized
      model          = 0
      strength       = 80
    }
  }
    landdivision = {
      id             = { type = 18600 id = 2 }
      name           = "5 Dywizja Piechoty"
      type           = infantry
      model          = 9
      strength       = 80
      dormant        = yes
    }
    landdivision = {
      id             = { type = 18600 id = 3 }
      name           = "7 Dywizja Piechoty"
      type           = infantry
      model          = 9
      strength       = 80
      dormant        = yes
    }
    landdivision = {
      id             = { type = 18600 id = 4 }
      name           = "10 Dywizja Piechoty"
      type           = infantry
      model          = 9
      strength       = 80
      dormant        = yes
    }
    landdivision = {
      id             = { type = 18600 id = 5 }
      name           = "11 Dywizja Piechoty"
      type           = infantry
      model          = 9
      strength       = 80
      dormant        = yes
    }
    landdivision = {
      id             = { type = 18600 id = 6 }
      name           = "Wilenska B.K."
      type           = cavalry
      model          = 9
      strength       = 50
      dormant        = yes
    }
	
	airunit = {
 	id = { type = 18600 id = 59 }
 	name = "III/1 Dyon Brygady Poscigowej"
 	location = 232
	base = 232

		division = {
		id = { type = 18600 id = 60 }
		name = "III/1 Dyon Brygady Poscigowej"
		type = interceptor
		model = 6
		}

		division = {
		id = { type = 18600 id = 61 }
		name = "IV/1 Dyon Brygady Poscigowej"
		type = interceptor
		model = 6
		}

		division = {
		id = { type = 18600 id = 62 }
		name = "1 Dywizjon Bombowcуw Ciezkich"
		type = tactical_bomber
		model = 6
		}
		}

	airunit = {
        id = { type = 26500 id = 25 }
	location = 258
	base = 258
	name = "Lietuvos Karines Oro Pajegos"

		Division = {
	        id = { type = 26500 id = 26 }
		name = "I Naikintuvu Aviacijos Grupe"
		type = multi_role
		model = 3
		strength  = 45
		}
	}		
}
