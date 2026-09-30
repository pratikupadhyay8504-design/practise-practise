class Solution {
public:
    int countDigits(int n) {
        int count=0;
        int temp=n;
         while(temp!=0){
            int dgt=temp%10;
            if(n%dgt==0) count++;
            temp=temp/10;
        }
        return count;

        
    }
};