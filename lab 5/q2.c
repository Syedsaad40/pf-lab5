#include<stdio.h>
int main(){
	int a,b,c,sum;
	printf("Enter the first angle:");
	scanf("%d",&a);
		printf("Enter the second angle:");
	scanf("%d",&b);
		printf("Enter the third angle:");
	scanf("%d",&c);
	sum = a + b + c;
	if(a>0 && b>0 &&c> 0 && sum == 180){
		printf("This is a triangle");
		
	}
	else{
		printf("This is not a triangle");
	}
	
	return 0;
}