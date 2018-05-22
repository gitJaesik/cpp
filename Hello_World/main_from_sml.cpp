#include<iostream>
#include<windows.h>

using namespace std;

#define BOARD_X 10
#define BOARD_Y 20


int board[BOARD_Y][BOARD_X];
//7개 4,4 배열
int block[7][4][4] = {
	{
		{ 0,0,0,0 },
		{ 0,1,1,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 }
	},
	{
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 }
	},
	{
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 }
	},
	{
		{ 0,0,1,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 }
	},
	{
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 }
	},
	{
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0.1,1,0 },
		{ 0,0,1,0 }
	},
	{
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 },
		{ 0,0,0,0 }
	}
};


void ioSetCursorPosition(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void clearBoard() {
	ioSetCursorPosition(0, 0);
	for (int i = 0; i < BOARD_Y; ++i)
	{
		for (int j = 0; j < BOARD_X; ++j) {
			cout << "  "; //cout[i][j];
		}
		cout << "\n";
	}
	ioSetCursorPosition(0, 0);
}


void printBoard() {
	ioSetCursorPosition(0, 0);
	for (int y = 0; y < BOARD_Y; ++y) {
		for (int x = 0; x < BOARD_X; ++x) {
			if (board[y][x] == 1) {
				cout << "■";
			}
			else
				cout << "  ";
		}
		cout << '\n';
	}

}



void render(int x, int y) { // 첫번째 블럭 출력

	ioSetCursorPosition(x, y);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			if (block[0][i][j] == 1) {
				cout << "■";
			}
			else
				cout << "  ";
		}
		cout << '\n';
	}

}

bool checkBlock(int x, int y) {
	bool check = false;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (board[y + i][x + j] == 1 && block[0][i][j] == 1) {
				check = true;
				break;
			}
		}
		if (true == check) break;
	}
	if (false == check) return false;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			board[y - 1 + i][x+j] == block[0][i][i];
		}
	}
	return true;
}

int main() {

	for (int i = 0; i < BOARD_X; i++) {
		board[BOARD_Y - 1][i] = 1;
	}


	while (true) {
		int x = 5;
		int y = 0;
		while (true) {
			printBoard();
			render(x, y);
			Sleep(600);
			clearBoard();
			y++;
			if (checkBlock(x, y)) {
				y--;
				break;
			}
		}
	}

	getchar();
	getchar();
	return 0;
}