#include <stdio.h>
int main()
{
    int num,product=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (i<=num)
    {
        product *=i;
        i++;
    }
    printf("the factorial of %d is %d\n",num,product);
    return 0;
}
