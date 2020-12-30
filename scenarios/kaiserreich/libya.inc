


country = {
    tag = LBY  
	puppet = OTT
	flag_ext = _TRIPO
        name = LBY_TRI_NAME


	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 6
        free_market = 4
        professional_army = 5
        defense_lobby = 3
        interventionism = 3
    }


#### cabinet

  headofstate            = { type = 9 id = 576001 } # az-Zubayer bin Ahmad as-Sharif
  headofgovernment       = { type = 9 id = 576006 } # Sharif El Gariani
  foreignminister        = { type = 9 id = 576140 } # Mahmud al-Muntasir
  armamentminister       = { type = 9 id = 576017 } # Sharif El Gariani
  ministerofsecurity     = { type = 9 id = 576022 } # Ramadan Al-Swehli
  ministerofintelligence = { type = 9 id = 576024 } # Ramadan Al-Swehli
  chiefofstaff           = { type = 9 id = 576145 } # az-Zubayer bin Ahmad as-Sharif
  chiefofarmy            = { type = 9 id = 576146 } # az-Zubayer bin Ahmad as-Sharif
  chiefofnavy            = { type = 9 id = 576037 } # H.R.H. Taher Khimlani
  chiefofair             = { type = 9 id = 576039 } # Ali al-Umlan

#### Resource Reserves


	manpower = 28
	capital    = 761 # Benghazi

	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10



    ownedprovinces =      {
	752 750 753 751 757 776 755 758 756 754 759 777 774 762 773 775 770 772 769 766 760 763 761 764 768 767 765 771 
	 }
    controlledprovinces = { 
         752 750 753 751 757 776 755 758 756 754 759 777 774 762 773 775 770 772 769 766 760 763 761 764 768 767 765 771
	  }
    nationalprovinces =   {
	752 750 753 751 757 776 755 758 756 754 759 777 774 762 773 775 770 772 769 766 760 763 761 764 768 767 765 771 
	}

diplomacy = {

}

dormant_ministers = { 576100 576101 576102 576103 576104 576105 576106 576107 576108 576109 }
	
	techapps = {

#Aircraft
4500 4510 4520 4530 #Interwar Fighter 

#Armour & Artillery 
2860 #Interwar Armoured Car 
2290 #Light Field Artillery 
2800 #Early Static Anti-Air Artillery 
7600 7610 #SW Tank  

#Infantry
1910 1920 1930 1940 1950 1960 # Inf support 
1010 1020 1030 1040 1050 1060 1070 #Early Infantry Division  
1160  1170 1180 1190 1200 1210 1220 #Early Mountain Division
13060 13070 13080 1310 1320 1330 1340 #1916 Cavalry Division  

#Industrial
5700 #Early Agriculture

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
6010 # Firepower

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 
}

#########  OOB (...)

landunit = { 
        id = { type = 17355   id = 7012 } 
        name = "Army of Libya" 
        location = 750
        prevprov = 750
        home = 750

        division = { 
            id = { type = 23500 id = 14 } 
            name = "1. Piyade Firkasi" 
            model = 6
            brigade_model = 0 
            type = infantry 

            } 
        division = { 
            id = { type = 23500 id = 15 } 
            name = "2. Piyade Firkasi" 
            model = 6 
            brigade_model = 0 
            type = infantry 

            } 
        division = { 
            id = { type = 23500 id = 18 } 
            name = "3. Piyade Firkasi" 
            model = 6 
            brigade_model = 0 
            type = infantry 

            } 
        } 

}  