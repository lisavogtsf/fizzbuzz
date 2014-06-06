// testing coding challenge
//
// Lisa Vogt, lisavogt.sf@gmail.com
//
// implement "fizz buzz"
// multiples of 3, print fizz
// multiples of 5, print buzz
// multiples of both: print fizz buzz

#include <stdio.h>

#define TIMES 30

int main(void)
{

    for (int i = 1; i <= TIMES; i++)
    {
        printf("%i:", i);
        if (i % 3 == 0)
            printf("fizz ");
        if (i % 5 == 0)
            printf("buzz");
        printf("\n");

    }


}
