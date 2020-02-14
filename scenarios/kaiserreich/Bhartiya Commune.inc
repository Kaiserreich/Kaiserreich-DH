


country = {
    tag = PRK
ai = "kaiserreich\Bengal.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 8
        freedom = 6
        free_market = 7
        professional_army = 5
        defense_lobby = 7
        interventionism = 6
    }
     
	headofstate = { type = 9 id = 579001 }
	headofgovernment = { type = 9 id = 579003 }
 	foreignminister = { type = 9 id = 579004 }
 	armamentminister = { type = 9 id = 579008 }
 	ministerofsecurity = { type = 9 id = 579011  }
 	ministerofintelligence = { type = 9 id = 579012  }
 	chiefofstaff = { type = 9 id = 579015 }
 	chiefofarmy = { type = 9 id = 579018 }
 	chiefofnavy = { type = 9 id = 579067 } #Lala Har Dayal
 	chiefofair = { type = 9 id = 579142 } #Anushilan Samiti Air Command

#### Resource Reserves
	capital = 1447
	manpower = 88
	energy	=	1000   metal	= 1000		rare_materials =	700	oil =	500	supplies =	500
	money = 50

	transports = 40

    ownedprovinces =      {
	1447 1493 1474 1475 1477 1469 1465 1476 1444 1440 1442 1443 1458 1450 1439 1441 1445 1449 1446 1448
        1472 1473 1470 1471
	 }
    controlledprovinces = {
	1447 1493 1474 1475 1477 1469 1465 1476 1444 1440 1442 1443 1458 1450 1439 1441 1445 1449 1446 1448
        1472 1473 1470 1471
	  }
    nationalprovinces =   {
	1447 1493 1474 1475 1477 1469 1465 1476 1444 1440 1442 1443 1458 1450 1439 1441 1445 1449 1446 1448
        1472 1473 1470 1471
	}

diplomacy = {


relation = {   tag =  	GER	 value =		-50	   }  
relation = {   tag =  	LAT	value = 		-10	   }  
relation = {   tag =  	LIT	 value =		-10	   }  
relation = {   tag =  	POL	value = 		-5	   }  
relation = {   tag =  	UKR	 value =		-10	   }  
relation = {   tag =  	AST	value = 		-150	   }  

relation = {   tag =  	DEN	 value =		10	   }  
relation = {   tag =  	HOL	 value =		-40	   }  
relation = {   tag =  	IRE	value = 		-5	   }  
relation = {   tag =  	ITA	value = 		-20	   }  
relation = {   tag =  	POR	value = 		-40	   }  
relation = {   tag =  	ROM	value = 		10	   }   
relation = {   tag =  	ENG	value = 		120	   }  
relation = {   tag =  	RSI	 value =		80	   }  
relation = {   tag =  	FRA	value = 		100	   }  
relation = {   tag =  	CAN	value = 		-150	   }  
relation = {   tag =  	GUY	value = 		-30	   }  
relation = {   tag =  	VIC	value = 		-150	   }  
relation = {   tag =  	RUS	 value =		20	   }  
relation = {   tag =  	CON	value = 		-20	   }  
relation = {   tag =  	SAF	value = 		-120	   }  
relation = {   tag =   	USA	value = 		10	   }
relation = {   tag =  	JAP	value = 		-5	   }
relation = {   tag =  	PAK	value = 		-150	   }
relation = {   tag =  	IND	value = 		-150	   }  
}


	
	techapps = {

# Group D 1936 techs
#######################
#Infantry
1010 1020 1030 1040 1050 1060 1070 #1921 infantry
1160 1170 1180 1190 1200 1210 #1918 mountain infantry
13060 13070 13080 1310 1320 1330 #1918 cavalry division
1830 1840 #Engineers
1910 1920 1930 #Supply 

#Armour and artillery
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 #ww1 static AA
2810 #ww1 AA bde

#Aircraft
4500 4510 4520 4530 4540 4550 #up to 1918 interceptor
4300 4310 4320 #Up to 1916 MR Fighter

#Industrial
5600 #Medicine
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering  

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 6550 6910 #ww1 offensive doctrines
14000 14010 #Hospitals
6570 6300 # Human Wave

#Naval Doctrines
8010 8020 # Theories
8500 8510 8520  # Naval Interdiction
8900 8910 8920  # Engagement Tactics

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}

dormant_ministers = { 579087 579088 579089 579090 579091 567092 579093 579094 #BUR
					  579095 579096 567097 579098 #U44
					  579143 579144 579145 #IND
					  579146 579147 579148 579149 579150 579151 #PAK
					  579129 }

dormant_teams = { 12615 12622 12644 12645 }

dormant_leaders = { 579001 579004 579008 579010 579013 579015 579020 579023 #British Aid
					#PAK leaders 579125-579250
					579125 579127 579131 579134 579137 579141 579142 579144 579145 579146 579147 579148 579150 579151 579152 579154 579157 579158 579159 579160 579161 579162 579163
					579164 579165 579166 579167 579168 579171 579172 579173 579175 579176 579177 579178 579179 579181 579182 579184 579185 579186 579190 579192 579193 579194 579195
					579196 579198 579200 579201 579202 579203 579204 579206 579207 579208 579211 579213 579214 579215 579216 579217 579218 579219 579220 579222 579223 579224 579225
					579228 579230 579231 579232 579234 579237 579238 579240 579241 579242 579243 579245 579246 579248 579249 579250
					#IND leaders 579252-579300
					579252 579253 579255 579257 579258 579259 579260 579261 579262 579264 579267 579268 579270 579271 579272 579273 579274 579275 579276 579277 579278 579280 579281
					579283 579284 579285 579286 579288 579293 579294 579296 579297 579299 579300
					#BUR
					579301 579302 579303 579304 579305 579306
					}

#########  OOB (...)

	landunit = {
		name = "Union Army of Bihar"
		location = 1476
		id = { type = 12703 id = 1 }
		division = {
			id = { type = 12703 id = 2 }
			name = "4. Bihar Rifles Division"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12703 id = 3 }
			name = "12. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 4 }
			name = "13. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = { 
			id = { type = 12703 id = 5 }
			name = "14. Rifles Division"
			type = infantry
			model = 2 
			strength = 10 
			}
		division = {
			id = { type = 12703 id = 6 }
			name = "15. Rifles Division"
			type = infantry
			model = 2
			strength = 10 
			}
		division = {
			id = { type = 12703 id = 7 }
			name = "16. Rifles Division"
			type = infantry
			model = 2
			strength = 10 
			}
	}

      landunit = {
		name = "Nagpur Security Force"
		location = 1475
		id = { type = 12703 id = 8 }
		division = {
			id = { type = 12703 id = 9 }
			name = "7. Orissa Rifles Division"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12703 id = 10 }
			name = "8. Orissa Rifles Division"
			type = infantry
			model = 6
			strength = 70 }
	}

 
      landunit = {
		name = "Union Army of Orissa"
		location = 1470
		id = { type = 12703 id = 11 }
		division = {
			id = { type = 12703 id = 12 }
			name = "3. Orissa Rifles Division"
			type = infantry
			model = 6
			strength = 80
			extra = artillery
			brigade_model = 2 }
		division = {
			id = { type = 12703 id = 13 }
			name = "17.  Mounted Rifles Division"
			type = cavalry
			model = 7
			strength = 40 }
		division = {
			id = { type = 12703 id = 14 }
			name = "18. Rifles Division"
			type = infantry
			model = 2
			strength = 20 }
		division = {
			id = { type = 12703 id = 15 }
			name = "19. Rifles Division"
			type = infantry
			model = 2
			strength = 20 }
		division = {
			id = { type = 12703 id = 16 }
			name = "20. Rifles Division"
			type = infantry
			model = 2
			strength = 20 }
	}

        landunit = {
		name = "Union Army of Calcutta and Dhaka"
		location = 1447
		id = { type = 12703 id = 17 }
		division = {
			id = { type = 12703 id = 18 }
			name = "Kolkata Union Police"
			type = militia
			model = 4
			strength = 80 }
		division = {
			id = { type = 12703 id = 19 }
			name = "1. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 20 }
			name = "2. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 21 }
			name = "3. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 22 }
			name = "4. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 23 }
			name = "5. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 24 }
			name = "6. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 25 }
			name = "7. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 26 }
			name = "8. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 27 }
			name = "9. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 28 }
			name = "10. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12703 id = 29 }
			name = "11. Rifles Division"
			type = infantry
			model = 2
			strength = 10 }
	}  
       landunit = {
		name = "East Bengal Border Guards"
		location = 1440
		id = { type = 12703 id = 30 }
		division = {
			id = { type = 12703 id = 31 }
			name = "1. Mounted Rifles Division"
			type = cavalry
			model = 7
			strength = 80 }
		division = {
			id = { type = 12703 id = 32 }
			name = "2. Calcutta Rifles Division"
			type = infantry
			model = 6
			strength = 70 }
	}
       landunit = {
		name = "1st Gangetic Army"
		location = 1469
		id = { type = 12703 id = 33 }
		division = {
			id = { type = 12703 id = 34 }
			name = "5. Bihar Rifles Division"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12703 id = 35 }
			name = "6. Bihar Rifles Division"
			type = infantry
			model = 6
			strength = 70 }
	}

}  