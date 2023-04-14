#include <stdio.h>
#define PI 3.14
int main() {
	float d,perimetro;
	printf("ingrese el diametro de la circunferencia \n");
	scanf("%f",&d);
	perimetro= PI * d;
	if (d >0){
		printf("el resultado es:%.2f\n",perimetro);	
	}else{
		printf("no se puede realizar la operacion");
	}
	
	return 0;
}

