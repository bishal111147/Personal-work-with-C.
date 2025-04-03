#include <stdio.h>
#include <string.h>
int main()
{
   char ch;
   printf("enter a character: \n");
   scanf("%c",&ch);
   if(ch>=97 && ch<=122)
   {
      printf("%c is Lowercase letter which value is %d",ch,ch);
   }
   else if (ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126 || ch>=80 && ch<=255 )
   {
    printf("%c is a Special Character which value is %d",ch,ch);
   }
 else if (ch>=48 && ch<=57)
 {
printf("%c is a number which value is %d",ch,ch);
 }
 else if (ch>=65 && ch<=90)
 {
 printf("%c is a uppercase letter which value is %d",ch,ch);
 }
 
   return 0;
}
