class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_map;
        map<char, int> t_map;
        for(char c : s)
        {
            s_map[c]++;
        }
        for(char c : t)
        {
            t_map[c]++;
        }
        if(s_map == t_map){
            return true;
        }
        return false;
    }
};
