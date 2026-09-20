class Solution {
public:
      int helper(int n){
        int sum=0;
        while(n>0){
           int n1=n%10;
            sum=sum+n1*n1;
            n=n/10;
        }
        return sum;
      }
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1){
            if(s.find(n)!=s.end()) return false;
            else{
            s.insert(n);
        }
        n=helper(n);
        
    }
    return true;
    }
};