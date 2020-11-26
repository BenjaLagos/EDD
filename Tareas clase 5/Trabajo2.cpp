#include <stdio.h>
#include <string.h>

//Estructuras
struct Cliente{
	char nombre[20];
	char apellido[20];
	long rut;
	int clave;
	char correo[30];
	char direccion[50];
	long telefono;	
	};
	
//prototipos
void ingresaCliente(Cliente * c);
	
int main(){
	
	
	
	return 0;
}

void ingresaCliente(Cliente * c){
	printf("ingrese nombre:\n");
	scanf("%s", c->nombre);
	printf("ingrese apellido:\n");
	scanf("%s", c->apellido);
	printf("ingrese rut:\n");
	scanf("%lu", &(c->rut));
	printf("ingrese clave:\n");
	scanf("%d", &(c->clave));
	printf("ingrese correo:\n");
	gets(c->correo);
	printf("ingrese direccion:\n");
	gets(c->direccion);
	printf("ingrese telefono:\n");
	scanf("%lu", &(c->telefono));
}
