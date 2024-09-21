#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,Cnt=0;

    printf("\n Enter Row and columns: ");
    scanf("%d",&Cnt);

    printf("\n*****pattern*****\n\n");

    for(R=1;R<=Cnt;R++)
    {
        for(C=1;C<=Cnt;C++)
        {
            {
                printf(" * ");

            }
        }
        printf("\n");
    }
    printf("\n ======Thanks=====\n");

    getch();
    return 0;
}
