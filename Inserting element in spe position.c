#include<stdio.h>

main(){
	int i,j,n,s,x,c=0;
	
	printf("Enter Number of Elements in Array :");
	scanf("%d",&s);
	
	int arr[s];
	int arrr[s+1];
	printf("Enter the elements of Array :\n");
	for(i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the position to enter new element : ");
	scanf("%d",&n);
	printf("Enter the new element : ");
	scanf("%d",&x);
	for(i=0;i<s+1;i++){
		if(i==n-1)
			arrr[i]= x;
		else{
			arrr[i]=arr[c];
			c+=1;
		}
	}
	for(i=0;i<s+1;i++){
		printf("%d ",arrr[i]);
	}
}
