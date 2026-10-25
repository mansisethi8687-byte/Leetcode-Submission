class Solution {
public:
    int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int median=nums[nums.size()/2];
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(median-nums[i]);
    }
    return sum;
    }
};