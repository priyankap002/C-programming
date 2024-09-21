#include<stdio.h>
#include<conio.h>

int main()
{
            int  Num = 0;

            printf("\n Enter an Integer Number = ");
            scanf("%d",&Num);

            if( Num == 0 )

            {
                printf("\n Given Number is Neutral. ");
            }
            else if(Num %2 == 0)

            {
                printf("\n Given Number is EVEN.");
            }
            else

            {
                printf("\n Given Number is ODD.");
            }

            printf("\n\n Thanks for interacting....\n\n");

            getch();
            return 0;
}

