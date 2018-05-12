#inlcude <Windows.h>
#include <iostream>

using namespace std;
char board[10][20];

void clearBoard() {
    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 20; ++x) {
            board[y][x] = ' ';
        }
    }
}
        
void printBoard() {
    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 20; ++x) {
            cout << board[y][x];
        }
        cout << endl;
    }
}
         
         
int main() {
    HANDLE hStdout;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = 5;
    coord.Y = 0;
    SetConsoleCursorPosition(hStdout, coord);

    COORD zero;
    zero.X = 0;
    zero.Y = 0;
    while (true) {
        // 지우는 부분
        SetConsoleCursorPosition(hStdout, zero); // (0,0)으로 이동
        printBoard(); // (0,0) ~ (9, 19)까지 ' ' (공백)을 입력
        // 위의 실행하면 다 지워지겠지..
        
        // 그리는 부분
        // 커서의 포지션을 그림을 그리는 위치로 이동
        SetConsoleCursorPosition(hStdout, coord);
        cout << "a";
        coord.Y++;
        
        if (coord.Y == 10)
            break;
        Sleep(300);
    }
  
    
    getchar();
    getchar();
    
    return 0;
}
