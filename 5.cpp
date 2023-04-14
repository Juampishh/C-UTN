#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
	float a,b,c,total,total2;
	printf("Ingrese el valor de a\n");
	scanf("%f",&a);
	printf("Ingrese el valor de b\n");
	scanf("%f",&b);
	printf("Ingrese el valor de c\n");
	scanf("%f",&c);
	total=(-b+sqrt((pow(b,2)-4*a*c)))/2*a;
	total2=(-b-sqrt((pow(b,2)-4*a*c)))/2*a;
	if(total>0){
		printf("\nla raiz x1 es %.2f:",total);
	}
	else{
		printf("\nLa raiz x1 es negativa");
	};
	if(total2>0){
		printf("\nla raiz x2 es %.2f:",total2);
	}
	else{
		printf("\nLa raiz x2 es negativa");
	};
	getch();
	return 0;
}

