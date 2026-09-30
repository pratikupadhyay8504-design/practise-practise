class Solution {
public:
long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        if(cost1>total && cost2>total) return 1;
        long long ans=0;
        int l1=max(cost1,cost2);
        int l2=min(cost1,cost2);
        int n=total/l1;
        while(n>=0){
            int amt = total-(n*l1);
            int temp=(amt/l2)+1;
            ans=ans+temp;
            n--;
        }
        return ans;
    }        
    
};