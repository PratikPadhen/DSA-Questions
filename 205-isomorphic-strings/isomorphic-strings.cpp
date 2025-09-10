class Solution {
public:
    // Main function to check if strings s and t are isomorphic
    bool isIsomorphic(string s, string t) {
        // 1. If lengths differ, they cannot match one-to-one
        if (s.length() != t.length()) 
            return false;

        // 2. Prepare data structures:
        //    mapCharToChar records the mapping from characters in s → characters in t
        unordered_map<char, char> mapCharToChar;
        //    usedChars tracks which characters in t are already assigned (to prevent duplicates)
        unordered_set<char> usedChars;

        // 3. Iterate through each character position
        for (int i = 0; i < s.size(); i++) {
            char orig = s[i];  // current character in s
            char repl = t[i];  // corresponding character in t

            // 4. If orig has not been mapped yet...
            if (mapCharToChar.find(orig) == mapCharToChar.end()) {
                // 4a. If repl is already used by another orig, conflict → not isomorphic
                if (usedChars.count(repl)) {
                    return false;
                }
                // 4b. Otherwise, establish the new mapping orig → repl
                mapCharToChar[orig] = repl;
                // 4c. Mark repl as used
                usedChars.insert(repl);
            } 
            // 5. If orig was already mapped, ensure it maps consistently to repl
            else {
                if (mapCharToChar[orig] != repl) {
                    return false;
                }
            }
        }

        // 6. If no conflicts found, the strings are isomorphic
        return true;
    }
};
