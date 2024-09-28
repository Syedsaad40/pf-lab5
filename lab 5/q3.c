#include<stdio.h>
int main(){
	int num;
	printf("Enter the percentage:");
	scanf("%d",&num);
	num>90 ? printf("Grade is A"):printf("") ;
	num>=80 && num < 90 ? printf("Grade is B"): printf("");
	num>=70 && num < 80? printf("Grade is C"):printf("") ;
	num>=60 && num < 70? printf("Grade is D"):printf("") ;
	num>=0 && num <60 ? printf("Grade is F"):printf("") ;
	num<0 ? printf("Invalid grade"):printf("") ;

	
	return 0;
}