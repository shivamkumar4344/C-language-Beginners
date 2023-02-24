//#include<stdio.h>
//int main()
//{
//	int pt;
//	printf("Enter the number of nodes:-");
//	scanf("%d",&pt);
//	switch(pt){
//		case 0:
//			printf("\nNo geometry");
//		break;
//		case 1:
//			printf("\nA line");
//		break;
//		case 2:
//			printf("\nA triangle");
//		break;
//		case 3:
//			printf("\nA rectangle");
//		break;
//		case 4:
//			printf("\nA pentagon");
//		break;
//	default:
//		printf("Invalid input");
//		break;
//	}
//	return 0;
//}

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
	default:
		printf("Invalid");
	    break;
			
	}
	return 0;
	
}
