#include<stdio.h>
struct Driver
{
	char name[50];
	char dlno[30];
	char route[45];
	int kms;
	
};
int main()
{
	struct Driver d1,d2,d3;
	printf("Enter the details of the driver\n");
	printf("Enter the details of driver no.1\n");
	
	printf("Enter the name of Driver 1:-\n");
	scanf("%s",&d1.name);
	
	printf("Enter the DL No. of Driver 1:-\n");
	scanf("%s",&d1.dlno);
	
	printf("Enter the route of Driver 1:-\n");
	scanf("%s",&d1.route);
	
	printf("Enter the kms of Driver 1:-\n");
	scanf("%d",&d1.kms);
	
	
	printf("Enter the name of Driver 2:-\n");
	scanf("%s",&d2.name);
	
	printf("Enter the DL No. of Driver 2:-\n");
	scanf("%s",&d2.dlno);
	
	printf("Enter the route of Driver 2:-\n");
	scanf("%s",&d2.route);
	
	printf("Enter the kms of Driver 2:-\n");
	scanf("%d",&d2.kms);
	
	
	printf("Enter the name of Driver 3:-\n");
	scanf("%s",&d3.name);
	
	printf("Enter the DL No. of Driver 3:-\n");
	scanf("%s",&d3.dlno);
	
	printf("Enter the route of Driver 3:-\n");
	scanf("%s",&d3.route);
	
	printf("Enter the kms of Driver 3:-\n");
	scanf("%d",&d3.kms);
	
	
	printf("Name of driver 1 is %s\n",d1.name);
	printf("DL No of driver 1 is %s\n",d1.dlno);
	printf("Route of driver 1 is %s\n",d1.route);
	printf("Kms of driver 1 is %d\n",d1.kms);
	
	printf("Name of driver 2 is %s\n",d2.name);
	printf("DL No of driver 2 is %s\n",d2.dlno);
	printf("Route of driver 2 is %s\n",d2.route);
	printf("Kms of driver 2 is %d\n",d2.kms);
	
	printf("Name of driver 3 is %s\n",d3.name);
	printf("DL No of driver 3 is %s\n",d3.dlno);
	printf("Route of driver 3 is %s\n",d3.route);
	printf("Kms of driver 3 is %d\n",d3.kms);
	
	return 0;	 
}

