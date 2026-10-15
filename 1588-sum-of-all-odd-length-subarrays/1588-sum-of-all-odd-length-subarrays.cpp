class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int anssum=0;
        for(i=0;i<n;i++){
           int sum=0;
        for(j=i;j<n;j++){
            sum+=nums[j];
            if((j-i+1)%2!=0) anssum+=sum;    
        }
        }
        return anssum;

        
    }
};