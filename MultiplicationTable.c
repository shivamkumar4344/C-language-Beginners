#include<stdio.h>
int main(){
	int a ,b;
	printf("Enter the number of you want the table of:-");
	scanf("%d",&a);
	printf("The table is:-\n");
	for(b=1;b<=10;b++)
	{
	printf("%d x %d = %d\n",a,b,a*b);
	}
	return 0;
}
