#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int L, W, S;
int main(void)
{
    string text = get_string("texto: ");

    for (int i = 0; i < strlen(text); i++)
    {
        L += (bool)isalpha(text[i]);
        W += (bool)isspace(text[i]) && !(bool)isspace(text[i + 1]);
        S += text[i] == '.' || text[i] == '!' || text[i] == '?';
    }
    W++;
    double AL = L * 100 / W;
    double AS = S * 100 / W;
    int index = round((0.0588 * AL) - (0.296 * AS) - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    printf("Grade %i\n", index);
}