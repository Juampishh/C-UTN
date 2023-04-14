#include <stdio.h>
#include <conio.h>
int main() {
	int a,b,c;
	printf("Ingrese el valor de a:");
	scanf("%d",&a);
	printf("Ingrese el valor de b:");
	scanf("%d",&b);
	printf("Ingrese el valor de c:");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("A es el mayor");
	}else if(b>a && b>c){
		printf("B es el mayor");
	}else if(c>a && c>b){
		printf("C es el mayor");
	}else{
		printf("Los tres son iguales");
	}
	return 0;
}

