#include<stdio.h>
int main(){
	int i,age;
	for(i=0;i<10;i++){
		printf("%d\nEnter ur age:-\n",i);
		scanf("%d",&age);
//		if (age>10){
//			break;\\break means if it satisfies the condition it will not executes again.
//		}
        if (age>10){
        	continue;
		}
		printf("My name is Shivam...\n");
		printf("My name is Shivam...\n");
		printf("My name is Shivam...\n");
		printf("My name is Shivam Yadav...\n");//continue means it doesn't look at the code written below if satiesfies, it again go to the loop..
	}
	
}
