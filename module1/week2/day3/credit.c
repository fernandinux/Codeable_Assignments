#include "stdio.h"
#include <cs50.h>
char str[16];

int main(void)
{

    long numeros = get_long("Ingresa tu numero de tarjeta > ");
    if (numeros / 1000000000000 < 0.2 || numeros / 10000000000000000 > 1)
    {
        printf("INVALID\n");
        return 0;
    }

    sprintf(str, "%li", numeros);

    int n = 0, suma = 0;

    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            n = (str[i] - '0') * 2;
            if (n >= 10)
                n = (n - 10) + 1;
        }
        else
        {
            n = str[i] - '0';
        }
        suma = suma + n;
    }

    if (suma % 10 == 0)
    {
        if (str[0] == '4')
        {
            printf("VISA\n");
            return 0;
        }
        if ((str[0] == '3') && (str[1] == '4' || str[1] == '7'))
        {
            printf("AMEX\n");
            return 0;
        }
        if ((str[0] == '5') && (str[1] == '1' || str[1] == '2' || str[1] == '3' || str[1] == '4' || str[1] == '5'))
        {
            printf("MASTER CARD\n");
            return 0;
        }
    }

    printf("INVALID\n");
    return 0;
}
