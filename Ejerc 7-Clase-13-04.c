#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int dolares = 10, edad = 11;
	
	do{
		dolares = dolares * 2;
		edad++;
		printf("Dinero recibido por cada cumplea�os: %d = %d$ \n",edad,dolares);
		
	} while(dolares < 1000);
	printf("La edad de la ni�a cuando se le de la ultima cantidad sera de: %d a�os \n",edad);
	printf("La cantidad de dolares recibida sera de:  %d$",dolares);
	return 0;
}

