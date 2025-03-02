#include <stdio.h>
int main()
{
    double num1,num2,result;
    char operator;
    printf("enter a operator (+,-,*,/): ");
    scanf("%c",&operator);
    printf("enter a number: ");
    scanf("%lf",&num1);
    printf("enter another number: ");
    scanf("%lf",&num2);
    switch (operator)
    {
        case '+':
        result= num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        case '/':
        result = num1 / num2;
        break;
    }
        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
    
}
