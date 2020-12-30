##############################
# Country definition for VEN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  ai                 = "kaiserreich\Venezuela.ai"
  capital            = 1993 # Caracas
  manpower           = 35
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BOL value = 25 }
    relation = { tag = BRA value = 25 }
    relation = { tag = CHL value = 25 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = ARG value = 25 }
    relation = { tag = JAP value = 25 }
    relation = { tag = SPA value = 50 }
    relation = { tag = USA value = 50 }
    relation = { tag = COL value = -50 }
    relation = { tag = CAN value = -25 }
    relation = { tag = HOL value = -50 }
    relation = { tag = FRA value = -25 }
    relation = { tag = GER value = -25 }
    relation = { tag = GUY value = -75 }
    relation = { tag = RSI value = -25 }
    relation = { tag = ENG value = -25 }
  }
  SpyInfo                = { country = "VEN" NumberOfSpies = 2 }

  nationalprovinces      = { 1988 1989 1995 1996 1992 1993 1998 }
  ownedprovinces         = { 1988 1989 1995 1996 1992 1993 }
  controlledprovinces    = { 1988 1989 1995 1996 1992 1993 }

  techapps               = { 4500 4510 4520 4530 4540 4550 5600 5610 5620 5810 5820 5050 5800 5080 5190 5700 5710 5010 5020 2800 2450 21180 21190 2860 2870 2880 2020 2810 2820 2510 2290 2300 2310 7600 7610 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 2900 2910 2920 3110 3120 3130 3010 3020 3030 3040 3050 3410 3420 3430 3440 3450 3456 3610 3620 3630 3210 3220 3230 3240 4600 7290 7300 7310 7320 4610 4620 4630 4300 4800 4810 4700 4740 4750 4760 4770 4010 5310 54010 54020 5316 8010 8020 8050 8060 8070 8080 8040 8600 8610 8550 8560 8500 8510 8520 82500 8100 8110 8120 8150 8200 8210 8900 8910 8920 8930 }
  deactivate             = { 6010 6210 6570 6560 6390 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 2
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38017 } # R�mulo Betancourt
  headofgovernment       = { type = 9 id = 38097 } # Lisandro Alverado
  foreignminister        = { type = 9 id = 38104 } # Jose Antonio Ramos Sucre
  armamentminister       = { type = 9 id = 38131 } # Maria Cruz Salmeron Acosta
  ministerofsecurity     = { type = 9 id = 38123 } # Issac Jose Pardo Soublette
  ministerofintelligence = { type = 9 id = 38116 } # Fernando Paz Castillo
  chiefofstaff           = { type = 9 id = 38007 } # Isa�as Medina Angarita
  chiefofarmy            = { type = 9 id = 38008 } # Isa�as Medina Angarita
  chiefofnavy            = { type = 9 id = 38086 } # Pedro Beauperthuy Urich
  chiefofair             = { type = 9 id = 38091 } # Tomas Contreras Villalobos

  landunit = {
    id       = { type = 15800 id = 1 }
    name     = "Guardia Presidencial"
    location = 1993
    division = {
      id             = { type = 15800 id = 2 }
      name           = "Guardia Presidencial"
      type           = garrison
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15800 id = 3 }
    name     = "Divisi贸n de Infanter铆a"
    location = 1993
    division = {
      id             = { type = 15800 id = 4 }
      name           = "Divisi贸n de Infanter铆a"
      type           = infantry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 15 }
      name           = "Divisi贸n de Infanter铆a"
      type           = infantry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15800 id = 5 }
    name     = "Divisi贸n de Caballer铆a"
    location = 1988
    division = {
      id             = { type = 15800 id = 6 }
      name           = "Divisi贸n de Caballer铆a"
      type           = cavalry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 15800 id = 7 }
    name     = "Divisi贸n de Infanter铆a"
    location = 1988
    division = {
      id             = { type = 15800 id = 8 }
      name           = "Divisi贸n de Infanter铆a"
      type           = infantry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 14 }
      name           = "Divisi贸n de Infanter铆a"
      type           = infantry
      model          = 8
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 15800 id = 9 }
    name     = "Armada Nacional Colombiana"
    location = 1988
    base     = 1988
    division = {
      id             = { type = 15800 id = 10 }
      name           = "ARBV Flotilla 'Caribe'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 12 }
      name           = "ARBV Flotilla 'Joaqin Crespo'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 11 }
      name           = "ARBV Flotilla 'America'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 17 }
      name           = "ARBV Flotilla 'Defenser'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 18 }
      name           = "ARBV Flotilla 'Ezequiel Zamora'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 19 }
      name           = "ARBV Flotilla 'General Ribas'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 20 }
      name           = "ARBV Flotilla 'Tamanaco'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 21 }
      name           = "ARBV Flotilla 'Guaicapuro'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 22 }
      name           = "ARBV Flotilla 'Andres Bello'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 23 }
      name           = "ARBV Flotilla 'Jose Angel Lamas'"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 15800 id = 13 }
      name           = "AEBV Simon Bolivar"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 15800 id = 16 }
      name           = "AEBV Essequibo"
      type           = heavy_cruiser
      model          = 4
    }
  }
}
