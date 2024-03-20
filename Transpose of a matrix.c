#include<stdio.h>

main(){
	int mat[3][3];
	int i,j,n;
	printf("Enter a 3x3 array\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	printf("Enter an element : ");
	scanf("%d",&mat[i][j]);
}
}
printf("Given Matrix :\n");
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	printf("%d ",mat[i][j]);
}
printf("\n");
}
printf("Transpose of Given Matrix :\n");
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	printf("%d ",mat[j][i]);
}
printf("\n");
}
}
