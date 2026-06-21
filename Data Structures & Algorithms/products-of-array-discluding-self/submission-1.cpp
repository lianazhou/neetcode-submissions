class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int before = nums[0];
        int after = 1;
        vector<int> solution(n);
        solution[0] = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            solution[i] = before;
            before *= nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            solution[i] *= after;
            after *= nums[i];
        }
        return solution;
    }
};