#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,s,r,i,bi,rbi,flag=0,k=0;
	
	printf("enter the decimal number: ");
	scanf("%d",&n);
	s=n;rbi=0;
	while(s>0){
		r=s % 2;
		if(r==0 && flag == 0 )
		k++;
		else
		flag=1;
		rbi=rbi*10+r;
		s=s/2;
	}
	s=rbi;
	bi=0;
	while(s>0){
		r=s%10;
		bi=bi*10+r;
		s=s/10;
		if(s==0)
		for(i=1;i<=k;i++)
		bi=bi*10;
	}
	printf("the binary number is: %d\n",bi);
	getch();
}
