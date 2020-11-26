#include <stdio.h>
#include <math.h>

struct Punto{
float x;
float y;
};

float distancia(Punto p1,Punto p2);

int main(){

    Punto a,b;
    a.x = 5;
    a.y = 2;
    b.x = 4;
    b.y = 3;

    float resultado = distancia(a,b);

    printf("Distancia entre los puntos: %f\n", resultado);

    return 0;
    }

float distancia(Punto p1,Punto p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }
