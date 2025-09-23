class Solution {
public:
    int maxDepth(string s) {
        if(s.size()==0) return 0;
        int dept=0;
        int maxdept=0;
        for(char c:s){
            if(c=='('){
                dept++;
                maxdept=max(maxdept,dept);
            }
            else if(c==')'){
                dept--;
            }
            
        }
        return maxdept;
        
    }
};