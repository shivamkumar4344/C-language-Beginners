#include<stdio.h>
main()
{
	int reg_no;      //declaration of variable
	float cgpa;
	printf("Enter the value of registration no:-");
	
	scanf("%d",&reg_no);
	printf("Enter the cgpa:-");
	scanf("%f",&cgpa);
	printf("The value of registration number is:");
	printf("%d\n",reg_no);
    printf("The Registration number is:-%d \n",reg_no);
//    printf("Address of reg_no is:%d",&reg_no);
    printf("Cgpa is :- %f \n",cgpa);
    printf("Address of cgpa is:%d",cgpa);
}


