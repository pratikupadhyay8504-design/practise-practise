class Solution {
public:
        int reverse(int n){
            int rev=0;
            while(n>0){
                int digit=n%10;
                rev=rev*10+digit;
                n=n/10;
            }
            return rev;

        }
            int countDistinctIntegers(vector<int>& nums) {

        unordered_set<int>s;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int rev=reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
        
    }
};