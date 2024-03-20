#include<stdio.h>

int factorial(int a);

main()
{	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	int f = factorial(a);
	printf("factorial of given number is %d",f);
}

factorial(int a){
	if(a>=1)
		return a*factorial(a-1);
	else
	return 1;
}
