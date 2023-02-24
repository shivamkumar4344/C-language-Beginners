# include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER TUHE VALUES OF A,B,C:-");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b || b==c || c==a){
		printf("All are equal no need to comapre");
	}

	else if (a>b && a>c){
	
	printf("a is greater");}

	else if (b>c){
	
	printf("b is greater");}
	
	else{
		printf("c is greater");
	}
	
}
