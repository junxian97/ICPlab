void main(){
	
	int day, month, year;
	
	printf("Day (1-31): ");
	scanf("%i",&day);
	printf("Month (1-12): ");
	scanf("%i",&month);
	printf("Year (2000-2018): ");
	scanf("%i",&year);
	
	if(day>1) {
	 if(year%4==0)
	  switch(month){
	   case 1: day<=31;day--; break;
 	   case 3: day<=31;day--; break;
	   case 5: day<=31;day--; break;
	   case 7: day<=31;day--; break;
	   case 8: day<=31;day--; break;
	   case 10: day<=31;day--; break;
	   case 12: day<=31;day--; break;
	   case 2: day<=29;day--; break;
	   case 4: day<=30;day--; break;
	   case 6: day<=30;day--; break;
	   case 9: day<=30;day--; break;
	   case 11: day<=30;day--; break;
    }
    else if(year%4==1)
    switch(month){
	   case 1:
 	   case 3:
	   case 5:
	   case 7:
	   case 8:
	   case 10:
	   case 12: day<=31;day--; break;
	   case 2: day<=28;day--; break;
	   case 4:
	   case 6:
	   case 9:
	   case 11: day<=30;day--; break;
    }
     else
       printf("Error.");
   }
   else if (day==1){
   	if(year%4==0)
	  switch(month){
	   case 1: 
 	   case 3: 
	   case 5: 
	   case 7: 
	   case 8: 
	   case 10:
	   case 12: day<=31;month--; break;
	   case 2: day<=29;month--; break;
	   case 4:
	   case 6:
	   case 9:
	   case 11: day<=30;month--; break;
    }
    else if(year%4==1)
    switch(month){
	   case 1:
 	   case 3:
	   case 5:
	   case 7:
	   case 8:
	   case 10:
	   case 12: day<=31;month--; break;
	   case 2: day<=28;month--; break;
	   case 4:
	   case 6:
	   case 9:
	   case 11: day<=30; month; break;
    }
     else
       printf("Error.");
   }
	 
} 
