#include<stdio.h>
int main(){
	int marks[2][4] = {{23,45,78,90},{12,11,39,0}};
	int i,j;
	for(i=0;i<2;i+=1){
		for (j=0;j<4;j+=1){
//			printf("Value of %d %d element in array is %d\n",i,j,marks[i][j]); //it will represent each element in the form of number of rows and number of columns..
            printf(" %d",marks[i][j]);  //it is in the form of matrix
            
		}
		printf("\n");
	}
	return 0;
}
