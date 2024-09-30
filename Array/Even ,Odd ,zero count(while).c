#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5
int main()
{
    int i=0,Even=0,Odd=0,Zero=0,Num[Size]={};
    printf("\n Enter %d Values To Find Its Odd & Even & Zero Count",Size);
    while(i<Size)
    {
        printf("\n Enter Value Number %d : ",i+1);
        scanf("%d",&Num[i]);
        if(Num[i] == 0)
        {
            Zero++;
        }
        else if(Num[i]%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        i++;
    }
    system("cls");
    printf("\n  zero Numbers In that Program :%d  ",Zero);
    printf("\n  Even Numbers In that Program :%d  ",Even);
    printf("\n  Odd Numbers In that Program : %d ",Odd);

    getch();
    return 0;
}
