#include <stdio.h>
#include <conio.h>
#define TARIFA 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9
int main() {
	float gasto,tasa;
	printf("\n Gasto de corriente:");
	scanf("%f",&gasto);
	if(gasto<1000.0){
		tasa=TARIFA;
		printf("El gasto es menor a 1000 %.1f\n",gasto);
		printf("Le corresponde la tarifa %.1f\n",TARIFA);
	}
	else if(gasto>= 1000.0 && gasto<=1850){
		tasa=TARIFA2;
		printf("El gasto es mayor a 1000 pero menor a 1850  %.1f\n",gasto);
		printf("Le corresponde la tarifa %.1f\n",TARIFA2);
	}
	else{
		tasa=TARIFA3;
		printf("El gasto es mayor a 1850 %.1f\n",gasto);
		printf("Le corresponde la tarifa %.1f\n",TARIFA3);
	};
	
	return 0;
}

