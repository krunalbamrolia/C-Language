#include<stdio.h>

int main()
{
   int i, j;

	printf("-:PATTERN NO.23:-\n");
   for (i = 1; i <= 5; i++)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%d ", j & 1);
      }
      
      printf("\n");
   }
   
   return 0;
}

