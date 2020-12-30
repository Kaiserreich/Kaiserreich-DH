##############################
# Country definition for FIN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FIN
  capital            = 525
  extra_tc           = 50
  manpower           = 100
  # Resource Reserves
  energy         = 1500
  metal          = 1500
  rare_materials = 1000
  oil            = 750
  supplies       = 2500
  money          = 0
  transports     = 50
  escorts        = 10

  nationalprovinces      = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 }
  ownedprovinces         = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 }
  controlledprovinces    = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    freedom           = 7
    free_market       = 9
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 29001 } # H.K.M. Fredrik Kaarle I
  headofgovernment       = { type = 9 id = 29065 } # Vihtori Kosola
  dormant_leaders        = { 500814 500815 500816 500817 500818 500819 500820 500464 500593 500597 500604 500611 500613 500615 500618 500619 500624 500625 500622 500633 500634 500645 500646 500649 500642 500660 500465 500466 }

  landunit = {
    id       = { type = 18750 id = 1 }
    name     = "Armeijakunta"
    location = 525
    division = {
      id             = { type = 18750 id = 2 }
      name           = "Armeijakunta"
      type           = hq
      model          = 3
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 18750 id = 3 }
    name     = "I Armeija"
    location = 531
    division = {
      id             = { type = 18750 id = 5 }
      name           = "1. Divisioona"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 18750 id = 6 }
      name           = "2. Divisioona"
      type           = infantry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 18750 id = 7 }
      name           = "Kaartin Ratsuv‰kidivisioona"
      type           = cavalry
      model          = 10
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 18750 id = 4 }
    name     = "II Armeija"
    location = 532
    division = {
      id             = { type = 18750 id = 8 }
      name           = "3. Divisioona"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 18750 id = 9 }
      name           = "4. Divisioona"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 18750 id = 10 }
      name           = "J‰‰k‰ridivisioona"
      type           = motorized
      model          = 0
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 18750 id = 11 }
    name     = "III Armeija"
    location = 517
    division = {
      id             = { type = 18750 id = 12 }
      name           = "5. Divisioona"
      type           = infantry
      model          = 9
      strength       = 50
    }
    division = {
      id             = { type = 18750 id = 13 }
      name           = "6. Divisioona"
      type           = infantry
      model          = 9
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 18750 id = 14 }
    name     = "IV Armeija"
    location = 533
    division = {
      id             = { type = 18750 id = 15 }
      name           = "7. Divisioona"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 8
      strength       = 50
    }
    division = {
      id             = { type = 18750 id = 16 }
      name           = "8. Divisioona"
      type           = infantry
      model          = 8
      strength       = 50
    }
  }
}
