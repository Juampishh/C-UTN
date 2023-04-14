#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero,cant;
	printf("Ingrese la cantidad de veces que quiere iterar: \n");
	scanf("%d",&cant);
	
	do{
		printf("%d",numero);
		numero ++;
	}while(numero<=cant);
	return 0;
}

