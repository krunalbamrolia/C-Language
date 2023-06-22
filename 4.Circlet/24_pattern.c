#include<stdio.h>

int main()
{

	int i,j,k,l;

	printf("-:PATTERN NO.24:-\n");
	for(i=5;i>=1;i--)
	{
   		for(k=i;k>1;k--)
		{
   			printf(" ");
  		}	
   		for(j=5;j>=i;j--)
    	{
       		printf("%d",j);
  		}
  		for(l=i+1;l<=5;l++)
  		{
       		printf("%d",l);
  		}
  		printf("\n");
	}
   	return 0;
}

