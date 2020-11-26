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
Cliente copiaCliente(Cliente* src);
	
int main(){
	
	
	
	return 0;
}

Cliente copiaCliente(Cliente* src){
Cliente des;
strcpy(des.nombre, src->nombre);
strcpy(des.apellido, src->apellido);
des.rut = src->rut;
des.clave = src->clave;
strcpy(des.correo, src->correo);
strcpy(des.direccion, src->direccion);
des.telefono= src->telefono;
return des;
}

