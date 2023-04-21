#include<stdio.h>
int b = 34; //It is a global variable since it is declared outside the function..
int func1(int b1)
{
	static int myvar = 87;
	printf("Value of my var is %d\n",myvar);
	myvar++;
	return myvar+b1;
}

int main(){
	int val = func1(b);
	val = func1(b);
	val = func1(b);
	val = func1(b);
	val = func1(b);
	int * ptr = &val;
	return 0;
}
