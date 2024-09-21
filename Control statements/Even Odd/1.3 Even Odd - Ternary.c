#include<stdio.h>
#include<conio.h>

int main()
{
        int  Num = 0;

        printf("\n Enter an Integer Number to Check whether it is Even Or Odd = ");

        Up :

        scanf("%d",&Num);

        if(  Num == 0  )
        {
            printf("\n Given Number is Neutral.\n\n Please Enter Other than Zero Integer to Check whether it is Even Or Odd = ");

            goto Up;
        }

        ( Num % 2 == 0 ) ?  printf("\n Given Number is EVEN.")  : printf("\n Given Number is ODD." ) ;


        printf("\n\n Thanks for interacting....\n\n");

        getch();
        return 0;
}

