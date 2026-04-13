
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class TicTacToe {
private:
    vector<vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() : currentPlayer('X') {
        board.assign(3, vector<char>(3, ' '));
    }

    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
            if (i < 2) cout << "---+---+---\n";
        }
        cout << "\n";
    }

    void displayPositions() {
        cout << "\nQuick guide (positions):\n";
        cout << " 1 | 2 | 3\n";
        cout << "---+---+---\n";
        cout << " 4 | 5 | 6\n";
        cout << "---+---+---\n";
        cout << " 7 | 8 | 9\n\n";
    }

    bool isValidMove(int position) {
        if (position < 1 || position > 9) return false;
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        return board[row][col] == ' ';
    }

    void makeMove(int position) {
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        board[row][col] = currentPlayer;
    }

    bool checkWin() {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
                return true;
        }

        for (int i = 0; i < 3; i++) {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
                return true;
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
            return true;

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
            return true;

        return false;
    }

    bool isBoardFull() {
        for (auto &row : board)
            for (auto &cell : row)
                if (cell == ' ') return false;
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    char getCurrentPlayer() {
        return currentPlayer;
    }

    int getAIMove() {
        // Try winning move
        for (int i = 1; i <= 9; i++) {
            if (isValidMove(i)) {
                makeMove(i);
                if (checkWin()) {
                    undoMove(i);
                    return i;
                }
                undoMove(i);
            }
        }

        // Block opponent
        char opponent = (currentPlayer == 'X') ? 'O' : 'X';
        char temp = currentPlayer;
        currentPlayer = opponent;

        for (int i = 1; i <= 9; i++) {
            if (isValidMove(i)) {
                makeMove(i);
                if (checkWin()) {
                    currentPlayer = temp;
                    undoMove(i);
                    return i;
                }
                undoMove(i);
            }
        }
        currentPlayer = temp;

        // Smart choices
        if (isValidMove(5)) return 5;

        vector<int> corners = {1, 3, 7, 9};
        for (int c : corners)
            if (isValidMove(c)) return c;

        for (int i = 1; i <= 9; i++)
            if (isValidMove(i)) return i;

        return -1;
    }

    void undoMove(int position) {
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        board[row][col] = ' ';
    }
};

int main() {
    srand(time(0));

    cout << "\n🎮 Welcome to Tic Tac Toe!\n";
    cout << "You are X, computer is O.\n";
    cout << "Try to beat the AI (good luck 😏)\n";

    TicTacToe game;
    game.displayPositions();

    while (true) {
        game.displayBoard();

        if (game.getCurrentPlayer() == 'X') {
            int position;

            while (true) {
                cout << "Your move (1-9): ";
                cin >> position;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "That’s not even a number. Try again.\n";
                    continue;
                }

                if (game.isValidMove(position)) break;

                cout << "That spot’s taken or invalid. Think again.\n";
            }

            game.makeMove(position);
        } else {
            cout << "Computer is thinking...\n";
            int move = game.getAIMove();
            cout << "Computer chooses: " << move << "\n";
            game.makeMove(move);
        }

        if (game.checkWin()) {
            game.displayBoard();
            cout << "\n🔥 Game Over!\n";
            cout << "Player " << game.getCurrentPlayer() << " wins!\n";
            break;
        }

        if (game.isBoardFull()) {
            game.displayBoard();
            cout << "\n🤝 It’s a draw!\n";
            break;
        }

        game.switchPlayer();
    }

    cout << "\nThanks for playing!\n";
    return 0;
}
