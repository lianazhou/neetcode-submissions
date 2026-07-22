class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pre(height.size(), 0);
        vector<int> suf(height.size(), 0);
        int large = 0;
        int total = 0;
        for(int i = 0; i < height.size(); i++){
            pre[i] = large;
            large = max(height[i], large);
        }
        large = 0;
        for(int i = height.size() - 1; i >= 0; i--){
            suf[i] = large;
            large = max(height[i], large);
        }
        for(int i = 0; i < height.size(); i++){
            total += max(0, min(pre[i], suf[i]) - height[i]);
        }
        return total;
    }
};
