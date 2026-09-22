class Solution {
public:
       bool isvowel(char c){
       return c=='a'||c=='A'||c=='e'||c=='E'|| c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
       }
    
    string reverseVowels(string s) {
        int lft=0;
        int rgt=s.length()-1;
        while(lft<rgt){
            if(isvowel(s[lft])&& isvowel(s[rgt])){
                swap(s[lft],s[rgt]);
                lft++;
                rgt--;
            }
            else if(isvowel(s[lft])){
                rgt--;
            }
            else{
                lft++;
            }
        }
        return s;
        
    }  
    
};