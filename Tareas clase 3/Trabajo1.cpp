#include <stdio.h>

int main(){
	
	int *num1 = new int;
	int *num2 = new int;
	int *res = new int;
	printf("Ingrese 2 numeros enteros a continuacion:\n");
	printf("Ingrese el Primer numero\n");
	scanf("%d", num1);
	printf("Ingrese el Segundo numero\n");
	scanf("%d", num2);
	
	*res = *num1 + *num2;
	
	printf("El resultado de la suma de los 2 numeros es: %d\n", *res);
	
	delete num1;
	delete num2;
	delete res;
	
	return 0;
}
