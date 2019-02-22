#include<stdio.h>

main(){
	
	int age,ticket;
	double value,base, base1, base2;
	
	printf("Please enter driver's age: ");
	scanf("%i",&age);
	printf("Please enter number of tickets: ");
	scanf("%i", &ticket);
	printf("Please enter value of car: ");
	scanf("%lf",&value);
	
	base=value*5/100;
	
	if(age<25 && age>=18)
	base1=base*115/100;
	else if(age>=25 && age<=29)
	base1=base*110/100;
	else
	{
	printf("Error");
	system("pause");
}
	
	if(ticket==1)
	{
	base2=base1*110/100;
	printf("Insurance premium: %.lf",base2);
	}else if(ticket==2)
	{
	base2=base1*125/100;
	printf("Insurance premium: %.lf",base2);
	}else if(ticket==3)
	{
	base2=base1*150/100;
	printf("Insurance premium: %.lf",base2);
	}else
	{
	printf("Reject.");
	system("exit");
}
	
}
