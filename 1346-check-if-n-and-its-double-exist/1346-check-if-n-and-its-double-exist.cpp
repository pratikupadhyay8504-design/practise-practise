class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        unordered_set<int>mp;
        int zerocount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zerocount++;

         mp.insert(nums[i]);
        }
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            
              if(zerocount>1) return true;
            }
            
            else if(mp.find(nums[i]*2)!=mp.end()) return true;

        }
        return false;


        
    }
};