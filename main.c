#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("ingrese numero \n");
    scanf("%d",&numero);
        if (numero>5)
        {
            printf("numero mayor que 5 \nEl numero es: %d",numero);
        }
        else
        {
            printf("numero menor que 5 \nEl numero es: %d",numero);
        }
    return 0;
}
