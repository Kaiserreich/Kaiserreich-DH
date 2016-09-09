###########################
#Country definition for PRI
###########################
province = { id = 1191 naval_base = 6 air_base = 4 anti_air = 1 } 

##################
#Country main data
##################

country = {
    tag = PRI
    puppet = JAP

ai = "kaiserreich\Transamur.ai"
    policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        free_market = 5
        freedom = 6
        professional_army = 6
        defense_lobby = 7
        interventionism = 8
    }

headofstate = { type = 9 id = 527001  }
headofgovernment = { type = 9 id = 527002 }

capital = 1191

ownedprovinces =      { 1191 1196 1193 1192 1195 1194 1190 1185   }

controlledprovinces = { 1191 1196 1193 1192 1195 1194 1190 1185  }

nationalprovinces =   { 1191 1196 1193 1192 1195 1194 1190 1185  }

oil =	1000	
supplies = 5000
 free = { ic = 10 supplies = 35 oil = 10 }

#########  OOB (...)

landunit = {
 	id = { type = 17343 id = 1 }
 	name = "2y Transamur Korpus"
 	location = 1185

  		division = {
   		id = { type = 17343 id = 2 }
   		name = "1. Strelkovaya Diviziya"
   		strength = 80
   		type = infantry
		model = 5
   		extra = artillery 
		brigade_model = 5
             	}
  		
		division = {
   		id = { type = 17343 id = 3 }
   		name = "5. Strelkovaya Diviziya"
   		strength = 80
		model = 5
   		type = infantry
             	}

  		division = {
   		id = { type = 17343 id = 4 }
   		name = "3. Strelkovaya Diviziya"
   		strength = 80
		model = 5
   		type = infantry
   		extra = artillery 
		brigade_model = 3
		}
		}


	landunit = {
 	id = { type = 17343 id = 5 }
 	name = "1y Transamur Korpus"
 	location = 1191

  		division = {
   		id = { type = 17343 id = 6 }
   		name = "2. Strelkovaya Diviziya"
   		strength = 100
   		type = infantry
		model = 5
             	}

  		division = {
   		id = { type = 17343 id = 7 }
   		name = "4. Strelkovaya Diviziya"
   		strength = 80
   		type = infantry
		model = 5
             	}

  		division = {
  		id = { type = 17343 id = 9  }
   		name = "1. Kavaleriyskaya  Diviziya"
   		strength = 80
   		type = cavalry
		model = 5
		extra = armored_car
		brigade_model = 1
             	}
        	}


airunit = {
 	id = { type = 17343 id = 13 }
 	name = "I. Transamur Aviatsionnyi Korpus"
 	location = 1191
	base = 1191

                division =
    { id       = { type = 17343 id = 23 }
      name     = "1. IAD"
      strength = 100
      type     = interceptor
      model    = 4
    }
          	}

navalunit = {
id = { type = 17343 id = 15 }
name = "Zaamurskiy Flot"
location = 1191 #Vladivostok
base = 1191

  division = {   id = { type = 17343 id = 24 }   name = "Vladivostok"  type = light_cruiser model = 3 }
  division = {   id = { type = 17343 id = 16 }   name = "1. Flotiliya Esmintsev"  type = destroyer model = 3 }
  division = {   id = { type = 17343 id = 17 }   name = "1. Flotiliya Podlodok"  type = submarine model = 2 }
  division = {   id = { type = 17343 id = 18 }   name = "2. Flotiliya Podlodok"  type = submarine model = 2 }
  division = {   id = { type = 17343 id = 19 }   name = "3. Flotiliya Podlodok"  type = submarine model = 2 }
  division = {   id = { type = 17343 id = 20 }   name = "4. Flotiliya Podlodok"  type = submarine model = 1 }
  division = {   id = { type = 17343 id = 21 }   name = "5. Flotiliya Podlodok"  type = submarine model = 1 }
  division = {   id = { type = 17343 id = 22 }   name = "1. Transportnaya Flotiliya" type = transport model = 1 }
 }

}  