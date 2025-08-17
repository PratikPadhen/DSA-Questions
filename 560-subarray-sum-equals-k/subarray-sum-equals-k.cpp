class Solution {
public:
    int subarraySum(vector<int>& nums, int k){
        // most optimal solution ->
        int presum=0;
        int count=0;
        unordered_map<int,int>map;
        map[0]=1;  
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int remove=presum-k;
            count+=map[remove];
            map[presum]+=1;
        }
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
