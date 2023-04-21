#include<stdio.h>
int main(){
	int marks[5];
	int i;
	for(i=0 ;i<5;i+=1){
		printf("Enter the value of %d element of array\n",i);
		scanf("%d",&marks[i]);
		
	}
	for (i=0;i<5;i+=1){
		printf("The value of %d element of the array is %d\n",i,marks[i]);
		
	}
	return 0;
}
