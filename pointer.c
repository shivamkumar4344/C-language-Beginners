#include<stdio.h>
int main()
{
	int a =76;
	int *ptra = &a;
	int *ptr2 = NULL;
	printf("The value of a is %d\n",a);
	printf("The value of address of a is %x\n",&a);
	printf("The value of pointer to a  is %d\n",*ptra);
	printf("The value address of pointer to a is %x\n",&ptra);
	printf("The value of pointer 2 to a is %d",ptr2);
	return 0;
	
}
