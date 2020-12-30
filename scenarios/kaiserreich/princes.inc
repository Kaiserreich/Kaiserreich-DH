


country = {
    tag = IND  
ai = "kaiserreich\Princely Federation.ai"

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 6
        free_market = 5
        professional_army = 3
        defense_lobby = 6
        interventionism = 3
    }


     
	headofstate = { type = 9 id = 59001 }
	headofgovernment = { type = 9 id = 59002 }
 	foreignminister = { type = 9 id = 59003 }
 	armamentminister = { type = 9 id = 59004 }
 	ministerofsecurity = { type = 9 id = 59005 }
 	ministerofintelligence = { type = 9 id = 59006 }
 	chiefofstaff = { type = 9 id = 59007 }
 	chiefofarmy = { type = 9 id = 59008 }
 	chiefofnavy = { type = 9 id = 59009 }        
 	chiefofair = { type = 9 id = 59010 }



#### Resource Reserves

SpyInfo  = {  country = "IND" NumberOfSpies = 3  }

	capital = 1487
	manpower = 128
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 25

	transports = 40

    ownedprovinces =      {
	1487 1504 1505 1495 1497 1507 1494 1502 1503 1490 1501 1520 1514 1478 1484 1485 1488 1498
        1491 1496 1489 1492 1482 1486 1508 1515 1512 1516 1517
	 }
    controlledprovinces = {
	1487 1504 1505 1495 1497 1507 1494 1502 1503 1490 1501 1520 1514 1478 1484 1485 1488 1498
        1491 1496 1489 1492 1482 1486 1508 1515 1512 1516 1517
	  }
    nationalprovinces =   {
	1487 1504 1505 1495 1497 1507 1494 1502 1503 1490 1501 1520 1514 1478 1484 1485 1488 1498
        1491 1496 1489 1492 1482 1486 1508 1515 1512 1516 1517
	}
diplomacy = {

}


	
	techapps = {

#Aircraft
4500 4510 4520 4530 4540 4550 #up to 1918 interceptor
4300 4310 4320 #Up to 1916 MR Fighter

#Armour and artillery
2860 2870 #Armd Cars up to ww1 armd car
2290 2300 2310 2900 #Artillery
2800 #ww1 static AA
2810 #ww1 AA bde

#SW Tank 
7600 7610 

#1921  Infantry Division  
1010  1020 1030 1040 1050 1060 1070

#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330

#Early Agriculture
5700 

#Interbellum Supply 
1910 1920 1930 1940 1950 1960

#Engineers
1830 1840 1850 

# Naval Doctrines
8010 8020 8050

#Industrial
5600 #Medicine
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5810 5820 5050 5830 #Manufactoring
5800 5080 5090 #Improved Construction Engineering 

# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WWII
6010 # Firepower
14000 14010 #Hospitals

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
}


dormant_leaders		= { #PAK leaders 505084-505243
						505084 505086 505087 505089 505090 505092 505094 505095 505096 505098 505099 505101 505102 505103 505105 505106 505108 505111 505112 505114 505115
						505116 505118 505119 505120 505122 505123 505124 505126 505129 505130 505131 505132 505133 505134 505135 505136 505137 505138 505139 505140 505141
						505143 505145 505146 505147 505149 505150 505151 505152 505153 505155 505159 505160 505161 505162 505164 505165 505166 505167 505168 505169 505173
						505175 505176 505177 505178 505179 505180 505183 505185 505186 505187 505188 505189 505190 505192 505193 505194 505197 505199 505200 505201 505202
						505203 505204 505205 505206 505207 505208 505210 505211 505212 505213 505214 505217 505219 505220 505221 505223 505224 505226 505228 505230 505232
						505233 505234 505235 505239 505240 505241 505242
                        #PRK leaders 505244-505263
						505245 505246 505248 505250 505251 505252 505253 505257 505258 505259 505261 505262
						505040 505047 505063 505064 505067 505076 505082 #U35
						505264 505265 505266 505267 505268 505269 505270 #U42
						}

dormant_ministers 	= { 59073 59074 59075 59076 59077 59078 59079 59082
						#PAK ministers
						59083 59084 59085 59086 59087 59088 59040 59331 59332 59333 59334 59335 59336 59337 59338 59339 59340 59341 59342 59343 59344 59345 59346 59347
						59348 59349 59350 59351 59352 59353 59354 59355 59356 59357
						}

dormant_teams		= { 23008 23042 }

#########  OOB (...)

	landunit = {
		name = "Nagpur Territorial Group"
		location = 1485
		id = { type = 12700 id = 34 }
		division = {
			id = { type = 12700 id = 35 }
			name = "1st Nagpur Infantry Division"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 36 }
			name = "2nd Nagpur Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 37 }
			name = "3rd Nagpur Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 38 }
			name = "4th Nagpur Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
	}


	landunit = {
		name = "Hyderabad Territorial Group"
		location = 1487
		id = { type = 12700 id = 39 }
		division = {
			id = { type = 12700 id = 40 }
			name = "Hyderabad Security Force"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 41 }
			name = "1st Deccan Infantry Division"
			type = infantry
			model = 2
			strength = 80 }
		division = {
			id = { type = 12700 id = 42 }
			name = "2nd Deccan Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 43 }
			name = "3rd Deccan Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 44 }
			name = "4th Deccan Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 45 }
			name = "5th Deccan Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
	}

landunit = {
		name = "Hyderabad Brigade"
		location = 1487
		id = { type = 12700 id = 46 }
		division = {
			id = { type = 12700 id = 47 }
			name = "Nizam's Own Deccan Cavalry"
			type = cavalry
			model = 6
			strength = 60 }
}

landunit = {
		name = "Army of the State of Mysore"
		location = 1507
		id = { type = 12700 id = 48 }
		division = {
			id = { type = 12700 id = 49 }
			name = "Royal Guard of the House of Mysore"
			type = cavalry
			model = 6
			strength = 60 }
		division = {
			id = { type = 12700 id = 50 }
			name = "Mysore Security Force"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 51 }
			name = "1st Kannada Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 52 }
			name = "2nd Kannada Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 53 }
			name = "3rd Kannada Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
}

landunit = {
		name = "Army of the State of Travancore-Cochin"
		location = 1497
		id = { type = 12700 id = 54 }
		division = {
			id = { type = 12700 id = 55 }
			name = "Royal Guard of the Combined House"
			type = cavalry
			model = 6
			strength = 60 }
		division = {
			id = { type = 12700 id = 56 }
			name = "Malayam Security Force"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 57 }
			name = "1st Malayam Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
		division = {
			id = { type = 12700 id = 58 }
			name = "2nd Malayam Infantry Division"
			type = infantry
			model = 2
			strength = 10 }
}

	landunit = {
		name = "Southern Command"
		location = 1502
		id = { type = 12700 id = 59 }
		division = {
			id = { type = 12700 id = 60 }
			name = "1st Infantry Division"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 61 }
			name = "2nd Infantry Division"
			type = infantry
			model = 6
			strength = 80 }
}

landunit = {
		name = "Army of the State of Bombay"
		location = 1517
		id = { type = 12700 id = 62 }
		division = {
			id = { type = 12700 id = 33 }
			name = "Bombay Security Force"
			type = infantry
			model = 6
			strength = 80 }
		division = {
			id = { type = 12700 id = 31 }
			name = "1st Bombay Maratha Infantry"
			type = infantry
			model = 2
			strength = 30 }
		division = {
			id = { type = 12700 id = 32 }
			name = "2nd Bombay Maratha Infantry"
			type = infantry
			model = 2
			strength = 30 }
		
}

	landunit = {
		name = "Army of the State of Kolhapur"
		location = 1512
		id = { type = 12700 id = 700 }
		division = {
			id = { type = 12700 id = 701 }
			name = "Kolhapur Royal Grenadiers"
			type = infantry
			model = 2
			strength = 50 }
		division = {
			id = { type = 12700 id = 702 }
			name = "1st Kolhapur Infantry"
			type = infantry
			model = 2
			strength = 10 }

}

       landunit = {
		name = "Maratha Defence Force"
		location = 1514
		id = { type = 12700 id = 703 }
		division = {
			id = { type = 12700 id = 704 }
			name = "1st Federated Maratha Lancers"
			type = cavalry
			model = 7
		        locked = yes
	                extra  = artillery 
	                brigade_model = 3
	                experience = 2
                        max_strength = 20
			strength = 20 }
		division = {
			id = { type = 12700 id = 705 }
			name = "1st Federated Maratha Infantry"
			type = infantry
			model = 6
		        locked = yes
	                extra  = artillery 
	                brigade_model = 3
	                experience = 2
                        max_strength = 10
			strength = 10 }
		division = {
			id = { type = 12700 id = 706 }
			name = "2nd Federated Maratha Infantry"
			type = infantry
			model = 6
		        locked = yes
                        max_strength = 10
			strength = 10 }

}
	    landunit = {
		name = "Madurai Division"
		location = 1504
		id = { type = 12700 id = 707 }
		division = {
			id = { type = 12700 id = 708 }
			name = "Madurai Occupation Garrison"
			type = garrison
			model = 3
			locked = yes
			max_strength = 50
			strength = 40 }
	}	

	    landunit = {
		name = "Coimbatore Division"
		location = 1505
		id = { type = 12700 id = 709 }
		division = {
			id = { type = 12700 id = 710 }
			name = "Coimbatore Occupation Garrison"
			type = garrison
			model = 3
			locked = yes
			max_strength = 50
			strength = 40 }
	}

	    landunit = {
		name = "Household Guard of the United House"
		location = 1497
		id = { type = 12700 id = 711 }
		division = {
			id = { type = 12700 id = 712 }
			name = "5th Malayam Mixed Brigade"
			type = garrison
			model = 3
			locked = yes
			max_strength = 50
			strength = 50 }
	}	
	
	    landunit = {
		name = "Mysore Police Division"
		location = 1507
		id = { type = 12700 id = 713 }
		division = {
			id = { type = 12700 id = 714 }
			name = "Mysore Police Division"
			type = militia
			model = 3
			locked = yes
			max_strength = 50
			strength = 50 }
	}	
	
	    landunit = {
		name = "Bangalore Division"
		location = 1502
		id = { type = 12700 id = 715 }
		division = {
			id = { type = 12700 id = 716 }
			name = "Bangalore Division"
			type = garrison
			model = 3
			locked = yes
			max_strength = 50
			strength = 40 }
	}

	    landunit = {
		name = "Nellore Division"
		location = 1494
		id = { type = 12700 id = 717 }
		division = {
			id = { type = 12700 id = 718 }
			name = "1st Telugu Garrison Division"
			type = garrison
			model = 3
			locked = yes
			max_strength = 50
			strength = 40 }
	}		

}  