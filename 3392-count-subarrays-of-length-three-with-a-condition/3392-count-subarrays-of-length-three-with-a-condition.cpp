class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i,j,n=nums.size();
        int cnt=0;
        for(j=2;j<n;j++){
        i=j-2;
        if(2*(nums[i]+nums[j])==nums[j-1]) cnt++;
        }
        return cnt;        
        
    }
};