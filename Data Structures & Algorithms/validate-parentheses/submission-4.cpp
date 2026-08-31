class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> key = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> open;
        for(char c : s){
            if(key.count(c)){
                if(!open.empty() && key[c] == open.top()){
                    open.pop();
                }
                else{
                    return false;
                }
            }
            else{
                open.push(c);
            }
        }
        return open.empty();
    }
};
