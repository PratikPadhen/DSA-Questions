class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int> value = {
          {'I', 1}, {'V', 5}, {'X', 10},
          {'L', 50}, {'C', 100},
          {'D', 500}, {'M', 1000}
         };
        int result=0;
        for(int i=0;i<s.length();i++){
            int v=value[s[i]];
             if( v < value[s[i+1]]){
                result-=v;
            }
            else{
                result+=v;
            }

        }

        return  result;
        
    }
};