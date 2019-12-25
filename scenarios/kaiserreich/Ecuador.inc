##############################
# Country definition for ECU #
##############################
province = {
  id = 2040 # Santiago de Guayaquil
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 2042 # San Francisco de Quito
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  capital            = 0 # (Embarked)
  manpower           = 0
  # Resource Reserves
  energy         = 0
  metal          = 0
  rare_materials = 0
  oil            = 0
  supplies       = 0
  money          = 0

  diplomacy = {
    relation = { tag = BOL value = 25 }
    relation = { tag = BRA value = 25 }
    relation = { tag = GUY value = 25 }
    relation = { tag = CHL value = 25 }
    relation = { tag = ARG value = 25 }
    relation = { tag = VEN value = 25 }
    relation = { tag = CAN value = 25 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 25 }
    relation = { tag = JAP value = 25 }
    relation = { tag = RSI value = 25 }
    relation = { tag = ENG value = 25 }
    relation = { tag = USA value = 25 }
    relation = { tag = COL value = -50 }
    relation = { tag = PRU value = -50 }
    relation = { tag = SPA value = -100 }
  }

  nationalprovinces      = { 2040 2042 2007 2008 2041 2033 2010 }
  ownedprovinces         = { 2040 2042 2007 2008 2041 2033 2010 }
  controlledprovinces    = { 2040 2042 2007 2008 2041 2033 2010 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 5700 5710 5010 5800 5080 5600 3010 3020 3030 3040 3050 3810 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6010 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 3110 3120 3130 3310 3320 3330 3210 3220 3230 3720 3730 4600 7290 7300 4610 4620 4630 4800 4810 4700 4750 4740 5810 5820 5050 5310 54010 5610 8010 8020 8050 8060 8070 8080 8500 8510 8550 8560 8100 8110 8120 8150 81300 81310 81320 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40033 } # José María Velasco Ibarra
  headofgovernment       = { type = 9 id = 40056 } # Carlos Arosemena Tola
  foreignminister        = { type = 9 id = 40068 } # José María Velasco Ibarra
  armamentminister       = { type = 9 id = 40099 } # Carlos M. Larrea
  ministerofsecurity    = { type = 9 id = 40202 } #Rafael Valdez Murillo

  landunit = {
    id       = { type = 29000 id = 1 }
    name     = "Guardia Presidencial"
    location = 2042
    division = {
      id             = { type = 29000 id = 2 }
      name           = "Guardia Presidencial"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29000 id = 3 }
    name     = "División de Caballería"
    location = 2008
    division = {
      id             = { type = 29000 id = 4 }
      name           = "División de Caballería"
      type           = cavalry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29000 id = 5 }
    name     = "División de Infantería"
    location = 2010
    division = {
      id             = { type = 29000 id = 6 }
      name           = "División de Infantería"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29000 id = 7 }
    name     = "División de Milicia"
    location = 2033
    division = {
      id             = { type = 29000 id = 8 }
      name           = "División de Milicia"
      type           = militia
      model          = 3
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 29000 id = 9 }
    name     = "Armada del Ecuador"
    location = 2040
    base     = 2040
    
division = { id = { type = 29000 id = 12 } name = "BAE Flotilla 'Agata'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 13 } name = "BAE Flotilla 'Puyo'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 14 } name = "BAE Flotilla 'Santiago'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 15 } name = "BAE Flotilla 'Guyanqil'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 16 } name = "BAE Flotilla 'Marques'"	type = destroyer model = 3 }
division = { id = { type = 29000 id = 17 } name = "BAE Flotilla 'Steffanell'"	type = destroyer model = 3 }
  }
  navalunit = {
id = { type = 29000 id = 18 }
    name     = "Flota de Transporte"
    location = 2040
    base     = 2040
    division = {
      id             = { type = 29000 id = 19 }
      name           = "BAE Flotilla 'Agata'"
      type           = transport
      model          = 1
    }
}
}
