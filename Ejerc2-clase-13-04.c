#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,num,acum;
	 printf("Ingrese el numero que desea saber si es perfecto \n");
	 scanf("%d",&num);
	 
	 for(i=1; i < num; i++){
		 if (num % i == 0){
			 acum+=i;
		 }
	 }
	if(num == acum){
		 printf("El numero %i es Perfecto",num);
	 }else{
		 printf("El numero %i no es Perfecto",num);
	 }
	return 0;
}

