#include<stdio.h>
int main(){
	int marks,age;
	printf("Enter your marks:");
	scanf("%d",&marks);
	printf("Enter your age:");
	scanf("%d",&age);
	switch(marks){
		case 45:
			printf("Your marks is 45\n");
			switch(age){
				case 56:
					printf("Your age is 56");
					break;
				case 65:
					printf("Your age is 65");
					break;
				default:
					printf("No age is found!!");
			}
			break;
		case 58:
			printf("Your marks is 58\n");
			break;
		case 87:
			printf("Your marks is 87\n");
			break;
		case 95:
			printf("Your marks is 95\n");
			break;
		default:
			printf("Nothing Matched");
	}
}
