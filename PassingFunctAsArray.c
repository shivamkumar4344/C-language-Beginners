#include<stdio.h>
int func1(int array[]){
	int i ;
	for(i = 0;i<4;i++){
		printf("The value at %d is %d\n",i,array[i]);
	}
	array[0] = 387;//If you change any value it will reflected in main().
	return 0;
}

void func2(int* ptr)
{
	int a =0;
	for(a;a<4;a++){
		printf("Value at %d is %d\n",a,*(ptr+a));
	}
	*(ptr+2) = 34590;
}


void func3(int arr2[2][2]){
	int k,j;
	for(k=0;k<2;k++)
	{
		for(j=0;j<2;j++){
			printf("Value at index %d,%d is %d\n",k,j,arr2[k][j]);
		}
	}
}

int main()
{
	int arr[] = {3,76,89,6};
	int arr2[][2] = {{23,34},{40,800}};
	printf("Value at index 0 is %d\n",arr[0]);
	func1(arr);
	printf("Value at index 0 is %d\n",arr[0]);
    func2(arr);
    func3(arr2);

}
