#include<stdio.h>
#include<conio.h>

int main()
{
    int c=0,r=0,n=0;
    char ch='A';
    printf("\n enter row and  column size: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        ch='A';
        for(c=1;c<=n;c++)
        {
            if(r==1||r==n||c==1||c==n)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
            ch++;
        }
        printf("\n");
    }
    printf("\n thanks..!!!");

    getch();
    return 0;
}
