#include <stdio.h>
#include <string.h>
int main()
{
    while(1)
    {
    char name[100],gender[100];
    printf("enter name: ");
    scanf("%99s",name);
    printf("enter gender: ");
    scanf("%99s",gender);
    if (strcmp(gender,"female")==0)
    {
        printf("Data is registered: ");
    }
    char choice;
    printf("Do you want to continue(Y/N): ");
    scanf("%s",choice);
    if(choice == 'N' || choice == 'n')
    {
        break;
    }
    }
    return 0;
}
