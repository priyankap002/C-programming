#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,c=0,cnt=0;

    printf("\n Enter Row & Column Count: ");
    scanf("%d",&cnt);

    printf("\n ******pattern******\n\n");

    for( R=1;R<=cnt;R++) ///Row
    {
        for( c=1;c<=cnt;c++) ///column
        {
            if((R+c)<=cnt+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n ======Thanks======\n");
    getch();
    return 0;
}



