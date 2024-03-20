#include<stdio.h>

main(){
	
	int a,b,c,i,max;
	
	printf("Enter Number 1 :");
	scanf("%d",&a);
	printf("Enter Number 2 :");
	scanf("%d",&b);
	printf("Enter Number 3 :");
	scanf("%d",&c);
	int arr[3]={a,b,c};
	max=0;
	for(i=0;i<3;i++){
		if(max<arr[i])
			max=arr[i];
	}
	printf("Maximum of %d,%d,%d is %d",a,b,c,max);
}



