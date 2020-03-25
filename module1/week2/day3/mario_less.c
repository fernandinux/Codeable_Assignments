#include <stdio.h>
#include <cs50.h>
int n;
int main(void)
{
    do
    {
        n = get_int("Height:\n");
    } while (n < 0 || n > 8);

    for (int i = 1; i <= n; i++)
    {
        /* print lines*/
        for (int j = 1; j <= n - i; j++)
        {
            /* print space */
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            /* print hastag */
            printf("#");
        }
        printf("\n");
    }
}