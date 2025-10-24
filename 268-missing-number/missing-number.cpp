class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=(n*(n+1))/2;
        int sum2=0;

        for(int i=0;i<n;i++){
           sum2+=nums[i];
        }

        return sum1-sum2;
        // if(nums.size() == 0) return 0;

        // sort(nums.begin(), nums.end());

        // for(int i = 0; i < nums.size() - 1; i++) {
        //     if(nums[i + 1] != nums[i] + 1) {
        //         return nums[i] + 1;
        //     }
        // }

        // // If all numbers from 0 to n-1 are present, then missing is n
        // if(nums[0] != 0) return 0;
        // return nums[nums.size() - 1] + 1;
    }
};
