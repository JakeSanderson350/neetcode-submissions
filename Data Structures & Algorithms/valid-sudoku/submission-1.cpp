#include <unordered_map>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<int, std::unordered_set<char>> rows, cols;
        std::map<std::pair<int, int>, std::unordered_set<char>> squares;

        for (int y = 0; y < 9; y++)
        {
            for (int x = 0; x < 9; x++)
            {
                if (board[y][x] == '.')
                    continue;

                std::pair<int, int> squareKey = {y / 3, x / 3};

                if (rows[y].contains(board[y][x]) || 
                    cols[x].contains(board[y][x]) || 
                    squares[squareKey].contains(board[y][x]))
                    return false;
               
                rows[y].insert(board[y][x]);
                cols[x].insert(board[y][x]);
                squares[squareKey].insert(board[y][x]);
                
            }
        }

        return true;
    }
};
