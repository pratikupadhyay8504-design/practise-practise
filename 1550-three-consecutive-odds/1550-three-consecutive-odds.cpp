class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int i,j,n=nums.size();
        for(i=0;i<n;i++){
         for(j=i+2;j<n;j++){
            if(nums[j]%2!=0 && nums[j-1]%2!=0 && nums[j-2]%2!=0) return true;

         }   

        }
        return false;
        
    }
};