#include <stdio.h>

void num_mayor1(int *num1, int *num2);
void num_par(int *num3);
void num_mayor2(int *num4, int *num5, int *num6);
int suma_datos(int datos[60]);
void divisores(int *num8);
void numero_primo(int *num9);
void oracion_mayus(char oracion[60]);

int main()
{
    //Tarea 1
    int num1, num2;
    printf("Ingrese 2 numeros a continuacion\n");
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);
    num_mayor1(&num1, &num2);

    //Tarea 2
    int num3;
    printf("Ingrese un numero\n");
    scanf("%d", &num3);
    num_par(&num3);

    //Tarea 3
    int num4, num5, num6;
    printf("Ingrese el primer numero\n");
    scanf("%d", &num4);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num5);
    printf("Ingrese el tercer numero\n");
    scanf("%d", &num6);
    num_mayor2(&num4, &num5, &num6);

    //Tarea 4
    printf("Ingrese la cantidad de numeros que desee, cuando quiera terminar y sumarlos todos ingrese un 0\n");
    int num7 = 0;
    int datos[60];
    int i = 0;
    do
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num7);
        datos[i] = num7;
        i++;
    } while (num7 != 0);

    printf("La suma de sus datos es: %d\n", suma_datos(datos));

    //Tarea 5
    int num8;
    printf("Ingrese un numero para mostrar sus divisores\n");
    scanf("%d", &num8);
    divisores(&num8);

    //Tarea 6
    int num9;
    printf("Ingrese un numero\n");
    scanf("%d", &num9);
    numero_primo(&num9);

    //Tarea 7
    fflush(stdin);
    char oracion[60];
    printf("Ingrese una oracion\n");
    scanf("%[^\n]", oracion);

    oracion_mayus(oracion);

    return 0;
}

void num_mayor1(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        printf("El numero mayor es: %d\n", *num1);
    }
    else if (*num2 > *num1)
    {
        printf("El numero mayor es: %d\n", *num2);
    }
    else
    {
        printf("Los numeros son iguales\n");
    }
}

void num_par(int *num3)
{
    if (*num3 % 2 == 0)
    {
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }
}

void num_mayor2(int *num4, int *num5, int *num6)
{
    if ((*num4 > *num5) && (*num4 > *num6))
    {
        printf("El numero mayor es: %d\n", *num4);
    }
    else if ((*num5 > *num6) && (*num5 > *num4))
    {
        printf("El numero mayor es: %d\n", *num4);
    }
    else if ((*num6 > *num5) && (*num6 > *num4))
    {
        printf("El numero mayor es: %d\n", *num6);
    }
    else
    {
        printf("Los 3 numeros son iguales\n");
    }
}

int suma_datos(int datos[60])
{
    int suma = 0;
    int j = 0;
    do
    {
        suma += datos[j];
        j++;
    } while (datos[j] != 0);
    return suma;
}

void divisores(int *num8)
{
    for (int i = 1; i <= *num8; i++)
    {
        if (*num8 % i == 0)
        {
            printf("%d\n", i);
        }
    }
}

void numero_primo(int *num9)
{
    int cont = 0;
    for (int i = 1; i <= *num9; i++)
    {
        if (*num9 % i == 0)
        {
            cont++;
        }
    }

    if ((cont > 2) || (*num9 == 1))
    {
        printf("El numero no es primo\n");
    }
    else
    {
        printf("El numero es primo\n");
    }
}

void oracion_mayus(char oracion[60])
{
    for (int i = 0; i < 60; i++)
    {
        if ((oracion[i] >= 97) && (oracion[i] <= 122))
        {
            oracion[i] = oracion[i] - 32;
        }
    }
    printf("%s\n", oracion);
}
