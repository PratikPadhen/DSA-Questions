class Solution {
public:
    string frequencySort(string s) {
        // 1. Count frequencies
        unordered_map<char,int> freq;            // renamed from 'map'
        for (char c : s) {
            freq[c]++;
        }

        // 2. Bucket by frequency
        vector<vector<char>> Bucket(s.length() + 1);
        for (auto [ch, fq] : freq) {
            Bucket[fq].push_back(ch);
        }

        // 3. Build answer
        string ans;
        ans.reserve(s.length());
        // j must be int so we can go down to 1 safely
        for (int j = s.length(); j > 0; j--) {
            for (char c : Bucket[j]) {
                ans.append(j, c);              // append c j times
            }
        }
        return ans;
    }
};
