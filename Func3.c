//without argument and without return value
#include<stdio.h>

int takenumber(){
	int i;
	printf("Enter the number:-");
	scanf("%d",&i);
	return i;
}

int main(){
	int c;
	c = takenumber();
	printf("The number you have entered is:-%d",c);
	return 0;

}

