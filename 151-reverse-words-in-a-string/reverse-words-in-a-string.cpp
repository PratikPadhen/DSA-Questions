class Solution {
public:
    string reverseWords(string s) {  // if u want to reverse string normally like this->
        string ans1;                 // abcd->dcba then reverse(s.begin(),s.end()); can be use.
        vector<string> ans;
        stringstream ss(s);
        string word;
        while(ss >> word){
            ans.push_back(word);

        }
        reverse(ans.begin(),ans.end());
        for(int i=0 ; i<ans.size();i++){
            if(i) ans1.push_back(' '); /// this line is adding space in reverse
            ans1+=ans[i];                /// it is joining it from vector -> string 
        }
    
        return ans1;
    }
};