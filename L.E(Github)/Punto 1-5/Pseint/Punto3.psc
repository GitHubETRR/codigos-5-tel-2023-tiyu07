Algoritmo Punto3 
	
	Escribir "Programa para suma de complejos" 
	
	Repetir 
		
		Escribir "Escribe X de Z1:" 
		
		Leer x1 
		
		Escribir "Escribe Y de Z1:" 
		
		Leer y1 
		
		Escribir "Escribe X de Z2:" 
		
		Leer x2 
		
		Escribir "Escribe Y de Z2:" 
		
		Leer y2 
		
		x3 <- x1+x2 
		
		y3 <- y1+y2 
		
	Mientras Que x3=0 Y y3=0 
	
	Repetir 
		
		Escribir "Ingrese 1 si quiere ver el resultado en polar o 2 si en cartesiano" 
		
		Leer m 
		
	Mientras Que m<>1 y m<>2 
	
	Segun m  Hacer 
		
		1: 
			
			Ms3 <- raiz(x3^2+y3^2) 
			
			Si x3>0 Entonces 
				
				AZ3 <- atan(y3/x3) 
				
				Si y3<0 Entonces 
					
					AZ3 <- 2*pi+Az3 
					
				FinSi 
				
			SiNo 
				
				Si x3=0 Entonces 
					
					Si y3>0 Entonces 
						
						AZ3 <- pi/2 
						
					SiNo 
						
						AZ3 <- 3*pi/2 
						
					FinSi 
					
				SiNo 
					
					AZ3 <- atan(y3/x3) 
					
					Si y3>=0 Entonces 
						
						AZ3 <- pi+AZ3 
						
					SiNo 
						
						AZ3 <- 3*pi/2+Az3 
						
					FinSi 
					
				FinSi 
				
			FinSi 
			
			Escribir 'Z3 (rad): ',Ms3,'e^(',AZ3,')' 
			
			Escribir 'Z3 (deg): ',Ms3,'e^(',AZ3*180/pi,')' 
			
		2: 
			
			Si y3>=0 Entonces 
				
				Escribir 'Z3: ',x3,' + ',y3 
				
			SiNo 
				
				Escribir 'Z3: ',x3,' - ',y3 
				
			FinSi 
			
	FinSegun 
	
FinAlgoritmo 
