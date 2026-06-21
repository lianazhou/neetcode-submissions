class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num;
        for (int i : nums){
            if (num.contains(i))
            {
                return true;
            }
            else{
                num.insert(i);
            }
        }
        return false;
    }
};