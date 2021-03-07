##############################
# Country definition for CAN #
##############################
province = {
  id = 2089 # Vancouver
  ic = 1
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  manpower = 1
}
province = {
  id = 2090 # Victoria
  ic = 1
  infra = { size = 0.5 current_size = 0.5 }
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 2092 ic = -2 } # Jasper
province = {
  id = 2101 # Regina
  ic = 1
  manpower = 1
}
province = {
  id = 2102 # Prince Albert
  ic = -1
  infra = { size = 0.2 current_size = 0.2 }
}
province = {
  id = 2103 # Edmonton
  air_base = { size = 4 current_size = 4 }
  manpower = 1
}
province = {
  id = 2104 # Calgary
  oil = 5
}
province = {
  id = 2105 # Grande Prairie
  ic = -1
  infra = { size = 0.2 current_size = 0.2 }
}
province = {
  id = 2106 # Winnipeg
  ic = 1
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  manpower = 1
}
province = {
  id = 2108 # Ottawa
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  manpower = 1
}
province = {
  id = 2109 # Hamilton
  ic = 1
  infra = { size = 0.7 current_size = 0.7 }
  manpower = 1
}
province = { id = 2110 ic = -2 } # Fort William
province = {
  id = 2111 # Toronto
  ic = 4
  infra = { size = 0.8 current_size = 0.8 }
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  manpower = 3
}
province = {
  id = 2112 # Cochrane
  ic = -1
  infra = { size = 0.2 current_size = 0.2 }
}
province = {
  id = 2113 # Pembroke
  ic = 3
  infra = { size = 0.6 current_size = 0.6 }
  manpower = 1
}
province = {
  id = 2117 # Quebec
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
  manpower = 1
}
province = {
  id = 2118 # Sherbrooke
  ic = 2
  infra = { size = 0.6 current_size = 0.6 }
  manpower = 1
}
province = {
  id = 2119 # Montreal
  ic = 4
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  manpower = 3
}
province = {
  id = 2120 # Sept-Iles
  infra = { size = 0.2 current_size = 0.2 }
}
province = {
  id = 2121 # Chicoutimi
  infra = { size = 0.3 current_size = 0.3 }
}
province = { id = 2124 ic = -1 } # Rimouski
province = {
  id = 2126 # Trois Rivieres
  ic = 1
  infra = { size = 0.5 current_size = 0.5 }
}
province = {
  id = 2128 # Fredericton
  infra = { size = 0.5 current_size = 0.5 }
}
province = { id = 2129 ic = 1 } # Sault Sainte Marie
province = {
  id = 2130 # Saint John
  ic = 2
  infra = { size = 0.5 current_size = 0.5 }
  manpower = 1
}
province = {
  id = 2131 # Moncton
  ic = 1
  infra = { size = 0.5 current_size = 0.5 }
}
province = {
  id = 2132 # Halifax
  ic = 2
  coastalfort = 2
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  manpower = 1
}
province = { id = 2133 ic = -1 } # Charlottetown
province = {
  id = 2134 # Glace Bay
  infra = { size = 0.5 current_size = 0.5 }
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 2136 # Goose Bay
  infra = { size = 0.2 current_size = 0.2 }
}
province = {
  id = 2137 # St. John's
  ic = 1
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 2138 # Nain
  infra = { size = 0.1 current_size = 0.1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CAN
  ai                 = "kaiserreich\Canada.ai"
  capital            = 2108 # Ottawa
  manpower           = 120
  # Resource Reserves
  energy         = 2000
  metal          = 2000
  rare_materials = 1000
  oil            = 1000
  supplies       = 500
  money          = 500
  transports     = 300
  escorts        = 5

  diplomacy = {
    relation = {
      tag        = EAF
      value      = 60
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = BEL value = 60 }
    relation = { tag = BLR value = -30 }
    relation = { tag = BUL value = -30 }
    relation = { tag = GER value = -75 }
    relation = { tag = LAT value = -30 }
    relation = { tag = LIT value = -20 }
    relation = { tag = POL value = -40 }
    relation = { tag = UKR value = -50 }
    relation = { tag = AUS value = -75 }
    relation = { tag = HUN value = -40 }
    relation = { tag = DEN value = 40 }
    relation = { tag = FIN value = 10 }
    relation = { tag = GRE value = 60 }
    relation = { tag = HOL value = 30 }
    relation = { tag = IRE value = -60 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NOR value = 40 }
    relation = { tag = POR value = 60 }
    relation = { tag = ROM value = 70 }
    relation = { tag = SCH value = 50 }
    relation = { tag = SER value = 40 }
    relation = { tag = SPA value = 90 }
    relation = { tag = SWE value = 30 }
    relation = { tag = ENG value = -175 }
    relation = { tag = FRA value = -150 }
    relation = { tag = RSI value = -100 }
    relation = {
      tag        = AST
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = {
      tag        = GUY
      value      = 160
      access     = yes
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = {
      tag        = NZL
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = VIC value = 150 }
    relation = { tag = RUS value = -30 }
    relation = { tag = AFG value = -100 }
    relation = { tag = OMN value = 30 }
    relation = { tag = OTT value = -50 }
    relation = { tag = CON value = -50 }
    relation = { tag = ETH value = 20 }
    relation = { tag = LIB value = 50 }
    relation = { tag = SAF value = 80 access = yes }
    relation = { tag = BHU value = -75 }
    relation = { tag = BUR value = -50 }
    relation = { tag = IND value = -175 }
    relation = { tag = PRK value = -175 }
    relation = { tag = NEP value = -100 }
    relation = {
      tag        = PAK
      value      = 175
      access     = yes
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = TIB value = -40 }
    relation = { tag = ARG value = -20 }
    relation = { tag = HON value = 60 }
    relation = { tag = MEX value = -30 }
    relation = { tag = PAN value = 40 }
    relation = { tag = USA value = -40 }
    relation = { tag = CHI value = -30 }
    relation = { tag = JAP value = 80 }
  }
  SpyInfo                = { country = "CAN" NumberOfSpies = 5 }

  nationalprovinces      = { 2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 2129 2113 2114 2148 2110 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2138 2137 2132 2131 2134 2126 2133 }
  ownedprovinces         = { 2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 2129 2110 2113 2114 2148 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2138 2137 2132 2131 2134 2126 2133 }
  controlledprovinces    = { 2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 2129 2113 2114 2110 2148 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2138 2137 2132 2131 2134 2126 2133 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1160 1170 1180 1190 1200 1210 1220 1230 1240 1560 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1860 1396 2620 2010 2630 2640 2646 2650 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 4820 4740 4750 4760 4770 4900 4910 7290 7300 7310 7320 4700 4710 4290 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3510 3520 3530 12100 12110 12120 12130 3720 3730 3736 3740 3750 3900 3810 3820 3610 3620 3630 3640 3650 7600 7610 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 5600 5610 5620 5630 5560 5190 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 14000 14010 14020 8010 8020 8030 8040 8050 8070 8100 8110 8120 8900 8910 8920 8930 8940 8950 8150 8560 8160 8170 8060 8080 82300 8500 8510 8520 8550 81650 8200 82500 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 8210 }
  deactivate             = { 6010 6210 6570 6560 6390 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 10
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 45135 } # H.R.M. George V
  headofgovernment       = { type = 9 id = 45002 } # Mackenzie King
  foreignminister        = { type = 9 id = 45003 } # Mackenzie King
  armamentminister       = { type = 9 id = 45057 } # C.D. Howe
  ministerofsecurity     = { type = 9 id = 45005 } # Ernest Lapointe
  ministerofintelligence = { type = 9 id = 45086 } # Kenneth Stuart
  chiefofstaff           = { type = 9 id = 45197 } # Archibald Montgomery-Massingberd
  chiefofarmy            = { type = 9 id = 45133 } # Harold Alexander
  dormant_leaders        = { 52122 52123 52124 }

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "British Royal Army"
    location = 2108
    division = {
      id             = { type = 20000 id = 2 }
      name           = "Imperial General Staff"
      type           = hq
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 20000 id = 3 }
      name           = "1st 'Kings Own' Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 100
    }
    division = {
      id             = { type = 20000 id = 4 }
      name           = "2nd 'Lincoln & Welland' Division"
      type           = infantry
      model          = 8
      extra          = anti_tank
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20000 id = 5 }
      name           = "3rd 'Queens Own' Division"
      type           = infantry
      model          = 8
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20000 id = 6 }
    name     = "Halifax 1st Corps"
    location = 2132
    division = {
      id             = { type = 20000 id = 7 }
      name           = "4th 'Prince of Wales' Division"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 9 }
    name     = "Quebec City 2nd Corps"
    location = 2117
    division = {
      id             = { type = 20000 id = 10 }
      name           = "5th 'Black Watch' Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 17 }
    name     = "Saint John 1st Royal Marines Division"
    location = 2130
    division = {
      id             = { type = 20000 id = 18 }
      name           = "1st Royal Marines Division"
      type           = marine
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20000 id = 90 }
    name     = "Canadian Active Service Force"
    location = 2111
    division = {
      id             = { type = 20000 id = 91 }
      name           = "1st Canadian Infantry Div."
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 20000 id = 92 }
      name           = "2nd Canadian Infantry Div."
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 20000 id = 21 }
    name     = "Newfoundland Garrison"
    location = 2137
    division = {
      id             = { type = 20000 id = 22 }
      name           = "Newfoundland Garrison"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 23 }
    name     = "Halifax Garrison"
    location = 2132
    division = {
      id             = { type = 20000 id = 24 }
      name           = "Halifax Garrison"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 25 }
    name     = "Quebec Garrison"
    location = 2126
    division = {
      id             = { type = 20000 id = 26 }
      name           = "Quebec Garrison"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 27 }
    name     = "Vancouver Garrison"
    location = 2089
    division = {
      id             = { type = 20000 id = 28 }
      name           = "Vancouver Garrison"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20000 id = 15 }
    name     = "Montreal Royal Canadian Mounted Police"
    location = 2119
    division = {
      id             = { type = 20000 id = 16 }
      name           = "1st RCMP Division"
      type           = cavalry
      model          = 9
      extra          = police
      brigade_model  = 1
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 20001 id = 1 }
    name     = "Atlantic Fleet"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 2 }
      name           = "HMCS Queen Elizabeth"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 3 }
      name           = "HMCS Warspite"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 1003 }
      name           = "HMCS Barham"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 1004 }
      name           = "HMCS Valiant"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 4 }
      name           = "HMCS Howe"
      type           = battlecruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 5 }
      name           = "HMCS Tiger"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 105 }
      name           = "HMCS Ramillies"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 106 }
      name           = "HMCS Princess Royal"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 107 }
      name           = "HMCS Resolution"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 108 }
      name           = "HMCS Revenge"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 109 }
      name           = "HMCS Royal Oak"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 110 }
      name           = "HMCS Lion"
      type           = battlecruiser
      model          = 0
    }
    division = {
      id             = { type = 20001 id = 111 }
      name           = "HMCS Empress"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 20001 id = 112 }
      name           = "HMCS Manxman"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 20001 id = 113 }
      name           = "HMCS Riviera"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 20001 id = 6 }
      name           = "HMCS Frobisher"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 7 }
      name           = "HMCS Hawkins"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 8 }
      name           = "HMCS Agincourt"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 9 }
      name           = "HMCS Blenheim"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 10 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 20001 id = 11 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 12 }
      name           = "3rd Destroyer Flotilla"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 13 }
      name           = "4th Destroyer Flotilla"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 20001 id = 14 }
    name     = "Carrier Task Force"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 15 }
      name           = "HMCS Majestic"
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 20001 id = 16 }
      name           = "HMCS Leviathan"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 20001 id = 1005 }
      name           = "HMCS Vindictive"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 20001 id = 1001 }
      name           = "HMCS Berwick"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 1002 }
      name           = "HMCS Cornwall"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 17 }
      name           = "HMCS Cressy"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 18 }
      name           = "HMCS Plassey"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 19 }
      name           = "HMCS Macdonald"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 20 }
      name           = "HMCS Laurier"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 21 }
      name           = "5th Destroyer Flotilla"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 20001 id = 22 }
    name     = "Reserve Fleet"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 23 }
      name           = "HMCS Argus"
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 24 }
      name           = "HMCS Hermes"
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 25 }
      name           = "HMCS Revenge"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 26 }
      name           = "HMCS Resolution"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 20001 id = 27 }
      name           = "HMCS Iron Duke"
      type           = battleship
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 101 }
      name           = "HMCS Bellerophon"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 102 }
      name           = "HMCS Colossus"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 103 }
      name           = "HMCS Erin"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 104 }
      name           = "HMCS Malborough"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 28 }
      name           = "HMCS Caledon"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 29 }
      name           = "HMCS Caradoc"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 30 }
      name           = "HMCS Ceres"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 31 }
      name           = "HMCS Curlew"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 32 }
      name           = "HMCS Danae"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 33 }
      name           = "HMCS Dauntless"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 114 }
      name           = "HMCS Inconstant"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 115 }
      name           = "HMCS Aurora"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 116 }
      name           = "HMCS Calliope"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 117 }
      name           = "HMCS Calypso"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 118 }
      name           = "HMCS Cambrian"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 119 }
      name           = "HMCS Canterbury"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 120 }
      name           = "HMCS Capetown"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 121 }
      name           = "HMCS Carlisle"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 122 }
      name           = "HMCS Caroline"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 132 }
      name           = "HMCS Carysfort"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 133 }
      name           = "HMCS Castor"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 134 }
      name           = "HMCS Centaur"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 20001 id = 35 }
    name     = "1st Submarine Squadron"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 36 }
      name           = "1st Submarine Flotilla"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 37 }
      name           = "2nd Submarine Flotilla"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 38 }
      name           = "3rd Submarine Flotilla"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 20001 id = 39 }
    name     = "Pacific Squadron"
    location = 2089
    base     = 2089
    division = {
      id             = { type = 20001 id = 41 }
      name           = "HMCS Dragon"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 123 }
      name           = "HMCS Champion"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 124 }
      name           = "HMCS Chester"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 125 }
      name           = "HMCS Cleopatra"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 42 }
      name           = "6th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 43 }
      name           = "7th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 20001 id = 44 }
    name     = "2nd Submarine Squadron"
    location = 2089
    base     = 2089
    division = {
      id             = { type = 20001 id = 45 }
      name           = "4th Submarine Flotilla"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 46 }
      name           = "5th Submarine Flotilla"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 20001 id = 47 }
    name     = "Caribbean Squadron"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 48 }
      name           = "HMCS Emerald"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 49 }
      name           = "HMCS Capetown"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 126 }
      name           = "HMCS Constance"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 127 }
      name           = "HMCS Cordelia"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 128 }
      name           = "HMCS Curacoa"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 50 }
      name           = "8th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 51 }
      name           = "9th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 20001 id = 52 }
    name     = "Indian Squadron"
    location = 1533
    base     = 1533
    division = {
      id             = { type = 20001 id = 53 }
      name           = "HMCS Euphrates"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 54 }
      name           = "HMCS Colombo"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 129 }
      name           = "HMCS Curlew"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 130 }
      name           = "HMCS Danae"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 131 }
      name           = "HMCS Darthmouth"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 20001 id = 55 }
      name           = "10th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 20001 id = 56 }
      name           = "11th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 20001 id = 57 }
    name     = "1st Transport Squadron"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20001 id = 58 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 59 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 60 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 61 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 20001 id = 62 }
    name     = "2nd Transport Squadron"
    location = 2089
    base     = 2089
    division = {
      id             = { type = 20001 id = 63 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 20001 id = 64 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12700 id = 90 }
    name     = "1st Tactical Wing"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 12700 id = 91 }
      name           = "No.1 RCAF Tactical Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 92 }
    name     = "Ottawa Strategic Bomber Command"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 12700 id = 93 }
      name           = "No.1 RCAF Strategic Group"
      type           = strategic_bomber
      model          = 2
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 94 }
    name     = "2nd Tactical Wing"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 12700 id = 95 }
      name           = "No.2 RCAF Tactical Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 96 }
    name     = "1st Fighter Wing"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 12700 id = 97 }
      name           = "No.1 RCAF Fighter Group"
      type           = interceptor
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 98 }
      name           = "No.2 RCAF Fighter Group"
      type           = interceptor
      model          = 6
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 99 }
    name     = "2nd Fighter Wing"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 12700 id = 100 }
      name           = "No.3 RCAF Fighter Group"
      type           = interceptor
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 101 }
      name           = "No.4 RCAF Fighter Group"
      type           = interceptor
      model          = 6
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 20000 id = 86 }
    name           = "HMCS Triumph"
    type           = carrier
    model          = 2
    cost           = 4.8
    date           = { year = 1938 month = may day = 29 }
    extra1         = cag
    brigade_model1 = 1
  }
  division_development = {
    id             = { type = 20000 id = 87 }
    name           = "HMCS Vengeance"
    type           = carrier
    model          = 2
    cost           = 4.8
    date           = { year = 1938 month = june day = 29 }
    extra1         = cag
    brigade_model1 = 1
  }
  division_development = {
    id             = { type = 20000 id = 88 }
    name           = "6th Submarine Flotilla"
    type           = submarine
    model          = 3
    cost           = 1.6
    date           = { year = 1937 month = june day = 1 }
  }
  division_development = {
    id             = { type = 20000 id = 89 }
    name           = "7th Submarine Flotilla"
    type           = submarine
    model          = 3
    cost           = 1.6
    date           = { year = 1937 month = june day = 1 }
  }
}
