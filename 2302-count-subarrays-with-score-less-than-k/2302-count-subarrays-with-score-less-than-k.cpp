class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int lft=0;
        long long sum=0;
        long long count=0;
        for(int rgt=0;rgt<n;rgt++){
            sum=sum+nums[rgt];
            while(sum*(rgt-lft+1)>=k){
                sum=sum-nums[lft];
                lft++;
            }
            count=count+(rgt-lft+1);

        }
        return count;
    }
};