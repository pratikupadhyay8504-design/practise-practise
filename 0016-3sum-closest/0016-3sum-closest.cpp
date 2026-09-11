class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size();
        int closest_sum=nums[0]+nums[1]+nums[2];
        for(i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int current_sum=nums[i]+nums[left]+nums[right];
                if(abs(current_sum-target)<abs(closest_sum-target)){
                    closest_sum=current_sum;
                }
             if(current_sum>target){
                    right--;
                }
               else if(current_sum<target){
                    left++;
                }
                else{
                    return current_sum;
                }
                
            }


        }
     return closest_sum;


        




        
    }
};