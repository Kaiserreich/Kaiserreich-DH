


country = {
    tag = EGY  
 
        ai = "kaiserreich\Egypt.ai"
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 6
        free_market = 5
        professional_army = 5
        defense_lobby = 5
        interventionism = 6
    }

#### cabinet

	headofstate = { type = 9 id = 512208 } #Aziz Ali al-Misri
	headofgovernment = { type = 9 id = 512211 } #Aziz Ali al-Misri
 	foreignminister = { type = 9 id = 512252 } #Mahmoud Fawzi
 	armamentminister = { type = 9 id = 512047 } #Mohamed Mahmoud Pasha
 	ministerofsecurity = { type = 9 id = 512069  } #Makaram Ebeid
 	ministerofintelligence = { type = 9 id = 512071  } #Mohammed al Fransawi
	chiefofstaff = { type = 9 id = 512083 } #Aziz Ali al-Misri
	chiefofarmy = { type = 9 id = 512092 } #Mohamed Saleh Harb
	chiefofnavy = { type = 9 id = 512143 } #Ahmed Hassanein
	chiefofair = { type = 9 id = 512103 } #Victor Hubert Tait

#### Resource Reserves
	manpower = 100
     	capital = 787
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

        SpyInfo  = {  country = "EGY" NumberOfSpies = 3  } 

    ownedprovinces =      {
			#EGYPT
		781 782 780 778 785 787 784 783 789 800 799 779 792 788 790 786 791 796 793 801 794 797 795 798 802 
		 #SUDAN
		 804 803 813 805 814 811 810 807 812 808 809 806
	 }
    controlledprovinces = {
			#EGYPT
		781 782 780 778 785 787 784 783 789 800 799 779 792 788 790 786 791 796 793 801 794 797 795 798 802 
		    #SUDAN
			803 804 813 805 814 811 810 807 812 808 809 806

	  }
    nationalprovinces =   {
			#EGYPT
		781 782 780 778 785 784 783 787 789 800 799 779 792 788 790 786 791 796 793 801 794 797 795 798 802 
          #Sinai and The Canal Zone     
			   900 1007 1006 1004 1005
                 
	}


diplomacy = {

}


	
	techapps = {

#Aircraft
4500 4510 4520 4530 4540 4550 4010 4020 #Early Fighter   
4600 4610 4620 4630 4120 #Interwar Bomber
4300 4310 4320 4330 #Multirole fighter
4800 4810 #ww1 strategic bomber
4700 4710 #ww1 navalbomber
7290 7300 7310 7320 #1922 CAS

#Armour & Artillery
2860 2870 2880 2020 #Basic Armoured Car
2290 2300 2310 2900 #Great War Heavy Field Artillery 
7600 7610 #SW Tank
2800 2450 21180 21190 #Early Static Anti-Air Artillery 
2810 2820 2510 #Basic Anti-Air Artillery Brigade 

#Infantry
1010  1020 1030 1040 1050 1060 1070 1080 #1926 Infantry Division
1910 1920 1930 1940 1950 1960 #Interbellum 1930 Supply
13060 13070 13080 1310 1320 1330 1340 1350 #Great War Cavalry Division
1830 1840 #Engineers


#Industrial
5810 5820 5050 # Production
5700 5710 5010 #Modern Agriculture  
5800 5080 #Improved Construction Engineering
5600 #Medicine
5190 # Basic oil conversion


# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
14000 14010

#Naval
3010 3020 3030 3040 #GW DD
3610 #Dive Boat
3810 #Troopships

#Naval Doctrines
8010 8020 8040 8050 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

	}
deactivate = { 6010 6210 6570 6560 6390 } 

dormant_ministers = { #German Advisors
					  512176 512177 512178 512179 512180
					  #LEB & SYR
					  512181 512182 512183 512184 512185 512186 512187 512188 512189 512190 512191 512192 512193 512194 512195
					  #IRQ
					  512196 512197 512198 512199 512200 512201 512202 512203 512204 512205 512206 512207 }
dormant_leaders = { #German Advisors
					512060 512061 512062 512063 512064
					#LEB & SYR
					512065 512066 512067 512068 512069 512070 512071 512075 512076 512077 512078 512079 512080 512081 512082 512083
					#IRQ
					512085 512086 512087 512088 512089 512090 512091 512092 512093 512094 512095 512096 }
dormant_teams = {  #German Assistance
				   10807 10830 }

#########  OOB (...)

### Army

landunit = {
location = 787
name = "II. Corps al-Misr"
  id = { type = 13848 id = 13 }

division = {
  id = { type = 13848 id = 14 }
  type = infantry
  model = 6
  strength  = 80
  name = "al-Mushati al-1i"
  extra = engineer
  brigade_model = 1
  }

division = {
  id = { type = 13848 id = 15 }
  type = cavalry
  model = 6
  strength  = 80
  name = "Sipahis al-1i"
  extra = artillery
  brigade_model = 3
  }
}

landunit = {
location = 780
name = "I. Corps al-Misr"
  id = { type = 13848 id = 16 }

division = {
  id = { type = 13848 id = 17 }
  type = infantry
  model = 6
  strength  = 60
  name = "al-Mushati al-2i"
  }

division = {
  id = { type = 13848 id = 18 }
  type = infantry
  model = 6
  strength  = 60
  name = "al-Mushati al-3i"
  }

division = {
  id = { type = 13848 id = 27 }
  type = cavalry
  model = 6
  strength  = 40
  name = "Sipahis al-2i"
  extra = armored_car
  brigade_model = 3
  }
}

landunit = {
  location = 786
  name = "III. Corps al-Misr"
  id = { type = 13848 id = 19 }

division = {
  id = { type = 13848 id = 20 }
  type = infantry
  model = 6
  strength  = 60
  name = "al-Mushati al-4i"
  }

division = {
  id = { type = 13848 id = 21 }
  type = cavalry
  model = 6
  strength  = 60
  name = "Sipahis al-3i"
  }
}

landunit = {
  location = 810
  name = "IV. Corps al-Misr"
  id = { type = 13848 id = 22 }

division = {
  id = { type = 13848 id = 23 }
  type = infantry
  model = 6
  strength  = 60
  name = "al-Mushati al-5i"
  }
}

landunit = {
  location = 788
  name = "V. Corps al-Misr"
  id = { type = 13848 id = 24 }

division = {
  id = { type = 13848 id = 25 }
  type = militia
  model = 4
  strength  = 40
  name = "al-Milishiya al-1i"
  }

division = {
  id = { type = 13848 id = 26 }
  type = militia
  model = 4
  strength  = 40
  name = "al-Milishiya al-2i"
  }
}

landunit = {
id = { type = 13848 id = 28 }
name = "VI. Corps al-Misr"
location = 789
   division = {
    id = { type = 13848 id = 29 }
    name = "al-Mushati al-6i"
    strength = 50
    type = garrison
	model = 4
}
}


### Navy
navalunit = {
    name = "Royal Egyptian Fleet"
    id = { type =  13848        id =  1    }
    location =   789       ####
    base =    789      

    division = { id = { type = 13848    id =   2     } name = "Al Ishkandariyah" type = heavy_cruiser model = 2  }
    division = { id = { type = 13848    id =   3     } name = "Al Fayyum" type = heavy_cruiser model = 2  }
    division = { id = { type = 13848    id =   4     } name = "Ibrahim Pasha" type = heavy_cruiser model = 2    }
    division = { id = { type = 13848    id =   5     } name = "Muhammed Ali Pasha" type = light_cruiser model = 2    }
    division = { id = { type = 13848    id =   6     } name = "Sa'id Pasha" type = light_cruiser  model = 2   }
    division = { id = { type = 13848    id =   7     } name = "Al Qahirah" type = light_cruiser model = 1    }
    division = { id = { type = 13848    id =   8     } name = "Aswan" type = light_cruiser model = 1    }
    division = { id = { type = 13848    id =   9     } name = "Asyut" type = light_cruiser model = 1    }
    division = { id = { type = 13848    id =   10    } name = "1. Filotilla Torpido" type =  destroyer  model = 2   }
    division = { id = { type = 13848    id =   11    } name = "2. Filotilla Torpido" type =  destroyer  model = 2  }
}

### Airforce
airunit =
  { id       = { type = 13848 id = 30 }
    name     = "1. Al Quwwat Il Misriya"
    location = 787
    base     = 787
    division =
    { id       = { type = 13848 id = 31 }
      name     = "1. REAF Fighter Group"
      strength = 40
      type     = multi_role
      model    = 3
    }
    
  }
}