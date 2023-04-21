// use of realloc- Re-allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	printf("Enter the size of array you want to create:-\n");
	scanf("%d",&n);
	
	ptr = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the value at %d\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Value at %d is %d\n",i,ptr[i]);
	}

	printf("Enter the new size of array you want to create:-\n");
	scanf("%d",&n);
	
	ptr = (int*)realloc(ptr,n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the new array elements at place %d\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("New Value at %d is %d\n",i,ptr[i]);
	
	}
	return 0;
}

