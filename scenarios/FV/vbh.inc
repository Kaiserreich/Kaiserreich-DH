##############################
# Country definition for LAT #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LAT
  puppet             = GER
  control            = GER
  capital            = 264 # Riga
  extra_tc           = 50
  manpower           = 150
  # Resource Reserves
  energy         = 1000
  metal          = 0
  rare_materials = 500
  oil            = 750
  supplies       = 10000
  money          = 0
  transports     = 50
  escorts        = 10

  nationalprovinces      = { 264 265 267 268 269 270 271 272 273 274 275 266 }
  ownedprovinces         = { 264 265 267 268 269 270 271 272 273 274 275 }
  controlledprovinces    = { 264 265 267 268 269 270 271 272 273 274 275 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 2
    freedom           = 2
    free_market       = 6
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 27001 } # S.M. Adolf Friedrich I
  headofgovernment       = { type = 9 id = 27002 } # Andrievs Niedra

  landunit = {
    id       = { type = 14750 id = 1 }
    name     = "Oberkommando der Balt. Landeswehr"
    location = 264
    division = {
      id             = { type = 14750 id = 2 }
      name           = "Oberkommando des Heeres"
      type           = hq
      model          = 2
      strength       = 75
    }
    division = {
      id             = { type = 14750 id = 3 }
      name           = "Eiserne Division"
      type           = cavalry
      model          = 9
      extra          = artillery
      brigade_model  = 2
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 14750 id = 4 }
    name     = "Nordkorps der Balt. Landeswehr"
    location = 274
    division = {
      id             = { type = 14750 id = 5 }
      name           = "Sicherungs-Brigade 'Estland'"
      type           = garrison
      model          = 4
      strength       = 40
    }
    division = {
      id             = { type = 14750 id = 6 }
      name           = "1. Deutsch-Balt. Division"
      type           = infantry
      model          = 8
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 14750 id = 7 }
    name     = "Ostkorps der Balt. Landeswehr"
    location = 273
    division = {
      id             = { type = 14750 id = 8 }
      name           = "Sicherungs-Brigade 'Livland'"
      type           = garrison
      model          = 4
      strength       = 40
    }
    division = {
      id             = { type = 14750 id = 9 }
      name           = "2. Deutsch-Balt. Division"
      type           = infantry
      model          = 8
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 14750 id = 10 }
    name     = "Sudkorps der Balt. Landeswehr"
    location = 267
    division = {
      id             = { type = 14750 id = 11 }
      name           = "3. Deutsch-Balt. Division"
      type           = infantry
      model          = 8
      strength       = 75
    }
  }
    landdivision = {
      id             = { type = 14750 id = 13 }
      name           = "4. Deutsch-Balt. Division"
      type           = infantry
      model          = 8
      strength       = 70
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14750 id = 14 }
      name           = "5. Deutsch-Balt. Division"
      type           = infantry
      model          = 8
      strength       = 70
      dormant        = yes
    }
	
navalunit = {
	name = "Die herzogliche Marine von Ostland"
	id = { type = 24500 id = 10 }
	location = 264 
	base = 264
division = { id = { type = 24500 id = 11 } name =  "VBHS Feuchtwangen" type = heavy_cruiser  model = 2 }
division = { id = { type = 24500 id = 12 } name =  "Hermann von Salza Zerstцrerflotte" type = destroyer   model = 3   } 
division = { id = { type = 24500 id = 13 } name =  "Kьstenschwadron" type = destroyer   model = 3   } 
division = { id = { type = 24500 id = 14 } name =  "Unterseebootsschwadron" type = submarine  model = 1 }
division = { id = { type = 24500 id = 15 } name =  "Transportflotte" type = transport model = 1 }

}



##### Luftwaffle der Pancakes #####

airunit = {
name = "Die Herzogliche Luftwaffe"
id = { type = 24500 id = 16 }
base = 270  # Tallin
location = 270
division = { id = { type = 24500 id = 17 } name = "Jagdgeschwader 1" strength = 100 type = multi_role model = 3 }
}	
}
