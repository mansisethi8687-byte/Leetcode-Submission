class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left,right=0;
        int z=0;
        int maxi=0;
        while(right<n){
            if(nums[right]==0)z++;
            while(z>k){
                if(nums[left]==0){
                    z--;
                }
                left++;
            }
            maxi=max(right-left+1,maxi); 
            right++;    
        }
        return maxi;
    }
};