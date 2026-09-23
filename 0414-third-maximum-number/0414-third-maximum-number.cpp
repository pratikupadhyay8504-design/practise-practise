class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long istmx=LONG_MIN;
        long long secmx=LONG_MIN;
        long long thirdmx=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            istmx=max(istmx,(long long)nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=istmx){
            secmx=max(secmx,(long long)nums[i]);
            }   
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=istmx && nums[i]!=secmx){
            thirdmx=max(thirdmx,(long long)nums[i]);
            }
        }
        if(thirdmx==LONG_MIN){
            return istmx;
        }

        return thirdmx;
        
    }
};