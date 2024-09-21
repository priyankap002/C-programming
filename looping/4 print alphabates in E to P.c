#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\n 0';

    printf("\n Given Letters from  E to P =>\n");
    ch='E' ;

    while(ch<='P')
    {
        printf("\n %c",ch);
        ch++;
    }

    getch();
    return 0;
}

