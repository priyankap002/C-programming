#include<stdio.h>
#include<conio.h>
int main()
{
    int Value[7]={0},i=0;
    printf("\n Enter 7 Numbers ");
    for(i=0;i<7;i++)
    {
        printf("\n enter number %d: ",i+1);
        scanf("%d",&Value[i]);
    }
    printf("\n The Number of the Value are: ");

    for(i=0;i<7;i++)
    {
        printf("\n Number of %d is = %d",i+1,Value[i]);
    }
    getch();
    return 0;
}


