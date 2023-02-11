//Wap to enter the student's reg_no,mobile_no,semester,cgpa,grade
#include<stdio.h>
main()
{
	
	int reg_no,sem;
	long long int mob_no;
	float cgpa;
	char grade;
	char name[100];
	char roll_no[100];
	char add[100];
	printf("Enter Registartion no:-");
	scanf("%d",&reg_no);
	printf("Enter the semester:-");
	scanf("%d",&sem);
	printf("Enter mobile no:-");
	scanf("%lli",&mob_no);
	printf("Enter the cgpa:-");
	scanf("%f",&cgpa);
	printf("Enter the grade:-");
	fflush(stdin);
	scanf("%c",&grade);
	printf("Enter the name of the student:-");
	fflush(stdin);
	scanf("%[^\n]c",&name);
	printf("Enter the roll no:-");
	fflush(stdin);
	scanf("%[^\n]c",&roll_no);
	printf("Enter the address:-");
	fflush(stdin);
	scanf("%[^\n]c",&add);
//	printf("%d %d %lli %.2f %c %s %s %s",reg_no,sem,mob_no,cgpa,grade,name,roll_no,add);
    printf("The Regisration number is:-%d \n",reg_no);
    printf("The semester is:-%d \n",sem);
    printf("The Mobile number is:-%lli \n",mob_no);
    printf("The CGPA is:-%f \n",cgpa);
    printf("The Grade is:-%c \n",grade);
    printf("The Name of Student is:-%s \n",name);
    printf("The Roll number is:-%s \n",roll_no);
    printf("The Address is:-%s \n",add);
    
		
}
