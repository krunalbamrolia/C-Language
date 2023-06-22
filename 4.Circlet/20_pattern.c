#include<stdio.h>

int main()
{
   int i, j;
 
 	printf("-:PATTERN NO.20:-\n");
   for (i = 1; i <= 4; i++)
   {
      for (j = 5 - i; j >= 1; j--)
      {
         printf(" ");
      }
 
      printf(" * ");
 
      for (j = 1; j < i - 1; j++)
      {
         printf("  ");
      }
 
      if (i >= 2)
      {
         printf(" * ");
      }
 
      printf("\n");
   }

   return 0;
}

