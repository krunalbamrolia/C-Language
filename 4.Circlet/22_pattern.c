#include<stdio.h>

int main()
{
   char i, j;

	printf("-:PATTERN NO.22:-\n");
   for (i = 'A'; i <= 'E'; i++)
   {
      for (j = 'A'; j <= i; j++)
      {
         printf("%c", i);
      }
      
      printf("\n");
   }
   
   return 0;
}

