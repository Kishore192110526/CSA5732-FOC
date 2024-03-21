#include<stdio.h>
#include<conio.h>
int maximum(int,int,int);
int main()
{
	int a,b,c;
	int();
	printf("enter three integer:");
	scanf("%d%d%d",&a,&b,&c);
	printf("maximum is:%d\n",maximum(a,b,c));
	getch();
}
int maximum(int x,int y,int z)
{
	int max=x;
	if(y>max)
	max=z;
	return max;
}
