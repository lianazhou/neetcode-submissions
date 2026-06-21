class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> anagram;
        for(const auto& str : strs)
        {
            string sortedS = str;
            sort(sortedS.begin(), sortedS.end());
            anagram[sortedS].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : anagram)
        {
            result.push_back(pair.second);
        }
        return result;
    }
           
};
