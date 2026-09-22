class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        unordered_map<long long, long long> buckets;
        long long width = (long long)valueDiff + 1;
        
        for (int i = 0; i < nums.size(); ++i) {
            long long num = nums[i];
            long long bucketId = num / width;
            if (num < 0) {
                bucketId = (num + 1) / width - 1;
            }
            
            if (buckets.count(bucketId)) {
                return true;
            }
            if (buckets.count(bucketId - 1) && abs(num - buckets[bucketId - 1]) <= valueDiff) {
                return true;
            }
            if (buckets.count(bucketId + 1) && abs(num - buckets[bucketId + 1]) <= valueDiff) {
                return true;
            }
            
            buckets[bucketId] = num;
            
            if (i >= indexDiff) {
                long long removedNum = nums[i - indexDiff];
                long long removedBucketId = removedNum / width;
                if (removedNum < 0) {
                    removedBucketId = (removedNum + 1) / width - 1;
                }
                buckets.erase(removedBucketId);
            }
        }
        return false;
    }
};
