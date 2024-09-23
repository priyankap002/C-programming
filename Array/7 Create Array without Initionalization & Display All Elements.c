#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[10]={},i=0;
    printf("\n Enter 10 Numbers: ");
    for(i=0;i<10;i++)
    {
        printf("\n Enter %d Numbers: ",i+1);
        scanf("%d",&Num[i]);
    }
    printf("\n the number you entered are: ");
    for(i=0;i<10;i++)
    {
        printf("\n you entered %d number is : %d",(i+1),Num[i]);
    }
    printf("\n Thanks...!!!");
    getch();
    return 0;
}
