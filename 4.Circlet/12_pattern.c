#include<stdio.h>

int main()
{
   int i, j, k;

	printf("-:PATTERN NO.12:-\n");
   for (i = 5; i >= 1; i--)
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

   return 0;
}

