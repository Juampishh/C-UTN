#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	int a;
	printf("Ingrese un numero \n");
	scanf("%d",&a);
	if(a%2==0){
		printf("El numero es par:%d \n",a);
		a=a+1;
	}else{
		printf("El numero ingresado no es par:%d\n",a);
		a=a+1;
		printf("Ahora es par:%d\n",a);
	};

	getch();

	return 0;
}

