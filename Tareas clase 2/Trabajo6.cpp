#include <stdio.h>

int main()
{
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    int cont = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }
    
    if ((cont > 2) || (num == 1))
    {
        printf("El numero no es primo\n");
    }
    else
    {
        printf("El numero es primo\n");
    }
    return 0;
}
