#include<stdio.h>
struct student{
	int regNo[3];
	float cgpa[3];
	char grade[3];
	char name[3][50];
};
int main(){
	struct student s1,s2,s3;
	int x;
	for(x=0;x<3;x++){
	
	printf("Enter the reg no of %d student :-",x+1);
	scanf("%d",&s1.regNo[x]);
//	printf("The reg no of sudent s1 is %d\n",s1.regNo);
	
	printf("Enter cgpa of %d student :-",x+1);
	scanf("%f",&s1.cgpa[x]);
//	printf("The cgpa of student s1 is %.2f\n",s1.cgpa);
	fflush(stdin);
	printf("Enter the  grade of %d student :-",x+1);
	scanf("%c",&s1.grade);
//	printf("The reg no of student s1 is %c\n",s1.grade[x]);
	
	printf("Enter  the name of %d student :-",x+1);
	fflush(stdin);
    scanf("%s",&s1.name[x]);
}
//	printf("The name of student s1 is %s\n",s1.name);
//	printf("Size taken by object in memory:%d",sizeof(s1));
//	printf("\nStudents Details are:");
//	s2=s1;
    for(x=0;x<3;x++){
	
	printf("\n%d\t%.2f\t%c\t%s\n",s1.regNo[x],s1.cgpa[x],s1.grade[x],s1.name[x]);
}
//	puts(s2.grade);
	
	return 0;
}
