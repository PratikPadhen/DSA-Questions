class Solution {
public:
    int strStr(string haystack, string needle) {
        // n = length of the text (haystack), m = length of the pattern (needle)
        int n = haystack.size();
        int m = needle.size();

        // Loop over every possible starting index i in haystack
        // Use <= so that when haystack and needle are equal length (n-m == 0)
        // we still check position 0
        for (int i = 0; i <= n - m; i++) {
            // For each i, try to match the entire needle character by character
            for (int j = 0; j < m; j++) {
                // Compare the j-th character of needle to the (i+j)-th of haystack
                if (needle[j] != haystack[i + j]) {
                    // ❌ Mismatch found: break out of inner loop and move to next i
                    break;
                }
                // If we reach the last character (j == m-1) with all matches
                if (j == m - 1) {
                    // ✅ Complete match found at index i
                    return i;
                }
            }
            // ↩️ After break or inner loop without full match, continue with next i
        }

        // No match found after checking all valid positions
        return -1;
    }
};
