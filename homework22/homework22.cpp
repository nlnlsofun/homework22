#include <iostream>
using namespace std;

int main() {
    int board[3][3];
    bool win = false;
    int i, j;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> board[i][j];
        }
    }


    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            win = true;
            break;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            win = true;
            break;
        }
    }


    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        win = true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        win = true;
    }


    if (win) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}