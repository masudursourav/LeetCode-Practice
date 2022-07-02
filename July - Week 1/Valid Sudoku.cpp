/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/769/ */

/*

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

*/
/*
Example 1:

Input: board =
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

*/

/* Solution */

/* first have to check the row and column that it have any number from 1 to 10 more than 1 time if it has
then simpley return false . otherwise we have to check the boxs.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            int checkRow[10] = {0}, checkColumn[10] = {0}, checkBox [10] = {0};
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int value = board[i][j] - '0';
                    ++checkRow[value];
                    if(checkRow[value] > 1) return false;
                }
                if(board[j][i] != '.'){
                    int value = board[j][i] - '0';
                    ++checkColumn[value];
                    if(checkColumn[value] > 1) return false;
                }

                int row = 3 * (i / 3) + j / 3, coulmn = 3 * (i % 3) + j % 3;
                if(board[row][coulmn] != '.'){
                   int value = board[row][coulmn] - '0';
                    ++checkBox[value];
                    if(checkBox[value] > 1) return false;
                }

            }
        }
        return true;

    }
};


// Time Complexity : O(1)
// Space Complexity : O(1)
