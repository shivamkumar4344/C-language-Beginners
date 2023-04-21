#include<stdio.h>
main()
{
	char sub1 = "maths";
	char sub2 = "science";
	printf("Enter the both subjects:-");
	scanf("%c %c \n",&sub1,&sub2);
	if(sub1 && sub2){
		printf("You have got 45 rupees as a gift");
	}
	else if(sub1){
		printf("You have got 15 rupees as a gift");
		
	}
	else if(sub2){
		printf("You have got 15 rupees as a gift");
	}
	else{
		printf("You have got nothing..!");
	}
}
