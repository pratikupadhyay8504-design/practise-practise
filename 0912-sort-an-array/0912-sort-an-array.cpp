class Solution {
public:
    int partition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low, j = high;
        while(i < j){
            while(nums[i] <= pivot && i <= high - 1){
                i++;
            }
            while(nums[j] > pivot && j >= low + 1){
                j--;
            }
            if(i < j) swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void qs(vector<int>& nums, int low, int high){
        if(low < high){
            int pindex= partition(nums, low, high);
            qs(nums, low, pindex - 1);
            qs(nums, pindex + 1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};