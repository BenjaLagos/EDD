#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero para mostrar sus divisores\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
