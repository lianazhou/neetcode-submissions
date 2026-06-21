class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> modified;
        int height = matrix.size();
        int width = matrix[0].size();
        for(int j = 0; j < width; j++)
        {
            vector<int> current;
            for(int i = height - 1; i >=0 ; i--)
            {
                current.push_back(matrix[i][j]);
            }
            modified.push_back(current);
        }
        matrix = modified;
    }
};
