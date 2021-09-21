##############################
# Country definition for VIC #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = VIC
  regular_id         = VIC
  name               = VIC
  ai                 = "KAISERREICH\SSFA_VIC.ai"
  capital            = 978 # Dakar
  extra_tc           = 50
  manpower           = 250
  relative_manpower  = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 40
  escorts        = 10
  free = {
    ic             = 50
    manpower       = 15
    energy         = 50
    metal          = 50
    rare_materials = 50
    oil            = 60
    supplies       = 70
    money          = 50
  }

  diplomacy = {
    relation = { tag = CON value = -200 }
    relation = { tag = CAN value = 175 }
    relation = { tag = U49 value = 150 }
  }
  SpyInfo                = { country = "VIC" NumberOfSpies = 4 }

  nationalprovinces      = { 942 944 945 957 958 959 963 965 966 967 971 972 973 975 974 976 977 978 983 980 }
  ownedprovinces         = { 942 944 945 957 958 959 963 965 966 967 971 972 973 975 974 976 977 978 983 980 }
  controlledprovinces    = { 942 944 945 957 958 959 963 965 966 967 971 972 973 975 974 976 977 978 983 980 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1160 1170 1180 1190 1200 1210 1220 1230 1240 1560 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1860 1396 2620 2010 2630 2640 2646 2650 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 4820 4740 4750 4760 4770 4900 4910 7290 7300 7310 7320 4700 4710 4290 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3510 3520 3530 12100 12110 12120 12130 3720 3730 3736 3740 3750 3900 3810 3820 3610 3620 3630 3640 3650 7600 7610 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 5600 5610 5620 5630 5560 5190 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 14000 14010 14020 8010 8020 8030 8040 8050 8070 8100 8110 8120 8900 8910 8920 8930 8940 8950 8150 8560 8160 8170 8060 8080 82300 8500 8510 8520 8550 81650 8200 8210 82500 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 1100 1110 1120 1250 1260 1270 1380 1390 1530 1400 1410 1570 1580 1590 1600 1610 1470 1670 1680 1870 1990 199100 199110 2030 2040 2050 2060 2070 2080 2090 11026 2110 2100 2170 2180 2850 2120 2150 2160 2320 2940 2330 2340 2240 2220 2230 2400 2410 2420 2430 2970 2370 2460 2470 2480 2520 2530 22920 22910 22930 2980 2260 2270 3070 12000 12010 12020 3350 3470 3480 3540 12060 3550 12140 3660 3670 3680 3830 3840 3910 3920 3760 3770 1690 4030 4060 4090 15000 4340 4040 4070 4100 4050 4080 4110 4116 4400 4170 4280 4450 4140 4150 4160 4220 4230 4240 4190 4200 4210 4260 4250 4270 4780 4790 4850 4860 4920 4930 4940 4950 5030 5070 5130 5150 5160 5180 5170 5140 5100 5320 5330 5340 5327 5350 5360 5370 5380 5410 5416 5417 5420 5426 5200 5210 5220 5230 5240 5470 5480 5490 5500 5510 5520 5650 5640 5920 5930 5940 5950 5970 5960 5980 5990 55000 55010 14030 14040 14110 6900 6210 6220 6250 6260 6230 6240 6270 7580 7590 7100 7110 7120 7560 7570 7550 7140 8220 8230 8240 8250 8570 8600 8620 8610 8640 8630 8960 8970 8980 81050 81850 81860 81870 81880 81890 81900 82310 82320 82510 82520 81700 81710 81720 81730 81740 81750 9150 9160 9170 9180 9200 9190 9210 9220 9310 9320 9330 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 2
    free_market       = 4
    professional_army = 4
    defense_lobby     = 10
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 57001 } # Phillipe Petain
  headofgovernment       = { type = 9 id = 57066 } # François de la Rocque
  foreignminister        = { type = 9 id = 57003 } # Paul Baudouin
  armamentminister       = { type = 9 id = 57044 } # Eugène Schueller
  ministerofsecurity     = { type = 9 id = 57045 } # Eugène Deloncle
  ministerofintelligence = { type = 9 id = 57046 } # André Dewavrin
  chiefofstaff           = { type = 9 id = 57007 } # Charles Huntzinger
  chiefofarmy            = { type = 9 id = 57048 } # François de la Rocque
  chiefofnavy            = { type = 9 id = 57009 } # Jean-Francois Darlan
  chiefofair             = { type = 9 id = 57050 } # Jean Mermoz

  landunit = {
    id       = { type = 5000 id = 61 }
    name     = "31ème Corps d'Armée"
    location = 967
    morale   = 80
    leader   = 380126
    division = {
      id             = { type = 5000 id = 85 }
      name           = "7e Armée"
      type           = hq
      model          = 4
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 62 }
      name           = "1ère Division d'Infanterie Motorisée"
      type           = motorized
      model          = 3
      extra          = engineer
      brigade_model  = 4
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 63 }
      name           = "3e Division d'Infanterie Motorisée"
      type           = motorized
      model          = 3
      extra          = artillery
      brigade_model  = 7
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 64 }
      name           = "1ère Division Cuirassée de Réserve"
      type           = light_armor
      model          = 2
      extra          = armored_car
      brigade_model  = 5
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 72 }
      name           = "1ère Division d'Infanterie de Réserve"
      type           = infantry
      model          = 11
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5000 id = 65 }
    name     = "32ème Corps d'Armée"
    location = 945
    morale   = 80
    leader   = 380008
    division = {
      id             = { type = 5000 id = 86 }
      name           = "6e Armée"
      type           = hq
      model          = 4
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 66 }
      name           = "10e Division Cuirassée de Réserve"
      type           = armor
      model          = 2
      extra          = engineer
      brigade_model  = 4
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 67 }
      name           = "11e Division Cuirassée de Réserve"
      type           = armor
      model          = 2
      extra          = rocket_artillery
      brigade_model  = 12
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 68 }
      name           = "1ère Division Légère de Cavalerie"
      type           = cavalry
      model          = 12
      extra          = light_armor_brigade
      brigade_model  = 6
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 69 }
      name           = "5e Division d'Infanterie Motorisée"
      type           = motorized
      model          = 3
      extra          = artillery
      brigade_model  = 9
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5000 id = 70 }
    name     = "34ème Corps d'Armée"
    location = 972
    morale   = 80
    leader   = 380009
    division = {
      id             = { type = 5000 id = 71 }
      name           = "2ère Division Légère de Cavalerie"
      type           = cavalry
      model          = 12
      extra          = artillery
      brigade_model  = 9
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 73 }
      name           = "2ère Division d'Infanterie de Réserve"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 74 }
      name           = "4e Division d'Infanterie de Réserve"
      type           = infantry
      model          = 11
      extra          = armored_car
      brigade_model  = 5
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5000 id = 75 }
    name     = "35ème Corps d'Armée"
    location = 957
    morale   = 80
    leader   = 380019
    division = {
      id             = { type = 5000 id = 76 }
      name           = "6e Division d'Infanterie de Réserve"
      type           = d_01
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 77 }
      name           = "7e Division d'Infanterie de Réserve"
      type           = infantry
      model          = 11
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 78 }
      name           = "3ère Division Légère de Cavalerie"
      type           = cavalry
      model          = 12
      extra          = light_armor_brigade
      brigade_model  = 7
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5000 id = 79 }
    name     = "36ème Corps d'Armée"
    location = 959
    morale   = 80
    leader   = 380131
    division = {
      id             = { type = 5000 id = 80 }
      name           = "8e Division d'Infanterie de Réserve"
      type           = infantry
      model          = 12
      extra          = anti_tank
      brigade_model  = 5
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 81 }
      name           = "9e Division d'Infanterie de Réserve"
      type           = d_01
      model          = 11
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 87 }
      name           = "4ère Division Légère de Cavalerie"
      type           = cavalry
      model          = 11
      extra          = armored_car
      brigade_model  = 5
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5000 id = 82 }
    name     = "37ème Corps d'Armée"
    location = 942
    morale   = 80
    leader   = 380058
    division = {
      id             = { type = 5000 id = 83 }
      name           = "6ère Division d'Infanterie Motorisée"
      type           = motorized
      model          = 5
      extra          = armored_car
      brigade_model  = 5
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 84 }
      name           = "10e Division d'Infanterie de Réserve"
      type           = d_01
      model          = 11
      extra          = rocket_artillery
      brigade_model  = 11
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5000 id = 1 }
      name           = "5ère Division Légère de Cavalerie"
      type           = cavalry
      model          = 12
      extra          = artillery
      brigade_model  = 7
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    dig_in   = 50.000
  }
}
