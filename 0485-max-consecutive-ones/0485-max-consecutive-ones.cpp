class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cucnt=0;
        int mxcnt=0;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==1) cucnt++;
            else{
                cucnt=0;
            }
            mxcnt=max(cucnt,mxcnt);
        }
      return mxcnt;
        
    }
};