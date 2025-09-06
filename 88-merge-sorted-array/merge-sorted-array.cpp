class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m - 1;  // Point to last valid element in nums1 [1,2,3,0,0,0] → points to 3
        int right = 0;     // Point to first element in nums2 [2,5,6] → points to 2
        
        // GOAL: Move larger elements from nums1 to nums2, smaller ones stay in nums1
        // This ensures: max(nums1) <= min(nums2) after swapping
        while(left >= 0 && right < n) {
            if(nums1[left] > nums2[right]) {    // If nums1's element is bigger than nums2's
                swap(nums1[left], nums2[right]); // Swap them (big goes to nums2, small comes to nums1)
                left--;   // Move to next element in nums1 (going backwards)
                right++;  // Move to next element in nums2 (going forwards)
            }
            else {
                break;    // If nums1[left] <= nums2[right], all remaining are already in correct order
            }
        }
        
        // Now nums1 has smaller elements (but may be unsorted), nums2 has larger elements (but may be unsorted)
        sort(nums1.begin(), nums1.begin()+m);  // Sort only the first m elements of nums1 (ignore the 0s)
        sort(nums2.begin(), nums2.end());      // Sort all elements of nums2
        
        // Copy all sorted elements from nums2 into the empty space of nums1 (where the 0s were)
        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];  // nums1[3+0]=nums2[0], nums1[3+1]=nums2[1], nums1[3+2]=nums2[2]
        }
        // Final result: nums1 contains all elements in sorted order
    }
};
