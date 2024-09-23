#include<stdio.h>
#include<conio.h>

int main()
{
    int c=0,r=0,n=0;
    printf("\n enter row and  column size: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r>=c)
            {
                printf("7");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n thanks..!!!");

    getch();
    return 0;
}
