#include <stdio.h>

int main() {
	char v;
	printf("Ingrese alguna letra:");
	scanf(" %c",&v);
	if(v== 'a' || v== 'e' || v== 'i' || v== 'o' || v== 'u' ){
		printf("El caracter ingresado es una vocal\n");
		printf("Lo que usted ingreso es: %c",v);
	}
	else{
		printf("No ingreso una vocal\n");
		printf("Lo que usted ingreso es: %c",v);
	};
	return 0;
}

