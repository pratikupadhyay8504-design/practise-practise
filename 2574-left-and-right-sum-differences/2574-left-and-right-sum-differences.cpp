class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i,n=nums.size();
        vector<int>lft(n,0);
        vector<int>rgt(n,0);
        vector<int>ans(n,0);
        for(i=1;i<n;i++){
            lft[i]=lft[i-1]+nums[i-1];

        }
        for(i=n-2;i>=0;i--){
            rgt[i]=rgt[i+1]+nums[i+1];
        }
        for(i=0;i<n;i++){
            ans[i]=abs(lft[i]-rgt[i]);
        }
        return ans;
        
    }
};