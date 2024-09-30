#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Odd=0,Num[Size]={},Cnt=0;
    printf("\n Enter %d Number To Find Odd Count",Size);
    while(i<Size)
    {
        printf("\n Enter Number %d = ",i+1);
        scanf("%d",&Num[i]);
        if(Num[i]%2==1)
        {
            Cnt++;
        }
        i++;
    }
    system("cls");
    printf("\n Count of Odd Numbers Is = %d",Cnt);
    getch();
    return 0;
}














