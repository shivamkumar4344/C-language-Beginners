#include<stdio.h>
main()
{
	int reg_no,sem;
	float cgpa;
	char grade;
	long long int mob_no;
	printf("Enter the reg_no:-");
	scanf("%d",&reg_no);
	printf("Enter the semester:-");
	scanf("%d",&sem);
	printf("Enter the cgpa:-");
	scanf("%f",&cgpa);
	printf("Enter the grade:-");
	fflush(stdin);
	scanf("%c",&grade);
	printf("Enter the mobile no:-");
	scanf("%lli",&mob_no);
	printf("\nThe Student's details are:-\n");
	printf("%d %d %.2f %c %lli",reg_no,sem,cgpa,grade,mob_no );
	
}
