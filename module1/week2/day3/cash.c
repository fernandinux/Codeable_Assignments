#include <cs50.h>
#include <stdio.h>
#include <math.h>
float n;
int S = 0;
int main(void)
{
    do
    {
        n = get_float("Change owed:\n");
    } while (n < 0);

    int N = round(n * 100);

    if (N >= 25)
    {
        int A = N / 25;
        S = S + A;
        N = N % 25;
    }
    if (N >= 10)
    {
        int B = N / 10;
        S = S + B;
        N = N % 10;
    }
    if (N >= 5)
    {
        int C = N / 5;
        S = S + C;
        N = N % 5;
    }
    printf("%i\n", S + N);
}