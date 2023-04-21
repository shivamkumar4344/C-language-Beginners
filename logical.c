#include<stdio.h>
int main()
{
	int a,b; 
	a = 34;
	b = 0;

	printf("a&&b=%d\n", a&&b); // it is 0 because b is zero
	printf("a||b=%d\n", a||b);// it is 1 because a or b has some value
	printf("!b=%d\n",!b);// not of b means it reverses the state of b
	return 0;
}
