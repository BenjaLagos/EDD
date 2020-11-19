#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Ingrese 2 numeros a continuacion\n");
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El numero mayor es: %d\n", num1);
    }
    else if (num2 > num1)
    {
        printf("El numero mayor es: %d\n", num2);
    }
    else
    {
        printf("Los numeros son iguales\n");
    }
    return 0;
}
