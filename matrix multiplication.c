#include<stdio.h>

main(){
	int arr1[2][2], arr2[2][2], res[2][2];
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			res[i][j]=0;
		}
	}
	printf("Enter the elements of first 2x2 Matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the elements of second 2x2 Matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				res[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("matrix 1 :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("matrix 1 :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	printf("Result of Matrix 1 * Matrix 2 :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
