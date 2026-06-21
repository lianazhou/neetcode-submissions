class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int cur = nums[i];
            if(seen.contains(target - cur)){
                if(seen[target - cur] != i)
                {
                    result.push_back(seen[target - cur]);
                    result.push_back(i);
                    return result;
                }
            } 
            seen[cur] = i;
        }
        return result;   
    }
};
