class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> key;
        for(int n : nums){
            key[n] = 1 + key[n];
        }
        vector<vector<int>> freq(nums.size() + 1);
        for(const auto &pair : key){
            freq[pair.second].push_back(pair.first);
        }

        vector<int> result;
        for(int i = freq.size() - 1; i >= 0; --i){
            for(int n : freq[i]){
                result.push_back(n);
                if(result.size() >= k){
                    return result;
                }
            }
        }
        return result;
        
    }
};