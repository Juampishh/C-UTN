#include <stdio.h>

int main(int argc, char *argv[]) {
	int mult,i,i_2,num_usuario,cantidad_num,mult_2;
	for(i=1;i<=10;i++){
		mult = i * 7;
			
		printf(" %d",mult);
	}
	
	printf("\n-------------------------------------------------\n");
	for(i=10;i>=1;i--){
		mult = i * 7;
		
		printf(" %d",mult);
	}
	
	printf("\nIngrese la tabla con la que desea multiplicar: ");
	scanf("%d",&num_usuario);
	printf("Ingrese la cantidad de numeros que desee calcular: ");
	scanf("%d",&cantidad_num);
	for(i_2=1;i_2<=cantidad_num;i_2++){
		mult_2 = i_2 * num_usuario;
		
		printf(" %d",mult_2);
	}
	
	
	return 0;
}

