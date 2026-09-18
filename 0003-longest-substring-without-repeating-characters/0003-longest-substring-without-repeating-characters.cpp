class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int max_length=0;
        int right,left=0;
        for(right=0;right<s.length();right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
               freq[s[left]]--;
                left++;
              }
        max_length=max(max_length,right-left+1);
        }
        return max_length;

    }
};