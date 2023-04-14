#include <stdio.h>
#include <conio.h>
int main() {
	int a,b,opcion,suma,resta,division,multiplicacion;
	printf("ingrese un numero:");
	scanf("%d",&a);
	printf("ingrese un numero:");
	scanf("%d",&b);
	printf("1-SUMA 2-RESTA 3-MULTIPLICACION 4-DIVISION 5-SALIR:");
	scanf("%d",&opcion);
	if (opcion ==1)
	{
		suma=a+b;
		printf("el resultado es:%d",suma);
		
	}else if (opcion ==2)
	{
		resta=a-b;
		printf("el resultado es:%d",resta);
		
	}
	else if (opcion ==3)
	{
		multiplicacion=a*b;
		printf("el resultado es:%d",multiplicacion);
		
	}
	else if (opcion==4)
	{
		division= a/b;
		printf("el resultado es:%d",division);
	}	
	else 
		{
		printf("fin del programa");
		}
	return 0;
}

