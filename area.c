//write a program to find the area of circle if the area is greater than 50 then find its circumference of circle if the area is equal to 50 then find volume of sphere. 
# include<stdio.h>
main()
{
	int r,a,c,v;
	printf("Enter the radius:-");
	scanf("%d",&r);
	a = 3.14 * r * r;
	printf("area is:%d \n",a);
	c = 2* 3.14 * r ;
	v =(4*3.14*r*r*r)/3;
	if (a>50){
		printf("Cicumference is:-%d",c);
		
	}
	
	else if (a==50){
		printf("Volume of sphere is:-%d",v);
	}
	
	else {
		printf("Nothing");
	}
	
}
