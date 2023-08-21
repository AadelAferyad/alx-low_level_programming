#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL)); 

    int random, sum=0;
    while(sum <= 2772)
    {
        random=rand()%128;
        sum+=random;
        putchar(random);
    }
    putchar(2772 - sum);

    return 0;
}
