#include <stdio.h>

int main(int argc, char *argv[]) {
	int num,suma,tot;
	char control;
	printf("Ingrese un numero entero: \n");
	scanf("%d",&num);
	printf("¿Desea ingresar otro numero (s/n)?\n");
	scanf(" %c",&control);
	do{
		suma +=num;
		printf("Ingrese otro numero entero: \n");
		scanf("%d",&num);
		printf("¿Desea ingresar otro numero (s/n)?\n");
		scanf(" %c",&control);
		suma+=num;
		
	} while(control=='s');
	printf("El total de la suma es: %d", suma);
	return 0;
}

