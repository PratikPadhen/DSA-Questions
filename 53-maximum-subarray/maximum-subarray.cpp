class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;                 // Running subarray sum
        int start = 0;               // Start index for current subarray
        int ansstart = 0, ansend = 0; // Start/end indices of max sum subarray
        int maxsum = INT_MIN;        // Max subarray sum found so far

        // Loop through each element
        for (int i = 0; i < nums.size(); i++) {
            // If sum < 0, start a new subarray from current index
            if (sum < 0) {
                sum = nums[i];
                start = i;           // Current element is new start
            } else {
                sum += nums[i];      // Extend the current subarray
            }
            // Update max if needed
            if (sum > maxsum) {
                maxsum = sum;
                ansstart = start;
                ansend = i;
            }
        }
        return maxsum;
    }
};
