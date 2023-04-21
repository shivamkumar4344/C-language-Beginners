#include<stdio.h>
int main()
{
	int a =345;
	float b = 8.76;
	void *ptr;
	ptr = &a;
	printf("Value of a is %d\n",*((int*)ptr));
	ptr = &b;
	printf("Value of b is %.2f\n",*((float*)ptr));
	return 0;
}
