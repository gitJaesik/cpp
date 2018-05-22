#include<iostream>
#include<windows.h>

using namespace std;

#define BOARD_X 20
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
	COORD pos = { x*2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ioHideCursor()
{
	CONSOLE_CURSOR_INFO cur_info;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
	cur_info.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur_info);
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

	// space should be printed
	for (int i = 0; i < 4; i++) {
		ioSetCursorPosition(x, y+i);
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
			board[y - 1 + i][x + j] |= block[0][i][j];
		}
	}
	return true;
}

int main() {

	ioHideCursor();

	for (int i = 0; i < BOARD_X; i++) {
		board[BOARD_Y - 1][i] = 1;
	}

	for (int i = 0; i < BOARD_Y; i++) {
		board[i][0] = board[i][BOARD_X - 1] = 1;
	}

	bool bGameOver = false;

	while (false == bGameOver) {
		int x = 8;
		int y = 0;
		while (false == bGameOver) {
			printBoard();
			render(x, y);
			Sleep(100);
			//clearBoard();
			y++;
			if (checkBlock(x, y)) {
				y--;
				if (y == 0)
					bGameOver = true;
				break;
			}
		}
	}

	getchar();
	getchar();
	return 0;
}