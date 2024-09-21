#include<stdio.h>
#include<conio.h>

int main()
{
    char sPt = '\0', ePt = '\0';

    printf("\n Enter Start Point : ");
    scanf("%c",&sPt);
    printf("\n Enter End Point : ");
    scanf(" %c",&ePt);

    printf("\n Given Letters From %c to %c => \n", sPt, ePt);

    while( sPt <= ePt )
    {
        printf("\n %c",sPt);
        sPt++;
    }

    printf("\n Thanks");

    getch();
    return 0;
}
