class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i = 0; i < heights.size() - 1; i++){
            int cur = 0;
            int l = i;
            int r = heights.size() - 1;
            while(l < r){
                if(heights[r] < heights[l]){
                    cur = heights[r] * (r - l);
                }
                else{
                    cur = heights[l] * (r - l);
                }
                if(cur > max){
                    max = cur;
                }
                r--;
            }
        }
        return max;
    }
};
