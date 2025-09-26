class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int beauty = 0;               // Accumulates total beauty across all substrings

        // 1. Iterate over every possible starting index i
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0); // freq[c] counts occurrences of character 'a'+c in the current substring

            // 2. Extend the substring from i to every possible ending index j
            for (int j = i; j < n; j++) {
                // 2a. Include s[j] in the substring
                freq[s[j] - 'a']++;

                // 2b. Determine the maximum and minimum nonzero frequencies so far
                int maxfreq = 0;            // highest count among characters seen
                int minfreq = INT_MAX;      // lowest nonzero count among characters seen

                // 2c. Scan all 26 character buckets
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        // Update maxfreq if this character’s count is higher
                        maxfreq = max(maxfreq, freq[k]);
                        // Update minfreq if this character’s count is lower
                        minfreq = min(minfreq, freq[k]);
                    }
                }

                // 2d. If there is more than one distinct frequency, add their difference
                if (maxfreq > minfreq) {
                    beauty += (maxfreq - minfreq);
                }
            }
        }

        return beauty; // Return the sum of beauties of all substrings
    }
};
