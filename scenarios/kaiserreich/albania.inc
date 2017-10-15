


country = {
    tag = ALB
ai = "kaiserreich\Albania.ai"

	puppet = OTT
	control = OTT


    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 5
        professional_army = 5
        defense_lobby = 4
        interventionism = 1
    }

#### cabinet

 headofstate = { type = 9 id = 32001  } 
 headofgovernment = { type = 9 id = 32202 }

#### Resource Reserves
manpower = -20
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	359



    ownedprovinces =      {
	361 359 362 360
	 }
    controlledprovinces = {
	361 359 362 360
	  }
    nationalprovinces =   {
	361 359 362 360
        334 # claim on Tetovo
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		20	   }  
relation = {   tag =  	BUL	value = 		50	   }  
relation = {   tag =  	GER	 value =		80	   }  
relation = {   tag =  	LAT	value = 		50	   }  
relation = {   tag =  	LIT	 value =		20	   }  
relation = {   tag =  	AUS	value = 		40	   }  
relation = {   tag =  	HUN	 value =		-40	   }  
relation = {   tag =  	ITA	value = 		50	   }  
relation = {   tag =  	SPA	value = 		-30	   }  
relation = {   tag =  	ENG	value = 		-30	   }  
relation = {   tag =  	RSI	 value =		50	   }  
relation = {   tag =  	VIC	value = 		-20	   }  
relation = {   tag =  	RUS	 value =		40	   }  
relation = {   tag =  	OTT	 value =		150	   }  
relation = { tag =	USA	value = 		10	 }
}


	
	techapps = {
# Group D 1936 techs
#######################
#Infantry
1010 1020 1030 1040 1050 1060 #1918 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division

#Armour and artillery
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 #ww1 static AA
2810 #ww1 AA bde

#Aircraft
4500 4510 4520 4530 4540 4550 #up to 1918 interceptor

#Industrial
5700 5710 #Early agric mechanization
5800 5080 #Construction engineerings
5190 #Basic Oil refining

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6630 6640 6660 #ww1 defensive doctrines
14000 14010 #Hospitals
}

#########  OOB (...)

### Army
landunit = {
 	id = { type = 17656    id = 1 }
 	name = "Shqiperia Armé"
 	location = 359

  			division = {
   		id = { type = 17656    id = 2 }
   		name = "I Këmbësori Pjesëtim"
   		strength = 60
		model = 5
   		type = infantry
             	}

           	}


### Navy

### Airforce

}  
