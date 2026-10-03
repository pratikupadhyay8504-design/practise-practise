class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i,j,n=nums.size();
        for(i=0;i<n;i++){
            int lftsum=0;
            int rgtsum=0;
        for(j=0;j<i;j++){
            lftsum=lftsum+nums[j];
        }
        for(j=i+1;j<n;j++){
            rgtsum=rgtsum+nums[j];
        }
        if(lftsum==rgtsum) return i;  
        }
        return -1;
        
    }
};