#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0;
	int a[3][4],b[4][2],result[3][2];
	int i,j,k;
	printf("Enter the first matrix:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			//printf("Enter the %d %d element of the first matrix\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix:-\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			//printf("Enter the %d %d element of the second matrix\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
				sum+=a[i][j] * b[i][j];
			}
			result[i][j] = sum;
			sum =0;
		}
	}
	printf("\nMatrix Multiplication is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",result[i][j]);
		}
		printf("\n");
	}

	return 0;
}
