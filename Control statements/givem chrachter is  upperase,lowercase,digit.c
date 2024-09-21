#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n Enter a character to check whether, \n (It is UpperCase Or LowerCase Or Digit Or Special Symbol) = ");

        ch = getche();

        if( (ch >= 'A')  &&  (ch <= 'Z') )
        {
                    printf("\n\n Given Character is UpperCase Letter. ");
        }
        else if( (ch >= 'a')  &&  (ch <= 'z') )
        {
                    printf("\n\n Given Character is LowerCase Letter. ");
        }
        else if((ch >= '0')  &&  (ch <= '9') )
        {
                    printf("\n\n Given Character is Digit. ");
        }
        else
        {
                    printf("\n\n Given Character is Special Symbol. ");
        }

        printf("\n\n Thanks");

        getch();
        return 0;
}

