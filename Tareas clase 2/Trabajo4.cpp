#include <stdio.h>
int main()
{

    printf("Ingrese la cantidad de numeros que desee, cuando quiera terminar y sumarlos todos ingrese un 0\n");
    int num = 0;
    int suma = 0;
    do
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num);
        suma += num;

    } while (num != 0);
    printf("La suma de todos los numeros es: %d\n", suma);

    return 0;
}
