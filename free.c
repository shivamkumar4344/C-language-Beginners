// use of calloc- contiguous allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	printf("Enter the size of array you want to create:-\n");
	scanf("%d",&n);
	
	ptr = (int*)calloc(3,sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the array elements at place %d\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("Value at %d is %d\n",i,ptr[i]);
	
	}
	free(ptr);
	
	return 0;
}
