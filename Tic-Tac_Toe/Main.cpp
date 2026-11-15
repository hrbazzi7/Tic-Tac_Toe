#include <iostream>
#include <iomanip>
using namespace std;
void printBoard(char table[3][3]) {
    cout << setw(18) << "Tic Tac Toe" << endl;
    cout << "\n";
    cout << "Player 1 (X) - Player 2 (O)" << endl;
    cout << "\n\n";

    cout << "+---+---+---+" << endl;

    for (int row = 0; row < 3; row++) {
        cout << "|";
        for (int col = 0; col < 3; col++) {
            cout << " " << table[row][col] << " |";
        }
        cout << endl;
        cout << "+---+---+---+" << endl;
    }
}
int main() {
    char table[3][3]{
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    bool gameOver = false;
    while (!gameOver) {
        for (int i = 0; i < 9; i++) {
            printBoard(table);

            if (i == 0 || i % 2 == 0) {
                char num;
                cout << "Player 1, enter a number: ";
                cin >> num;
                for (int r = 0; r < 3;r++) {
                    for (int c = 0; c < 3; c++) {
                        if (table[r][c] == num) {
                            table[r][c] = 'X';
                        }
                    }
                }
            }
            else {
                char num;
                cout << "Player 2, enter a number: ";
                cin >> num;
                for (int r = 0; r < 3;r++) {
                    for (int c = 0; c < 3; c++) {
                        if (table[r][c] == num) {
                            table[r][c] = 'O';
                        }
                    }
                }
            }
            system("clear");

            if ((table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X') ||
                (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X') ||
                (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')) {
                printBoard(table);
                cout << "==> Player 1 Wins!" << endl;
                gameOver = true;
                break;

            }
            // Columns
            else if ((table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X') ||
                (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X') ||
                (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X')) {
                printBoard(table);
                cout << "==> Player 1 Wins!" << endl;
                gameOver = true;
                break;
            }
            // Diagonals
            else if ((table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X') ||
                (table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X')) {
                printBoard(table);
                cout << "==> Player 1 Wins!" << endl;
                gameOver = true;
                break;
            }

            if ((table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O') ||
                (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O') ||
                (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')) {
                printBoard(table);
                cout << "==> Player 2 Wins!" << endl;
                gameOver = true;
                break;

            }
            // Columns
            else if ((table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O') ||
                (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O') ||
                (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')) {
                printBoard(table);
                cout << "==> Player 2 Wins!" << endl;
                gameOver = true;
                break;
            }
            // Diagonals
            else if ((table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O') ||
                (table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O')) {
                printBoard(table);
                cout << "==> Player 2 Wins!" << endl;
                gameOver = true;
                break;
            }
        }
        break;


    }
    return 0;
}