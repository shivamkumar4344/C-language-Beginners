//with argument and without return value
#include<stdio.h>
void printstar(int n){
	int i =0;
	for(i=0;i<n;i+=1){
		printf("%c",'*');
	}
	
	
}

int main(){
	
	printstar(6);
}

