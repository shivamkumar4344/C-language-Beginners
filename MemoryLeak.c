#include<stdio.h>
int main()
{
	int i=0;
	int * i2;
	while(i<345669){
		printf("HELLO !");
		i2 = malloc(23345*sizeof(int));
		if(i%100==0){
			getchar();
		}
		i++;
		free(i2); //Used to avoid memory leak..
	}
	return 0;
}
