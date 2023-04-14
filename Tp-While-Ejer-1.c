#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int lluvia, max = 0, min = 1000;
	float promedio,suma;
	int dia_max, dia_min;
	int i;
	for (i=1; i <= 7; i++){
		printf("Ingrese la cantidad de lluvia en milimetros del dia: %d \n", i);
		scanf("%d",&lluvia);
		
		//Buscamos el mayor
		if(lluvia > max){
			max = lluvia;
			dia_max= i;
		}
		//Buscamos el menor
		if(lluvia < min){
			min = lluvia;
			dia_min = i;
		}
		
		
		suma += lluvia; 
		
	}
	promedio = suma / 7;
	
	printf("El dia que mas llovio fue el dia:%d \n",dia_max);
	printf("Con un total de: %d \n",max);
	printf("El dia que menos llovio fue el dia:%d \n",dia_min);
	printf("Con un total de: %d \n",min);
	printf("El promedio de lluvia fue de: %.2f \n",promedio);
	return 0;
}

