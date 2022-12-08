country = {
    tag = UCH
	#ai = "kaiserreich\Yunnan.ai"

	puppet = CGX


	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 5
		freedom = 4
		free_market = 5
		professional_army = 4
		defense_lobby = 3
		interventionism = 4
		}

#### cabinet
	headofstate = { type = 9 id = 98018 } #Zhao Hengti
	headofgovernment = { type = 9 id = 98046 } #Wu Jianxue
	foreignminister = { type = 9 id = 98172 } #He Yaozu
	armamentminister = { type = 9 id = 98105 } #Liu Yuezhi
	ministerofsecurity = { type = 9 id = 98022 } #He Jian
	ministerofintelligence = { type = 9 id = 98204 } #Yang Xuancheng
	chiefofstaff = { type = 9 id = 98163 } #Fang Dingying
	chiefofarmy = { type = 9 id = 98167 } #Ye Qi
	chiefofnavy = { type = 9 id = 98203 } #Yang Xuancheng
	chiefofair = { type = 9 id = 98209 } #Shi Bangfan

#### Resource Reserves
	energy		= 200
	metal		= 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50
	capital = 1308 #Changsha 
	manpower = 200

	free = { ic = 7 energy = 10 metal = 4 } #free energy and metal to keep Hunan's economy alive while a puppet

SpyInfo  = { country = "UGS" NumberOfSpies = 3 }

    ownedprovinces =      {
 1306 1307 1308 1309 1310 1311 1312 1378
	 }
    controlledprovinces = {
 1306 1307 1308 1309 1310 1311 1312 1378
	  }
    nationalprovinces =   {
	1306 1307 1308 1309 1310 1311 1312 1378
	}

diplomacy = {
relation = { tag = EAF value = -100  } 
relation = { tag = GER value = 50 }
relation = { tag = CGX value = 50 }
relation = { tag = JAP value = -75 }
relation = { tag = MAN value = -75 }
relation = { tag = MEN value = -75 }
relation = { tag = CYN value = 25 }
relation = { tag = CSX value =  25 }
relation = { tag = UPE value = -100 }
relation = { tag = UCS value = -50 }
relation = { tag = UGS value = 50 }
}

	techapps               = { #Warlord Technologies: Proudly serving warlord states since 2021
#Infantry Tech
1010 1020 1030 1040 1050 1060 1070 1080 #1926 Infantry
1160 1170 1180 1190 1200 1210 1220 #1921 Mountain Infantry
1830 1840 1850 #1921 Engineering Brigade
13060 13070 13080 1310 1320 1330 1340 1350 #1924 Cavalry
1910 1920 1930 1940 1950 1960 1970 #1924 Logistics
  
#Armor and Artillery
7600 7610 #SW Heavy Tank
2860 2870 2880 #1921 Armored Car
2290 2300 2310 2900 2910 2920 #1924 Artillery
2800 2450 #1921 Static Anti-Air Artillery
2810 #AA Brigade 1918
  
#Aircraft
4500 4510 4520 4530 4540 4550 #Interceptor 1918
4600 4610 4620 4630 #Tactical Bomber 1918
7290 7300 7310 #1918 Ground attack aircraft
  
#Industrial 
5810 5820 5050 #Facilities design
5800 5080 #Basic Construction Engineering
5310 54010 #Automatic feed tabulator
5316 #Ciphering Machine
5700 5710 5010 #Modern Agriculture
5600 5610 #Indirect Blood transfusions
  
#Land Doctrine Techs
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 #Weltkrieg Doctrine, Entente Side
6390 #Light Infantry doctrine
 
#Air Doctrines
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 #Weltkrieg and Interwar Doctrines pre-1936
  
#Naval Doctrines
8010 8020 8060 8070
   }
}