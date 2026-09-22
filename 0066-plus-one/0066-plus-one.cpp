class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int i,n=nums.size();
        for(i=n-1;i>=0;i--){
            if(nums[i]<9){
                nums[i]++;
                return nums;
            }
            nums[i]=0;

            }
            nums.insert(nums.begin(),1);
            return nums;
        }
        
    
};