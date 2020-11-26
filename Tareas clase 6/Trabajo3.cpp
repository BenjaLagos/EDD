#include <stdio.h>
#include <math.h>
struct Punto{
	int x;
	int y;
	};
	
struct Recta{
	float m;
	float b;
	};
Punto pertenece(Recta r1, Recta r2);

int main(){
	Recta a;
	a.m = 4;
	a.b = 6;
	
	Recta b;
	b.m = 3;
	b.b = 8;
	
	if(a.m != b.m){
	printf("El punto de interseccion entre las 2 rectas es: (%d,%d)\n", pertenece(a,b).x, pertenece(a,b).y);
}else{
	printf("No existe punto de interseccion ya que ambas rectas son paralelas\n");
}
	return 0;
	}

Punto pertenece(Recta r1, Recta r2){
Punto p;
p.x=(r2.b-r1.b)/(r1.m-r2.m);
p.y=r1.m*p.x+r1.b;
return p;
}
