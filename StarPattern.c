//Star Pattern
#include<stdio.h>
void starPattern(int rows)
{
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}





int main(){
	int rows;
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	starPattern(rows);
	return 0;
}
