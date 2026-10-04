class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i,n=nums.size();
        int pref_sum=0;
        int count=0;
        mp[0]=1;
        for(i=0;i<n;i++){
            pref_sum+=nums[i];
          if(mp.find(pref_sum-k)!=mp.end()){
            count=count+mp[pref_sum-k];
          }
          
            mp[pref_sum]++;
        }
        return count;
        
        
    }
};