class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        int revdigit=0;
        int n=x;
        while(n > 0){
            int digit = n % 10;

        

            if(revdigit > (INT_MAX-digit)/10){
                return false;
            }
            revdigit=revdigit*10+digit;

            n=n/10;
        }

        if(x==revdigit){
            return true;
        }
        else{
            return false;
        }
       // It is done after converting int -> string  ;
        // string str = to_string(x);
        // string rev=str;
        // reverse(rev.begin(),rev.end());
        //  if(rev==str){
        //     return true;
        //  }
        //  else{
        //     return  false;
        //  }
    }
};