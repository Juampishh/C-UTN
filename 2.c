#include <stdio.h>
#include <conio.h>

int main() {
	int hora,precioHora,salario;
	char nombre [100];
	printf ("ingrese su nombre \n");
	scanf("%s",&nombre);
	printf("ingrese el precio por hora\n");
	scanf("%d",&precioHora);
	printf("cuantas horas trabajo?\n");
	scanf("%d",&hora);
	if(precioHora && hora >0){
		if (hora <=40){
		salario = hora*precioHora;
		printf("El salario es %d\n",salario);
		}else{
			salario = ((40*precioHora)+ 1,5*precioHora*(hora-40));
			printf("Su salario es %d",salario);
		};
	}else{
		printf("Las horas o el precio son menores a 0");
	};
	return 0;
}

