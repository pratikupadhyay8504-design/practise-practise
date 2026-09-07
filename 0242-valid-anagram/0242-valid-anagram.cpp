class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq1(256,0);
        vector<int>freq2(256,0);
        int i;
        for(i=0;i<s.length();i++){
            freq1[s[i]]++;
        }
        for(i=0;i<t.length();i++){
             freq2[t[i]]++;
           
        }  
        if(freq1==freq2) return true;
        else{
            return false;
        }      
    }
};