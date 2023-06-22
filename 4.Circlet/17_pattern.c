#include<stdio.h>

int main()
{
   int i, j, k;

	printf("-:PATTERN NO.17:-\n");
   for (i = 1; i <= 5; i++)
   {
      for (k = i; k <= 5; k++)
      {
         printf(" ");
      }

      for (j = 1; j <= i; j++)
      {
         printf("%d", j);
      }

      printf("\n");
   }

   for (i = 2; i <= 5; i++)
   {
      for (k = i; k >= 1; k--)
      {
         printf(" ");
      }

      for (j = i; j <= 5; j++)
      {
         printf("%d", j);
      }

      printf("\n");
   }

   return 0;
}

