# NOTE: This file is better visualized in Notepad++ with language 'Shell' selected

#### Colombia ####

#####################
# Country main data #
#####################

country = {
  tag                = COL
  capital            = 1991 # Santa Fe de Bogota
  manpower           = 85
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BOL value = 25 }
    relation = { tag = BRA value = 25 }
    relation = { tag = GUY value = 25 }
    relation = { tag = CHL value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = ARG value = 25 }
    relation = { tag = CAN value = 25 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 25 }
    relation = { tag = JAP value = 25 }
    relation = { tag = SPA value = 50 }
    relation = { tag = RSI value = 25 }
    relation = { tag = ENG value = 25 }
    relation = { tag = USA value = 25 }
    relation = { tag = VEN value = -50 }
    relation = { tag = ECU value = -50 }
  }
  SpyInfo                = { country = "COL" NumberOfSpies = 2 }

  nationalprovinces      = { 1990 1991 1987 1986 1994 2009 1985 1756 }
  ownedprovinces         = { 1990 1991 1987 1986 1994 2009 1985 1756 }
  controlledprovinces    = { 1990 1991 1987 1986 1994 2009 1985 1756 }

  techapps               = { 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 7600 7610 2620 2010 2860 2870 2880 2020 2290 2800 2450 21180 21190 2810 2820 2510 3010 3020 3030 3040 3110 3120 3130 3210 3220 3230 3720 3730 3736 3740 3750 3900 3810 4500 4510 4520 4530 4540 4550 4010 5700 5710 5010 5800 5080 5600 5610 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6010 8010 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 2300 2310 2900 3410 3430 3440 3420 3450 3456 3610 3630 3620 4600 7290 7300 7310 7320 4610 4620 4630 4700 4740 4750 4760 4770 4800 4810 5310 54010 54020 5316 5810 5820 5050 5620 5190 8100 8110 8120 81300 81310 81320 81330 8150 8160 8550 8560 8500 8510 8520 8200 8210 8600 8610 8060 8070 8080 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 7
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 37001 } # Alfonso López Pumarejo
  headofgovernment       = { type = 9 id = 37046 } # Eduardo Santos Montejo
  armamentminister       = { type = 9 id = 37076 } # Francisco Barberi Zamorano

  landunit = {
    id       = { type = 23000 id = 1 }
    name     = "Guardia Presidencial"
    location = 1991
    division = {
      id             = { type = 23000 id = 2 }
      name           = "1a División de Guardia"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23000 id = 3 }
    name     = "División de Caballería"
    location = 1986
    division = {
      id             = { type = 23000 id = 4 }
      name           = "1a División de Caballería"
      type           = cavalry
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23000 id = 5 }
    name     = "División de Infantería"
    location = 1990
    division = {
      id             = { type = 23000 id = 6 }
      name           = "2a División de Ejercito"
      type           = infantry
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23000 id = 7 }
    name     = "División de Infantería"
    location = 1994
    division = {
      id             = { type = 23000 id = 8 }
      name           = "1a División de Ejercito"
      type           = infantry
      model          = 5
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 23000 id = 9 }
    name     = "Armada Nacional Colombiana"
    location = 1986
    base     = 1986
    division = {
      id             = { type = 23000 id = 10 }
      name           = "ARC Flotilla 'Bolivar'"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23000 id = 11 }
      name           = "ARC Flotilla 'Antioquia'"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23000 id = 12 }
      name           = "ARC Flotilla 'Caldas'"
      type           = destroyer
      model          = 4
    }
  }
}
