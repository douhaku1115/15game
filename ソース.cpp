#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define FIELD_WIDTH 6
#define FIELD_HEIGHT 6
#define BOARD_WIDTH 4
#define BOARD_HEIGHT 4
#define  BLANK_NUMBER 16
typedef struct {
	int x, y;
}VEC2;

int cx = 3, cy = 3;
char cellAA[][2 + 1] = {
	"Å†"

};
int board[BOARD_HEIGHT][BOARD_WIDTH];

void swap(int _x,int _y) {

}
void display() {
	system("cls");
	printf("+--+--+--+--+\n");
	for (int y = 0; y < BOARD_HEIGHT; y++) {
		for (int x = 0; x < BOARD_WIDTH; x++)
			if (board[y][x] == BLANK_NUMBER)
				printf("|  ");
			else
				printf("|%2d", board[y][x]);

		printf("|\n");
		printf("+--+--+--+--+\n");

	}
}
void init(){

	for (int y = 0; y < BOARD_HEIGHT; y++) 
		for (int x = 0; x < BOARD_WIDTH; x++) 
			board[y][x] = y * BOARD_WIDTH + x+1;
}
void shuffle() {

}
void move() {

}
int getField(int _x, int _y) {
	return board[_y][_x];
}

VEC2 getSBlankPos() {
	VEC2 blankPos = { -1,-1 };
	for (int j = 0; j < BOARD_HEIGHT; j++)
		for (int i = 0; i < BOARD_WIDTH; i++)
			if (board[j][i] == BLANK_NUMBER)

				return blankPos = { i,j };
}
void swap(int *x,int *y) {
	int* temp = x;
	x = y;
	y = temp;

}
bool check(VEC2 pos) {
	if(pos.x!=0 && pos.y!=0)
	return true;
}
int main() {
	init();  //èâä˙ê›íË 
	shuffle();
	display();
	move();

	while (1) {
		VEC2 x, y;
		if (_kbhit()) {


			switch (_getch()) {
			case'w':
				if (check(getSBlankPos()) != 0)
					; break;
				board[2][3] = 16; board[3][3] = 12; break;
			case's':
				if(check(getSBlankPos() )!=0); break;
			case'd':
				; break;
			case'a':
				; break;
			}
		}
		display();
	}

	_getch();
}