class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int v = matrix.size();
        int h = matrix[0].size();
        int high = v - 1;
        int low = 0;
        
        while(low <= high)
        {
            int mid = (high + low) / 2;
            if(target > matrix[mid][h-1])
            {
                low = mid + 1;
            }
            else if(target < matrix[mid][0])
            {
                high = mid - 1;
            }
            else if((target >= matrix[mid][0]) && (target <= matrix[mid][h-1]))
            {
                int high1 = h - 1;
                int low1 = 0;
                while(low1 <= high1)
                {
                    int mid1 = (high1 + low1) / 2;
                    if(target > matrix[mid][mid1])
                    {
                    low1 = mid1 + 1;
                    }
                    else if(target < matrix[mid][mid1])
                    {
                    high1 = mid1 - 1;
                    }
                    else if(target == matrix[mid][mid1])
                    {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
