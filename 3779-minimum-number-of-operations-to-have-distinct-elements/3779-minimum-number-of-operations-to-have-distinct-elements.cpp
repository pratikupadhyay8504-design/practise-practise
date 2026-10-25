class Solution {
public:
    int minOperations(vector<int>& A) {
        int n =A.size(),res = 0;
        unordered_map<int,int> frq;
        for(int i=n-1;i>=0;--i) {
            frq[A[i]] += 1;

            if(frq[A[i]]>1) {
                res+=(i/3)+1;
                break;
            }
        }
       return res;
    }
};