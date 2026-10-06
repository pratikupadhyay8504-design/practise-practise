class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i,n=nums.size();
        int sum=0;
        mp[0]=1;
        int count=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
         int rem=sum%k;
         if(rem<0) rem+=k;
         if(mp.find(rem)!=mp.end()) count+=mp[rem];
         mp[rem]++;

        }
        return count;
    }
};