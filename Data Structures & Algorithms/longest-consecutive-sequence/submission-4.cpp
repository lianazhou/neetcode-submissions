class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        unordered_set<int> hash;
        for(int n : nums){
            hash.insert(n);
        }
        int longest = 1;
        int cur = 1;
        for(int n : nums){
            // start of sequence
            if(!hash.contains(n - 1)){
                cur = 1;
                while(hash.contains(n + cur)){
                    cur++;
                }
            }
            longest = max(cur, longest);
        }
        return longest;
        
    }
};
