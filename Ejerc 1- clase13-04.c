#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero,i;
	printf("Ingrese la cantidad de numeros que quiere que se muestren \n");
	scanf("%d",&numero);
	for(i=0; i<= numero; i++){
		printf("%d \n",i);
		printf("%d \n",-i);
	}
	
	
	return 0;
}

