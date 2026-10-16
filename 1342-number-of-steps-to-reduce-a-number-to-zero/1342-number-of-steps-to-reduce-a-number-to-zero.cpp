class Solution {
public:
    int numberOfSteps(int num) {
        long long cnt=0;
        while(num>0){
            if(num%2==0){
                num=num/2;
                cnt++;
            }
            else{
                num--;
                cnt++;
            }
        }
        return cnt;
        
    }
};