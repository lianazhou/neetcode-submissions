class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> results;
        for(int i = 0; i < nums.size(); i++){
            int cur = nums[i];
            if(cur > 0){
                break;
            }
            if(i > 0 && cur == nums[i - 1]){
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = cur + nums[l] + nums[r];
                if(sum == 0){
                    results.push_back({cur, nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]){
                        l++;
                    }
                }
                else if(sum < 0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    return results;   
    }
};
