#include<stdio.h>
#include<conio.h>

int  main( )
{
        int   i = 0;        // Declaration

        for(i = 1; i <= 5; i++)
        {
            printf("\n hello");

            if(i == 5)
            {
                    break;
            }

            printf("\n\n Welcome to c programming");
        }

        printf("\n Thanks!!!");

        getch();
        return 0;
}

