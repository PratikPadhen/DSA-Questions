class Solution {
public:
    string removeOuterParentheses(string s) {
        int dept=0;
        string res;

        for(char ch : s){
            if(ch=='('){
                dept++;
                if(dept > 1) res.push_back('(');
            }
            else{
                dept--;
                if(dept > 0) res.push_back(')');
            }
        }

        return res;
        
    }
};