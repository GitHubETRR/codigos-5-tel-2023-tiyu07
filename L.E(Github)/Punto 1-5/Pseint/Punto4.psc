Algoritmo Punto4
	Escribir 'Escribir el resistor (ohm): '
	Leer r
	Escribir 'Escriba su reactancia (ohm): '
	Leer z
	Escribir 'Escribir su frecuencia (Hz): '
	Leer f
	Si z<0 Entonces
		c <- -1/(2*pi*f*z)
		Escribir 'La impedancia (Z) es: ',r,' ohm - J',-z,' ohm'
		Escribir 'El capacitor es: ',c,' f'
	SiNo
		l <- z/(2*pi*f)
		Escribir 'La impedancia (Z) es: ',r,' ohm + J',z,' ohm'
		Escribir 'El inductor es: ',l,' H'
	FinSi
FinAlgoritmo
