class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Running prefix sum of elements seen so far
        int presum = 0;
        // Total count of subarrays whose sum equals k
        int count = 0;
        // Hash map: prefix sum → frequency of occurrences
        // Initialize with sum 0 seen once (empty prefix)
        unordered_map<int,int> map;
        map[0] = 1;

        // Iterate through the array, updating prefix sum
        for (int i = 0; i < nums.size(); i++) {
            presum += nums[i];               // Extend running sum

            int remove = presum - k;         // Desired previous sum
            // If a prefix with sum = remove exists, 
            // then subarray from right after that prefix to current index sums to k
            if (map.count(remove)) {
                count += map[remove];        // Add all such occurrences
            }

            // Record current prefix sum in map
            map[presum] += 1;
        }

        return count;
    

        return count;
    /// this is bette solution-> 
        // int subarraySum(vector<int>& nums, int k) {
    //     if(nums.size() == 0) return 0;
        
    //     int count = 0;
        
    //     // For each starting position
    //     for(int i = 0; i < nums.size(); i++){
    //         int sum = 0;  // Reset sum for each new starting position
            
    //         // Check all subarrays starting from position i
    //         for(int j = i; j < nums.size(); j++){
    //             sum += nums[j];
                
    //             if(sum == k){
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    // }
    }

   
};
