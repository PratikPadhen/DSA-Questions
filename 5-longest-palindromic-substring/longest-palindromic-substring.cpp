class Solution {
public:
    // Helper function: checks if s[start…end] is a palindrome
    bool ispalindorme(string &s, int start, int end) {
        // Compare mirrored characters moving inward
        while (start < end) {
            if (s[start] != s[end])   // Mismatch ⇒ not a palindrome
                return false;
            start++;
            end--;
        }
        return true;                  // All pairs matched ⇒ palindrome
    }

    string longestPalindrome(string s) {
        string ans = "";              // Will store the longest palindrome found
        
        int n = s.size();
        // 1. Enumerate every possible substring by its start index i…
        for (int i = 0; i < n; i++) {
            // 2. …and end index j (j ≥ i)
            for (int j = i; j < n; j++) {
                // 3. If s[i…j] is a palindrome…
                if (ispalindorme(s, i, j)) {
                    // 4. Extract the substring
                    string t = s.substr(i, j - i + 1);
                    // 5. Update ans if this palindrome is longer
                    if (t.size() > ans.size()) {
                        ans = t;
                    }
                }
            }
        }
        
        return ans;                   // Return the longest palindromic substring
    }
};
