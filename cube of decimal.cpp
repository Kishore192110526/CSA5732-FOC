#include<stdio.h>
int cube(int);
int main(){
	int x,n;
	printf("enter the nth element: ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	printf("%d",cube(x));
	printf("\n");
	
}
int cube(int y){
	return y*y*y;
}
