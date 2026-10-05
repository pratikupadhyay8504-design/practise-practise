class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int lft=0;
        int n=nums.size();
        int oddcnt=0;
        int ttlcnt=0;
        for(int rgt=0;rgt<n;rgt++){
            if(nums[rgt]%2!=0){
                oddcnt++;
            }
            while(oddcnt>k){
                if(nums[lft]%2!=0){
                    oddcnt--;
                }
                lft++;
            }
            ttlcnt=ttlcnt+(rgt-lft+1);
        }
        return ttlcnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);        
    }
};