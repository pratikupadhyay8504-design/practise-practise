class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i,n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(i=0;i<n;i++){
            if(nums[i]==target) ans.push_back(i);
        }
       return ans;
        
    }
};