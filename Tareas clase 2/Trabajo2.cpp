#include <stdio.h>

int main()
{
    int num1;
    printf("Ingrese un numero\n");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }
    
    return 0;
}