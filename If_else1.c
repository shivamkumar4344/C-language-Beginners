#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:-");
	scanf("%d",&age);
	printf("You have entered %d as your age\nf",age);
	if(age>=18){
		printf("You can vote");
		
	}
	else if(age>=10){
		printf("You can vote for kids");
	}
	else if(age>=3){
		printf("You can vote for babies");
	}
	else{
		printf("You are not eligible for anything");
	}
}
