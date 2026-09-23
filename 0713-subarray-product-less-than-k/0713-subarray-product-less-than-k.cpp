class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int lft=0;
        int rgt,n=nums.size();
        int count=0;
        int pdt=1;
        if(k<=1) return 0;
        for(rgt=0;rgt<n;rgt++){
            pdt=pdt*nums[rgt];
             while(pdt>=k){
                pdt=pdt/nums[lft];
                lft++;

            }
            count=count+(rgt-lft+1);
        }
        return count;
        
    }
};