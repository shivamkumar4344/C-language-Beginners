#include<stdio.h>
void changeValue(int* a)
{
	*a =765; 
}

int main()
{
	int a=98,b=21;
	printf("Value of a is %d\n",a);
	changeValue(&a);
	printf("Value of a is %d\n",a);
}
