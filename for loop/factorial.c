#include <stdio.h>

int main() {
    int N, i;
    
	
	printf(" -: CALCULATE THE FACTORIAL :- \n");
	printf("Enter a non-negative integer N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int factorial = 1;

    for (i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}

---------------------------------------------------------------------------------------------------


	#include <stdio.h>

int main() {
    int n,a=0,b=1,c,i;
    
    printf("enter data :");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        if(i<=1){
            c=i;
        }
        else{
            c=a+b;
            a=b;
            b=c;    
        }
        printf("%d \t",c);
    }

    return 0;
}
-------------------------------------------------------------------------------------------------


