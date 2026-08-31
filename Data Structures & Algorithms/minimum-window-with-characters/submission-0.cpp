class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> key;
        for(char c : t){
            key[c]++;
        }
        int need = key.size();
        int l = 0;
        unordered_map<char, int> cur;
        int have = 0;
        int min_len = INT_MAX;
        pair<int, int> res = {-1, -1};
        for(int r = 0; r < s.size(); r++){
            char c = s[r];
            cur[c]++;
            if(key.count(c) && cur[c] == key[c]){
                have++;
            }
            while(need - have == 0){
                if((r - l + 1) < min_len){
                    min_len = r - l + 1;
                    res = {l, r};
                }
                cur[s[l]]--;
                if(key.count(s[l]) && cur[s[l]] < key[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return min_len == INT_MAX ? "" : s.substr(res.first, min_len);
    }
};
