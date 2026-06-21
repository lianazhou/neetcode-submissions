class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            int currentNum = nums[mid];
            if(currentNum < target)
            {
                low = mid + 1;
            }
            else if(currentNum > target)
            {
                high = mid - 1;
            }
            else if(currentNum == target)
            {
                return mid;
            }

        }
        return -1;
    }
};
