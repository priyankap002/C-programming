#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("\n\n ========= ** Tables in Range 7 - 12 ** ========= \n\n");

    for(R = 1; R <= 10; R++)
    {
        for(C = 17; C >= 9; C--)
        {
            printf(" %3d ",R*C);
        }
        printf("\n");
    }

    printf("\n\n ======== Fork Infosystems ======== \n\n");

    getch();
    return 0;
}

