class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i= left;i<=right;i++){
            int temp=i;
            bool flag=true;
            while(temp!=0){
                int dgt=temp%10;
                if(dgt==0 || i%dgt!=0){
                flag=false;
                break;
                }
                temp=temp/10;
            }
            if(flag==true) ans.push_back(i);
        }
        return ans;
        
    }
};