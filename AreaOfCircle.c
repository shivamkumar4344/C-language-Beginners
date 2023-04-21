#include<stdio.h>
#include<math.h>

float Edistance(int x1, int y1 , int x2 , int y2)
{
	int a;
	a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
	return sqrt(a);
}

float areaOfCircle(int x1,int y1 ,int x2,int y2,float(*distance)(int x1,int y1 ,int x2,int y2))
{
	return distance(x1,y1,x2,y2);
}

int main()
{
	int x1,y1,x2,y2;
	float dst;
	printf("Enter x1:");
	scanf("%d",&x1);
	printf("Enter y1:");
	scanf("%d",&y1);
	printf("Enter x2:");
	scanf("%d",&x2);
	printf("Enter y2:");
	scanf("%d",&y2);
	
	dst=areaOfCircle(x1,y1,x2,y2,Edistance);
	printf("The distance b/w the points which's input is taken by user is :%.2f\n",dst);
	return 0;
}

