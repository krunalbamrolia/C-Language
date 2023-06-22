#include<stdio.h>

int main()
{
   int n, first = 0, second = 1, next, i;
   
   printf(" -: CHECK A FIBONACCI SERIES :- \n");
   printf("Enter a value: ");
   scanf("%d", &n);

   printf("Fibonacci Series up to %d:\n", n);
	//Fibonacci series
   for (i = 0; i < n; i++)
   {
      if (i <= 1)
         next = i;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n", next);
   }

   return 0;
}

