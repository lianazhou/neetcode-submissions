class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> prev(len, 1);
        for(int i = 1; i < len; i++){
            prev[i] = nums[i - 1] * prev[i - 1];
        }
        int back = nums[len - 1];
        for(int i = len - 2; i >= 0; i--){
            prev[i] = back * prev[i];
            back *= nums[i];
        }
        return prev;
    }
};
