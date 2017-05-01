


country = {
    tag = UKR  

	control = GER

ai = "kaiserreich\Ukraine.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 3
        freedom = 4
        free_market = 6
        professional_army = 3
        defense_lobby = 5
        interventionism = 3
    }

 	foreignminister = { type = 9 id = 518026 }
 	armamentminister = { type = 9 id = 518035 }
 	ministerofsecurity = { type = 9 id = 518045 }
 	ministerofintelligence = { type = 9 id = 518048 }
 	chiefofstaff = { type = 9 id =  518007 }
 	chiefofarmy = { type = 9 id = 518067 }
 	chiefofnavy = { type = 9 id = 518072 }        
 	chiefofair = { type = 9 id = 518077 }


#### Resource Reserves
capital = 617 

SpyInfo  = {  country = "UKR" NumberOfSpies = 3  } 

	manpower = 80
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10





    ownedprovinces =      {
618 619 620 621 626 625 622 623 624 637 638 639 640 641 630 631
      633 634 635 636 632 627 
      605 606 607 608 610 629 628 615 612 614 611 616 609 617 613 244 245 249 601 587 
	 }
    controlledprovinces = {
618 619 620 621 626 625 622 623 624 637 638 639 640 641 630 631 633 634 635 636 632  
      605 606 607 608 610 629 627 628 615 612 614 611 616 609 617 613 244 245 249 601 587 
	  }
    nationalprovinces =   {
618 619 620 621 626 625 622 623 624 637 638 639 640 641 630 631 633 634 635 636 632 627
      605 606 607 608 610 629 628 615 612 614 611 616 609 617 613 244 245 249 601 587 
	}

diplomacy = {
relation = {   tag =    BEL	value = 		80	   }  
relation = {   tag =  	BLR	 value =		120	   }  
relation = {   tag =  	BUL	value = 		100	   }  
relation = {   tag =  	GER	 value =		200	   }  
relation = {   tag =  	LAT	value = 		100	   }  
relation = {   tag =  	LIT	 value =		70	   }  
relation = {   tag =  	POL	value = 		50	   }  
relation = {   tag =  	AUS	value = 		70	   }  
relation = {   tag =  	GLD	value = 		50	   }  
relation = {   tag =  	HUN	 value =		-30	   }  
relation = {   tag =  	SPA	value = 		10	   }  
relation = {   tag =  	ENG	value = 		-50	   }  
relation = {   tag =  	FRA	value = 		-50	   }  
relation = {   tag =  	CAN	value = 		-50	   }  
relation = {   tag =  	VIC	value = 		-10	   }  
relation = {   tag =  	RUS	 value =		30	   }  
relation = {   tag =  	OTT	 value =		40	   }  
relation = {   tag =  	CON	value = 		30	   }  
relation = {   tag =  	JAP	value = 		-40	   }  
relation = {   tag =  	TRA	value = 		-80	   } 
}

dormant_ministers = { 518083 518084 518085 518086 518087 518088 518089 }
	
	techapps = {
#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #CAS 

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
7600 7610 2620 2010 #1918 tanks

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 1090 #Infantry Up to 1926 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1924
1830 1840 1850 #Engineers
1396 #Motorised Inf

#Naval
3010 3020 3030 3040 3050 #Up to 1923 DD
3110 3120 3130 3140 #Up to IW CL
3210 3220 3230 3240 #Up to IW CA
3410 3420 3430 3440 3450 3456 #Up to IW BB
3610 3620 3630 3640 #Up to IW SS
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes

#Industrial
5700 5710 5010 #Modern Agriculture
5310 54010 54020 54030 5316 5326 5327 #Computers & cryptografi
5800 5080 #Improved Construction Engineering 
5600 5610 #Medicine
5190 # Basic Oil Refining
5470 # Nukes faculty

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 # Superior Firepower
14000 14010 #Great War Hospital System 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval Doctrines (all ww1 doctrines learned by Germany)
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
8100 8110 8120 # Naval Supremacy
8150 8160 #Commerce Defense
8200 8210 #ASW Patrols
8500 8510 8520 #Naval Interdiction
8550 8560 #Raider Patrols & Commerce Raiders
8600 8610 #Sub Doctrines
81300 81310 81320 81330 81340 #Indirect Approach
82300 #Basic Amph warfare
82500 #Fuel Oil Logistics
}

#########  OOB (...)

landunit =
  { id       = { type = 17344 id = 1 }
    name     = "1yi Ukrayinskyi Korpus"
    location = 617
    division =
    { id       = { type = 17344 id = 2 }
      name     = "1. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 8
    }

    division =
    { id       = { type = 17344 id = 3 }
      name     = "5. 'Dnepropetrov.' Strelk. Div."
      strength = 100
      type     = infantry
	  model = 8
    }

    division =
    { id       = { type = 17344 id = 4 }
      name     = "2. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = armored_car
      brigade_model = 1
    }

    division =
    { id       = { type = 17344 id = 47 }
      name     = "28. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = engineer
      brigade_model = 1
    }

    division =
    { id       = { type = 17344 id = 48 }
      name     = "29. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = artillery
      brigade_model = 5
    }

    division =
    { id       = { type = 17344 id = 50 }
      name     = "30. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = artillery
      brigade_model = 5
    }
    
    division =
    { id       = { type = 17344 id = 51 }
      name     = "31. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = artillery
      brigade_model = 5
    }

    division =
    { id       = { type = 17344 id = 52 }
      name     = "32. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 8
      extra = artillery
      brigade_model = 5
    }

    division =
    { id       = { type = 17344 id = 53 }
      name     = "2. Kavaleriyskaya Diviziya"
      strength = 90
      type     = cavalry
	  model = 8
    }

    division =
    { id       = { type = 17344 id = 54 }
      name     = "3. Kavaleriyskaya Diviziya"
      strength = 90
      type     = cavalry
	  model = 8
    }
  }

  landunit =
  { id       = { type = 17344 id = 5 }
    name     = "2yi Ukrayinskyi Korpus"
    location = 635
    division =
    { id       = { type = 17344 id = 6 }
      name     = "3. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 8
    }
    division =
    { id       = { type = 17344 id = 7 }
      name     = "6. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 8
    }
    division =
    { id       = { type = 17344 id = 8 }
      name     = "7. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 8
    }
    division =
    { id       = { type = 17344 id = 9 }
      name     = "1. Kavaleriyskaya Diviziya"
      strength = 30
      type     = cavalry
	  model = 8
    }
  }
  landunit =
  { id       = { type = 17344 id = 10 }
    name     = "3yi Ukrayinskyi Korpus"
    location = 603
    division =
    { id       = { type = 17344 id = 11 }
      name     = "4. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
	  
    }
    division =
    { id       = { type = 17344 id = 12 }
      name     = "8. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 13 }
      name     = "9. Strelkovaya Diviziya"
      strength = 100
	  model = 7
      type     = infantry
    }
    division =
    { id       = { type = 17344 id = 14 }
      name     = "1. Motorizovannaya Diviziya"
      strength = 80
      type     = motorized
	  model = 0
      extra    = anti_tank
	  brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 17344 id = 15 }
    name     = "4yi Ukrayinskyi Korpus"
    location = 612
    division =
    { id       = { type = 17344 id = 16 }
      name     = "10. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
    }
    division =
    { id       = { type = 17344 id = 17 }
      name     = "13. Strelkovaya Diviziya"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 18 }
      name     = "11. Strelkovaya Diviziya"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 46 }
      name     = "27. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
	  
    }
  }
  landunit =
  { id       = { type = 17344 id = 19 }
    name     = "5yi Ukrayinskyi Korpus"
    location = 641
    division =
    { id       = { type = 17344 id = 20 }
      name     = "12. Strelkovaya Diviziya"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 21 }
      name     = "14. Strelkovaya Diviziya"
      strength = 80
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 42 }
      name     = "23. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
	  
    }
    division =
    { id       = { type = 17344 id = 45 }
      name     = "26. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
	  
    }
  }
  landunit =
  { id       = { type = 17344 id = 22 }
    name     = "6yi Ukrayinskyi Korpus"
    location = 633
    division =
    { id       = { type = 17344 id = 23 }
      name     = "15. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 24 }
      name     = "20. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 25 }
      name     = "16. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
    }
    division =
    { id       = { type = 17344 id = 44 }
      name     = "25. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
	  model = 7
      extra    = artillery
	  brigade_model = 5
	  
    }
  }
  landunit =
  { location = 626
    name     = "7yi Ukrayinskyi Korpus"
    id       = { type = 20600 id = 25 }
    division =
    { id       = { type = 20600 id = 26 }
      name     = "17. Strelkovaya Diviziya"
      type     = infantry
	  model = 7
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 27 }
      name     = "18. Strelkovaya Diviziya"
      type     = infantry
	  model = 7
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 28 }
      name     = "19. Strelkovaya Diviziya"
      type     = infantry
	  model = 7
      strength = 70
    }
    division =
    { id       = { type = 17344 id = 43 }
      name     = "24. Strelkovaya Diviziya"
      strength = 100
      type     = infantry
      model = 7
      extra    = artillery
      brigade_model = 5
	  
    }
  }
  navalunit =
  { id       = { type = 17344 id = 28 }
    name     = "Cernoje Flote"
    location = 641 # Sevastopol
    base     = 641
    division =
    { id    = { type = 17344 id = 29 }
      name  = "UNRS Kyiv"
      type  = battleship
      model = 2
    }
    division =
    { id    = { type = 17344 id = 40 }
      name  = "UNRS Soborna Ukraina"
      type  = battleship
      model = 3
    }
    division =
    { id    = { type = 17344 id = 30 }
      name  = "UNRS Hetman Sahaidachnyi"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 17344 id = 31 }
      name  = "UNRS Slavutych"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 17344 id = 32 }
      name  = "UNRS Kutuzov"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 17344 id = 33 }
      name  = "UNRS Ivano-Frankivs'k"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 17344 id = 34 }
      name  = "5. Flotiliya Esmintsev"
      type  = destroyer
      model = 3
    }
    division =
    { id    = { type = 17344 id = 35 }
      name  = "11. Flotiliya Podlodok"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 17344 id = 36 }
      name  = "24. Flotiliya Podlodok"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 17344 id = 37 }
      name  = "25. Flotiliya Podlodok"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 17344 id = 26 }
    name     = "Ukrainski Povitryani viiska"
    location = 617
    base     = 617
    division =
    { id       = { type = 17344 id = 27 }
      name     = "1. IAD"
      strength = 100
      type     = interceptor
      model    = 7
    }
    division =
    { id       = { type = 17344 id = 41 }
      name     = "2. IAD"
      strength = 100
      type     = multi_role
      model    = 4
    }
    division =
    { id       = { type = 17344 id = 49 }
      name     = "3. IAD"
      strength = 100
      type     = multi_role
      model    = 4
    }
  }
}
