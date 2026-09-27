class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int target = 2 * nums[i];
            int low = 0;
            int high = nums.size() - 1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                
                if (nums[mid] == target && mid != i) {
                    return true; 
                }
                
                if (nums[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
