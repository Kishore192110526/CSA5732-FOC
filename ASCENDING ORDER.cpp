#include<stdio.h>
int main(){
	int i,j,k,n;
	float a[50],temp;
	printf("enter the last term of the array: ");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	for(j=i;j<n;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("the elements in ascending order\n");
	for(i=0;i<n;i++)
	printf("%.2f",a[i]);
	
	
}
