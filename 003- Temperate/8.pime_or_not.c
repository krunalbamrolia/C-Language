#include <stdio.h>

int main()
{
   int n, i, c = 0;

   printf(" -: CHECK A NUMBER PRIME OR NOT :- \n");
   printf("Enter any number: ");
   scanf("%d", &n);

	//prime or not 
   for (i = 1; i <= n; i++)
   {
      if (n % i == 0) {
         c++;
      }
   }
	
   if (c == 2)
   {
      printf("This is a Prime number.\n");
   }
   else {
      printf("This is not a Prime number.\n");
   }

   return 0;
}

