class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string s : strs){
            result.append(to_string(s.size()));
            result.append("#");
            result.append(s);
        }
        return result;
    }

    vector<string> decode(string s) {
        int length = 0;
        int i = 0;
        int start = 0;
        vector<string> result;
        while(i < s.size()){
            if(s[i] != '#'){
                i++;
            }
            else if(s[i] == '#'){
                length = stoi(s.substr(start, i - start));
                i++;
                string current = "";
                int j = i;
                for(; j < i + length; j++){
                    current.push_back(s[j]);
                }
                result.push_back(current);
                i = j;
                start = i;
            }
        }
        return result;
        
    }
};
