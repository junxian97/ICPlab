#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy(short x, short y) { //x y-coordinates for cursor
COORD pos ={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void main(void){
char c1, c2;
printf("Pick TWO (2) colors : ");
scanf("%c %c", &c1, &c2);
c1 = tolower(c1); //read characters in lowercase
c2 = tolower(c2);

switch(c1){
			case 'r': { gotoxy(25,0);
						if(c2=='b')
							puts(" \nRed + Blue = Color Purple");
						else if(c2=='y')
							puts(" \nRed + Yellow = Color Orange");
						}
			break;
			case 'y': { gotoxy(25,0);
						if(c2=='r')
							puts(" \nYellow + Red = Color Orange");
						else if(c2=='b')
							puts(" \nYellow + Blue = Color Green");
						}
				break;
			case 'b': { gotoxy(25,0);
						if(c2=='r')
							puts("  \nBlue + Red = Color Purple");
						else if(c2=='y')
							puts("  \nBlue + Yellow = Color Green");
						}
				break;
			
default:{ gotoxy(27,0);
			 puts(" = Not a primary choice.");
}}
}

