/*Print all numbers to base 16 in lowercase*/

#include<unistd.h>

int main(void)
{
    char numbers[] =
    "0123456789abcdef";
    int i;

    i = 0;
    while(i<16)
    {
        putchar(numbers[i]);
        putchar('\n');
        i++;
    }
    return(0);
}
