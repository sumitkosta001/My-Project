class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        int less_tar = 0, cnt = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] < target) less_tar++;
            else if(nums[i] == target) cnt++;
        }
        vector<int> ans(cnt);
        for(int i = 0;i<cnt;i++) ans[i] = less_tar+i;
        return ans;
    }
};