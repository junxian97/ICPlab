#include<stdio.h>

main(){
	
	int assign, quiz, quiz1, quiz2, test;
	int Assign, Quiz, Test;
	int course;
	int final, Final;
	int total;
	
	printf("Please enter marks (between 0-100)-\n");
	printf("Enter assignment marks: ");
	scanf("%i",&assign);
	printf("Enter 2 quiz marks: ");
	scanf("%i %i",&quiz1, &quiz2);
	printf("Enter test marks: ");
	scanf("%i",&test);
	
	quiz=quiz1+quiz2;
	Assign=assign*20/100;
	Quiz=quiz*10/100;
	Test=test*30/100;
	course=Assign+Quiz+Test;
	
	if(assign>40 && quiz>40 && test>40 && course>30)
		{
		printf("You are qualify for final exam.\n");
		goto exam;}
	else
		{
		printf("You are not qualify for final exam.\n");
		system("exit");}
	
	exam:
		printf("Enter your final exam marks: ");
		scanf("%i",&final);
		
		total=Final+course;
	if (final<40)
		printf("You need to repeat the subject.\n");
	else if (final>=40 && final<=100)
		{
		if(total>=90 && total<=100)
			printf("Your grade is A+.");
		else if(total>=80 && total<=89)
			printf("Your grade is A.");
		else if(total>=75 && total<=79)
			printf("Your grade is A-.");
		else if(total>=70 && total<=74)
			printf("Your grade is B+.");
		else if(total>=65 && total<=69)
			printf("Your grade is B.");
		else if(total>=60 && total<=64)
			printf("Your grade is B-.");
		else if(total>=55 && total<=59)
			printf("Your grade is C+.");
		else if(total>=50 && total<=54)
			printf("Your grade is C.");
		else if(total>=45 && total<=49)
			printf("Your grade is C-.");
		else if(total>=40 && total<=44)
			printf("Your grade is D.");
		else if(total>=0 && total<=39)
			printf("Your grade is F.");
		else
			printf("Error");
		}
	else
		printf("Error");
}
