class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<2)return 0;
        int diff=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            diff=abs(nums[i]-nums[i+1]);
            ans=max(ans,diff);
        }
        return ans;
    }
};