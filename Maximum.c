#include<stdio.h>
int main()
{
	int number[5],i,b;
	printf("Enter the numbers:\n");
	for(i=0;i<5;i++)
	scanf("%d",&number[i]);
	b = number[0];
	for(i=0;i<5;i++)
	{
		if(b<number[i])
		b = number[i];
    }
    printf("highest number is = %d",b);
    return 0;
    
}
