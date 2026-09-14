class Solution {
public:
    double trimMean(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int k=n/20;
        int sum=0.0;
        for(int i=k;i<n-k;i++){
            sum=sum+nums[i];

        }
        double mean=(double)sum/double(n-2*k);
        return mean;

        
    }
};