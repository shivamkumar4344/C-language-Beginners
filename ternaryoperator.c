//(condition)?if condition is true then this part executs : if condition is false then this part executes 
#include<stdio.h>
main(){
	int age ;
	printf("enter the age:");
	scanf("%d",&age);
//	(age>18)?printf("DO VOTING"):printf("NOT ELIGIBLE");
    if (age>=18)
    {
    	printf("ELIGIBLE");
	}
//	if(age<18){
//		printf("NOT ELIGIBLE");
//	}
	else
	{
		printf("You are a child");
	}

}
