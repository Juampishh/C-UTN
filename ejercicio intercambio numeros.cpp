#include <stdio.h>
#include <conio.h>
#define PI 3.141592654
#define TEXTO "Esto es una prueba"

int main() 
{
	int g,h,i;

	printf("Ingrese el valor de g\n");
	scanf("%i",&g);
	printf("Ingrese el valor de h\n");
	scanf("%i",&h);
	printf("El valor original de g es %i\n",g);
	printf("El valor original de h es %i\n",h);
	i=g;
	printf("\nEl nuevo valor de g es:%i",g=h);
	printf("\nEl nuevo valor de g es:%i",h=i);
	getch();
	return 0;
}
