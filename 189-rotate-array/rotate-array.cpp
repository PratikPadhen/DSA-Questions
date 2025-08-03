class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp;

        // Store last k elements in temp (for right rotation)
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Shift the rest of the elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // Copy back the temp elements to front
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

