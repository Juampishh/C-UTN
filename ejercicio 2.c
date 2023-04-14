#include <stdio.h>
#include <conio.h>
#define PI 3.141592654
#define TEXTO "Esto es una prueba"

int main() 
{
	int g,h,i;
	int a,b,c;
	char f;
	printf("Ingrese un caracter\n");
	f=getchar();
	printf("El caracter ingresado es: %c",f);
	g=2;
	h=3;
	i=g;
	printf("\nEl valor original de g es:%d",g);
	printf("\nEl valor original de h es:%d",h);
	printf("\nEl nuevo valor de g es:%d",g=h);
	printf("\nEl nuevo valor de h es:%d",h=i);
	
	printf("\nIngrese los valores para realizar la operacion resta\n");
	printf("Ingrese el primer valor:");
	scanf("%i",&a);
	printf("Ingrese el segundo valor:");
	scanf("%i",&b);
	c=a-b;
	printf("\n El resultado de la resta es %i",c);
	getch();
	return 0;
}

