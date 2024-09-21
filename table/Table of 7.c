#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0;
    printf("\n Table of 7 %d is=>\n",No);

    for(No=7,i=1;i<=10;i++)
    {
        printf("\n %3d * %3d = %3d.",No,i,(i*No));
    }
    getch();
    return 0;
}
