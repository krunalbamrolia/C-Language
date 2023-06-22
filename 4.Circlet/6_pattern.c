#include<stdio.h>

int main()
{
   int i, j;

	printf("-:PATTERN NO.6:-\n");
   for (i = 5; i >= 1; i--)
   {
      for (j = i; j >= 1; j--)
      {
         printf("%d", j);
      }
      printf("\n");
   }

   return 0;
}

