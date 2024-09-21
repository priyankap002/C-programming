#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,count=0;

    printf("\n  Enter a num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0){

            count++;
        }
    }
    if(count==2){

        printf("%d is a prime num",n);
    }
    else
    {
        printf("%d is a not prime num",n);
    }
        printf("\n Thanks");


    getch();
    return 0;
}


