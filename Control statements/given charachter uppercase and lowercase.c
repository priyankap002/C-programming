#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\n 0' ;

    printf("\n Enter a character to check whether, \n it is UpperCase Or LowerCase = ");
     ch = getche();

     if((ch>='A' )&& (ch<='Z'))
     {
        printf("\n\n Given Character is UpperCase Letter. ");

     }
     else if((ch>='a')&&(ch<='z'))
     {
        printf("\n\n Given Character is LowerCase Letter. ");

     }
     else
     {
         printf("\n\n Given Character is Neither LowerCase Nor UpperCase. ");
     }
     getch();
     return 0;
}

