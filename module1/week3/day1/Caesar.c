#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 1 || argc > 2)
    {
        printf("Usage: ./Caesar key\n");
        return 0;
    };

    for (int i = 0; i < strlen(argv[1]); i++)
    {

        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./Caesar key\n");
            return 0;
        };
    };

    string txt = get_string("plaintext:");

    int key = atoi(argv[1]);
    char Crip;
    int Ascii;

    printf("ciphertext:");

    for (int i = 0; i < strlen(txt); i++)
    {

        Ascii = txt[i];

        if (txt[i] != ' ')
        {

            if (isalpha(txt[i]) != 0)
            {
                if (Ascii >= 97 && Ascii <= 122)
                {
                    if ((Ascii + key) > 122)
                    {
                        Crip = (Ascii + key) - 26;
                        printf("%c", Crip);
                    }
                    else
                    {
                        Crip = Ascii + key;
                        printf("%c", Crip);
                    }
                }
                else
                {
                    if ((Ascii + key) > 90)
                    {
                        Crip = (Ascii + key) - 26;
                        printf("%c", Crip);
                    }
                    else
                    {
                        Crip = Ascii + key;
                        printf("%c", Crip);
                    }
                }
            }
            else
            {
                printf("%c", txt[i]);
            }
        }
        else
        {
            printf("%c", txt[i]);
        }
    }

    printf("\n");
}