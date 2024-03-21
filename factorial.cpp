#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	long int fact();
	int();
	printf("enter the  number whose factorial is to be found:");
	scanf("%d",&n);
	printf("the factorial of %d is : %d\n",n,fact,(n));
	getch();
}
long int fact,(n)
int n;
{
		if(n==0)
	return(1);
	else
	return(n*fact(n-1));
}


