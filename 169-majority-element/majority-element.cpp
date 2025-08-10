// C++ program to find majority element (> n/2 occurrences) in an array
// using Boyer-Moore Majority Vote Algorithm

class Solution {
public:
    int majorityElement(vector<int>& v) {
        int count = 0; // For tracking majority candidate votes
        int ele;       // Candidate for majority element

        // First pass: Find a candidate for majority element
        for (int i = 0; i < v.size(); i++) {
            if (count == 0) {
                // If counter drops to zero, pick new candidate
                ele = v[i];
                count = 1;
            }
            else if (v[i] == ele) {
                // If current element matches candidate, increment vote
                count++;
            }
            else {
                // If current element differs, decrement vote
                count--;
            }
        }

        // Second pass: Verify that the candidate is actually the majority
        // (Note: count needs to be reset to 0 before counting occurrences!)
        count = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == ele)
                count++; // Count occurrences of candidate
        }
        if (count > (v.size() / 2)) {
            // If candidate occurs more than n/2 times, it's majority
            return ele;
        }
        return -1; // If there's no majority, return -1

        // ---------- Alternative approach using mapping ----------
        // This approach uses a hashmap to count frequency of each element

        // unordered_map<int,int>count; // Create a map for counting
        // int half = nums.size() / 2;  // Half the size for majority check
        // for(int it : nums ){
        //     count[it] += 1;           // Increment count for each number
        // }
        // for(auto &it1 : count){
        //     if(it1.second > half ){
        //         return it1.first;     // Return if any element exceeds half
        //     }
        // }

        // return -1; // If none found, return -1

        // --------------------------------------------------------

    }
};
