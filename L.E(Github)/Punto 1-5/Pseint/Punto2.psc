Algoritmo Punto2
	Escribir 'Bienvenido al programa que pasa de polar a cartesiano'
	Escribir 'Elige tu modulo:'
	Leer Z
	Si Z=0 Entonces
		Escribir 'No puede poner modulo 0'
	SiNo
		Escribir 'Ahora tu Ángulo:'
		Leer phi
		Si phi=0 Entonces
			phi <- 0
		SiNo
			Escribir 'Eligue si quieres el ángulo en rad (1) o en deg (2):'
			Leer angulo
			Si angulo=2 Entonces
				phi <- phi/180
			FinSi
		FinSi
		X <- Z*COS(phi*PI)
		Yu <- Z*SEN(phi*PI)
		Escribir 'X: ',X
		Escribir 'Y: ',Yu
		Escribir 'El resultado es: ',X,' + J',Yu
	FinSi
FinAlgoritmo
