#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define FIELD_WIDTH 6
#define FIELD_HEIGHT 6
#define BOARD_WIDTH 4
#define BOARD_HEIGHT 4

char cellAA[][2 + 1] = {
	"Å†"

};
int board[BOARD_HEIGHT][BOARD_WIDTH];

void swap(int _x,int _y) {

}
void display() {

}
void init(){
	printf("+--+--+--+--+\n");
	for (int y = 0; y < BOARD_HEIGHT; y++) {
		for (int x = 0; x < BOARD_WIDTH; x++) {
			board[y][x] = y * BOARD_WIDTH + x;
			printf("|%2d", board[y][x]);
		}
		printf("|\n");
		printf("+--+--+--+--+\n");
	}
}

int main() {
	init();                               //èâä˙ê›íË  


	
	_getch();
}