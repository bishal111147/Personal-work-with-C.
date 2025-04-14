#include <stdio.h>
int factorial(int);
int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("the factorial of %d is %d\n",n,factorial(n));
    return 0;
}
