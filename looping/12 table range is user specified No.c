#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int R = 0, C = 0, SPt = 0, EPt = 0;

    UP:
        printf("\n Enter Values To Get Tables => \n");
        printf("\n Enter Starting Point : ");
        scanf("%d",&SPt);
        printf("\n Enter End Point : ");
        scanf("%d",&EPt);

        if(SPt > EPt)
        {
            printf("\n\n INVALID RANGE...\n");
            getch();
            system("cls");
            goto UP;
        }

        printf("\n\n ========= ** Tables in Range %d - %d ** ========= \n", SPt, EPt);

        for(R = 1; R <= 10; R++)
        {
            for(C = SPt; C <= EPt; C++)
            {
                printf(" %3d ",R*C);
            }
            printf("\n");
        }

        printf("\n\n ======== Fork Infosystems ======== \n\n");

        getch();
        return 0;
}
