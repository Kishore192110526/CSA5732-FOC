#include <stdio.h>
#include <math.h>
int square(int);

int main() {
    int i,n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for ( i = 1; i <= n; ++i) {
     printf("%d",square(i));
	 printf("\n");
	 getch();
    }
    int square(int y)
    {
    return 0;
}
}

