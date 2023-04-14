#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int val,aux,resguardo,n,eleccion,i,suma,j;
	float aux2,n2,deprec,resg;
	printf("-----------------------------------------------------\n");
	printf("Programa para calcular de depreciacion de un objeto\n ");
	printf("-----------------------------------------------------\n");
	printf("Metodos\n");
	printf("--------------------\n");
	printf("Metodo linea recta (1)\n");
	printf("--------------------\n");
	printf("Metodo balance doblemente declinante (2)\n");
	printf("---------------------------------------\n");
	printf("Metodo de la suma de los digitos de los años (3)\n");
	printf("-----------------------------------------------------\n");
	printf("Salir del programa (4)\n");
	printf("-----------------------------------------------------\n");
	printf("Eliga el metodo por el cual quiera calcular la depreciacion del objeto \n");
	scanf("%d",&eleccion);
	switch (eleccion) {
	case 1:
		// código a ejecutar si la variable es igual a valor1
		printf("Ingrese el valor original del objeto\n");
		scanf("%d",&aux);
		printf("Ingrese el tiempo de vida que tiene el objeto\n");
		scanf("%d",&n);
		
		val = aux/n;
		for(i=1;i<=n;i++){
			resguardo = aux;
			deprec = aux/n;
			aux -= deprec;
			printf("La depreciacion de sufrio el objeto en el %d año hizo que el precio bajara a: %d$, Cuando su valor original era %d$\n",i,aux,resguardo);
			
		}
		
	
			
		
		break;
	case 2:
		// código a ejecutar si la variable es igual a valor2
		printf("Ingrese el valor original del objeto\n");
		scanf("%f",&aux2);
		printf("Ingrese el tiempo de vida que tiene el objeto\n");
		scanf("%f",&n2);
		for(i=1;i<=n2;i++){
			deprec = (2/n2)*aux2;
			aux2 -= deprec;
			printf("\n Año %d:  	Valor: $%.2f       	Depreciación: -$%.2f",i,aux2,deprec);
			
		}
		break;
	case 3:
		// código a ejecutar si la variable es igual a valor3
		printf("Ingrese el valor original del objeto\n");
		scanf("%d",&aux);
		printf("Ingrese el tiempo de vida que tiene el objeto\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				
				printf("%d",j);
			};
		};
		break;
	default:
		// código a ejecutar si la variable no coincide con ninguno de los casos anteriores
		printf("Usted ah salido del programa");
		
		break;
	}
	
	
	
	
	return 0;
}

