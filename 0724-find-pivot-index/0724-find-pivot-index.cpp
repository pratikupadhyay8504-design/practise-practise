class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,n=nums.size();
        int sum=0;
        for(i=0;i<n;i++){
            sum=nums[i]+sum;
        }
        int lftsum=0;
        for(i=0;i<n;i++){
         if(lftsum==sum-lftsum-nums[i]) return i;
         lftsum=lftsum+nums[i];
        }
        return -1;       
    }
};