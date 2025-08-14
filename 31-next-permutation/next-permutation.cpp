class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Step 1: Find the first place from right where nums[i] < nums[i+1]
        // This is the pivot where the sequence can be made "bigger"
        for(int i = n - 2; i >= 0; i--) {           // Start at n-2 to avoid out of bounds
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;                              // Found the pivot
            }
        }

        // Step 2: If no such index, array is the last permutation. Just reverse to get smallest.
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the just larger element to the right of the pivot, swap
        for(int i = n - 1; i > index; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse everything after the pivot index for the lowest following order
        reverse(nums.begin() + index + 1, nums.end());
    }
};
