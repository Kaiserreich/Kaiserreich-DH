##############################
# Country definition for CON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CON
  regular_id         = CON
  name               = "Freistaat Mittelafrika"
  ai                 = "KAISERREICH\SSFA_CON.ai"
  capital            = 850 # Dar es Salaam
  dissent            = 20
  extra_tc           = 80
  manpower           = 500
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 1000
  transports     = 50
  escorts        = 10
  free = {
    ic             = 20
    manpower       = 10
    energy         = 50
    metal          = 50
    rare_materials = 50
    oil            = 100
    supplies       = 100
    money          = 20
  }

  diplomacy = {
    relation = { tag = VIC value = -200 }
    relation = { tag = U49 value = -175 }
    relation = { tag = CAN value = -165 }
  }
  SpyInfo                = { country = "CON" NumberOfSpies = 3 }

  nationalprovinces      = { 1003 1002 1001 970 964 968 962 961 960 954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919 914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863 859 860 885 886 882 883 884 908 }
  ownedprovinces         = { 1003 1002 1001 970 964 968 962 961 960 954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919 914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863 859 860 885 886 908 882 883 884 }
  controlledprovinces    = { 1003 1002 1001 970 964 968 962 961 960 954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919 914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863 859 860 885 886 882 883 884 908 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1970 1380 1910 1920 1930 1940 1950 1960 1970 1980 1990 1830 1840 1850 1860 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2620 2010 2630 2640 2646 2650 2030 2040 2050 3010 3020 3030 3040 3050 3610 3620 3630 3640 3900 3720 3730 3736 3740 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4300 4310 4320 4330 4600 4610 4620 4630 4120 4130 4140 4150 4740 4750 4760 4770 4780 4790 4850 4700 4710 4190 4290 4250 4260 7290 7300 7310 7320 4400 4170 4280 7600 7610 5700 5710 5010 5020 5030 5800 5080 5090 5100 5190 5200 5810 5820 5050 5830 5060 5070 6500 6510 6530 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6550 6910 6010 6020 6040 6050 6060 6070 14000 14010 14020 14030 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 27460 27470 9010 9190 9200 9210 9220 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 8010 8020 8030 8040 8050 8060 8070 8080 1110 1370 1396 1400 1560 1570 1580 1590 2100 2220 2970 2170 3150 3130 3140 3120 3110 3160 3060 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 12050 3490 3520 3530 3510 3540 12120 12100 12110 12130 3650 3660 3070 3910 3820 3830 3810 3750 3760 4340 4040 4050 4810 4800 4220 4230 4820 4900 4920 4910 4930 5130 5140 5150 5160 5180 5326 5316 5327 5350 5360 5320 54030 54020 54010 5310 5416 5410 5417 5600 5620 5610 5630 5640 55000 5990 5980 55010 14040 6080 7100 7110 7550 7560 7570 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 2
    free_market       = 2
    professional_army = 3
    defense_lobby     = 9
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 574001 } # Hermann Göring
  headofgovernment       = { type = 9 id = 574002 } # Heinrich Schnee
  foreignminister        = { type = 9 id = 574003 } # Joachim von Ribbentrop
  armamentminister       = { type = 9 id = 574068 } # Franz Ritter von Epp
  ministerofsecurity     = { type = 9 id = 574118 } # Karl Pfeffer-Wildenbruch
  ministerofintelligence = { type = 9 id = 574006 } # Theodor von Hippel
  chiefofstaff           = { type = 9 id = 574026 } # Heinrich Kirchheim
  chiefofarmy            = { type = 9 id = 574115 } # Constantin Rembe
  chiefofnavy            = { type = 9 id = 574009 } # Max von Looff
  chiefofair             = { type = 9 id = 574117 } # Kurt Weigelt

  landunit = {
    id       = { type = 5100 id = 1 }
    name     = "Kampfgruppe Tanganyika"
    location = 850
    morale   = 80
    leader   = 574060
    division = {
      id             = { type = 5100 id = 41 }
      name           = "Komamndo der Ostafrika"
      type           = hq
      model          = 3
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 2 }
      name           = "416. Infanterie-Division"
      type           = infantry
      model          = 10
      extra1         = artillery
      extra2         = police
      brigade_model1 = 8
      brigade_model2 = 1
      strength       = 70
      max_strength   = 90
      organisation   = 80
      morale         = 80
      experience     = 80
      defaultorganisation = 95
    }
    division = {
      id             = { type = 5100 id = 3 }
      name           = "200. Infanterie-Division"
      type           = infantry
      model          = 10
      extra1         = artillery
      extra2         = police
      brigade_model1 = 8
      brigade_model2 = 1
      strength       = 70
      max_strength   = 90
      organisation   = 80
      morale         = 80
      experience     = 80
      defaultorganisation = 95
    }
    division = {
      id             = { type = 5100 id = 4 }
      name           = "1. Schutzendivision Darussalam"
      type           = d_01
      model          = 11
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
      max_strength   = 100
      organisation   = 75
      morale         = 75
      experience     = 20
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 5 }
      name           = "2. Schutzendivision Darussalam"
      type           = d_01
      model          = 11
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
      max_strength   = 100
      organisation   = 75
      morale         = 75
      experience     = 20
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 6 }
    name     = "Kampfgruppe Madagaskar"
    location = 1001
    morale   = 70
    leader   = 574081
    division = {
      id             = { type = 5100 id = 7 }
      name           = "Schutzendivision Madagaskar"
      type           = d_01
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 50
      max_strength   = 70
      organisation   = 60
      morale         = 80
      experience     = 80
      defaultorganisation = 70
    }
    division = {
      id             = { type = 5100 id = 8 }
      name           = "Madagaskar Milizdivision"
      type           = militia
      model          = 5
      extra          = none
      brigade_model  = 0
      strength       = 70
      max_strength   = 80
      organisation   = 70
      morale         = 80
      experience     = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 16 }
    name     = "Kampfgruppe Sudwestafrika"
    location = 884
    morale   = 80
    leader   = 574055
    division = {
      id             = { type = 5100 id = 40 }
      name           = "Kommando der Sudwestafrika"
      type           = hq
      model          = 3
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 70
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 9 }
      name           = "1. Schutzendivision Windhoek"
      type           = d_01
      model          = 10
      extra          = artillery
      strength       = 90
      max_strength   = 90
      organisation   = 70
      morale         = 70
      experience     = 20
      defaultorganisation = 90
    }
    division = {
      id             = { type = 5100 id = 10 }
      name           = "1. Kavallerie-Division"
      type           = cavalry
      model          = 11
      extra          = police
      brigade_model  = 1
      strength       = 70
      max_strength   = 90
      organisation   = 60
      morale         = 70
      defaultorganisation = 90
    }
    division = {
      id             = { type = 5100 id = 11 }
      name           = "12. Panzer-Division"
      type           = light_armor
      model          = 1
      extra          = light_armor_brigade
      brigade_model  = 5
      strength       = 40
      organisation   = 80
      morale         = 70
      experience     = 80
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 5100 id = 13 }
    name     = "Landswehr Luderitz"
    location = 883
    morale   = 80
    leader   = 574008
    division = {
      id             = { type = 5100 id = 14 }
      name           = "3. Landesschützendivision "
      type           = d_01
      model          = 6
      extra          = none
      strength       = 80
      max_strength   = 80
      organisation   = 70
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 15 }
      name           = "4. Landesschützendivision "
      type           = d_01
      model          = 6
      extra          = none
      strength       = 80
      max_strength   = 80
      organisation   = 70
      morale         = 60
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 27 }
    name     = "Kampfgruppe Nyasaland"
    location = 859
    morale   = 70
    leader   = 574398
    division = {
      id             = { type = 5100 id = 12 }
      name           = "Landesschützendivision Nyasaland"
      type           = d_01
      model          = 10
      strength       = 50
      max_strength   = 90
      organisation   = 60
      morale         = 60
      experience     = 90
      defaultorganisation = 90
    }
    division = {
      id             = { type = 5100 id = 17 }
      name           = "Landesschützendivision Zambia"
      type           = d_01
      model          = 10
      strength       = 50
      max_strength   = 90
      organisation   = 60
      morale         = 60
      experience     = 90
      defaultorganisation = 90
    }
    division = {
      id             = { type = 5100 id = 18 }
      name           = "Nordrhodesien Miliz"
      type           = militia
      model          = 5
      strength       = 60
      max_strength   = 70
      organisation   = 60
      morale         = 50
      experience     = 20
      defaultorganisation = 70
    }
  }
  landunit = {
    id       = { type = 5100 id = 19 }
    name     = "Kampfgruppe Kikuyuland-Buganda"
    location = 841
    morale   = 80
    leader   = 574010
    division = {
      id             = { type = 5100 id = 20 }
      name           = "Spezialeinheitdivision Ostafrika"
      type           = paratrooper
      model          = 1
      extra          = engineer
      brigade_model  = 4
      strength       = 90
      max_strength   = 95
      organisation   = 90
      morale         = 90
      experience     = 80
      defaultorganisation = 95
    }
    division = {
      id             = { type = 5100 id = 21 }
      name           = "Buganda Miliz"
      type           = militia
      model          = 5
      strength       = 60
      max_strength   = 70
      organisation   = 60
      morale         = 70
      experience     = 20
      defaultorganisation = 70
    }
    division = {
      id             = { type = 5100 id = 22 }
      name           = "36. Infanterie-Division"
      type           = infantry
      model          = 10
      extra1         = artillery
      extra2         = police
      brigade_model1 = 9
      brigade_model2 = 1
      strength       = 70
      max_strength   = 90
      organisation   = 70
      morale         = 70
      experience     = 20
      defaultorganisation = 90
    }
  }
  landunit = {
    id       = { type = 5100 id = 23 }
    name     = "Kampfgruppe Leopoldville"
    location = 899
    morale   = 70
    leader   = 574388
    division = {
      id             = { type = 5100 id = 24 }
      name           = "19. Infanterie-Division"
      type           = infantry
      model          = 9
      extra1         = artillery
      extra2         = armored_car
      brigade_model1 = 9
      brigade_model2 = 3
      strength       = 70
      max_strength   = 90
      organisation   = 70
      morale         = 70
      experience     = 20
      defaultorganisation = 90
    }
    division = {
      id             = { type = 5100 id = 25 }
      name           = "Force Publique"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 1
      strength       = 60
      max_strength   = 80
      organisation   = 50
      morale         = 40
      experience     = 20
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 26 }
      name           = "5. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = police
      brigade_model  = 1
      strength       = 70
      max_strength   = 90
      organisation   = 70
      morale         = 70
      experience     = 20
      defaultorganisation = 90
    }
  }
  landunit = {
    id       = { type = 5100 id = 28 }
    name     = "Kampfgruppe Kamerun"
    location = 909
    morale   = 70
    leader   = 574078
    division = {
      id             = { type = 5100 id = 29 }
      name           = "Kamerun Miliz"
      type           = militia
      model          = 5
      strength       = 40
      max_strength   = 65
      organisation   = 50
      morale         = 60
      defaultorganisation = 70
    }
    division = {
      id             = { type = 5100 id = 30 }
      name           = "6. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = rocket_artillery
      brigade_model  = 10
      strength       = 65
      max_strength   = 80
      organisation   = 65
      morale         = 70
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 31 }
    name     = "Schutzgruppe Nordnigeria"
    location = 937
    morale   = 80
    leader   = 574003
    division = {
      id             = { type = 5100 id = 32 }
      name           = "7. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 33 }
      name           = "8. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = armored_car
      brigade_model  = 7
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 34 }
      name           = "2. Kavallerie-Division"
      type           = cavalry
      model          = 11
      extra          = armored_car
      brigade_model  = 4
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 70
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 35 }
    name     = "Schutzgruppe Südnigeria"
    location = 930
    morale   = 80
    leader   = 574390
    division = {
      id             = { type = 5100 id = 36 }
      name           = "Kommando der Westafrika"
      type           = hq
      model          = 3
      extra          = none
      brigade_model  = 0
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 37 }
      name           = "9. Infanterie-Division"
      type           = infantry
      model          = 11
      extra1         = anti_tank
      extra2         = artillery
      brigade_model1 = 5
      brigade_model2 = 6
      strength       = 75
      max_strength   = 85
      organisation   = 75
      morale         = 80
      defaultorganisation = 85
    }
    division = {
      id             = { type = 5100 id = 38 }
      name           = "3. Kavallerie-Division"
      type           = cavalry
      model          = 11
      extra          = armored_car
      brigade_model  = 4
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 70
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 39 }
      name           = "8. Panzer-Division"
      type           = armor
      model          = 1
      extra          = artillery
      brigade_model  = 6
      strength       = 55
      max_strength   = 80
      organisation   = 70
      morale         = 80
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 61 }
    name     = "Lusaka Schutztruppen"
    location = 863
    morale   = 80
    leader   = 574039
    division = {
      id             = { type = 5100 id = 62 }
      name           = "9. Landesschützendivision "
      type           = d_01
      model          = 10
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 63 }
      name           = "10. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = none
      brigade_model  = 0
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 70 }
      name           = "19. Landesschützendivision "
      type           = d_01
      model          = 10
      extra          = none
      brigade_model  = 0
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 64 }
    name     = "Kampfgruppe Togoland"
    location = 950
    morale   = 60
    leader   = 574079
    division = {
      id             = { type = 5100 id = 65 }
      name           = "11. Landesschützendivision "
      type           = d_01
      model          = 11
      extra          = police
      brigade_model  = 1
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 66 }
      name           = "Ashanti Miliz"
      type           = militia
      model          = 5
      strength       = 60
      max_strength   = 60
      organisation   = 60
      morale         = 60
      defaultorganisation = 60
    }
    division = {
      id             = { type = 5100 id = 71 }
      name           = "Togoland Miliz"
      type           = militia
      model          = 5
      strength       = 60
      max_strength   = 60
      organisation   = 60
      morale         = 60
      defaultorganisation = 60
    }
    dig_in   = 60.000
  }
  landunit = {
    id       = { type = 5100 id = 67 }
    name     = "Schutzgruppe Goldküste"
    location = 956
    morale   = 80
    division = {
      id             = { type = 5100 id = 68 }
      name           = "36. Infanterie-Division (mot)"
      type           = motorized
      model          = 2
      extra          = artillery
      brigade_model  = 8
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 69 }
      name           = "12. Landesschützendivision "
      type           = d_01
      model          = 11
      extra          = none
      strength       = 80
      max_strength   = 80
      organisation   = 80
      morale         = 80
      defaultorganisation = 80
    }
    dig_in   = 60.000
  }
  landunit = {
    id       = { type = 5100 id = 42 }
    name     = "Schutzgruppe Südwest"
    location = 886
    morale   = 80
    leader   = 574399
    division = {
      id             = { type = 5100 id = 43 }
      name           = "51. Infanterie-Division"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 70
      max_strength   = 80
      organisation   = 70
      morale         = 70
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 44 }
      name           = "13. Landesschützendivision "
      type           = d_01
      model          = 10
      strength       = 60
      max_strength   = 80
      organisation   = 70
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 56 }
      name           = "18. Landesschützendivision "
      type           = d_01
      model          = 10
      strength       = 60
      max_strength   = 80
      organisation   = 70
      morale         = 60
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 48 }
    name     = "Landswehr Südwest"
    location = 885
    morale   = 80
    leader   = 574399
    division = {
      id             = { type = 5100 id = 49 }
      name           = "47. Infanterie-Division"
      type           = cavalry
      model          = 11
      extra          = police
      brigade_model  = 1
      strength       = 70
      max_strength   = 80
      organisation   = 70
      morale         = 70
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 50 }
      name           = "15. Landesschützendivision "
      type           = d_01
      model          = 10
      strength       = 60
      max_strength   = 80
      organisation   = 70
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 55 }
      name           = "10. Kavallerie-Division"
      type           = cavalry
      model          = 11
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 45 }
    name     = "Landswehr Äquatorialafrika"
    location = 940
    morale   = 80
    leader   = 574016
    division = {
      id             = { type = 5100 id = 46 }
      name           = "8. Kavallerie-Division"
      type           = cavalry
      model          = 11
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 47 }
      name           = "16. Landesschützendivision "
      type           = d_01
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
  }
  landunit = {
    id       = { type = 5100 id = 51 }
    name     = "Landswehr Kamerun"
    location = 911
    morale   = 80
    leader   = 574426
    division = {
      id             = { type = 5100 id = 52 }
      name           = "59. Infanterie-Division"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 65
      max_strength   = 80
      organisation   = 65
      morale         = 65
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 53 }
      name           = "17. Landesschützendivision "
      type           = d_01
      model          = 10
      strength       = 70
      max_strength   = 80
      organisation   = 70
      morale         = 70
      defaultorganisation = 80
    }
    division = {
      id             = { type = 5100 id = 54 }
      name           = "9. Kavallerie-Division"
      type           = cavalry
      model          = 11
      strength       = 60
      max_strength   = 80
      organisation   = 60
      morale         = 60
      defaultorganisation = 80
    }
  }
}
