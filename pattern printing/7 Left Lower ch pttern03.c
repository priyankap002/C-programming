#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,c=0,cnt=0;
     char ch='A';

    printf("\n Enter Row & Column Count: ");
    scanf("%d",&cnt);

    printf("\n ******pattern******\n\n");

    for(R=1;R<=cnt;R++)
    {
        for(c=1;c<=cnt;c++,ch++)
        {
            if(R>=c)
            {
                printf("%c",ch);
            }
        }
        printf("\n");
    }
    printf("\n ======Thanks======\n");

    getch();
    return 0;
}



