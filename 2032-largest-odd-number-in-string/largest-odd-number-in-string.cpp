class Solution {
public:
    string largestOddNumber(string num) {

        /// simply just trace from the back of string 
        
        for (int i = (int)num.size() - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    


        // //// THIS LOGIC IS THOUGHT BY U ->
        // /// core thing is that start finding for odd from last ...Always
        // /// if last digit is odd then that number becomes Odd..
        // /// then return string from 0 ie first digit ->upto last odd digit ie substr;
        //   // check if whole num ends with odd digit; if yes, return num
        //   if (!num.empty() && ((num.back() - '0') % 2 != 0)) {
        //     return num;
        //   }
        //   else{
        //     // not needed for this problem, but keeping your format and using a simple scan
        //     // to find the rightmost odd digit and return the prefix up to it
        //     int maxodd = -1;
        //     for (int i = (int)num.size() - 1; i >= 0; --i) {
        //         if (((num[i] - '0') % 2) != 0) { // odd digit found
        //             maxodd = i;
        //             break;
        //         }
        //     }
        //     if (maxodd == -1) return ""; // no odd digit

        //     return num.substr(0, maxodd + 1);
        //   }
          // unreachable, but preserved format
          // return ans;  // removed: ans was not defined in this scope
    }
};
