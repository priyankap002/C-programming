#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[7] = {0}, i=0;

    printf("\n The Null Values are : ");

    for(i = 0; i < 7; i++)
    {
        printf("\n Null value of %d = %d",(i+1),Num[i]);
    }

    getch();
    return 0;
}
