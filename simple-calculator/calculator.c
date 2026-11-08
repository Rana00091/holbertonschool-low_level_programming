# include <stdio.h>
# include "main.h"

/**
* main : calculator 
*
* Return: always 0
*/

double add(double a, double b)
{
    double sum = 0;
    sum = a + b;

    return sum;

}
double sub(double a, double b)
{
    double sum = 0;
    sum = a - b;

    return sum;

}
double mul(double a, double b)
{
    double sum = 0;

    sum = a * b;

    return sum;

}

double div(double a, double b)
{
    double sum = 0;

    sum = a / b; 
    
    return sum;
}


int main(void)
{
    double input1;
    double input2;
    int choice = -1;
    double result;
    
    printf("Welcome \n");

    while(choice != 0)
    {
        printf("\nChoose number from list \n 1) Addition. \n 2) Subtraction. \n 3) Multiplication. \n 4) Division. \n 0) Quit.\n");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        if(choice < 1 || choice > 4)
        {
            printf("Invalid choice \n");
            continue;
        }

        if(choice >= 1 && choice <= 4)
        {
            switch(choice)
            {
                case 1 : 
                    printf("Enter first digit : ");
                    scanf("%lf", &input1);
                    printf("Enter second digit : ");
                    scanf("%lf", &input2);
                    result = add(input1 , input2);
                    printf("Result is : %.2f\n" ,result);
                    break;

                case 2 : 
                    printf("Enter first digit : ");
                    scanf("%lf", &input1);
                    printf("Enter second digit : ");
                    scanf("%lf", &input2);
                    result = sub(input1 , input2);
                    printf("Result is : %.2f\n" ,result);

                    break;

                case 3 : 
                    printf("Enter first digit : ");
                    scanf("%lf", &input1);
                    printf("Enter second digit : ");
                    scanf("%lf", &input2);
                    result = mul(input1 , input2);
                    printf("Result is : %.2f\n" ,result);
                    break;

                case 4 : 
                    printf("Enter first digit : ");
                    scanf("%lf", &input1);
                    printf("Enter second digit : ");
                    scanf("%lf", &input2);
                    if(input2 != 0)
                    {
                        result = div(input1 , input2);
                        printf("Result is : %.2f\n" ,result);
                    }
                    else
                    {
                        printf("Error: division by zero\n");
                    }
                    
                    break;
            }
        }
        
    }

    return (0);
}