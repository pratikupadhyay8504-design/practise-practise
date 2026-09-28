class Solution {
public:
    bool wordPattern(string p, string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=p.length()) return false;
        unordered_map<string,char>mp2;
        unordered_map<char,string>mp1;
        for(int i=0;i<p.length();i++){
            if(mp1.find(p[i])!=mp1.end() && mp1[p[i]]!=words[i]) return false;
            if(mp2.find(words[i])!=mp2.end() && mp2[words[i]]!=p[i]) return false;
            mp1[p[i]]=words[i];
            mp2[words[i]]=p[i];
        }
        return true;
        
    }
};