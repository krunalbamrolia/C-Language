#include<stdio.h>
 
int main()
{
   int a=1,num;
   printf("-: PRINT MULTIPLICATION TABLE :- \n");
   printf("Enter any number:");
   scanf("%d",&num);
   
   //print table
   do{
  	printf("%d * %d = %d\n",num,a,num*a);
      a++;
   } while(a<=10);
   
return 0;
}
