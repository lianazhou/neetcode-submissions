class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        int l = 0;
        int res = 0;

        for(int i = 0; i < s.size(); i++){
            if(m.find(s[i]) != m.end()){
                l = max(m[s[i]] + 1, l);
            }
            m[s[i]] = i;
            res = max(res, i - l + 1);
        }
        return res;
    }
};
