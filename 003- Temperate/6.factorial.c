#include<stdio.h>

int main()
{
   int a, n, f = 1;

   printf(" -: CHECK A FACTORIAL NUMBER :- \n");
   printf("Enter any number: ");
   scanf("%d", &n);

	// factorial number
   for (a = 1; a <= n; a++)
   {
     f = f * a;
   }

   printf("Factorial of %d = %d", n, f);
   return 0;
}

