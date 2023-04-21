#include<stdio.h>
int main(){
	char a ="3";
	char *ptra = &a;
	printf("The value of pointer is %d\n",ptra);
	ptra++;
	printf("The value of pointer after increment is %d\n",ptra);
	printf("The value of pointer after decrement is %d\n",ptra-2);

	
	return 0;
}
