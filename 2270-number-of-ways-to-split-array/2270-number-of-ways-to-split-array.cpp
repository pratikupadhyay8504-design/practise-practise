class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int i,n=nums.size();
        long long sum=0;
        int count=0;
        for(i=0;i<n;i++){
        sum=sum+nums[i];   
        }
        long long lftsum=0;
    for(i=0;i<n-1;i++){
        lftsum=lftsum+nums[i];
       if(lftsum>=sum-lftsum){
            count++;
        }
    }
    return count;
        
    }
};