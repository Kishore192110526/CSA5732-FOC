#include<stdio.h>

#include<math.h>
void main()
{
	int a,b,c;
	float s,d,area;
	
	printf("Enter three sides:");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	d=(s*(s-a)*(s-b)*(s-c));
	area=sqrt(d);
	printf("Area of triangle =%f sq units \n",area);
	getch();
	
}
