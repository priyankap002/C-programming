#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int main()
{
    int i=0,Num[size]={},Max=0;
    printf("\n Enter  Elements to find its maximum number ");
    for(i=0;i<size;i++)
    {
        printf("\n Enter  Element no %d :",i+1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n  you entered elements are these");
    Max=Num[0];
    for(i=0;i<size;i++)
    {
        printf("\n  value of  Element %d=%d",i+1,Num[i]);
        if(Num[i]>Max)
        {
            Max=Num[i];
        }
    }
    printf("\n %d is the maximum number",Max);
    getch();
    return 0;
}
