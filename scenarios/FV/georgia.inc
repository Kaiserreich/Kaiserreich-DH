##############################
# Country definition for GEO #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GEO
  capital            = 709 # Tbilisi
  extra_tc           = 50
  manpower           = 100
  # Resource Reserves
  energy         = 800
  metal          = 800
  rare_materials = 500
  oil            = 250
  supplies       = 1000
  money          = 0
  transports     = 50
  escorts        = 10

  nationalprovinces      = { 707 708 709 710 }
  ownedprovinces         = { 707 708 709 710 }
  controlledprovinces    = { 707 708 709 710 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1830 1840 1850 1860 1560 1570 1580 1396 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2100 2220 2400 2410 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3310 3320 3410 3420 3430 3440 3450 3456 3610 3620 3630 3640 3720 3730 3736 3740 3750 3810 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4300 4310 4320 4330 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5310 54010 54020 54030 5316 5326 5327 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 8010 8020 8030 8040 8050 8060 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 8
    freedom           = 6
    free_market       = 2
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 7
  }
  headofstate            = { type = 9 id = 519001 } # Grigol Ordzhonikidze
  headofgovernment       = { type = 9 id = 519113 } # Lavrentij Beria

  landunit = {
    id       = { type = 18500 id = 1 }
    name     = "Sak'art'velo Armiya"
    location = 709
    division = {
      id             = { type = 18500 id = 2 }
      name           = "1st Rifle Division"
      type           = infantry
      model          = 7
      max_strength       = 50
    }
    division = {
      id             = { type = 18500 id = 3 }
      name           = "2nd Rifle Division"
      type           = infantry
      model          = 7
      max_strength       = 50
    }
    division = {
      id             = { type = 18500 id = 4 }
      name           = "3rd Cavalry Division"
      type           = cavalry
      model          = 6
      max_strength       = 40
    }
  }
}
