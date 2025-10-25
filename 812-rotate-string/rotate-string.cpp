class Solution {
public:
    
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string temp = s + s;
        if(temp.find(goal) != string::npos){
            return true;
        }
        else{
            return false;
        }
    // This can casue a runtime error
    //     if(s.length()!=goal.length()) return false;
    //     for(int i=0;i<s.size();i++){
    //         if(s==goal){
    //             return true;
    //         }
    //         rotate(s.begin(),s.begin()+1,s.end());
    //     }
    //     return false;
    // }
    }
};
