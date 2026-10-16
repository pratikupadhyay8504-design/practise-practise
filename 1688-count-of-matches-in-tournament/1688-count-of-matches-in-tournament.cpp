class Solution {
public:
    int numberOfMatches(int n) {
        int matcnt=0;
        int total=0;
        while(n>1){
            if(n%2==0){
                matcnt+=n/2;
                n=n/2;
            }
            else{
                matcnt+=(n-1)/2;
                n=(n-1)/2+1;
            }

        }
        return matcnt;
        
    }
};