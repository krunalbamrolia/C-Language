#include<stdio.h>

int main()
{
   int i, j, k;

	printf("-:PATTERN NO.18:-\n");
   for (i = 1; i <= 5; i++)
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
   
   return 0;
}
