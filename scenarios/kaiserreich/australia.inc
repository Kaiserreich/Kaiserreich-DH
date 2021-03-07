##############################
# Country definition for AST #
##############################
province = {
  id = 1607 # Port Moresby
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1690 # Perth
  ic = 1
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 1691 ic = -2 } # Albany
province = {
  id = 1696 # Katherine
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 1697 # Darwin
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1698 # Broome
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1699 # Townsville
  ic = 1
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1701 # Cairns
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 5 current_size = 5 }
}
province = { id = 1703 ic = 1 } # Newcastle
province = {
  id = 1704 # Brisbane
  coastalfort = 1
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1705 # Sydney
  ic = 5
  anti_air = 7
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  manpower = 2
}
province = { id = 1706 ic = 1 } # Wollongong
province = {
  id = 1707 # Canberra
  ic = -1
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 1708 # Melbourne
  ic = 6
  coastalfort = 1
  anti_air = 3
  air_base = { size = 8 current_size = 8 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 1710 # Hobart
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = { id = 1711 ic = 1 } # Port Lincoln
province = {
  id = 1712 # Adelaide
  ic = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 1713 ic = -3 } # Robe
province = { id = 1715 anti_air = 1 } # Port Augusta
province = {
  id = 1719 # Hamilton
  infra = { size = 0.3 current_size = 0.3 }
}
province = {
  id = 1720 # Auckland
  infra = { size = 0.4 current_size = 0.4 }
}
province = {
  id = 1721 # Wellington
  ic = -2
  infra = { size = 0.4 current_size = 0.4 }
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1722 # Christchurch
  infra = { size = 0.3 current_size = 0.3 }
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1728 # Suva
  infra = { size = 0.2 current_size = 0.2 }
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = AST
  ai                 = "kaiserreich\Australasia.ai"
  capital            = 1707 # Canberra
  manpower           = 45
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 60
  escorts        = 10

  diplomacy = {
    relation = { tag = GER value = -80 }
    relation = { tag = AUS value = -40 }
    relation = { tag = HUN value = -40 }
    relation = { tag = ITA value = 30 }
    relation = { tag = SPA value = 20 }
    relation = { tag = ENG value = -80 }
    relation = { tag = FRA value = -40 }
    relation = { tag = RSI value = -40 }
    relation = { tag = CAN value = 150 }
    relation = { tag = VIC value = 40 }
    relation = { tag = RUS value = 20 }
    relation = { tag = CON value = -20 }
    relation = { tag = USA value = 60 }
    relation = { tag = JAP value = -50 }
    relation = {
      tag        = EAF
      value      = 60
      guaranteed = { year = 1935 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 4 }

  nationalprovinces      = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729 }
  ownedprovinces         = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729 }
  controlledprovinces    = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1718 1719 1720 1721 1722 1723 1606 1608 1607 1609 1604 1728 1729 }

  techapps               = { 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1070 1080 1090 1560 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1160 1170 1180 1190 1200 1210 1220 1230 1910 1920 1930 1940 1950 1960 1970 2620 2010 2630 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4300 4310 4320 4330 4600 4610 4620 4630 4120 4130 7290 7300 7310 7320 4800 4810 4820 4700 4710 4290 4740 4750 4760 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3810 3820 3610 3620 3630 3640 3900 3720 3730 3736 3740 12100 12110 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 5410 5190 5600 5610 5620 5630 7600 7610 27480 27490 27500 27510 27520 27530 27540 27550 9020 9030 27560 27570 27580 27590 27600 27460 27470 9010 9140 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 14000 14010 14020 8010 8020 8030 8040 8050 8070 8100 8110 8120 8900 8910 8920 8930 8940 8950 8150 8160 8060 8080 82300 8500 8510 8520 8550 81650 8200 2900 2910 2640 3460 12120 4900 8210 8170 8560 82500 }
  deactivate             = { 6010 6210 6570 6560 6390 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 56812 } # William Birdwood
  headofgovernment       = { type = 9 id = 56511 } # Billy Hughes
  foreignminister        = { type = 9 id = 56502 } # Vernon Sturdee
  armamentminister       = { type = 9 id = 56503 } # William Vanneck
  ministerofsecurity     = { type = 9 id = 56404 } # Thomas Blamey
  ministerofintelligence = { type = 9 id = 56505 } # Winston Dugan
  chiefofstaff           = { type = 9 id = 56835 } # Julius Bruche
  chiefofarmy            = { type = 9 id = 56831 } # Herbert Lloyd
  chiefofnavy            = { type = 9 id = 56822 } # Guy Gaunt
  chiefofair             = { type = 9 id = 56509 } # Philip Game
  dormant_leaders        = { 54126 54127 }
  dormant_teams          = { 543 544 545 546 }

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "1st Military District"
    location = 1707
    division = {
      id             = { type = 10600 id = 46 }
      name           = "The A.E.F."
      type           = hq
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 30001 id = 2 }
      name           = "1st Military District"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 3 }
    name     = "2nd Military District"
    location = 1705
    division = {
      id             = { type = 30001 id = 4 }
      name           = "2nd Military District"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "New Guinea Defence Force"
    location = 1607
    division = {
      id             = { type = 30001 id = 6 }
      name           = "1st Australian Infantry Div."
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 30001 id = 195 }
      name           = "2nd Australian Infantry Div."
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 30001 id = 18 }
      name           = "1st Australian Cavalry Div."
      type           = cavalry
      model          = 8
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 7 }
    name     = "3rd Military District"
    location = 1696
    division = {
      id             = { type = 30001 id = 8 }
      name           = "3rd Military District"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "4th Military District"
    location = 1701
    division = {
      id             = { type = 30001 id = 10 }
      name           = "4th Military District"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30001 id = 11 }
    name     = "Broome Garrison"
    location = 1698
    division = {
      id             = { type = 30001 id = 12 }
      name           = "Broome Garrison"
      type           = garrison
      model          = 4
      strength       = 30
      max_strength   = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30001 id = 13 }
    name     = "Port Moresby Garrison"
    location = 1607
    division = {
      id             = { type = 30001 id = 14 }
      name           = "Port Moresby Garrison"
      type           = garrison
      model          = 4
      extra          = anti_air
      brigade_model  = 0
      strength       = 30
      max_strength   = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30001 id = 15 }
    name     = "Western Australia Defence Force"
    location = 1690
    division = {
      id             = { type = 30001 id = 16 }
      name           = "3rd Australian Infantry Div."
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 30001 id = 17 }
      name           = "2nd Australian Cavalry Div."
      type           = cavalry
      model          = 8
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "New Zealand Expeditionary Force"
    location = 1722
    division = {
      id             = { type = 10600 id = 8 }
      name           = "1st NZ Infantry Division"
      type           = infantry
      model          = 7
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 10600 id = 2 }
      name           = "2nd NZ Infantry Division"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 10600 id = 5 }
      name           = "3rd NZ Infantry Division"
      type           = infantry
      model          = 7
      strength       = 20
      max_strength   = 20
    }
    division = {
      id             = { type = 10600 id = 11 }
      name           = "4th NZ Infantry Division"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 0
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 3 }
    name     = "1st Mounted Rifles Division"
    location = 1696
    division = {
      id             = { type = 10600 id = 4 }
      name           = "1st Mounted Rifles Division"
      type           = cavalry
      model          = 8
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 6 }
    name     = "2nd Mounted Rifles Division"
    location = 1716
    division = {
      id             = { type = 10600 id = 7 }
      name           = "2nd Mounted Rifles Division"
      type           = cavalry
      model          = 8
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 9 }
    name     = "3rd Mounted Rifles Division"
    location = 1711
    division = {
      id             = { type = 10600 id = 10 }
      name           = "3rd Mounted Rifles Division"
      type           = cavalry
      model          = 8
      strength       = 20
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 10600 id = 12 }
    name     = "Darwin Garrison"
    location = 1697
    division = {
      id             = { type = 10600 id = 13 }
      name           = "Darwin Garrison"
      type           = militia
      model          = 4
      strength       = 50
      max_strength   = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10600 id = 42 }
    name     = "Melbourne Garrison"
    location = 1708
    division = {
      id             = { type = 10600 id = 43 }
      name           = "Melbourne Garrison"
      type           = garrison
      model          = 4
      strength       = 30
      max_strength   = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10600 id = 44 }
    name     = "Brisbane Garrison"
    location = 1704
    division = {
      id             = { type = 10600 id = 45 }
      name           = "Brisbane Garrison"
      type           = garrison
      model          = 4
      extra          = anti_air
      brigade_model  = 0
      strength       = 30
      max_strength   = 30
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 30001 id = 218 }
    name     = "Capital Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 219 }
      name           = "HMAS Malaya"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 30001 id = 220 }
      name           = "HMAS Benbow"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 30001 id = 221 }
      name           = "HMAS Emperor of India"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 30001 id = 222 }
      name           = "HMAS Ajax"
      type           = battleship
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 278 }
      name           = "HMAS Temeraire"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 223 }
      name           = "HMAS Albatross"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 30001 id = 280 }
      name           = "HMAS Pegasus"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 30001 id = 224 }
      name           = "HMAS Carlisle"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 225 }
      name           = "HMAS Delhi"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 226 }
      name           = "HMAS Dragon"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 227 }
      name           = "HMAS Enterprise"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 228 }
      name           = "HMAS Calcutta"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30001 id = 229 }
    name     = "Battlecruiser Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 230 }
      name           = "HMAS Hood"
      type           = battlecruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 231 }
      name           = "HMAS Repulse"
      type           = battlecruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 232 }
      name           = "HMAS Australia"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 233 }
      name           = "HMAS New Zealand"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 279 }
      name           = "HMAS Royal Sovereign"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 234 }
      name           = "HMAS Leander"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 30001 id = 235 }
      name           = "HMAS Cairo"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 236 }
      name           = "HMAS Adelaide"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 237 }
      name           = "HMAS Hobart"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30001 id = 238 }
    name     = "Heavy cruiser Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 239 }
      name           = "HMAS Canberra"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 240 }
      name           = "HMAS Effingham"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 241 }
      name           = "HMAS Hawkins"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 242 }
      name           = "HMAS Suffolk"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 243 }
      name           = "HMAS Carnarvon"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 244 }
      name           = "11th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 245 }
      name           = "12th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 246 }
      name           = "13th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 247 }
      name           = "14th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30001 id = 248 }
    name     = "Reserve Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 250 }
      name           = "HMAS Melbourne"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 251 }
      name           = "HMAS Glasgow"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 252 }
      name           = "HMAS Constance"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 253 }
      name           = "HMAS Sydney"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 254 }
      name           = "HMAS Chatham"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 255 }
      name           = "HMAS Brisbane"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 281 }
      name           = "HMAS Birmingham"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 282 }
      name           = "HMAS Ceres"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 283 }
      name           = "HMAS Chatham"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 30001 id = 284 }
      name           = "HMAS Colombo"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 30001 id = 274 }
    name     = "Destroyer Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 256 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 257 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 258 }
      name           = "3rd Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 259 }
      name           = "4th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 260 }
      name           = "5th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 261 }
      name           = "6th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 262 }
      name           = "7th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 263 }
      name           = "8th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 264 }
      name           = "9th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 265 }
      name           = "10th Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30001 id = 276 }
    name     = "Transport Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 30001 id = 266 }
      name           = "TPF 1"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 267 }
      name           = "TPF 2"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 268 }
      name           = "TPF 3"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 269 }
      name           = "TPF 4"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 270 }
      name           = "TPF 5"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30001 id = 271 }
      name           = "TPF 6"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 30001 id = 272 }
    name     = "Submarine Task Force"
    location = 1697
    base     = 1697
    division = {
      id             = { type = 30001 id = 273 }
      name           = "1st Submarine Flotilla"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30001 id = 275 }
      name           = "2nd Submarine Flotilla"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "No.1 RAAF Tactical Bomber Group"
    location = 1705
    base     = 1705
    division = {
      id             = { type = 10500 id = 16 }
      name           = "No.1 RAAF Tactical Bomber Group"
      type           = tactical_bomber
      model          = 5
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 30001 id = 277 }
    name           = "HMAS Brooke"
    type           = battlecruiser
    model          = 3
    cost           = 3.1
    date           = { year = 1937 month = february day = 13 }
  }

  landdivision = { dormant = yes id = { type = 10600 id = 14 } name = "1st Mounted Rifles Division"  type = cavalry model = 8 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 15 } name = "2nd Mounted Rifles Division"  type = cavalry model = 8 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 16 } name = "3rd Mounted Rifles Division"  type = cavalry model = 8 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 17 } name = "1st Mounted Rifles Division"  type = cavalry model = 8 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 18 } name = "2nd Mounted Rifles Division"  type = cavalry model = 8 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 19 } name = "3rd Mounted Rifles Division"  type = cavalry model = 8 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 20 } name = "3rd Australian Infantry Div."  type = infantry model = 9 strength = 100 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 21 } name = "2nd Australian Cavalry Div."  type = cavalry model = 8 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 22 } name = "1st Australian Infantry Div."  type = infantry model = 9 strength = 100 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 23 } name = "2nd Australian Infantry Div."  type = infantry model = 9 strength = 100 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 24 } name = "1st Australian Cavalry Div."  type = cavalry model = 8 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 25 } name = "3rd Australian Infantry Div."  type = infantry model = 9 strength = 30 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 26 } name = "2nd Australian Cavalry Div."  type = cavalry model = 8 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 27 } name = "1st Australian Infantry Div."  type = infantry model = 9 strength = 30 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 28 } name = "2nd Australian Infantry Div."  type = infantry model = 9 strength = 30 extra = artillery brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 10600 id = 29 } name = "1st Australian Cavalry Div."  type = cavalry model = 8 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 30 } name = "1st NZ Infantry Division"  type = infantry model = 9 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 31 } name = "2nd NZ Infantry Division"  type = infantry model = 9 strength = 100 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 10600 id = 32 } name = "3rd NZ Infantry Division"  type = infantry model = 9 strength = 100 } 
  landdivision = { dormant = yes id = { type = 10600 id = 33 } name = "4th NZ Infantry Division"  type = infantry model = 9 strength = 100 extra = anti_air brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 10600 id = 34 } name = "1st NZ Infantry Division"  type = infantry model = 9 strength = 75 } 
  landdivision = { dormant = yes id = { type = 10600 id = 35 } name = "2nd NZ Infantry Division"  type = infantry model = 9 strength = 75 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 10600 id = 36 } name = "3rd NZ Infantry Division"  type = infantry model = 9 strength = 75 } 
  landdivision = { dormant = yes id = { type = 10600 id = 37 } name = "4th NZ Infantry Division"  type = infantry model = 9 strength = 75 extra = anti_air brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 10600 id = 38 } name = "1st NZ Infantry Division"  type = infantry model = 9 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 39 } name = "2nd NZ Infantry Division"  type = infantry model = 9 strength = 30 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 10600 id = 40 } name = "3rd NZ Infantry Division"  type = infantry model = 9 strength = 30 } 
  landdivision = { dormant = yes id = { type = 10600 id = 41 } name = "4th NZ Infantry Division"  type = infantry model = 9 strength = 30 extra = anti_air brigade_model = 0 } 
}
