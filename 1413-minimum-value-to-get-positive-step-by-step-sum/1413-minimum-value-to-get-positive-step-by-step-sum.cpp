class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int i,n=nums.size();
        int cu_sum=0;
        int minpref_sum=0;
        for(i=0;i<n;i++){
            cu_sum=cu_sum+nums[i];
            minpref_sum=min(minpref_sum,cu_sum);
        }
        return 1-minpref_sum;
        
    }
};