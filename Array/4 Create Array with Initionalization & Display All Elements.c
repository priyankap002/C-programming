#include<stdio.h>>
#include<conio.h>

int main()
{
    int Number[8]={12,23,34,45,56,67,78,89},i=0;

    printf("\n The initial Value of 8 Numbers are: ");

    for(i=0;i<8;i++)
    {
        printf("\n Number of Initialized Value is %d = %d",(i+1),Number[i]);
    }

    getch();
    return 0;
}
