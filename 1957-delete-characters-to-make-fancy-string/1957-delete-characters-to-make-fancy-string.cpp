class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int prev=s[0];
        int freq=1;
        int i,n=s.length();
        ans.push_back(s[0]);
        for(i=1;i<n;i++){
            if(s[i]==prev){
                freq++;
            }
            else{
                prev=s[i];
                freq=1;
            }
            if (freq<3) ans.push_back(s[i]);
        }
        return ans;

        
        
    }
};