class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt1=1;
        int cnt2=1;
        int maxi=1;
       for(int i=0;i<n-1;i++){
        if(nums[i]<nums[i+1])cnt1++;
        else cnt1=1;
        if(nums[i]>nums[i+1])cnt2++;
        else cnt2=1;
        int temp=max(cnt1,cnt2);
        maxi=max(maxi,temp);
       }
       return maxi;
    }
};