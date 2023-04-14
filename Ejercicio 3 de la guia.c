#include <stdio.h>
#include <conio.h>
int main() {
	char g;
	char t;
	printf("\ningrese un valor:");
	g=getchar();
	
	printf("\ningrese un valor:");
	scanf(" %c",&t);
	
	if  (g!=t && g!='a' && t!='a')
	{
		printf("\ntodo es diferente a todo");	
	}	
	else if ( g==t && g=='a'){
			printf("todos son iguales");
		} 
	else if (g!=t && t=='a'){
			printf("%c",g,"es diferente a %c",t,"y %c",t," es igual a A"); 
			
	}
	else if (g!=t && g=='a'){
			printf("%c",g,"es diferente a %c",t,"y %c",g," es igual a A");
			
		}
	getch();
	return 0;
}

