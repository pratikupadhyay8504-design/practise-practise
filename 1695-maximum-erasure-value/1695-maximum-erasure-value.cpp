class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<int>freq(10001,0);
        int lft,rgt,n=nums.size();
        int max_sum=0;
        int sum=0;
        for(rgt=0;rgt<n;rgt++){
            freq[nums[rgt]]++;
            sum+=nums[rgt];
            while(freq[nums[rgt]]>1){
                freq[nums[lft]]--;
                sum=sum-nums[lft];
                lft++;
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;

        
    }
};