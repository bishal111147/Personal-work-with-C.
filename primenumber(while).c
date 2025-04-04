#include <stdio.h>
int main()
{
   int num,not_prime=0,i=2;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==1 || num==0)
    {
        not_prime=1;
    }
 else{
    while (i<num)
    {
        if (num%i==0)
        {
           not_prime=1;
           i++;
           break;
        }   
    }
}
    if (not_prime)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        printf("%d is a prime number.\n", num);
    }
    return 0;
}
