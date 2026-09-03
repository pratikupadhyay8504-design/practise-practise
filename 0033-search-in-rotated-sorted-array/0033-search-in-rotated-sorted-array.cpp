class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l = 0;
        int h = arr.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (arr[mid] == target)
                return mid;
            if (arr[mid] >= arr[l]) { // lft sorted
                if (arr[mid] >= target &&
                    arr[l] <= target) // target is in lft srt. arr
                    h = mid - 1;
                else {
                    l = mid + 1;
                }
            } else { // rt side sorted
                if (arr[mid] <= target &&
                    arr[h] >= target) // target is in rt srt.arr
                    l = mid + 1;
                else {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};