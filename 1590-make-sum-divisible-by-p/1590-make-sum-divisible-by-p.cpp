class Solution {
public:
using ll = long long;
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        vector<ll> pre(n);
        pre[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            pre[i] = pre[i-1]+nums[i];
        }
        
        ll sum = pre[n-1];
        int rem = sum%p;
        if(rem==0){
            return 0;
        }
        int mini = INT_MAX;
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        for(int i = 0 ; i < n ; i++){
            int cur = pre[i]%p;
            int need = (cur-rem+p)%p;
            if(mpp.count(need)){
                mini = min(mini,i-mpp[need]);
            }
            mpp[pre[i]%p] = i;
        }
        if(mini == INT_MAX||mini == n)return -1;
        else return mini;
    }
};