#include<stdio.h>
#include<conio.h>

int main()
{
    char ch  = '0' ;

    printf("\n Given Letters  from range  V to F=> ");

    ch='V' ;

    while(ch >= 'F')
    {
        printf("\n %c ",ch);
        ch--;
    }


    getch();
    return 0;
}

