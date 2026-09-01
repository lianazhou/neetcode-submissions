class Solution {
public:
    int findMin(vector<int> &nums) {
        int mid = nums.size() / 2;
        int smallest = nums[0];
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            mid = left + (right - left) / 2;
            if(nums[left] <= nums[mid]){
                smallest = min(smallest, nums[left]);
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return smallest;
    }
};
