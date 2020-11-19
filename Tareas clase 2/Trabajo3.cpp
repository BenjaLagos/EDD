#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero\n");
    scanf("%d", &num3);
    if ((num1 > num2) && (num1 > num3))
    {
        printf("El numero mayor es: %d\n", num1);
    }
    else if ((num2 > num3) && (num2 > num1))
    {
        printf("El numero mayor es: %d\n", num2);
    }
    else if ((num3 > num2) && (num3 > num1))
    {
        printf("El numero mayor es: %d\n", num3);
    }
    else
    {
        printf("Los 3 numeros son iguales\n");
    }
    return 0;
}
