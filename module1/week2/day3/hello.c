#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("¿Cuàl es tu nombre?\n");
    printf("Hola, %s\n", name);
}