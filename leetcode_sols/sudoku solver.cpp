class Solution {
public:
    bool isValid(vector<vector<char>> &board, int row, int col, char c) {
        for (int i = 0; i < 9; i++) {
            // row check
            if (board[row][i] == c) return false;
            // col check
            if (board[i][col] == c) return false;
            // 3x3 subgrid check
            int sr = 3 * (row / 3) + i / 3;
            int sc = 3 * (col / 3) + i % 3;
            if (board[sr][sc] == c) return false;
        }
        return true;
    }

    bool solve(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (isValid(board, i, j, c)) {
                            board[i][j] = c;
                            if (solve(board)) return true; // recursive solve
                            board[i][j] = '.'; // backtrack here
                        }
                    }
                    return false; // if no number fits
                }
            }
        }
        return true; // no empty cell left → solved
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
