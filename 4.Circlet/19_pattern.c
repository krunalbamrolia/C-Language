#include<stdio.h>

int main()
{
   int i, j, k;

	printf("-:PATTERN NO.19:-\n");
   for (i = 5; i >= 1; i--)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%d", j);
      }
      
      for (k = 5; k > i; k--)
      {
         printf(" ");
      }
      
      for (k = 5; k > i; k--)
      {
         printf(" ");
      }
      
      for (j = i; j >= 1; j--)
      {
         printf("%d", j);
      }
      
      printf("\n");
   }

   for (i = 2; i <= 5; i++)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%d", j);
      }
      
      for (k = i; k < 5; k++)
      {
         printf(" ");
      }
      
      for (k = i; k < 5; k++)
      {
         printf(" ");
      }
      
      for (j = i; j >= 1; j--)
      {
         printf("%d", j);
      }
      
      printf("\n");
   }
   
   return 0;
}

