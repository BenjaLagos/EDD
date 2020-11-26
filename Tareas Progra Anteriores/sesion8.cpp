#include <stdio.h>
#include <string.h> 

int suma(int a, int b);
int comparacion(int a, int b);
void tabla(); 
int numero();
float conversor(float a, char unidad[10]);

int main(){
	
//funcion suma
    printf("**Actividad 1: Funcion Suma**\n");
    printf("ingrese 2 numeros a continuacion\n");
    int num1, num2;
	num1 = numero();
	num2 = numero();
    printf("El resultado es: %d\n", suma(num1,num2));
    
//Numero mayor
    printf("**Actividad 2: Numero Mayor**\n");
    printf("ingrese 2 numeros a continuacion\n");
    int num3, num4;
	num3 = numero();
	num4 = numero();
    printf("El numero mayor es: %d\n", comparacion(num3, num4));
    
//Tabla de multiplicar
    printf("**Actividad 3: Tabla de Multiplicar de un Numero**\n");
    printf("ingrese 2 numeros a continuacion para componer la tabla\n");
    tabla();
    
//Conversor de unidades 
    printf("**Actividad 5: Conversor de unidades**\n");
    float num5;
    char sentencia[10];
    
	printf("Ingrese el largo 'en cm' que desea convertir:\n");
	scanf("%f", &num5);
	fflush(stdin);                                                       //solucion a error de gets con residuos de procesos anteriores
	printf("Ingrese la medida a la que quiere convertir:\n");
	gets(sentencia);
	printf("La medida convertida es: %f\n", conversor(num5, sentencia));

return 0;
}


int suma(int a, int b){
	int resultado = a + b;
	return resultado;
	}

int comparacion(int a, int b){
	int comparacion;
	if(a > b){
	 comparacion = a;
	}else{
	 comparacion = b;
	}
	return comparacion;
	}
	
void tabla(){
	int a, b;
	a = numero();
	b = numero();
	printf("Tabla (%d,%d):\n",a ,b);
	for(int i = 0 ; i < b ; i++){
		int multiplicacion;
		multiplicacion = a*(i+1);
		printf("%d*%d=%d\n", a, i+1, multiplicacion);
	}
}	

int numero(){
	int num1;
	printf("Ingrese un numero entero:\n");
	scanf("%d", &num1);
	return num1;
}

float conversor(float a, char unidad[10]){
	
	float med_transformada;
	char milimetro[10] = "milimetro";
	char metro[10] = "metro";
	char kilometro[10] = "kilometro";
	
	if(strcmp(unidad, milimetro) == 0){
	med_transformada = a * 10;
	
	}else if(strcmp(unidad, metro) == 0){
	med_transformada = a / 100;	
	
	}else if(strcmp(unidad, kilometro) == 0){
	med_transformada = a / 100000;	
	
	}
	return med_transformada;
}
	
	
