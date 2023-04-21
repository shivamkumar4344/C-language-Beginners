#include<stdio.h>
void arrayRev(int arr[])
{
	int i,temp;
	for(i=0;i<7/2;i++){
		temp = arr[i];
		arr[i] = arr[6-i];
		arr[6-i] = temp;
	}
	
	
}

void arrayPrint(int arr[])
{
	int j;
	for(j=0;j<7;j++){
		printf("Value of elemnet at %d is %d\n",j,arr[j]);
	}
}

int main()
{
	int arr[7],a;
	printf("Enter the value of array elemnts:-\n");
	for(a=0;a<7;a++)
	scanf("%d",&arr[a]);
	printf("Before reversal Value of array is:-\n");
	arrayPrint(arr);
	arrayRev(arr);
	printf("\nAfter reversal Value of array is:-\n");
	for(a=0;a<7;a++){
		printf("Value of elemnet at %d is %d\n",a,arr[a]);
	}
	
	return 0;
	
}
