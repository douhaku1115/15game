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


int main() {

	for (int x = 0; x < FIELD_HEIGHT; x++) {
		for (int y = 0; y < FIELD_WIDTH; y++)
			board[y][x] = y * BOARD_WIDTH + x;

	}
	printf("good");
	_getch();
}