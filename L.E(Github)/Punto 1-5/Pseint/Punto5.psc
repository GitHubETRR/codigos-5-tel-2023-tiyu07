Algoritmo Punto5 
	
	Escribir "Escribe la tensión (Vrms):" 
	
	Leer vrms 
	
	Escribir "Escribe la corriente (Irms):" 
	
	Leer I 
	
	Escribir "Escribe la frecuencia (Hz):" 
	
	Leer f 
	
	Escribir "Escribe el Ángulo de la senoidal de V (deg):" 
	
	Leer AngV 
	
	Escribir "Escribe el Ángulo de la senoidal de I (deg):" 
	
	Leer AngI 
	
	ModZ <- vrms/I 
	
	AngZ <- (AngV-AngI)*pi/180 
	
	r <- ModZ*cos(AngZ) 
	
	x <- ModZ*sen(AngZ) 
	
	Si x<>0 Entonces 
		
		Si x<0 Entonces 
			
			c <- -1/(2*pi*f*x) 
			
			Escribir "Impedancia(Z): ",r," ohm - J",x," ohm" 
			
			Escribir "Capacitor de: ",c," f" 
			
		SiNo 
			
			l <- x/(2*pi*f) 
			
			Escribir "Impedancia (Z): ",r," ohm + J",x," ohm" 
			
			Escribir "Inductor de: ",l," H" 
			
		FinSi 
		
	SiNo 
		
		Escribir "Es un resistor de: ",r," ohm" 
		
	FinSi 
	
FinAlgoritmo 

 