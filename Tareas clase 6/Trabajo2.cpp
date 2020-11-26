#include <stdio.h>
#include <math.h>
struct Punto{
	float x;
	float y;
	};
	
struct Recta{
	float m;
	float b;
	};
	
bool perteneceRecta(Recta r, Punto p);
int main(){
	Punto a;
	a.x = 5;
	a.y = 23;
	
	Recta b;
	b.m = 3;
	b.b = 8;
	
	if(perteneceRecta(b, a)){
		printf("El punto si pertenece a la recta.\n");
		} else {
			printf("El punto NO pertenece a la recta.\n");
			}
			
	return 0;
	}
	
bool perteneceRecta(Recta r, Punto p){
	return (p.y == r.m*p.x + r.b);
	}
