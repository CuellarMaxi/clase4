#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("ingrese numero \n");
    scanf("%d",&numero);
        if (numero>7)
        {
            printf("numero mayor que 7 \nEl numero es: %d",numero);
        }
        else
        {
            printf("numero menor que 7 \nEl numero es: %d",numero);
        }
    return 0;
}
