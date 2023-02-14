#include <stdio.h>

/*
*main - Prints the alphabet in lowercase then in uppercase.
*
*return: always 0.
*/
int main(void)
{
    char letter;

    for (letter='a';letter<='z';letter++)
    putchar(letter);

    putchar('\n');

     for (letter='A';letter<='Z';letter++)
    putchar(letter);

    return(0);
}

}