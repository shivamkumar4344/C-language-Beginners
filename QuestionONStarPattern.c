//Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern..
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

void reverseStarPattern(int rows){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<=rows-i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	int rows,type;
	printf("Enter 0 for Star pattern and 1 for Reverse Star pattern:\n");
	scanf("%d",&type);
	switch(type)
	{
		case 0:
			printf("Enter the number of rows:\n");
	        scanf("%d",&rows);
			starPattern(rows);
			break;
		case 1:
			printf("Enter the number of rows:\n");
	        scanf("%d",&rows);
			reverseStarPattern(rows);
			break;
		default:
			printf("You have entered the invalid input");
			break;		
	}
	return 0;
}
