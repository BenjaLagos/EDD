#include <stdio.h>
#include <math.h>

struct Vector{
float x;
float y;
Vector(){x=0;y=0;}           //constructores
Vector(int a){x=a;y=a;}
Vector(int a, int b){x=a;y=b;}
};

float modulo(Vector v);
Vector sumaVectores(Vector v1, Vector v2);
float producto(Vector v3,Vector v4);

int main(){
    //Primera parte
    Vector a;
    a.x = 5;
    a.y = 2;

    float resultado = modulo(a);

    printf("Modulo Del Vector: %f\n", resultado);
    //Segunda Parte
    Vector b;
    b.x = 6;
    b.y = 3;
    
    Vector c;
    c.x = -2;
    c.y = 4;
    
    printf("El resultado de la suma de vectores es: (%f, %f)\n", sumaVectores(b,c).x, sumaVectores(b,c).y);
    //Tercera Parte
    Vector d;
    d.x = 8;
    d.y = 7;
    
    Vector e;
    e.x = -4;
    e.y = 3;
    
    printf("El producto punto de los vectores es: %f\n", producto(d,e));

    return 0;
    }

float modulo(Vector v1){
    return sqrt(pow(v1.x,2)+pow(v1.y,2));
}

Vector sumaVectores(Vector v1, Vector v2){
	Vector res;
	res.x = v1.x + v2.x;
	res.y = v1.y + v2.y;
	return res;
}

float producto(Vector v3,Vector v4){
	return ((v3.x*v4.x)+(v3.y*v4.y));
}
