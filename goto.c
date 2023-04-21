#include<stdio.h>
int main(){
	int num,i,j;
	for (i=0;i<8;i+=1){
		printf("%d",i);
		for(j=0;j<8;j+=1){
			printf("Enter the number. enter 0 to exit\n");
			scanf("%d",&num);
			if(num==0){
				goto end;
			}
		}
		
	}
	end:
	return 0;
}
