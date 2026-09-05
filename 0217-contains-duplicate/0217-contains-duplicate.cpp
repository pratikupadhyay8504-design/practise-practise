class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            freq[nums[i]]++;
        
        if(freq[nums[i]]==2) return true;
        }
        
            return false;
        
    }
};