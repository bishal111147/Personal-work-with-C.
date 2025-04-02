#include <stdio.h>
int main()
{
   char operators;
   int a,b,results;
   printf("enter any two numbers: \n");
   scanf("%d %d",&a , &b);
   printf("Enter any Operator(+,-,/,*):\n");
   scanf(" %c",&operators);
   switch (operators)
   {
   case '+':
      results= a+b;
      break;
   case '-':
   results=a-b;
   break;
   case '*':
   results=a*b;
   break;
   case '/':
   results=a/b;
   break;
   default:
   printf("program is not executed!!");
      break;
   }
   printf("The result of operation of %c between %d and %d is %d",operators,a,b,results);
   return 0;
}
