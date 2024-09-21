#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Rev=0, Dig=0, Temp=0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig=Temp%10;
        Rev=(Rev*10)+Dig;
        Temp=Temp/10;
    }
        if(Rev == No)
        {
            printf("\n Given No = %d & Its Reverse = %d, are Equal, Hence", No, Rev);
            printf("\n Given Number %d is Palindrome.", No);
        }
        else
        {
            printf("\n Given No = %d & Its Reverse = %d, are Not Equal, Hence", No, Rev);
            printf("\n Given Number %d is Not Palindrome.", No);
        }
        printf("\n Thanks");
        getch();
        return 0;

}
