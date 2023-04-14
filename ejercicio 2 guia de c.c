#include <stdio.h>
#include <conio.h>
int main() {
	int a,b,c;
	printf("Ingrese el valor de a:\n");
	scanf("%d",&a);
	printf("Ingrese el valor de b:\n");
	scanf("%d",&b);
	printf("Ingrese el valor de c:\n");
	scanf("%d",&c);
	if(a==b && b==c){
		printf("Los tres son iguales");
	}
	else if(a==b){
		printf("A es igual a B");
	}
	else if(b==c) {
		printf("B es igual a C");
	}
	else{
		printf("Ninguno es igual");
	};
	getch();
	
	return 0;
}

