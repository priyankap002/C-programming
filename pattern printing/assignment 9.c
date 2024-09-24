#include<stdio.h>
#include<conio.h>
int main()
{
    int C=0,R=0,N=0,no1=0,no2=0,no3=0;
    printf("\n enter row and column size : ");
    scanf("%d",&N);
    for(R=1;R<=N;R++)
    {
        for(C=1;C<=N;C++)
        {
            if(R>=C)
            {
                printf("%d ",no1);
                no1=no2+no3;
                no3=no2;
                no2=no1;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n Thanks...!!!");
    getch();
    return 0;

}

