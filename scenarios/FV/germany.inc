##############################
# Country definition for GER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GER
  capital            = 163 # Berlin
  extra_tc           = 50
  manpower           = 1000
  # Resource Reserves
  energy         = 7500
  metal          = 7500
  rare_materials = 5000
  oil            = 10000
  supplies       = 45000
  transports     = 50
  escorts        = 10
  free = {
    ic             = 60
	oil 		   = 10	
  }

  nationalprovinces      = { 155 156 157 158 159 160 161 162 163 164 165 166 167 168 172 181 182 183 184 185 221 222 224 225 226 261 }
  ownedprovinces         = { 155 156 157 158 159 160 161 162 163 164 165 166 167 168 172 181 182 183 184 185 221 222 224 225 226 261 }
  controlledprovinces    = { 155 156 157 158 159 160 161 162 163 164 165 166 167 168 172 181 182 183 184 185 221 222 224 225 226 261 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1560 1570 1580 1590 1670 1396 1400 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2100 2220 2400 2410 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 7290 7300 7310 7320 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5320 5810 5820 5050 5800 5080 5190 5600 5610 5620 5560 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 14000 14010 14020 14030 6010 6020 6040 6050 6060 6070 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8900 8910 8920 8930 8940 8950 8600 8610 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9140 9145 9090 9100 9110 9120 9130 9050 9060 9070 9080 9190 9200 9210 9220 9230 9240 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 7
    defense_lobby     = 10
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 37 } # S.K.M. Wilhelm III von Preussen
  headofgovernment       = { type = 9 id = 47 } # Franz von Papen

  landunit = {
    id       = { type = 14502 id = 1 }
    name     = "Oberste Heeres Leitung"
    location = 163
    division = {
      id             = { type = 14502 id = 2 }
      name           = "Oberste Heeres Leitung"
      type           = hq
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14502 id = 3 }
    name     = "I. Panzerkampfwagen Kommando"
    location = 163
    division = {
      id             = { type = 14502 id = 4 }
      name           = "1. Panzer Division"
      type           = armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 5 }
      name           = "1. Motorisierte-Infanterie Division"
      type           = motorized
      model          = 1
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 6 }
      name           = "2. Motorisierte-Infanterie Division"
      type           = motorized
      model          = 1
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14502 id = 7 }
    name     = "III. Armeekorps"
    location = 163
    division = {
      id             = { type = 14502 id = 8 }
      name           = "5. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 75 }
    name     = "II. Kцniglich Sдchsisches Armeekorps"
    location = 172
    division = {
      id             = { type = 14502 id = 76 }
      name           = "3. Kцniglich Sдchsische Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 77 }
      name           = "4. Kцniglich Sдchsische Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 19 }
    name     = "I. Armeekorps"
    location = 184
    division = {
      id             = { type = 14502 id = 20 }
      name           = "1. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 24 }
      name           = "2. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 141 }
      name           = "32. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 22 }
    name     = "II. Armeekorps"
    location = 158
    division = {
      id             = { type = 14502 id = 23 }
      name           = "3. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 25 }
      name           = "4. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 142 }
      name           = "33. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 33 }
    name     = "V. Armeekorps"
    location = 224
    division = {
      id             = { type = 14502 id = 34 }
      name           = "9. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 35 }
      name           = "10. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 145 }
      name           = "36. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 36 }
    name     = "VI. Armeekorps"
    location = 167
    division = {
      id             = { type = 14502 id = 37 }
      name           = "11. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 38 }
      name           = "12. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 146 }
      name           = "37. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 39 }
    name     = "I. Armeekorps"
    location = 167
    division = {
      id             = { type = 14502 id = 40 }
      name           = "11. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 50 }
    name     = "VII. Armeekorps"
    location = 225
    division = {
      id             = { type = 14502 id = 51 }
      name           = "18. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 52 }
      name           = "22. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 53 }
      name           = "25. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 54 }
    name     = "X. Armeekorps"
    location = 181
    division = {
      id             = { type = 14502 id = 55 }
      name           = "14. Infanterie-Division"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 56 }
      name           = "15. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 14502 id = 57 }
      name           = "28. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 140 }
    name     = "II. Panzerkampfwagen Kommando"
    location = 182
    division = {
      id             = { type = 14502 id = 144 }
      name           = "2. Panzer Division"
      type           = armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 151 }
      name           = "3. Panzer Division"
      type           = armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 152 }
      name           = "37. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 14502 id = 147 }
    name     = "III. Panzerkampfwagen Kommando"
    location = 221
    division = {
      id             = { type = 14502 id = 148 }
      name           = "4. Panzer Division"
      type           = armor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 149 }
      name           = "5. Motorisierte-Infanterie Division"
      type           = motorized
      model          = 1
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 14502 id = 150 }
      name           = "6. Motorisierte-Infanterie Division"
      type           = motorized
      model          = 1
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 100
    }
  }
    landdivision = {
      id             = { type = 14502 id = 200 }
      name           = "30. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 201 }
      name           = "31. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 202 }
      name           = "32. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      organisation   = 10
      experience     = 10
      defaultorganisation = 0
      dormant        = yes
    }    
	landdivision = {
      id             = { type = 14502 id = 203 }
      name           = "60. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      organisation   = 10
      experience     = 10
      defaultorganisation = 0
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 204 }
      name           = "32. Infanterie-Division (mot)"
      type           = motorized
      model          = 1
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 205 }
      name           = "5. Panzer-Division"
      type           = armor
      model          = 1
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 206 }
      name           = "36. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 207 }
      name           = "37. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 208 }
      name           = "38. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }    
	landdivision = {
      id             = { type = 14502 id = 209 }
      name           = "61. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 210 }
      name           = "38. Infanterie-Division (mot)"
      type           = motorized
      model          = 1
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 211 }
      name           = "7. Kavallerie-Division"
      type           = cavalry
      model          = 11
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 212 }
      name           = "39. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 5
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 213 }
      name           = "40. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 5
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 214 }
      name           = "41. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 5
      dormant        = yes
    }    
	landdivision = {
      id             = { type = 14502 id = 215 }
      name           = "62. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 5
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 216 }
      name           = "41. Infanterie-Division (mot)"
      type           = motorized
      model          = 1
      strength       = 90
      experience     = 5
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 217 }
      name           = "8. Panzer-Division"
      type           = armor
      model          = 1
      strength       = 90
      experience     = 5
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 218 }
      name           = "42. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 219 }
      name           = "43. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 220 }
      name           = "44. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }    
	landdivision = {
      id             = { type = 14502 id = 221 }
      name           = "45. Infanterie-Division"
      type           = infantry
      model          = 10
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 222 }
      name           = "65. Infanterie-Division (mot)"
      type           = motorized
      model          = 1
      strength       = 90
      experience     = 10
      dormant        = yes
    }
    landdivision = {
      id             = { type = 14502 id = 223 }
      name           = "9. Kavallerie-Division"
      type           = cavalry
      model          = 11
      strength       = 90
      experience     = 10
      dormant        = yes
    }
	
navalunit = {
name = "Kьstenschutzverband Ostsee"
id = { type = 14500 id = 219 }
location = 162 #### [Rostock]
base = 162
division = { id = { type = 14500 id = 220 } name =  "SMS Oldenburg" type = battleship  model = 2 }
division = { id = { type = 14500 id = 221 } name =  "SMS Thьringen" type = battleship   model = 2  }
division = { id = { type = 14500 id = 229 } name =  "SMS Regensburg" type = light_cruiser model = 2  }
division = { id = { type = 14500 id = 230 } name =  "SMS Frankfurt" type = light_cruiser model = 2  }
division = { id = { type = 14500 id = 231 } name =  "1. Zerstцrergeschwader" type = destroyer  model = 3    }
division = { id = { type = 14500 id = 232 } name =  "2. Zerstцrergeschwader" type = destroyer  model = 3    }

}
	
	
########## Luftwaffe ##############

airunit = { location = 163 id = { type = 14500 id = 151 } name = "Luftflotte II"
base = 163
division = { id = { type = 14500 id = 152 } name = "KG 2 'Holzhammer'" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 154 } name = "KG 3 'Blitz'" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 153 } name = "Sturzkampfgeschwader 51" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 155 } name = "JG 2 'Richthofen'" strength = 100 type = interceptor model = 7 }
division = { id = { type = 14500 id = 156 } name = "JG 26 'Schlageter'" strength = 100 type = interceptor model = 7 }
}


airunit = { location = 163 id = { type = 14500 id = 157 } name = "Luftflotte III"
base = 163
division = { id = { type = 14500 id = 158 } name = "KG 53 'Ludendorff'" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 159 } name = "Kampfgeschwader 25" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 160 } name = "KG 30 'Adler'" strength = 100 type = tactical_bomber model = 5 }
}

airunit = { location = 163 id = { type = 14500 id = 161 } name = "Luftflotte IV"
base = 163
division = { id = { type = 14500 id = 162 } name = "KG 1 'Hindenburg'" strength = 100 type = tactical_bomber model = 5 }
division = { id = { type = 14500 id = 163 } name = "JG 3 'Udet'" strength = 100 type = interceptor model = 7 }
}

airunit = { location = 163 id = { type = 14500 id = 164 } name = "Luftflotte V"
base = 163
division = { id = { type = 14500 id = 165 } name = "KG 4 'General Wever'" strength = 100 type = tactical_bomber model = 5 }
}


airunit = {
id = { type = 14500 id = 320 }
name = "Luftflotte VI"
location = 163
home = 163
base = 163

division = {
id = { type = 14500 id = 321 }
name = "Kampfgeschwader 26"
model = 4
brigade_model = 0
type = tactical_bomber

}
division = {
id = { type = 14500 id = 322  }
name = "Seeaufklдrungsgruppe 125"
model = 1
brigade_model = 0
type = naval_bomber

}
division = {
id = { type = 14500 id = 323  }
name = "Jagdgeschwader 7"
model = 6
brigade_model = 0
type = interceptor

}
}	
}
