class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        vector<int>ans(2001,0);
        int cnt=0;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for(i=1;i<=2001;i++){
            if(ans[i]==0) cnt++;
            if(cnt==k) return i;
        }
        return i;
        
    }
};