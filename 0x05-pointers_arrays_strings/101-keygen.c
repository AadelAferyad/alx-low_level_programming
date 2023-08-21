#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords 101-crackme
 *
 * Return: Always 0
 */
int main(void) 
{

    int sum=0;
    char random;
    
    srand(time(NULL)); 
    while(sum <= 2772)
    {
        random= rand() % 128;
        sum += random;
        putchar(random);
    }
    putchar(2772 - sum);

    return (0);
}
