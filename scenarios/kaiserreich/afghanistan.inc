


country = {
    tag = AFG  
ai = "kaiserreich\Afghanistan.ai"

    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        free_market = 7
        freedom = 6
        professional_army = 2
        defense_lobby = 4
        interventionism = 1
    }


	headofstate = { type = 9 id = 54081 }
	headofgovernment = { type = 9 id = 54082 }
 	foreignminister = { type = 9 id = 54101 }
 	armamentminister = { type = 9 id = 54102 }
 	ministerofsecurity = { type = 9 id = 54052  }
 	ministerofintelligence = { type = 9 id = 54054  }
 	chiefofstaff = { type = 9 id = 54061 }
 	chiefofarmy = { type = 9 id = 54107 }	

#### Resource Reserves

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 110
	capital = 	2171


    ownedprovinces =      {
	2168 2173 2172 2171 2169 2170 1529 1537
	 }
    controlledprovinces = {
	2168 2173 2172 2171 2169 2170 1529 1537
	  }
    nationalprovinces =   {
	2168 2173 2172 2171 2169 2170 1529 1537 
	}
    claimedprovinces = { 
        1104 1098 1538        
                 }

diplomacy = {
relation = { tag = ENG value = -75 }
relation = { tag = ITA value = 50 }
relation = { tag = PER value = 25 }
relation = { tag = SAU value = 50 }
relation = { tag = RUS value = 1 }
relation = { tag = OTT value = 50 }
relation = { tag = KYG value = 70 }
relation = { tag = IND value = 70 }
relation = { tag = PAK value = -150 }
relation = { tag = PRK value = -150 }
}


	

	# ROTW Minor Tech '36
	techapps = {
# Afghanistan
#######################
#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
13060 13070 13080 1310 #Cavalry, just stoped in 1914 cavalry division

#Armour and artillery
2860 2870 #Armd Cars up to ww1 armd car
2290 #Artillery

#Industrial
5700 #Early Agriculture Research
5800 #Early Construction engineerings
5810 #Scientific Management
5600 #Early Antibiotics
5316 #Cryptography

#Aircraft
4600 #Experimental Bomber
7290 7300 7310 #1918 Ground attack plane (Airco DH.9)
4300 4310 4320 #Improved WK MR fighter (Bristol F.2)
4500 4510 4520 4530 4540 4550 #Improved ww1 Fighter (Nieuport 24)

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
	}


#########  OOB (...)
landunit = {
 id = { type = 10000 id = 1 }
 location = 2171
 name = "Royal Afghani Army"

division = {
   id = { type = 10000 id = 11 }
   name = "Royal Guard"
   strength = 100
   model = 6
   type = infantry
             }

  division = {
   id = { type = 10000 id = 2 }
   name = "Faizabad Militia"
   strength = 80
   model = 4
   type = militia
             }

  division = {
   id = { type = 10000 id = 3 }
   name = "Ghazni Militia"
   strength = 70
   model = 4
   type = militia
             }



           }

##########################
##########################

landunit = {
 id = { type = 10000 id = 4 }
 location = 2173
 name = "Herat Army"

  division = {
   id = { type = 10000 id = 5 }
   name = "Herat Militia"
   strength = 100
   model = 4
   type = militia
             }

  division = {
   id = { type = 10000 id = 6 }
   name = "Herat Cavalry"
   strength = 30
   model = 6
   type = cavalry
           }
	}
airunit = {
	id = { type = 10000 id = 12 }
	location = 2171
	base = 2171
	name = "Royal Afghan Flying corps"
	division = {
		id = { type = 10000 id = 13 }
		name = "1st Bomber squadron"
		strength = 25
		type = cas
		model = 2
		}
	division = {
		id = { type = 10000 id = 14 }
		name = "1st fighter squadron"
		strength = 25
		type = multi_role
		model = 4
		}
	division = {
		id = { type = 10000 id = 15 }
		name = "2nd fighter squadron"
		strength = 25
		type = interceptor
		model = 5
		}
	}

###########################
############################

landunit = {
 id = { type = 10000 id = 7 }
 location = 2169 #Various Mixed Divisions, each based at different city humped in one landunit#
 name = "Kandahar Army"

  division = {
   id = { type = 10000 id = 8 }
   name = "Jalalabad Militia"
   strength = 50
   model = 3
   type = militia
             }

  division = {
   id = { type = 10000 id = 9 }
   name = "Kandahar Militia"
   strength = 50
   model = 3
   type = militia
   }
 }

}  