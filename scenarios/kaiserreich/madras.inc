


country = {
    tag = U35 
ai = "kaiserreich\Princely Federation.ai"

	puppet = IND


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        freedom = 6
        free_market = 6
        professional_army = 3
        defense_lobby = 3
        interventionism = 3
    }


     
	headofstate 			= { type = 9 id = 75911200 } #Paramasiva Subbarayan
	headofgovernment 		= { type = 9 id = 75911201 } #Srinivasa Iyengar
 	foreignminister 		= { type = 9 id = 75911202 } #Paramasiva Subbarayan
 	armamentminister 		= { type = 9 id = 75911203 } #R. N. Arogyasamy Mudaliar
 	ministerofsecurity 		= { type = 9 id = 75911204 } #Muthiah Mudaliar
 	ministerofintelligence	= { type = 9 id = 75911226 } #Annepu Parasuramdas Patro
 	chiefofstaff			= { type = 9 id = 75911205 } #Kodandera Thimayya
 	chiefofarmy				= { type = 9 id = 75911206 } #Kodandera Thimayya
 	chiefofnavy				= { type = 9 id = 75911207 } #Ram Dass Katari
 	chiefofair				= { type = 9 id = 75911208 } #Ravindra Darshan Singh



#### Resource Reserves

SpyInfo  = {  country = "U35" NumberOfSpies = 2  } 

	capital = 1500
	manpower = 50
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 25

	transports = 40

    ownedprovinces =      {
	1499 1500 1506
	 }
    controlledprovinces = {
	1499 1500 1506
	  }
    nationalprovinces =   {
	1499 1500 1506
	}
    claimedprovinces = {
        }

diplomacy = {
relation = {   tag =  	GER	value =		20	   }  
relation = {   tag =  	PRI	value = 	-10	   }  
relation = {   tag =  	PRK	value = 	-50	   }  
relation = {   tag =	PAK	value = 	-20	   }
}


	
	techapps = {

#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610 
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330
#Early Agriculture
5700 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Engineers
1830 

# Basic Construction Engineering
5800 5080 
# Improved Construction Engineering 
5090  
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
# Land Doctrines WWII
6390 # Light Infantry

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
}

#########  OOB (...)
landunit = {
		name = "Chennai Presidency Guard"
		location = 1500
		id = { type = 13000 id = 1 }
		division = {
			id = { type = 13000 id = 2 }
			name = "1. Modati Padati Rejiment"
			type = infantry
			model = 6
			strength = 45 
			}
		division = {
			id = { type = 13000 id = 3 }
			name = "2. Modati Padati Rejiment"
			type = infantry
			model = 6
			strength = 35 
	}
	}
landunit = {
	name = "Chennai Militia"
	location = 1500
	id = { type = 13000 id = 4 }
		division = {
			id = { type = 13000 id = 5 }
			name = "Militia Group 'Azad'"
			type = militia
			model = 3
			strength = 20 
	}
	}
landunit = {
	name = "Trimcomalee Militia"
	location = 1499 
	id = { type = 13000 id = 6 }
		division = {
			id = { type = 13000 id = 7 }
			name = "Militia Group 'Tamil Nadu'"
			type = militia
			model = 3
			strength = 60 
	}
	}
landunit = {
	name = "Salem Militia"
	location = 1506
	id = { type = 13000 id = 8 }
		division = {
			id = { type = 13000 id = 9 }
			name = "Militia Group 'Iyengar'"
			type = militia
			model = 3
			strength = 75 
	}
	}		


}  