#include <stdio.h>

int main()
{
	//Your code here
    int n,i,j;
    scanf("%d", &n);
    
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
