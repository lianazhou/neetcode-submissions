class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> solution;
        int l = 0;
        int r = 1;
        while(l < numbers.size() || r < numbers.size() || l < r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                solution.push_back(l + 1);
                solution.push_back(r + 1);
                return solution;
            }
            else if((numbers[l] + numbers[r] > target))
            {
                l += 1;
                r = l + 1;
            }
            else if((numbers[l] + numbers[r] < target))
            {
                r = r + 1;
                if(r == numbers.size())
                {
                    l = l + 1;
                    r = l + 1;
                }
            }

        }
        return solution;
    }
};