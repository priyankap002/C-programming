#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n Enter a character to check whether, \n It is Alphabet Or Digit = ");

        ch = getche();

        if( ( (ch >= 'A') && (ch <= 'Z')) || ( (ch >= 'a')  &&  (ch <= 'z') ) )
        {
                    printf("\n\n Given Character %c is Alphabet. ", ch);
        }
        else if((ch >= '0')  &&  (ch <= '9') )
        {
                    printf("\n\n Given Character %c is Digit. ",ch);
        }
        else
        {
                    printf("\n\n Given Character %c is Special Symbol. ",ch);
        }

        printf("\n\n Thanks");

        _getch();
        return 0;
}

