#include<stdio.h>
#include<string.h>//Library for string functions...
int main()
{
	char s1 []= "Shivam";
	char s2 []= "Yadav";
	char s3 [54];
	printf("After concatination:-%s\n",strcat(s1,s2));//It concatenate the given two strings.
	printf("The Length of s1 is %d\n",strlen(s1));//It gives the length of string.
	printf("The Length of s2 is %d\n",strlen(s2));
	printf("After Reversal s1 is \n");
	puts(strrev(s1)); //It reverses the string
	printf("After Reversal s2 is \n");
	puts(strrev(s2));
	printf("when we copy s1 in s2:\n");
	strcpy(s3,strcat(s1,s2)); //It copies the given strings 
	puts(s3);//simply means print
	printf("After comparing s1 with s2: %d\n",strcmp(s1,s2)); //It compares the given two strings and gives the result on the basis of first alphabet.
	return 0;
	
}
