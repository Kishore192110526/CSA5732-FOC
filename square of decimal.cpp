#include<stdio.h>
int square(int);
int main(){
	int x,n;
	printf("enter the nth element: ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	printf("%d",square(x));
	printf("\n");
	
}
int square(int y){
	return y*y;
}
