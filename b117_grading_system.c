#include <stdio.h>

int main()
{
	int marks;
	char grade;
	scanf("%d", &marks);
	//write the code to assign the grade
    if (marks>75){
        grade='A';
    } else if (marks >50 && marks <=75) {
        grade='B';
    } else if (marks>25 && marks <=50) {
        grade='C';
    } else {
        grade='D';
    }



	printf("%c", grade);
	return 0;
}
