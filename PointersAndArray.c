#include<stdio.h>
int main(){
	int arr[] = {33,987,90,1,3,5,67};
	printf("Value at position 2 of the array is %d\n",arr[1]);
	printf("Value at position 3 of the array is %d\n",arr[2]);
	printf("The address of second element of array is %d\n",&arr[1]);
	printf("The address second element of the array is %d\n",arr+1);
	printf("-------------------------------------------------------------\n");
	printf("The value at address of first element of array is %d\n",*(&arr[0]));
	printf("The value at address of first element of array is %d\n",arr[0]);
	return 0;
}
