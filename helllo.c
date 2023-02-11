#include<stdio.h>
main()
{
	float a,b,c,d,e,f;
	printf("Enter the value of a and b:");
	scanf("%f %f",&a,&b);
	c = a+b;
	d = a*b;
	e = a/b;
	f = a-b;
//	printf("Sum of a and b is:%d",c);
    printf("Sum of %f and %f is:%f \n",a,b,c);
    printf("Multiplication of %f and %f is:%f \n",a,b,d);
    printf("Division of %f and %f is:%f \n",a,b,e);
    printf("substraction of %f and %f is :%f",a,b,f);
}



