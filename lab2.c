#include<stdio.h>

void main(){
	
	int num, result;
	
	
	printf("Enter number: ");
	scanf("%i",&num);
	result=num%2;
	
	if (result==1)
		printf("Number is odd.");
	else
		printf("Number is even.");
}
