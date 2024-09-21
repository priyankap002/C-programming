#include<stdio.h>
#include<conio.h>

int main()
{
    int  Sal = 0,  Is_Stud = 0;

    printf("\n Enter  Your  Salary = ");
    scanf("%d",&Sal);

    printf("\n Enter  1 if you are a student = ");
    scanf("%d", &Is_Stud);

    if(Sal <= 0) //
    {
            if(Is_Stud == 1) // F
            {
                        printf("\n Candidate is Student");
            }
            else
            {
                        printf("\n Candidate is Fresher");
            }
    }
    else
    {
            if(Sal > 50000)
            {
                    printf("\n Candidate is an Expert Employee");
            }
            else
            {
                    printf("\n Candidate is an Beginner Employee");
            }
    }

    getch();
    printf("\n Thanks For Interacting...");

    getch();
    return  0;
}

