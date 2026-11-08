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

    if (b == 0)
    {
        printf("Can't divide by zero");
    }

    else
    {
       sum = a/b; 
    }
    
    return sum;

}


int main(void)
{
    double input1;
    double input2;
    int choice;

    printf("Welcom");
    /* menu selection */
    /*loop*/
    scanf("%lf", &input1);
    scanf("%lf", &input2);
    /*call function*/

}