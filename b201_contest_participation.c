#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d %d", &a, &b);
    if (b>a){
        printf("Performed well");
    }else if (a>b){
        printf("Did not perform well");
    } else {
        printf("Did not participate");
    }
    return 0;
}
