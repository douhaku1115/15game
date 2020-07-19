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
void swap(VEC2* i,VEC2* j) {
	VEC2 *temp = i;
	i = j;
	j = temp;

}
bool check(VEC2 pos) {
	if(pos.x!=0 && pos.y!=0)
	return true;
}
void movToBlank(VEC2 _movePos) {
	if (board[_movePos.y][_movePos.x] == 0) return;

		VEC2 blankPos = getSBlankPos();
		int temp = board[blankPos.y][blankPos.x];
		board[blankPos.y][blankPos.x] = board[_movePos.y][_movePos.x];
		board[_movePos.y][_movePos.x] = temp;

		
}
void shuffle() {
	
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 100; i++) {
		VEC2 blankPos = getSBlankPos();
		VEC2 movePos = blankPos;
		switch (rand()%4) {
		case 0:
			movePos.y++;; break;
		case 1:
			movePos.y--; break;
		case 2:
			movePos.x++; break;
		case 3:
			movePos.x--; break;
		}
		movToBlank(movePos);
	}

}
int main() {
	init();  //èâä˙ê›íË 
	shuffle();
	display();
	
	

	while (1) {
		VEC2 blankPos = getSBlankPos();
		VEC2 movePos=blankPos;
		if (_kbhit()) {


			switch (_getch()) {
			case'w':
				movePos.y++;; break;
			case's':
				movePos.y--; break;
			case'a':
				movePos.x++; break;
			case'd':
				movePos.x--; break;
			}
			movToBlank(movePos);
		}
		//swap(&blankPos, &movePos);
		display();
	}

	_getch();
}