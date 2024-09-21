#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Fact=0;

    for(No=7, Fact=1; No>=1;No--)
    {
        Fact=Fact*No;
    }
    printf("\n Given Factorial No is 7 = %d",Fact);

    getch();
    return 0;
}
