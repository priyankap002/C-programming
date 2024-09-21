#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    Up:

        printf("\n Enter a Number check whether it is +ve or -ve=");
        scanf("%d",&No);

        if(No==0)
        {
            printf("\n you have Entered zero, which is neutral.");
            print("\n please enter a valid number.")
            goto up;
        }

        if( No>0 )
        {
            printf("\n Welcome You Have Entered in Positive Number");
        }
        else
        {
            printf("\n Welcome You Have Entered in Negative Number");

        }
        getch();
        printf("\n Thanks");

        getch();
        return 0;

}
