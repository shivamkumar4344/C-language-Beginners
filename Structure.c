#include<stdio.h>
#include<string.h>
struct Student
{
	int id;
	float marks;
	char name[54];
};

int main()
{

	struct Student Raman,Shivam,Kunal;
	Raman.id =1;
	Shivam.id =2;
	Kunal.id =3;
	Raman.marks = 98.109;
	Shivam.marks = 99.89;
	Kunal.marks = 98.809;
    strcpy(Raman.name,"Raman Deep raj");
    strcpy(Shivam.name,"Shivam Yadav");
    strcpy(Kunal.name,"Kunal Singh");
    printf("Kunal full name is %s and his id is %d and his marks is %.2f\n",Kunal.name,Kunal.id,Kunal.marks);
//	printf("Marks of Shivam is %f\n",Shivam.marks);
//	printf("Id of Raman is %d\n",Raman.id);
//	printf("Name of Kunal is %s\n",Kunal.name);
//	

	return 0;
}
