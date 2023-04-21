//Reverse Star Pattern
#include<stdio.h>
void reverseStarPattern(int rows){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<=rows-i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}


int main()
{
	int rows;
	printf("Enter the value of rows:-\n");
	scanf("%d",&rows);
	reverseStarPattern(rows);
	return 0;
}
