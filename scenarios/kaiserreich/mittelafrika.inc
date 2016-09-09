


country = {
    tag = CON  
ai = "kaiserreich\Mittelafrika.ai"

	puppet = GER
	

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 6
        free_market = 3
        professional_army = 7
        defense_lobby = 6
        interventionism = 4
    }

#### cabinet
headofstate = { type = 9 id = 574001 }
headofgovernment = { type = 9 id = 574002 }

#### Resource Reserves

	capital = 850


	manpower = 28
     
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

SpyInfo  = {  country = "CON" NumberOfSpies = 3  } 


    ownedprovinces =      {
		954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919
	        914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863
                859 860 885 886 908 882 883 884
              }


    controlledprovinces = {
		954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919
	        914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863
                859 860 885 886 882 883 884 908
	  }


    nationalprovinces =   {
		954 956 952 953 955 948 950 949 951 929 932 937 939 940 934 935 930 931 938 941 920 927 923 926 924 925 928 936 933 911 909 910 919
	        914 915 917 918 907 843 844 845 839 841 842 852 846 847 848 851 849 850 894 899 901 902 897 898 905 906 903 904 861 864 865 862 863
                859 860 885 886 882 883 884 908
	}

diplomacy = {
relation = {   tag =    	BEL	value = 		120	   }  
relation = {   tag =  	BLR	 value =		40	   }  
relation = {   tag =  	BUL	value = 		30	   }  
relation = {   tag =  	GER	 value =		200	   }  
relation = {   tag =  	LAT	value = 		40	   }  
relation = {   tag =  	LIT	 value =		60	   }  
relation = {   tag =  	POL	value = 		40	   }  
relation = {   tag =  	UKR	 value =		30	   }  
relation = {   tag =  	AUS	value = 		120	   }  
relation = {   tag =  	HUN	 value =		80	   }  
relation = {   tag =  	HOL	 value =		40	   }  
relation = {   tag =  	ITA	value = 		40	   }  
relation = {   tag =  	POR	value = 		-60	   }  
relation = {   tag =  	SPA	value = 		50	   }  
relation = {   tag =  	ENG	value = 		-50	   }  
relation = {   tag =  	FRA	value = 		-60	   }  
relation = {   tag =  	RSI	 value =		-50	   }  
relation = {   tag =  	AST	value = 		-20	   }  
relation = {   tag =  	CAN	value = 		-50	   }  
relation = {   tag =  	GUY	value = 		-60	   }  
relation = {   tag =  	NZL	 value =		-20	   }  
relation = {   tag =  	VIC	value = 		-40	   }  
relation = {   tag =  	EGY	 value =		40	   }  
relation = {   tag =  	LBY	value = 		50	   }  
relation = {   tag =  	OTT	 value =		50	   }  
relation = {   tag =  	SUD	 value =		40	   }  
relation = {   tag =  	TUN	value = 		30	   }  
relation = {   tag =  	ETH	value = 		40	   }  
relation = {   tag =  	LIB	 value =		50	   }  
relation = {   tag =  	SAF	value = 		20	   }  
relation = {   tag =  	BRA	 value =		-90	   }  
relation = {  tag =   	USA	value = 		-40	 }
relation = {   tag =  	JAP	value = 		-40	   }  
}


	
	techapps = {

#Infantry
1010 1020 1030 1040 1050 1060 1070 1080 #Infantry Up to 1926 Inf Division
1160 1170 1180 1190 1200 1210 1220 1230 #Mountain Inf. up to 1925 Mountain Division
13060 13070 13080 1310 1320 1330 1340 1350 1360 #Cavalry up to 1928 cavalry
1910 1920 1930 1940 1950 1960 1970 #Up to IW Supply 1924
1830 1840 1850 #Engineers

#Armour and artillery
2860 2870 2880 2020 #Armd Cars up to post ww1 armd car
2290 2300 2310 2900 2910 2920 #Artillery up to 1924
2800 2450 21180 21190 #1930 static AA
2810 2820 #1924 AA Bde
2620 2010 2630 2640 #1924 tanks

#Naval
3010 3020 3030 3040 3050 #Up to 1923 DD
3610 3620 3630 3640 #Up to IW SS
3900 #ASW Equipment
3720 3730 3736 3740 #Torpedoes

#Aircrafts
4500 4510 4520 4530 4540 4550 4010 #up to 1924 interceptor
4300 4310 4320 4330 #Up to 1926 Multi Role Fighter
4600 4610 4620 4630 4120 #Up to 1924 Tac Bomber
4740 4750 4760 4770 #Seaplanes up to 1924
4700 #1918 Naval Bomber
4290 #1926 Air Transport
7290 7300 7310 7320 #CAS

#Secret Weapons (for tanks only)
7600 7610 #Tank experiments

#Industrial
5700 5710 5010 5020 #Mechanized Agric
5800 5080 5090 #Construction engineering
5190 #Basic Oil refining
5810 5820 5050 5830 5060 #Manufacturing

#Land Doctrines
6500 6510 6530 6590 #Up to pre ww1 tech
6600 6610 6620 6650 6670 6680 6690 6700 6710 #ww1 offensive doctrines
6550 6910 #IW Doctrine
6010 6020 #Into superior firepower
14000 14010 #Hospitals

#Air Doctrines
9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 #ww1 Air Doctrines
27460 27470 9010 #IW doctrines

#Naval Doctrines (all ww1 doctrines learned by Germany)
8010 8020 8030 8040 8050 8060 8070 8080 #Theories
	}

#########  OOB (...)

landunit = {
 name = "Landswehr Ostafrika"
 location = 850
 id = { type = 22006  id = 1 }
 division = {
  id = { type = 22006  id = 2 }
  name = "1. Mittelafrikanische Division"
  type = infantry
  model = 7
  strength = 100 }

 division = {
  id = { type = 22006  id = 3 }
  name = "Askari Schützen Division"
  type = d_01
  model = 6
  strength = 100 }

 division = {
  id = { type = 22006  id = 4 }
  name = "Kampfgruppe 25"
  type = cavalry
  model = 7
  strength = 25
  extra = armored_car
  brigade_model = 3
}

}


landunit = {
 name = "Landswehr Südwestafrika"
 location = 883
 id = { type = 22006  id = 5 }

 division = {
  id = { type = 22006  id = 6 }
  name = "7. Mittelafrikanische Division"
  type = d_01
  model = 7
  strength = 100 }

 division = {
  id = { type = 22006  id = 7 }
  name = "Kampfgruppe 75"
  type = cavalry
  model = 7
  strength = 25
  extra = armored_car
  brigade_model = 3
}
}
landunit = {
 name = "Katanga Miliz"
 location = 902
 id = { type = 22006  id = 8 }

 division = {
  id = { type = 22006  id = 9 }
  name = "'Outer Heaven' Warlords"
  type = militia
  model = 3
  strength = 100
    }
}
landunit = {
 name = "Landswehr Kongo"
 location = 899
 id = { type = 22006  id = 10 }

 division = {
  id = { type = 22006  id = 11 }
  name = "3. Mittelafrikanische Division"
  type = d_01
  model = 7
  strength = 50 }
   
}
landunit = {
 name = "Ugandesische Stämme"
 location = 841
 id = { type = 22006  id = 12 }

 division = {
  id = { type = 22006  id = 13 }
  name = "Ugandesische Stämme"
  type = militia
  model = 3
  strength = 100
    }
}
landunit = {
 name = "Landswehr Äquatorialafrika"
 location = 927
 id = { type = 22006  id = 14 }

 division = {
  id = { type = 22006  id = 15 }
  name = "4. Mittelafrikanische Division"
  type = d_01
  model = 7
  strength = 100 }

 division = {
  id = { type = 22006  id = 16 }
  name = "Kampfgruppe 50"
  type = cavalry
  model = 7
  strength = 25
  extra = armored_car
  brigade_model = 3
    }
}
landunit = {
 name = "Landswehr Goldküste"
 location = 956
 id = { type = 22006  id = 17 }

 division = {
  id = { type = 22006  id = 18 }
  name = "6. Mittelafrikanische Division"
  type = d_01
  model = 7
  strength = 100 }
    
}

   
landunit = {
 name = "Landswehr Nyasaland"
 location = 863
 id = { type = 22006  id = 19 }


 division = {
  id = { type = 22006  id = 20 }
  name = "2. Mittelafrikanische Division"
  type = d_01
  model = 7
  strength = 100 }
    }

###### AIRFORCE

airunit = {
location = 850
base = 850
id = { type = 22006  id = 21 }
name = "Ostafrika Kommando"

 division = {
        id = { type = 22006  id = 22 }
 name = "I. Gruppe"
 type = tactical_bomber
 model = 5
 strength = 50
 }
 }

airunit = {
location = 882
base = 882
id = { type = 22006  id = 23 }
name = "Südwestafrika Kommando"

 division = {
        id = { type = 22006  id = 24 }
 name = "II. Gruppe"
 type = tactical_bomber
 model = 4
 strength = 25
 }
 }

airunit = {
location = 956
base = 956
id = { type = 22006  id = 25  }
name = "Goldküste Kommando"

 division = {
        id = { type = 22006  id = 26 }
 name = "III. Gruppe"
 type = tactical_bomber
 model = 4
 strength = 50
 }
 }

###### NAVY

navalunit = {
id = { type = 22006  id = 27 }
name = "Westafrika Flotte"
location = 894
base = 894

division = { id = { type = 22006  id = 30 } name = "DAS Götzen" type = light_cruiser model = 2 strength = 100 } 
division = { id = { type = 22006  id = 31 } name = "DAS Groß-Friedrichsburg" type = light_cruiser model = 2 strength = 100 } 
division = { id = { type = 22006  id = 32 } name = "DAS Denhardt" type = light_cruiser model = 2 strength = 100 } 
}

navalunit = {
id = { type = 22006  id = 33 }
name = "Ostafrika Flotte"
location = 850
base = 850

division = { id = { type = 22006  id = 36 } name = "DAS Prinz Adalbert" type = light_cruiser model = 2 strength = 100 } 
division = { id = { type = 22006  id = 37 } name = "DAS Stosch" type = light_cruiser model = 2 strength = 100 } 
division = { id = { type = 22006  id = 38 } name = "1. Torpedobootschwadron" type = destroyer model = 3 strength = 100 } 
}

transports = 10
escorts = 2

}