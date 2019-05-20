country = {
    tag = ITA

ai = "kaiserreich\Italy.ai"

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 3
        freedom = 6
        free_market = 6
        professional_army = 6
        defense_lobby = 5
        interventionism = 4
    }

#### cabinet

    headofstate = { type = 9 id = 3219 } #Pius XI
    headofgovernment = { type = 9 id = 3046 } #Conte Stefano Jacini
     foreignminister = { type = 9 id = 3222  } #Alfredo Cardinal Ottaviani
     armamentminister = { type = 9 id = 3227 } #Eugenio Cardinal Pacelli
     ministerofsecurity = { type = 9 id = 3255 } #Theodor Cardinal Innitzer
     ministerofintelligence = { type = 9 id = 3232 } #Domenico Tardini
     chiefofstaff = { type = 9 id = 3224 } #Josef von Österreich-Toskana
     chiefofarmy = { type = 9 id = 3143 } #Vittorio Ambrosio
     chiefofnavy = { type = 9 id = 3508 } #Arturo Riccardi
     chiefofair = { type = 9 id = 3161  } #Rino Corso Fougier


#### Resource Reserves

        SpyInfo  = {  country = "ITA" NumberOfSpies = 3  }

    capital = 419
manpower = 460
    # Resource Reserves
    energy    =    1000   metal    = 1000        rare_materials =    500    oil =    500    supplies =    500
    money = 50       transports = 50



    ownedprovinces =      {
        87 91 94 435 434 396 399 398 407 395 393 408 410 411 413 419 414 412  416
     }
    controlledprovinces = {
        87 91 94 435 434 396 399 398 407 395 393 408 410 411 413 419 414 412  416
      }
    nationalprovinces =   {
        87 91 94 435 434 396 399 398 407 395 393 408 410 411 413 419 414 412  416
    }
    claimedprovinces = {
                418 415 420 423 421 427 424 426 422 428 425 431 432 433 430 417
        }

diplomacy = {
relation = {   tag =        BEL    value =         20       }
relation = {   tag =      BUL    value =         40       }
relation = {   tag =      GER     value =        50       }
relation = {   tag =      AUS    value =         120       }
relation = {   tag =      BOS    value =         40       }
relation = {   tag =      CRO     value =        50       }
relation = {   tag =      CZE    value =         40       }
relation = {   tag =      GLD    value =         20       }
relation = {   tag =      HUN     value =        20       }
relation = {   tag =      ALB    value =         50       }
relation = {   tag =      GRE    value =         40       }
relation = {   tag =      POR    value =         40       }
relation = {   tag =      SPA    value =         90       }
relation = {   tag =      ENG    value =         -40       }
relation = {   tag =      FRA    value =         -120       }
relation = {   tag =      RSI     value =        -150       }
relation = {   tag =      AST    value =         30       }
relation = {   tag =      CAN    value =         50       }
relation = {   tag =      GUY    value =         20       }
relation = {   tag =      BRA    value =         50       }
relation = {   tag =      POL    value =         80       }
relation = {   tag =      SCH     value =        20     guaranteed = { day = 16 month = may year = 1935 }    }
relation = {   tag =      VIC    value =         140       }
relation = {   tag =      RUS     value =        40       }
relation = {   tag =      LBY    value =         20       }
relation = {   tag =      OMN    value =         30       }
relation = {   tag =      OTT     value =        40       }
relation = {   tag =      PER    value =         40       }
relation = {   tag =      SAU    value =         50       }
relation = {   tag =      SUD     value =        20       }
relation = {   tag =      TUN    value =         10       }
relation = {   tag =      CON    value =         40       }
relation = {   tag =      ETH    value =         -50       }
relation = { tag =    USA    value =         -30     }
relation = {   tag =      JAP    value =         -20       }

}

dormant_ministers = { 3013 3014 
					#RSI
					3425 3426 3427 3428 3429 3430 3431 3432 3433 3434 3435 3436 3437 3438 3439 3440 3441 3442 3443 3444 3445 3446 3447 3448 3449 3450 3451 3452 3453 3454 3455 3456
					3457 3458 3459 3460 3461 3462 3463 3464 3465 }

dormant_teams = { 1842 1845 1858 }

dormant_leaders = { 6488 6489 6490 6491 6492 6493 6494 6495 6496 6497 6498 6499 6500 6501 6502 6503 6504 6505 6506 6507 6508 6509 6510 6511 6512 6513 6514 6515 6516 6517 6518 6519
					6520 6521 }
 
    techapps = {

#######################
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 4020 #Interwar Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber
4700 4710 4190 #Basic Naval Bomber
4290 4250 #Basic Air Transport
4740 4750 4760 4770 4780 #Seaplanes
4300 4310 4320 4330 4340 # WW1 MR fighter
4800 4810 4820 #ww1 strategic bomber
7290 7300 7310 7320 4400 #CAS

#Armour & Artillery
2860 2870 2880 2020 2150 #Basic Armoured Car
7600 7610 2620 2010 2630 2640 2646 2650 #Early Tank
2290 2300 2310 2900 2910 2920 2930 #Artillery
2800 2450 #Static Anti-Air Artillery
2810 2820 2510 #Anti-Air Artillery

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #Early Infantry Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #CAVALRY
1160  1170 1180 1190 1200 1210 1220 1230 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply
1830 1840 1850 1860 #Engineers

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture
5800 5080 5090 #Improved Construction Engineering
5810 5820 5050 5830 5060 5070 #Manufacturing
5310 54010 54020 54030 # COMPUTERS
5316 5326 5327 # CRYPTOGRAPHY
5470 5480 #Faculty of Atomic Research - Nobel prize to Fermi
5600 5610 5620 5630 #Medicine
5560 #Exp. Rocket

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer
3110 3120 3130 3140 #Basic Light Cruiser
3210 3220 3230 3240 3250 #Improved Heavy Cruiser
3310 3320 3330 #Great War Battlecruiser
3410 3420 3430 3440 3450 3456 3460 #Early Battleship
3610 3620 3630 3640 3650 #Short Range Submarine
12100 #Improved Light carrier
3720 3730 3736 3740 3750 3900 #Torpedo & ASW 18
3810 3820 #Troopships

#Land Doctrines
14000 14010 14020 #Great War Hospital System
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6120 6560 6030 #Land Doctrines
 
# Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080 # Engagement Theories
82300 # Amphibious Warfare

82500 # Logistic Support

8500 8510 8520 8550 # Naval Interdiction

8600 8610 # Trade Interdiction Submarine

8900 8910 8920 8930 8940 # Engagement Tactics - Fleet-in-Being column

8100 8110 8120 8150 8160 8200 8210 # Naval Supremacy

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

    }

#########  OOB (...)

  landunit = {
        id = { type = 17353   id = 10727 }
        name = "2a Armata"
        location = 419
        prevprov = 419
        home = 419
        division = {
            id = { type = 23500 id = 66 }
            name = "1o Gruppo Guardie Svizzere"
            model = 4
            type = militia

            }
        division = {
            id = { type = 23500 id = 72 }
            name = "2o Gruppo Guardie Svizzere"
            model = 4
            type = militia

            }
        division = {
            id = { type = 23500 id = 75 }
            name = "2a Divisione 'San Francesco'"
            model = 7
            type = infantry

            }
}

landunit = {
        id = { type = 17353   id = 114 }
        name = "3a Armata"
        location = 414

        division = {
            id = { type = 23500 id = 21 }
            name = "3a Divisione 'San Martino'"
            model = 7
            brigade_model = 5
            type = infantry
            extra = artillery

            }
        division = {
            id = { type = 23500 id = 37 }
            name = "11a Divisione 'Livorno'"
            model = 7
            type = infantry

            }
        division = {
            id = { type = 23500 id = 62 }
            name = "28a Divisione 'Carabinieri di Piemonte'"
            model = 7
            type = infantry

        }
}

landunit = {
        id = { type = 23500 id = 1 }
        name = "1a Armata"
        location = 416
        prevprov = 416
        home = 527

        division = {
            id = { type = 23500 id = 3 }
            name = "1a Divisione 'Santa Caterina'"
            model = 7
            brigade_model = 5
            type = infantry
            extra = artillery

            }
        division = {
            id = { type = 23500 id = 5 }
            name = "4a Divisione 'Milano'"
            model = 7
            type = infantry

            }
        division = {
            id = { type = 23500 id = 6 }
            name = "9a Divisione 'Nizza'"
            model = 7
            type = infantry

            }
           }

    landunit = {
        id = { type = 17353   id = 115 }
        name = "5a Armata"
        location = 412

        division = {
            id = { type = 23500 id = 7 }
            name = "1a Divisione Alpina 'Taurinense'"
            model = 7
            type = bergsjaeger

            }
        division = {
            id = { type = 23500 id = 9 }
            name = "7a Divisione 'Perugia'"
            model = 7
            type = infantry

            }
        division = {
            id = { type = 23500 id = 10 }
            name = "12a Divisione 'Brescia'"
            model = 7
            type = infantry

            }
        }


    landunit = {
        id = { type = 23500 id = 40 }
        name = "4a Armata"
        location = 399
        prevprov = 396
        home = 399

        division = {
            id = { type = 23500 id = 42 }
            name = "17a Divisione 'Pavia'"
            model = 7
            brigade_model = 5
            type = infantry
            extra = artillery

            }
        division = {
            id = { type = 23500 id = 44 }
            name = "20a Divisione 'Roma'"
            model = 7
            brigade_model = 3
            type = infantry
            extra = armored_car

            }
        division = {
            id = { type = 23500 id = 46 }
            name = "23a Divisione 'Bologna'"
            model = 7
            brigade_model = 3
            type = infantry
            extra = armored_car

            }
        division = {
            id = { type = 23500 id = 48 }
            name = "2a Divisione Alpina 'San Maurizio'"
            model = 7
            type = bergsjaeger

            }
        division = {
            id = { type = 23500 id = 49 }
            name = "3a Divisione Alpina 'Savoia'"
            model = 7
            type = bergsjaeger

            }
        }
 
    airunit = {
        id = { type = 23500 id = 104 }
        name = "1a Squadra Aerea"
        location = 419
        home = 419
        base = 419

        division = {
            id = { type = 23500 id = 105 }
            name = "1o Stormo Caccia 'Santa Teresa'"
            model = 6
            type = interceptor

            }
        }
 


    airunit = {
        id = { type = 23500 id = 100 }
        name = "2a Squadra Aerea"
        location = 407
        home = 407
        base = 407

        division = {
            id = { type = 23500 id = 113 }
            name = "2o Stormo Caccia 'San Cristoforo'"
            model = 3
            type = multi_role

            }
        }

##################
#### Marina del'Nord (The Navy of the North)
################### Berchlingen


navalunit = {
    name = "Marina Federale Italiana"
    id = { type = 23500  id = 93  }
    location = 396
    base = 396

division = { id = { type = 23500   id = 79 } name =  "Roma" type = battleship  model = 5   }
division = { id = { type = 23500   id = 80 } name =  "Immacolata Concezione" type = battleship  model = 5   }
division = { id = { type = 23500   id = 82 } name =  "Alessandro Cialdi" type = heavy_cruiser  model = 2   }
division = { id = { type = 23500   id = 84 } name =  "Marcantonio Colonna" type = heavy_cruiser  model = 2   }
division = { id = { type = 23500   id = 83 } name =  "Fabrizio Ruffo" type = heavy_cruiser  model = 2   }
division = { id = { type = 23500   id = 85 } name =  "Cristoforo Colombo" type = heavy_cruiser  model = 3   }
division = { id = { type = 23500   id = 86 } name =  "Andrea Doria" type = heavy_cruiser  model = 3   }
division = { id = { type = 23500   id = 87 } name =  "Prospero Colonna" type = light_cruiser model = 2  }
division = { id = { type = 23500   id = 88 } name =  "Muzio Attendolo" type = light_cruiser model = 3  }
division = { id = { type = 23500   id = 89 } name =  "Erasmo da Narni" type = light_cruiser model = 3  }
division = { id = { type = 23500   id = 90 } name =  "1a Squadriglia Cacciatorpediere" type = destroyer    model = 3 }
division = { id = { type = 23500   id = 91 } name =  "2a Squadriglia Cacciatorpediere" type = destroyer    model = 3 }
division = { id = { type = 23500   id = 92 } name =  "3a Squadriglia Cacciatorpediere" type = destroyer    model = 3 }
}


navalunit = {
    name = "Comando Navale 'Alto Tirreno'"
    id = { type = 23500  id = 94 }
    location = 396
    base = 396

division = { id = { type = 23500   id = 95 } name =  "Amerigo Vespucci" type = heavy_cruiser  model = 2   }
division = { id = { type = 23500   id = 96 } name =  "4a Squadriglia Cacciatorpediere" type = destroyer    model = 3  }
division = { id = { type = 23500   id = 97 } name =  "5a Squadriglia Cacciatorpediere" type = destroyer    model = 4  }
division = { id = { type = 23500   id = 98 } name =  "6a Squadriglia Cacciatorpediere" type = destroyer    model = 4  }
division = { id = { type = 23500   id = 99 } name =  "7a Squadriglia Cacciatorpediere" type = destroyer    model = 4  }

division = {
          id = { type = 23500 id = 109 }
          name = "Squadrone Tevere"
          type = transport
          model = 1
          }
            division = {
          id = { type = 23500 id = 106 }
          name = "Squadrone Po"
          type = transport
          model = 1
          }
division = {
          id = { type = 23500 id = 107 }
          name = "Squadrone Adda"
          type = transport
          model = 1
          }
          division = {
          id = { type = 23500 id = 108 }
          name = "Squadrone Oglio"
          type = transport
          model = 1
          }
}



navalunit = {
    name = "Comando Flotta Sommergibili"
    id = { type = 23500  id = 130 }
    location = 396
    base = 396
division = { id = { type = 23500   id = 101 } name =  "1a Squadriglia Sommergibili" type = submarine model = 1  }
division = { id = { type = 23500   id = 102 } name =  "2a Squadriglia Sommergibili" type = submarine model = 1  }
division = { id = { type = 23500   id = 103 } name =  "3a Squadriglia Sommergibili" type = submarine model = 2  }


}







}  