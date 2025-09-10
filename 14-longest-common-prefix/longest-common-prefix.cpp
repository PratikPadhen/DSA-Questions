class Solution {
public:
    // Function to find the longest common prefix among all strings in the vector
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";                  // Will hold the common prefix
        char ch;                          // To store current character being checked

        // Loop over each character index i of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            ch = strs[0][i];             // Take the i-th character from the first string

            bool match = true;           // Assume all strings match at position i

            // Compare this character with the i-th character of every other string
            for (int j = 1; j < strs.size(); j++) {
                // If the j-th string is too short (length <= i)
                // or its i-th character differs from ch
                if (strs[j].length() <= i || strs[j][i] != ch) {
                    match = false;       // Mismatch found
                    break;               // Stop checking further strings
                }
            }

            // If any string failed to match at position i, break out
            if (!match) {
                break;
            } 
            // Otherwise, all strings had ch at position i, so append it
            else {
                ans.push_back(ch);
            }
        }

        return ans;                     // Return the built prefix
    }
};
