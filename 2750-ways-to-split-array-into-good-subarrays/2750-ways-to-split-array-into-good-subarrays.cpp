class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        vector<int> v;
        bool first = false;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                if(first) 
                    v.push_back(cnt); 
                first = true;
                cnt = 0;
            } else {
                cnt++;
            }
        }

        if(!first) 
            return 0; 

        long long ans = 1;
        long long mod = 1e9 + 7;

        for(auto val : v) {
            ans = (ans * (val + 1)) % mod;
        }

        return ans;
    }
};