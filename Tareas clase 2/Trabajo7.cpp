#include <stdio.h>
#include <string.h>

char oracion[60];
int main()
{
	printf("Ingrese una oracion\n");
	scanf("%[^\n]", oracion);
	fflush(stdin);

	for (int i = 0; i < 60; i++)
	{
		if ((oracion[i] >= 97) && (oracion[i] <= 122))
		{
			oracion[i] = oracion[i] - 32;
		}
	}
	printf("%s\n", oracion);

	return 0;
}
