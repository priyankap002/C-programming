#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,c=0,cnt=0;
     char ch='\0';

    printf("\n Enter Row & Column Count: ");
    scanf("%d",&cnt);

    printf("\n ******pattern******\n\n");

    for( ch='A',R=1;R<=cnt;R++,ch++)
    {
        for(c=1;c<=cnt;c++)
        {
            if(R<=c)
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


