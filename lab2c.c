#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter 3 number: ");
	scanf("%i %i %i", &a, &b, &c);
	
	if(a>b && a>c && b>c)
	printf("A: %i\nB: %i\nC: %i", a, c, b);
	
	else if(b>a && b>c && a>c)
	printf("A: %i\nB: %i\nC: %i", b, c, a); 
	
	else if(c>b && c>a && a>b)
	printf("A: %i\nB: %i\nC: %i", c, b, a); 
	
	else if(a>b && a>c && c>b)
	printf("A: %i\nB: %i\nC: %i", a, b, c); 
	
	else if(b>a && b>c && c>a)
	printf("A: %i\nB: %i\nC: %i", b, a, c); 
	
	else if(c>b && c>a && b>a)
	printf("A: %i\nB: %i\nC: %i", c, a, b); 
	
	else
	printf("Error");
	
}
