#include <set>
#include <iostream>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> num;
        for (int i : nums){
            if (num.contains(i))
            {
                return true;
            }
            else{
                num.insert(i);
            }
        }
        return false;
    }
};