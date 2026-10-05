class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int pref_sum=0;
        int max_len=0;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0){
                pref_sum+=-1;
            }
            else{
                pref_sum+=1;
            }
            if(mp.find(pref_sum)!=mp.end()){
                max_len=max(max_len,i-mp[pref_sum]);
            }
            else{
                mp[pref_sum]=i;
            }
        }
        return max_len;
        
    }
};