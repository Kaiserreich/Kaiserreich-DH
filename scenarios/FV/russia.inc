 ##############################
# Country definition for RUS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = RUS
  flag_ext           = _nats
  capital            = 553
  extra_tc           = 50
  manpower           = 1800
  # Resource Reserves
  energy         = 8000
  metal          = 8000
  rare_materials = 4000
  oil            = 5000
  supplies       = 50000
  money          = 0
  transports     = 50
  escorts        = 10
  free = {
    ic = 25
    energy = 100
	oil = 150
	metal = 75
	rare_materials = 75
	supplies = 75
  }

  nationalprovinces      = { 534 535 536 537 538 539 540 541 542 543 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 588 589 590 593 600 602 603 604 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 665 668 669 670 674 675 676 677 678 679 682 683 691 692 693 694 695 697 698 699 700 706 639 623 624 637 641 638 640 626 620 625 627 622 632 630 631 635 636 633 634 599 592 594 596 591 601 587 598 597 614 618 616 595 612 619 611 615 617 609 530 531 532 519 696 701 703 705 702 704 628 613 608 629 607 605 610 606 }
  ownedprovinces         = { 266 534 535 536 537 538 539 540 541 542 543 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 588 589 590 593 600 602 603 604 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 665 668 669 670 674 675 676 677 678 679 682 683 691 692 693 694 695 697 698 699 700 706 }
  controlledprovinces    = { 266 534 535 536 537 538 539 540 541 542 543 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 588 589 590 593 600 602 603 604 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 665 668 669 670 674 675 676 677 678 679 682 683 691 692 693 694 695 697 698 699 700 706 }
  claimedprovinces       = { 707 708 710 709 713 712 267 269 268 264 265 272 271 273 274 270 275 266 257 256 251 255 253 247 248 258 262 263 259 260 245 244 249 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 4328 } # Boris V. Savinkov
  headofgovernment       = { type = 9 id = 4329 } # Boris V. Savinkov
  dormant_leaders        = { 500814 500815 500816 500817 500818 500819 500820 500464 500593 500597 500604 500611 500613 500615 500618 500619 500624 500625 500622 500633 500634 500645 500646 500649 500642 500660 500465 500466 }

  landunit = {
    id       = { type = 10848 id = 130 }
    name     = "Arkhangelskii Voyennii Okrug"
    location = 542
    division = {
      id             = { type = 10848 id = 131 }
      name           = "88. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      max_strength = 80
    }
    division = {
      id             = { type = 10848 id = 380 }
      name           = "76. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 381 }
      name           = "52. 'Kazanskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 382 }
      name           = "53. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 485 }
    name     = "STAVKA"
    location = 553
    division = {
      id             = { type = 10848 id = 486 }
      name           = "STAVKA"
      type           = hq
      model          = 2
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 132 }
    name     = "Moskovskii Voyennii Okrug"
    location = 572
    division = {
      id             = { type = 10848 id = 133 }
      name           = "4. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 294 }
      name           = "5. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 487 }
      name           = "6. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 7 }
    name     = "1-y Korpus (Sever)"
    location = 550
    division = {
      id             = { type = 10848 id = 8503 }
      name           = "1. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 237 }
      name           = "2. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = anti_tank
      brigade_model  = 2
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 9 }
      name           = "3. 'Krivorozhskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 2
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 500 }
    name     = "1-y Korpus (Centr)"
    location = 552
    division = {
      id             = { type = 10848 id = 301 }
      name           = "7. 'Pskovskaya' Pekhot. Div."
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 302 }
      name           = "8. 'Novgorodskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 303 }
      name           = "16. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 501 }
    name     = "1-y Korpus (Yug)"
    location = 566
    division = {
      id             = { type = 10848 id = 436 }
      name           = "95. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 442 }
      name           = "98. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 445 }
      name           = "100. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 306 }
    name     = "Peterburgskii Voyennii Okrug"
    location = 553
    division = {
      id             = { type = 10848 id = 307 }
      name           = "56. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      extra          = artillery
      brigade_model  = 5
      max_strength = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 308 }
      name           = "9. 'Novgorodskaya' Pekhot. Div."
      type           = infantry
      model          = 9
      extra          = super_heavy_artillery
      brigade_model  = 1
      max_strength = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 309 }
      name           = "10. 'Tulskaya' Pekhot. Div."
      type           = infantry
      model          = 9
      max_strength = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 310 }
      name           = "34. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      max_strength = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 311 }
      name           = "35. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 9
      max_strength = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 312 }
    name     = "3-y Korpus (Zapad)"
    location = 266
    division = {
      id             = { type = 10848 id = 313 }
      name           = "24. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 314 }
      name           = "11. 'Ryazanskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 315 }
      name           = "39. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 502 }
    name     = "3-y Korpus (Vostok)"
    location = 593
    division = {
      id             = { type = 10848 id = 319 }
      name           = "36. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 320 }
      name           = "12. 'Moskovskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 321 }
      name           = "33. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 324 }
    name     = "2-y Korpus (Sever)"
    location = 590
    division = {
      id             = { type = 10848 id = 325 }
      name           = "13. 'Pskovskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 326 }
      name           = "54. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 327 }
      name           = "14. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 328 }
      name           = "15. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 503 }
    name     = "2-y Korpus (Yug)"
    location = 600
    division = {
      id             = { type = 10848 id = 331 }
      name           = "20. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 332 }
      name           = "19. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 333 }
      name           = "17. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 334 }
      name           = "37. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 336 }
    name     = "4-y Korpus (Zapad)"
    location = 586
    division = {
      id             = { type = 10848 id = 337 }
      name           = "18. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 338 }
      name           = "80. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 339 }
      name           = "81. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 340 }
      name           = "57. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 504 }
    name     = "4-y Korpus (Vostok)"
    location = 588
    division = {
      id             = { type = 10848 id = 343 }
      name           = "20. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 344 }
      name           = "21. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 7
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 345 }
      name           = "38. 'Smolenskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 346 }
      name           = "43. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 505 }
    name     = "8-y Korpus (Sever)"
    location = 581
    division = {
      id             = { type = 10848 id = 507 }
      name           = "118. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 508 }
      name           = "120. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 509 }
      name           = "119. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 510 }
      name           = "121. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 506 }
    name     = "8-y Korpus (Yug)"
    location = 602
    division = {
      id             = { type = 10848 id = 356 }
      name           = "25. 'Pskovskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 357 }
      name           = "26. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 358 }
      name           = "28. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 359 }
      name           = "46. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 361 }
    name     = "5-y Korpus (Sever)"
    location = 535
    division = {
      id             = { type = 10848 id = 362 }
      name           = "27. 'Murmanskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      max_strength       = 50
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 363 }
      name           = "29. 'Murmanskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength       = 50
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 364 }
      name           = "44. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength       = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 580 }
    name     = "5-y Korpus (Yug)"
    location = 540
    division = {
      id             = { type = 10848 id = 368 }
      name           = "30. 'Kemskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 369 }
      name           = "75. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 370 }
      name           = "42. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 375 }
    name     = "6-y Korpus (Sever)"
    location = 538
    division = {
      id             = { type = 10848 id = 376 }
      name           = "48. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 377 }
      name           = "50. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 378 }
      name           = "51. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 581 }
    name     = "6-y Korpus (Yug)"
    location = 539
    division = {
      id             = { type = 10848 id = 372 }
      name           = "47. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 373 }
      name           = "45. 'Petrovskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 365 }
      name           = "41. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 387 }
    name     = "7-y Korpus (Zapad)"
    location = 603
    division = {
      id             = { type = 10848 id = 388 }
      name           = "86. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 389 }
      name           = "61. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 390 }
      name           = "64. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 514 }
    name     = "7-y Korpus (Center)"
    location = 646
    division = {
      id             = { type = 10848 id = 392 }
      name           = "63. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 394 }
      name           = "66. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 393 }
      name           = "84. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 515 }
    name     = "7-y Korpus (Vostok)"
    location = 648
    division = {
      id             = { type = 10848 id = 396 }
      name           = "62. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 397 }
      name           = "59. 'Saratovskaya' Pekhot. Div."
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 398 }
      name           = "92. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 399 }
    name     = "9-y Korpus"
    location = 649
    division = {
      id             = { type = 10848 id = 400 }
      name           = "60. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 401 }
      name           = "67. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 402 }
      name           = "68. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 426 }
      name           = "79. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 427 }
      name           = "83. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
    division = {
      id             = { type = 10848 id = 428 }
      name           = "90. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 85
    }
  }
  landunit = {
    id       = { type = 10848 id = 407 }
    name     = "Tsarytsinskii Voyennii Okrug"
    location = 663
    division = {
      id             = { type = 10848 id = 408 }
      name           = "70. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 409 }
      name           = "85. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 410 }
      name           = "93. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 404 }
      name           = "97. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 405 }
      name           = "96. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
    division = {
      id             = { type = 10848 id = 406 }
      name           = "69. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 511 }
    name     = "1yi Kavaleriiski korpus"
    location = 644
    division = {
      id             = { type = 10848 id = 512 }
      name           = "1.Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = artillery
      brigade_model  = 5
      max_strength       = 50
    }
    division = {
      id             = { type = 10848 id = 513 }
      name           = "2.Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength       = 50
    }
  }
  landunit = {
    id       = { type = 10848 id = 516 }
    name     = "1yi Mech. korpus"
    location = 550
    division = {
      id             = { type = 13000 id = 517 }
      name           = "1. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 518 }
      name           = "6. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 519 }
      name           = "3. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 520 }
    name     = "2-y Mech. korpus"
    location = 566
    division = {
      id             = { type = 13000 id = 521 }
      name           = "3. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 522 }
      name           = "5. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 523 }
      name           = "7. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 524 }
    name     = "3-y Mech. korpus"
    location = 266
    division = {
      id             = { type = 13000 id = 525 }
      name           = "11. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 526 }
      name           = "15. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 527 }
      name           = "10. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 528 }
    name     = "4-y Mech. korpus"
    location = 593
    division = {
      id             = { type = 13000 id = 529 }
      name           = "12. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 530 }
      name           = "18. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 531 }
      name           = "8. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 532 }
    name     = "5-y Mech. korpus"
    location = 590
    division = {
      id             = { type = 13000 id = 533 }
      name           = "15. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 534 }
      name           = "20. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 535 }
      name           = "12. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 536 }
    name     = "6-y Mech. korpus"
    location = 600
    division = {
      id             = { type = 13000 id = 537 }
      name           = "16. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 538 }
      name           = "17. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 539 }
      name           = "14. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 540 }
    name     = "7-y Mech. korpus"
    location = 588
    division = {
      id             = { type = 13000 id = 541 }
      name           = "18. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 542 }
      name           = "24. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 543 }
      name           = "15. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 544 }
    name     = "8-y Mech. korpus"
    location = 602
    division = {
      id             = { type = 13000 id = 545 }
      name           = "27. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 546 }
      name           = "28. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 547 }
      name           = "19. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 548 }
    name     = "9-y Mech. korpus"
    location = 603
    division = {
      id             = { type = 13000 id = 549 }
      name           = "29. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 550 }
      name           = "30. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 551 }
      name           = "20. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 552 }
    name     = "10-y Mech. korpus"
    location = 648
    division = {
      id             = { type = 13000 id = 553 }
      name           = "32. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 554 }
      name           = "34. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 555 }
      name           = "23. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 556 }
    name     = "11-y Mech. korpus"
    location = 644
    division = {
      id             = { type = 13000 id = 557 }
      name           = "36. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 558 }
      name           = "37. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 559 }
      name           = "25. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 560 }
    name     = "11-y Mech. korpus"
    location = 691
    division = {
      id             = { type = 13000 id = 561 }
      name           = "39. Tankovaya Diviziya"
      type           = armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 562 }
      name           = "40. Tankovaya Diviziya"
      type           = light_armor
      model          = 1
      max_strength = 75
    }
    division = {
      id             = { type = 13000 id = 563 }
      name           = "27. Motoriz. Div."
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      max_strength = 75
    }
  }
  landunit = {
    id       = { type = 10848 id = 564 }
    name     = "1-y Zakavkazskiy Korpus"
    location = 695
    division = {
      id             = { type = 10848 id = 565 }
      name           = "89. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 566 }
      name           = "91. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 567 }
      name           = "94. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 568 }
    name     = "2-y Zakavkazskiy Korpus"
    location = 698
    division = {
      id             = { type = 10848 id = 569 }
      name           = "98. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 570 }
      name           = "99. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 571 }
      name           = "102. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 572 }
    name     = "3-y Zakavkazskiy Korpus"
    location = 700
    division = {
      id             = { type = 10848 id = 573 }
      name           = "103. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 574 }
      name           = "104. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 575 }
      name           = "105. Pekhotnaya  Diviziya"
      type           = infantry
      model          = 8
      max_strength = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 17349 id = 1 }
    name     = "Don Cossack Host"
    location = 644
    division = {
      id             = { type = 17349 id = 2 }
      name           = "2ya 'Gorkovskaya'Strelk. Div."
      type           = infantry
      model          = 5
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 3 }
      name           = "1. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 4 }
      name           = "2. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 5 }
      name           = "6. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
  }
  landunit = {
    id       = { type = 17349 id = 6 }
    name     = "Kuban Cossack Host"
    location = 694
    division = {
      id             = { type = 17349 id = 7 }
      name           = "1ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 8 }
      name           = "3. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 9 }
      name           = "4. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
    division = {
      id             = { type = 17349 id = 10 }
      name           = "5. Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      max_strength = 100
    }
  }

navalunit =
{ id       = { type = 17351 id = 5114 }
name     = "Baltijskij Flot"
location = 553 # Leningrad
base     = 553
division =
{ id    = { type = 17351 id = 1204 }
name  = "Gangut"
type  = battleship
model = 2
}
division =
{ id    = { type = 17351 id = 1205 }
name  = "Poltava"
type  = battleship
model = 2
}
division =
{ id    = { type = 17351 id = 1270 }
name  = "Petropavlovsk"
type  = battleship
model = 2
}
division =
{ id    = { type = 17351 id = 1271 }
name  = "Sevastopol"
type  = battleship
model = 2
}
division =
{ id    = { type = 17351 id = 1272 }
name  = "Izmail"
type  = battlecruiser
model = 1
}
division =
{ id    = { type = 17351 id = 1207 }
name  = "1. Flotiliya Esmintsev"
type  = destroyer
model = 4
}
division =
{ id    = { type = 17351 id = 1262 }
name  = "6. Flotiliya Esmintsev"
type  = destroyer
model = 4
}
division =
{ id    = { type = 17351 id = 1208 }
name  = "3. Flotiliya Podlodok"
type  = submarine
model = 2
}
division =
{ id    = { type = 17351 id = 1209 }
name  = "4. Flotiliya Podlodok"
type  = submarine
model = 2
}
division =
{ id    = { type = 17351 id = 1210 }
name  = "5. Flotiliya Podlodok"
type  = submarine
model = 2
}
division =
{ id    = { type = 17351 id = 1211 }
name  = "6. Flotiliya Podlodok"
type  = submarine
model = 1
}
division =
{ id    = { type = 17351 id = 1212 }
name  = "7. Flotiliya Podlodok"
type  = submarine
model = 1
}
division =
{ id    = { type = 17351 id = 1213 }
name  = "8. Flotiliya Podlodok"
type  = submarine
model = 1
}
division =
{ id    = { type = 17351 id = 1214 }
name  = "Svoboda"
type  = heavy_cruiser
model = 2
}
division =
{ id    = { type = 17351 id = 1215 }
name  = "Rurik"
type  = light_cruiser
model = 2
}
division =
{ id    = { type = 17351 id = 1216 }
name  = "Admiral Nahimov"
type  = light_cruiser
model = 2
}
}

  airunit = { 
    id       = { type = 13000 id = 700 }
    name     = "Stolycnyy PVO"
    location = 553
    base     = 553
    division = {
      id             = { type = 13000 id = 701 }
      name           = "1. AD"
      type           = interceptor
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 702 }
      name           = "2. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 703 }
      name           = "4. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 704 }
      name           = "5. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 705 }
      name           = "23. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 706 }
      name           = "24. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 707 }
      name           = "26. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 708 }
      name           = "40. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 709 }
      name           = "41. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 710 }
      name           = "3. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
  }
  airunit = { 
    id       = { type = 13000 id = 711 }
    name     = "Baltiiskii PVO"
    location = 566
    base     = 566
    division = {
      id             = { type = 13000 id = 712 }
      name           = "6. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 713 }
      name           = "7. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 714 }
      name           = "8. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 715 }
      name           = "39. IAD"
      type           = interceptor
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 716 }
      name           = "12. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 717 }
      name           = "13. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 718 }
      name           = "57. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 719 }
      name           = "62. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
  }
  airunit = { 
    id       = { type = 13000 id = 720 }
    name     = "Zapadnaya Vozdushnaya Armiya"
    location = 600
    base     = 600
    division = {
      id             = { type = 13000 id = 721 }
      name           = "9. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 722 }
      name           = "10. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 723 }
      name           = "11. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 724 }
      name           = "25. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 725 }
      name           = "28. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 726 }
      name           = "31. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 727 }
      name           = "29. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 728 }
      name           = "30. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 729 }
      name           = "42. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
  }
  airunit = { 
    id       = { type = 13000 id = 740 }
    name     = "Yugo-Zapadnaya Vozdushnaya Armiya"
    location = 581
    base     = 581
    division = {
      id             = { type = 13000 id = 741 }
      name           = "14. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 742 }
      name           = "15. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 743 }
      name           = "16. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 744 }
      name           = "17. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 745 }
      name           = "19. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 746 }
      name           = "32. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 747 }
      name           = "33. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 748 }
      name           = "37. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 749 }
      name           = "34. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
  }
  airunit = { 
    id       = { type = 13000 id = 750 }
    name     = "Rostovskyy PVO"
    location = 644
    base     = 644
    division = {
      id             = { type = 13000 id = 751 }
      name           = "20. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 752 }
      name           = "21. AD"
      type           = interceptor
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 753 }
      name           = "22. AD"
      type           = interceptor
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 754 }
      name           = "27. IAD"
      type           = interceptor
      model          = 2
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 755 }
      name           = "18. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 756 }
      name           = "45. BAD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 757 }
      name           = "35. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 759 }
      name           = "38. BAD"
      type           = strategic_bomber
      model          = 0
      max_strength = 70
    }
  }
  airunit = { 
    id       = { type = 13000 id = 760 }
    name     = "Moskovskyy PVO"
    location = 572
    base     = 572
    division = {
      id             = { type = 13000 id = 761 }
      name           = "36. IAD"
      type           = interceptor
      model          = 2
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 762 }
      name           = "43. IAD"
      type           = interceptor
      model          = 2
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 763 }
      name           = "46/48. Transport Division"
      type           = transport_plane
      model          = 0
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 764 }
      name           = "49/50. Transport Division"
      type           = transport_plane
      model          = 0
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 765 }
      name           = "44. IAD"
      type           = interceptor
      model          = 2
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 766 }
      name           = "47. SzAD"
      type           = cas
      model          = 0
      max_strength       = 100
    }
    division = {
      id             = { type = 13000 id = 767 }
      name           = "55. AD"
      type           = tactical_bomber
      model          = 1
      max_strength = 70
    }
    division = {
      id             = { type = 13000 id = 768 }
      name           = "52. BAD"
      type           = tactical_bomber
      model          = 2
      max_strength = 70
    }
  }

  landdivision = { dormant = yes id = { type = 10848 id = 585 } name = "Karel'skoye Opolcheniya"  type = infantry model = 9 strength = 80 } 
}
