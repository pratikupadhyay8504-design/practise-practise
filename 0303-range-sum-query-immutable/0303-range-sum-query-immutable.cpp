class NumArray {
    vector<int>pref;
public:
    NumArray(vector<int>& nums) {
        pref=nums;
        for(int i=1;i<pref.size();i++){
            pref[i]=pref[i-1]+pref[i];
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left==0) return pref[right];
        else{
            return pref[right]-pref[left-1];
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */