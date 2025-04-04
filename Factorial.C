#include <stdio.h>
int main()
{
    int num,product=1;
    printf("Enter a number: ");
scanf("%d",&num);
for ( int i = 1; i <= num ; i++)
{
  product *=i;
}
printf("the factorial of %d is %d\n",num,product);
return 0;
}
