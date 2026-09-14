class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int>freq1(256,0);
        vector<int>freq2(256,0);
        for(int i=0;i<m.length();i++){
            freq1[m[i]]++;
        }
         for(int i=0;i<r.length();i++){
            freq2[r[i]]++;
         }
         for(int i=0;i<256;i++){

         if(freq1[i]<freq2[i]) return false;
         }
            return true;
         
         
        
    }
};