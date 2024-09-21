#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, SPt = 0, EPt = 0;

    printf("\n Enter Values To Get Tables => \n");
    printf("\n Enter Starting Point : ");
    scanf("%d",&SPt);
    printf("\n Enter End Point : ");
    scanf("%d",&EPt);

    printf("\n =========  Tables in Range %d - %d ========= \n\n", SPt, EPt);

    if(SPt < EPt)
    {
        for(R = 1; R <= 10; R++)
        {
            for(C = SPt; C <= EPt; C++)
            {
                printf(" %4d ",R*C);
            }
            printf("\n");
        }
    }
    else
    {
        for(R = 1; R <= 10; R++)
        {
            for(C = SPt; C >= EPt; C--)
            {
                printf(" %4d ",R*C);
            }
            printf("\n");
        }
    }
    printf("\n ======== thanks ======== \n\n");

    getch();
    return 0;
}

