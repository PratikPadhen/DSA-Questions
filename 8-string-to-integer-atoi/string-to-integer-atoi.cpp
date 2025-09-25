class Solution {
public:
    int myAtoi(string s) {
        string ans="";           // Stores the valid part of string for conversion
        bool signseen=false;     // Flag to track if we've encountered a sign (+/-)
        bool numbstart=false;    // Flag to track if parsing has begun (sign or digit seen)
        
        for(auto c:s){
            // PHASE 1: Skip leading whitespace
            if(!numbstart && c==' '){
                continue;        // Skip spaces only before parsing starts
            }
            // PHASE 2: Handle optional sign (first non-space character)
            else if(!numbstart && c=='-' || c=='+'){
                ans.push_back(c);    // Add sign to result string
                signseen=true;       // Mark that we've seen a sign
                numbstart=true;      // Mark parsing as started (no more spaces allowed)
                continue;            // Move to next character
            }
            // PHASE 3: Collect valid digits
            else if(isdigit(c)){
                ans.push_back(c);    // Add digit to result string
                numbstart=true;      // Mark parsing as started
                continue;            // Move to next character
            }
            // PHASE 4: Stop on first invalid character
            else{
                break;               // Exit loop on any non-digit after parsing starts
            }
        }
        
        // VALIDATION: Check if we have a valid number
        if(ans.empty() || (signseen && ans.size()==1 )){
            return 0;            // Return 0 if no digits or only sign without digits
        }

        // CONVERSION: String to integer with overflow protection
        long long int val=0;
        {
        stringstream ss(s);      // ⚠️ BUG: Should be ss(ans) not ss(s)
        ss >> val;               // Extract integer from stringstream
        }
        
        // CLAMPING: Ensure result fits in 32-bit signed integer range
        if(val < INT_MIN) return INT_MIN;  // Clamp to minimum if underflow
        if(val > INT_MAX) return INT_MAX;  // Clamp to maximum if overflow
        return static_cast<int>(val);      // Safe cast to int and return
    }
};
