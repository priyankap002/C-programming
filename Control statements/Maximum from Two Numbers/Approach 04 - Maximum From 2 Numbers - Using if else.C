/// Maximum From 2 Numbers - Using if else.C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int  Num1 = 0, Num2 = 0;

    Up:
        printf("\n Enter 1st Number = ");
        scanf("%d",&Num1);
        printf("\n Enter 2nd Number = ");
        scanf("%d",&Num2);

        if(Num1 == Num2)
        {
                    printf("\n Both Given Numbers are Equal, \n Please Enter Different Numbers to compare,\n");
                    getch();
                    system("cls");
                    getch();
                    goto Up;
        }

        if(Num1 > Num2)
        {
                    printf("\n Number %d is Maximum.",Num1);
        }
        else
        {
                    printf("\n Number %d is Maximum.",Num2);
        }

        printf("\n Thanks!!!");

        getch();
        return 0;
}
