class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> sqs(9);

        for(int r = 0; r < 9;r++){
            for(int c = 0; c < 9;c++){
                char cur = board[r][c];
                if(cur == '.'){
                    continue;
                }
                int box = (r/3) * 3 + (c/3);
                if(cols[c].contains(cur) || rows[r].contains(cur) || sqs[box].contains(cur)){
                    return false;
                }
                else{
                    cols[c].insert(cur);
                    rows[r].insert(cur);
                    sqs[box].insert(cur);
                }
            }
        }
        return true;
    }
};
