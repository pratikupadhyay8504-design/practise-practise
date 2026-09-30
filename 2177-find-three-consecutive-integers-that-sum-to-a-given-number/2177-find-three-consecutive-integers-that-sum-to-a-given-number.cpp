class Solution {
public:
    vector<long long> sumOfThree(long long n) {
        vector<long long>ans;
        if(n%3==0){
            long long no=n/3;
            ans.push_back(no-1);
            ans.push_back(no);
            ans.push_back(no+1);
            return ans;
        }
        else{
            return {};
        }
    }
};