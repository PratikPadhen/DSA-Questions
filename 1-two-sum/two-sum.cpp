class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());

        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = indexedNums[left].first + indexedNums[right].first;
            if (sum == target) {
                return vector<int>{min(indexedNums[left].second, indexedNums[right].second),
                                   max(indexedNums[left].second, indexedNums[right].second)};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    

        // THIS -> Solution via hashing

        // unordered_map<int, int> seen;
        // for (int i = 0; i < nums.size(); i++) {
        //     int complement = target - nums[i];
        //     if (seen.count(complement)) {
        //         // return indices in increasing order as required
                // return vector<int>{min(i, seen[complement]), max(i, seen[complement])};
        //    }
        //   seen[nums[i]] = i;
       // }
       // return {}; // just to handle completeness, but problem guarantees a solution
    }
};
