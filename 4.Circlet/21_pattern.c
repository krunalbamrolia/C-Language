#include<stdio.h>

int main()
{
   int i, j, n = 1;
 
 	printf("-:PATTERN NO.21:-\n");
   for (i = 1; i <= 5; i++)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%d", n);
         n++;
      }
      
      printf("\n");
   }
   
   return 0;
}

