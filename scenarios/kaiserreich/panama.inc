##############################
# Country definition for PAN #
##############################
province = {
  id = 2078 # Ciudad de Panama
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  capital            = 2078 # Ciudad de Panama
  manpower           = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  free = { ic = 2 }

  diplomacy = {
    relation = { tag = USA value = 175 }
  }
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }

  nationalprovinces      = { 889 2078 2077 }
  ownedprovinces         = { 2078 2077 }
  controlledprovinces    = { 2078 2077 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5600 5700 5710 5010 1830 1840 5800 5080 5090 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 1850 2300 2310 2900 2910 2870 2800 2450 2810 3610 3620 3010 3020 3030 3040 3110 3120 3720 3730 3736 4600 7290 7300 4610 4800 4540 4550 4740 4750 4760 5810 5820 5050 5310 54010 5316 14000 14010 8100 8110 8010 8020 8040 8050 8060 8070 8080 81300 81310 81320 8600 82500 8610 8150 8210 8200 }
  deactivate             = { 6010 6210 6570 6560 6390 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 5
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95001 } # Harmodio Arías de la Madrid
  headofgovernment       = { type = 9 id = 95002 } # Harmodio Arías de la Madrid
  foreignminister        = { type = 9 id = 95041 } # Raul de Roux y García
  armamentminister       = { type = 9 id = 95053 } # José Pezet Arosemena
  ministerofsecurity     = { type = 9 id = 95114 } # Samuel Luis Aranga
  ministerofintelligence = { type = 9 id = 95006 } # Ezequeil Fernandez Jaen

  landunit = {
    id       = { type = 14600 id = 50 }
    name     = "Ejercito de Panama"
    location = 2078
    division = {
      id             = { type = 14600 id = 5000 }
      name           = "1a Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 14600 id = 5001 }
      name           = "2a Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
}
