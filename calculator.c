//write a program to perform 4 operations such as + ,-,*,/ by using switch case.

#include<stdio.h>
main()
{
	int a,b;
	char sign;
	printf("Enter the values of a & b:-");
	scanf("%d %d",&a,&b);
	printf("Enter the operator:");
	fflush(stdin);
	scanf("%c",&sign);
	switch(sign){
		case '+':
			printf("\n%d",a+b);
		break;
		case '-':
			printf("\n%d",a-b);
		break;
		case '*':
			printf("\n%d",a*b);
		break;
		case '/':
			printf("\n%d",a/b);
		break;
		case '%':
			printf("\n%d",a%b);
		break;
	default:
		printf("Invalid");
	    break;
			
	}
	return 0;
	
}
