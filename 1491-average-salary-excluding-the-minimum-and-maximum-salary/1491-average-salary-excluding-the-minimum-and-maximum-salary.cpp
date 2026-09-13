class Solution {
public:
    double average(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int max_sal=0;
        int min_sal=INT_MAX;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];

        }
        for(int i=0;i<n;i++){
            max_sal=max(max_sal,nums[i]);
            min_sal=min(min_sal,nums[i]);
        }
        int sal=sum-(max_sal+min_sal);
        double avg=(double) sal/(double)(n-2);
        return avg;




        
    }
};