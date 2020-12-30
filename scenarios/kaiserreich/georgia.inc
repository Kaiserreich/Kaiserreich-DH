


country = {
    tag = GEO  
ai = "kaiserreich\Georgia.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 8
        freedom = 6
        free_market = 2
        professional_army = 3
        defense_lobby = 5
        interventionism = 7
    }

#### cabinet
    headofstate = { type = 9 id = 519001 } #Grigol Ordzhonikidze
    headofgovernment = { type = 9 id = 519002 } #Filipp Makharadze
 	foreignminister = { type = 9 id = 519003 } #Vissarion Lominadze
 	armamentminister = { type = 9 id = 519004 } #Isidore Ramishvili
 	ministerofsecurity = { type = 9 id = 519005 } #Ioseb B. Dzughashvili
 	ministerofintelligence = { type = 9 id = 519006 } #Mamia Orakhelashvili
 	chiefofstaff = { type = 9 id = 519007 } #Vladimir Dekanozov
 	chiefofarmy = { type = 9 id = 519008 } #Alexi Sasha Gegechkori
 	chiefofair = { type = 9 id = 519122 } #Aleksandre Sagharadze    
 	chiefofnavy = { type = 9 id = 519106 } #Polikarp Mdivani
#### Resource Reserves
	capital = 709
	manpower = 28
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10


    ownedprovinces =      {
		710 708 707 709
	 }
    controlledprovinces = {
		710 708 707 709
	  }
    nationalprovinces =   {
		710 708 707 709
	}

    SpyInfo  = {  country = "GEO" NumberOfSpies = 2  } 

diplomacy = {
relation = { tag = RUS value = 50 }
relation = { tag = ARM value = -120 }
relation = { tag = AZB value = -90 }
relation = { tag = OTT value = -40 }
relation = { tag = TRA value = -50 }
}

dormant_teams		   = { 21002 21026 21030 21031 }

dormant_ministers	   = { #Armenia
						519142 519143 519144 519145 519146 519147 519148 519149
						#Azerbaijan
						519150 519151 519152 519153 519154 519155 519156
						#Mountainous Republic
						519157 519158 519159 519160 519161 519162 519163 519164 519165 519166 519167 519168
						#Don-Kuban
						519169
						}

dormant_leaders        = { #Armenia
						519058 519059 519060 519061 519062 519063 519064 519065 519066
						#Azerbaijan
						519067 519068 519069 519070 519071 519072 519073 519074 519075 519076 519077 519078 519079 
						519080 519081 519082 519083
						#Mountainous Republic
						519084 519085 519086 519087 519088 519089 519090 519091 519092 519093 519094 519095 519096
						519097 519098 519099 519100 519101 519102 519103
						#Don-Kuban
						519104 519105
						}
	
	techapps = {

# Group D 1936 techs
#######################

#Aircraft
4500 4510 4520 4530 4540 4550 4010 #Interwar Fighter  

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 #1920s Cavalry Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1830 #Engineers

#Industrial
5700 5710 5010 #Modern Agriculture  
5810 5820 5050 # Production
5800 5080 #Improved Construction Engineering
5600 #Medicine
5190 #Basic Oil Refining 

#Land Doctrines
6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
6010 # Firepower focus

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}

#########  OOB (...)

landunit = {
 	id = { type = 17346  id = 1  }
 	name = "I. Sak'art'velo Korpus"
 	location = 709

  		division = {
   		id = { type = 17346  id = 2 }
   		name = "1. Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 6
                extra = artillery
                brigade_model = 4
             	}

  		division = {
   		id = { type = 17346  id = 3 }
   		name = "5. Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 6
             	}

  		division = {
   		id = { type = 17346  id = 4 }
   		name = "3. Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 6
             	}
         	}


	landunit = {
 	id = { type = 17346  id = 5 }
 	name = "II. Sak'art'velo Korpus"
 	location = 708

  		division = {
   		id = { type = 17346  id = 6 }
   		name = "2. Strelkovaya Diviziya"
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
   		id = { type = 17346  id = 7 }
   		name = "4. Strelkovaya Div."
   		strength = 100
		model = 6
   		type = infantry
             	}

  		division = {
   		id = { type = 17346  id = 8 }
  		name = "6. Strelkovaya Diviziya"
   		strength = 100
		model = 6
   		type = infantry
             	}
         	}
			
	navalunit = {
	id = { type = 17346 id = 9 }
	name = "Akhali p’lotis sak’art’velos"
	location = 708
	base = 708
		division = {
		id = { type = 17346 id = 10 }
		name = "Pirveli popularuli flotilla"
		type = destroyer
		model = 1
		strength = 50
		}
	}

}  