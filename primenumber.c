#include <stdio.h>
int main()
{
    int num, not_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                not_prime = 1;
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
