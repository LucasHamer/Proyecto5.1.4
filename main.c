#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int i,acumvocal=0,sumavocal=0;

    for(i=0;i<5;i++)
    {
        printf("Ingrese 100 letras: ");
        scanf("%c",&letra);
        fflush(stdin);

        switch(letra)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                acumvocal++;
                sumavocal=acumvocal+sumavocal;
                break;
        }
    }
    printf("Cantidad de vocales: %d",acumvocal);

    return 0;
}
