##############################
# Country definition for UKR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = UKR
  control            = GER
  capital            = 617
  extra_tc           = 50
  manpower           = 500
  # Resource Reserves
  energy         = 3500
  metal          = 5000
  rare_materials = 3000
  oil            = 1500
  supplies       = 20000
  money          = 0
  transports     = 50
  escorts        = 10
  free = {
	oil 		   = 5
  } 

  nationalprovinces      = { 244 245 249 587 601 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 }
  ownedprovinces         = { 244 245 249 587 601 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 }
  controlledprovinces    = { 244 245 249 587 601 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 }
  claimedprovinces       = { 644 691 694 695 693 692 645 697 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 2
    freedom           = 2
    free_market       = 6
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 518097 } # E.K.S. Daniil I Skoropadsky
  headofgovernment       = { type = 9 id = 518014 } # Vyacheslav Prokopovich
  dormant_leaders        = { 500814 500815 500816 500817 500818 500819 500820 500464 500593 500597 500604 500611 500613 500615 500618 500619 500624 500625 500622 500633 500634 500645 500646 500649 500642 500660 500465 500466 }

  landunit = {
    id       = { type = 17344 id = 1 }
    name     = "1yy Ukrayins'kyy Korpus"
    location = 617
    division = {
      id             = { type = 17344 id = 2 }
      name           = "1. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 3 }
      name           = "5. 'Katerynoslav.' Strilk. Dyv"
      type           = infantry
      model          = 8
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 4 }
      name           = "2. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 1
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 47 }
      name           = "28. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 1
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 48 }
      name           = "29. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 50 }
      name           = "30. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 51 }
      name           = "31. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 52 }
      name           = "32. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 53 }
      name           = "2. Kavaleriys'ka Dyviziya"
      type           = cavalry
      model          = 8
      max_strength       = 80
    }
    division = {
      id             = { type = 17344 id = 54 }
      name           = "3. Kavaleriys'ka Dyviziya"
      type           = cavalry
      model          = 8
      max_strength       = 80
    }
  }
  landunit = {
    id       = { type = 17344 id = 5 }
    name     = "2yy Ukrayins'kyy Korpus"
    location = 635
    division = {
      id             = { type = 17344 id = 6 }
      name           = "3. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 7 }
      name           = "6. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 8 }
      name           = "7. Strilkova Dyviziya"
      type           = infantry
      model          = 8
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 9 }
      name           = "1. Kavaleriys'ka Dyviziya"
      type           = cavalry
      model          = 8
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 17344 id = 10 }
    name     = "3iy Ukrayins'kyy Korpus"
    location = 636
    division = {
      id             = { type = 17344 id = 11 }
      name           = "4. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 12 }
      name           = "8. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 13 }
      name           = "9. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 14 }
      name           = "1. Motoryzovana Dyviziya"
      type           = motorized
      model          = 0
      extra          = anti_tank
      brigade_model  = 1
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 17344 id = 15 }
    name     = "4yy Ukrayins'kyy Korpus"
    location = 601
    division = {
      id             = { type = 17344 id = 16 }
      name           = "10. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 17 }
      name           = "13. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 17344 id = 18 }
      name           = "11. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 17344 id = 46 }
      name           = "27. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
  }
  landunit = {
    id       = { type = 17344 id = 19 }
    name     = "5yy Ukrayins'kyy Korpus"
    location = 641
    division = {
      id             = { type = 17344 id = 20 }
      name           = "12. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 17344 id = 21 }
      name           = "14. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 17344 id = 42 }
      name           = "23. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 45 }
      name           = "26. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
  }
  landunit = {
    id       = { type = 17344 id = 22 }
    name     = "6yy Ukrayins'kyy Korpus"
    location = 633
    division = {
      id             = { type = 17344 id = 23 }
      name           = "15. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 24 }
      name           = "20. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 25 }
      name           = "16. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 17344 id = 44 }
      name           = "25. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
  }
  landunit = {
    id       = { type = 20600 id = 25 }
    name     = "7yy Ukrayins'kyy Korpus"
    location = 606
    division = {
      id             = { type = 20600 id = 26 }
      name           = "17. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 27 }
      name           = "18. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 28 }
      name           = "19. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 43 }
      name           = "24. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
  }
  landunit = {
    id       = { type = 20600 id = 29 }
    name     = "8yy Ukrayins'kyy Korpus"
    location = 631
    division = {
      id             = { type = 20600 id = 30 }
      name           = "19. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 31 }
      name           = "25. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 32 }
      name           = "21. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 65
    }
    division = {
      id             = { type = 20600 id = 80 }
      name           = "27. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 5
      max_strength       = 65
    }
  }
  landunit = {
    id       = { type = 20600 id = 34 }
    name     = "Ukrayins'kyy Tankovyy Korpus"
    location = 617
    division = {
      id             = { type = 20600 id = 35 }
      name           = "1. Tankova Dyviziya"
      type           = armor
      model          = 9
      max_strength       = 35
    }
    division = {
      id             = { type = 20600 id = 36 }
      name           = "2. Tankova Dyviziya"
      type           = armor
      model          = 9
      max_strength       = 35
    }
  }
  landunit = {
    id       = { type = 20600 id = 33 }
    name     = "1yy Oboronnyy Korpus"
    location = 587
    division = {
      id             = { type = 20600 id = 37 }
      name           = "51. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 38 }
      name           = "52. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 39 }
      name           = "1. Garnizonna Dyviziya"
      type           = garrison
      model          = 5
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 20600 id = 40 }
    name     = "2yy Oboronnyy Korpus"
    location = 605
    division = {
      id             = { type = 20600 id = 41 }
      name           = "54. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 42 }
      name           = "55. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 81 }
      name           = "2. Garnizonna Dyviziya"
      type           = garrison
      model          = 5
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 20600 id = 44 }
    name     = "3yy Oboronnyy Korpus"
    location = 634
    division = {
      id             = { type = 20600 id = 45 }
      name           = "57. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 46 }
      name           = "58. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 47 }
      name           = "3. Garnizonna Dyviziya"
      type           = garrison
      model          = 5
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 20600 id = 48 }
    name     = "4yy Oboronnyy Korpus"
    location = 640
    division = {
      id             = { type = 20600 id = 49 }
      name           = "60. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 32
    }
    division = {
      id             = { type = 20600 id = 50 }
      name           = "61. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 32
    }
    division = {
      id             = { type = 20600 id = 51 }
      name           = "4. Garnizonna Dyviziya"
      type           = garrison
      model          = 5
      max_strength       = 32
    }
  }
  landunit = {
    id       = { type = 20600 id = 52 }
    name     = "5yy Oboronnyy Korpus"
    location = 607
    division = {
      id             = { type = 20600 id = 53 }
      name           = "63. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 54 }
      name           = "64. Strilkova Dyviziya"
      type           = infantry
      model          = 10
      max_strength       = 50
    }
    division = {
      id             = { type = 20600 id = 55 }
      name           = "5. Garnizonna Dyviziya"
      type           = garrison
      model          = 5
      max_strength       = 50
    }
  }

  landdivision = { dormant = yes id = { type = 17344 id = 27 } name = "34. Strilkova Dyviziya"  type = infantry model = 9 strength = 60 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 17344 id = 28 } name = "35. Strilkova Dyviziya"  type = infantry model = 9 strength = 60 } 
  landdivision = { dormant = yes id = { type = 17344 id = 29 } name = "38. Strilkova Dyviziya"  type = infantry model = 9 strength = 60 } 
  landdivision = { dormant = yes id = { type = 17344 id = 31 } name = "40. Strilkova Dyviziya"  type = infantry model = 9 strength = 60 } 
  landdivision = { dormant = yes id = { type = 17344 id = 32 } name = "42. Strilkova Dyviziya"  type = infantry model = 9 strength = 60 } 
  landdivision = { dormant = yes id = { type = 17344 id = 34 } name = "3. Kavaleriys'ka Dyviziya"  type = infantry model = 9 strength = 50 } 
  landdivision = { dormant = yes id = { type = 17344 id = 36 } name = "43. Strilkova Dyviziya"  type = infantry model = 9 strength = 65 } 
  landdivision = { dormant = yes id = { type = 17344 id = 37 } name = "44. Strilkova Dyviziya"  type = infantry model = 9 strength = 65 } 
  landdivision = { dormant = yes id = { type = 17344 id = 39 } name = "45. Strilkova Dyviziya"  type = infantry model = 9 strength = 65 } 
  landdivision = { dormant = yes id = { type = 17344 id = 40 } name = "4. Kavaleriys'ka Dyviziya"  type = infantry model = 9 strength = 65 } 
  
  airunit =
  { id       = { type = 17344 id = 60 }
    name     = "Ukrayins'ki povitryani viys'ka"
    location = 617
    base     = 617
    division =
    { id       = { type = 17344 id = 61 }
      name     = "1. IAD"
      strength = 100
      type     = interceptor
      model    = 7
    }
    division =
    { id       = { type = 17344 id = 62 }
      name     = "2. IAD"
      strength = 100
      type     = multi_role
      model    = 4
    }
    division =
    { id       = { type = 17344 id = 63 }
      name     = "3. IAD"
      strength = 100
      type     = multi_role
      model    = 4
    }
  }  
}
