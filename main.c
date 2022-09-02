#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number  ;
    while (1)
    {


    printf("please enter the number you want to check \n");
    scanf("%d", &number) ;

    if (number % 2 == 0)
    printf("even number \n ") ;
    else
    printf("odd number \n ") ;
    }
    return 0;
}
