#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int peso,tot,i,pez;
	printf("Ingrese la cantidad de kg de pescado que puede llevar\n");
	scanf("%d",&peso);
	do{
		printf("Ingrese el peso del pez capturado: ");
		scanf("%d",&pez);
		tot+=pez;
		if(tot > peso){
			printf("Excedio el limite\n");
		}

		
	} while(tot < peso);
	
	return 0;
}

