#include<stdio.h>
#include<stdlib.h>
int main()
{
	int chars,i=0;
	char *ptr;
	while(i<3)    //For 3 employees
	{
		printf("Employee %d : Enter the number of character in your Employee ID\n",i+1);
		scanf("%d",&chars);
		ptr = (char *)malloc((chars+1)*sizeof(char));
		printf("Enter your Employee ID:\n");
		scanf("%s",ptr);
		printf("Your Employee id is: %s\n",ptr);
		i+=1;
	}
	return 0;
}
