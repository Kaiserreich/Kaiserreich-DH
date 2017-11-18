country = {
    tag = UA1
	puppet = UA2

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 4
        freedom = 4
        free_market = 2
        professional_army = 2
        defense_lobby = 6
        interventionism = 5
    }

#### cabinet    
#	headofstate 			= { type = 9 id = 508001 } #Palmiro Togliatti
#	headofgovernment		= { type = 9 id = 508002 } #Antonio Gramsci
#	foreignminister			= { type = 9 id = 508003 } #Pietro Nenni
#	armamentminister		= { type = 9 id = 508004 }#Vittorio Vidali
#	ministerofsecurity		= { type = 9 id = 508005 } #Ruggiero Greco
#	ministerofintelligence	= { type = 9 id = 508006 } #Giuseppe di Vittorio
#	chiefofstaff			= { type = 9 id = 508007 } #Camillo Berneri;
#	chiefofarmy				= { type = 9 id = 508008 } #Umberto Marzocchi
#	chiefofnavy				= { type = 9 id = 508009 } #Francesco Maugeri
#	chiefofair				= { type = 9 id = 508010 } #Mario Ajmone Cat

#### Resource Reserves

    SpyInfo  = {  country = "RSI" NumberOfSpies = 3  } 
 
	capital = 419 #Rome
	manpower		= 150
	energy			= 1000
	metal			= 1000
	rare_materials	= 500
	oil				= 500
	supplies		= 500
	money			= 50
	transports		= 50

    ownedprovinces = {
		416 419
    }
    controlledprovinces = {
		416 419
    }
    nationalprovinces = {
		416 419
    }
    claimedprovinces = {}

diplomacy = {
	relation = { tag = ITA		value = -50		}
	relation = { tag = RSI		value = -120	}
	relation = { tag = UA0		value = -50		}
	relation = { tag = UA2		value = 180		}
}

techapps = {
#Infantry
1010  1020 1030 1040 1050 1060 1070 #Great War Infantry Division
1160  1170 1180 1190 1200 1210 1220 1230 1240 #Early Mountain Division
1910 1920 1930 1940 1950 1960 1970 1980 #Interbellum 1930 Supply 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 #1930 Cavalry Division 
1830 1840 1850 1860 #Engineers

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car 
2290 2300 2310 #Great War Heavy Field Artillery 
7600 7610 2620 2010 #SW Tank
2800 2450 #Early Static Anti-Air Artillery 
2810 #1918 AA Bde

#Industrial
5700 5710 5010 5020 #Mechanized Agriculture 
5810 5820 5050 5830 5060 #Manufactoring
5800 5080 5090 #Improved Construction Engineering
5310 54010 54020 54030 5316 5326 #Computers & cryptografi
5600 5610 5620 5630 #Medicine
5190 #Basic Oil Refining 

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter
4600 4610 4620 4630 4120 4130 #Early Bomber 
4300 4310 4320 4330 #Multirole fighter
4800 4810 4820 #ww1 strategic bomber
4740 4750 4760 4770 #SEAPLANES
4700 4710 #Naval Bomber
7290 7300 7310 #CAS

#Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 # Great War Land Doctrines (entente)
6010 6020 # Superior Firepower

#Air Doctrines 
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

#Naval
3010 3020 3030 3040 3050 3060 #Improved Destroyer
3110 3120 3130 3140 3150 3160 #Basic Light Cruiser 
3210 3220 3230 3240 3250 3260 #Improved Heavy Cruiser
3310 3320 3330 3340 #Interwar Battlecruiser 
3410 3420 3430 3440 3450 3456 3460 #Early Battleship 
3720 3730 3736 3740 3900 #Torpedo & ASW 18
3810 #Troopships
3610 3620 3630 3640 3650 #Short Range Submarine

#Naval Doctrines
8010 8020 8030 8040 8050 8060 8070 8080
82500 # Naval Logistics
8500 8510 8520 8550 8560 8570 # Naval Interdiction
8600 8610 # Trade Interdiction Submarine
}

#########  OOB (...)

landunit = {
	id = { type = 17470   id = 1 }
	name = "Zuavi"
	location = 419
	division = {
		id = { type = 17470 id = 2 }
		name = "1o Gruppo Guardie Svizzere"
		model = 4
		type = militia

	}
	division = {
		id = { type = 17470 id = 3 }
		name = "2o Gruppo Guardie Svizzere"
		model = 4
		type = militia
	}
}

}