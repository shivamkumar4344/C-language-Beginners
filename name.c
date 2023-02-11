#include<stdio.h>
main()
{
	char name[100];
	printf("Enter the name:-");
	scanf("%[^\n]c",&name);
	printf("The name is-:%s",name);
}
