class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> words;
        for(string s : strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            words[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for(auto pair : words){
            result.push_back(pair.second);
        }
        return result;

    }
};
