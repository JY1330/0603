#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
	COORD Pos = {x-1, y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
	
}
int main()
{
	gotoxy(2,4);
	printf("Hello");
	gotoxy(40,20);
	printf("Hello\n");
	
	return 0;
}
