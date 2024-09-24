#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,N=0;

    printf("\n Enter Row & Column Size : ");
    scanf("%d",&N);

    printf("\n\n ******pattern*******\n\n");

    for(R=1;R<=N;R++)
    {
        for(C=1;C<=N;C++)
        {
            if(C==1||R==1||C==N||R==N)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n****************Thanks*************\n\n");
    getch();
    return 0;
}
