class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int lft=0;
        int rgt=n-1;
        double ans=1000;
        while(lft<rgt){
            double avg=(nums[lft]+nums[rgt])/2.0;
            ans=min(ans,avg);
            lft++;
            rgt--;
        }
            return ans;
        
    }
};