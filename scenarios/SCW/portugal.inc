province = { id = 481   anti_air = 1 } #Porto


province = { id = 476   #Lissabon
	     anti_air = 2 
	      air_base = {
		size = 4
		current_size = 4
		}
		naval_base = {
		size = 6
		current_size = 6
		}
	     
	    }

country = {
    tag = POR

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 4
        free_market = 5
        freedom = 4
        professional_army = 4
        defense_lobby = 5
        interventionism = 3
    }

	capital = 476

   	manpower = 70

	transports = 50
	escorts = 7

	# Resource Reserves
	energy	=	5000
	metal	=	5000
	rare_materials	 =	2000
	oil 	=	2000
	supplies =	2000
	money	=	500

    ownedprovinces =
	{
		476 477 478 479 480 481 482
	}
    controlledprovinces =
	{
		476 477 478 479 480 481 482
	}
    nationalprovinces =
	{
		476 477 478 479 480 481 482
	}
	techapps = {
	
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 #Infantry
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	1560 1570    1830 1840 1850
	1910 1920 1930 1940 1950 1960 1970
	
	5700 5710 5010 5020 #Industry
	5810 5820 5050 5830 5060 5070
	5800 5080 5090    5560
	5310 54010 54020 54030   5316 5326 5327
	5190 5470   5600 5610 5620 5630
	
	6500 6510 6530 6590 #Doctrines
	6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	14000 14010 14020 14030   6010 6020
	
	}

#########  OOB (...)

	landunit = {
	id = { type = 19600 id = 1000 }
	location = 482
	name = "Exйrcito do Portugal"

		division = {
	        id = { type = 19600 id = 1001 }
		name = "1o Batalhгo de Infantaria"
		type = infantry
		model = 6
                extra = artillery
		strength  = 100
                brigade_model = 2
		}

		division = {
	        id = { type = 19600 id = 1002 }
		name = "2o Batalhгo de Infantaria"
		type = infantry
		model = 6
		strength  = 100
		}

                division = {
	        id = { type = 19600 id = 1008 }
		name = "3o Batalhгo de Infantaria"
		type = infantry
		model = 6
		strength  = 100
		}
		}

        landunit = {
	location = 478    
	name = "4o Batalhгo de Infantaria"
        id = { type = 19600 id = 1009 }
		division = { 
		id = { type = 19600 id = 1010 } 
		name = "4o Batalhгo de Infantaria" 
		type = garrison
		model = 4
                locked = yes
		strength = 50
                max_strength = 50
		}
                }
				
        landunit = {
	location = 480  

	name = "1o Batalhгo de Infantaria Ligeira"
        id = { type = 19600 id = 1013 }
		division = { 
		id = { type = 19600 id = 1014 } 
		name = "1o Batalhгo de Infantaria Ligeira" 
		type = d_01
		model = 6
		strength = 100
		}
                }
 
	navalunit = {
	id = { type = 19600 id = 1003 }
	location = 476
	base = 476
	name = "Transporte de Navio do Portugal"

		division = {
		 id = { type = 19600 id = 1004 }
		 name = "1o Flotilha de Navio de Transporte"
		 type = transport
                 model = 1
		}
		}

	airunit = {
	id = { type = 19600 id = 9300 }
	name = "Aйreo do Portugal"
	location = 476 #Lissabon
	base = 476
		division = {
		id = { type = 19600 id = 9301 }
		name = "1o Aviгo de Bombardeiro Tбtico"
		type = tactical_bomber
		strength = 100
		model = 5
		}
		}

	navalunit = {
	id = { type = 19600 id = 9302 }
	name = "Marinha do Portugal"
	location = 476
	base = 476
		division = {
		id = { type = 19600 id = 9303 }
		name = "Viana do Castello Flotilha"
		type = destroyer
		model = 4
		strength = 100
		}

		division = {
		id = { type = 19600 id = 9304 }
		name = "1o Flotilha de Submarino"
		type = submarine
		model = 2
		strength = 100
		}
		}

############################################################

}  