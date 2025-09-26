class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int beauty=0;

        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                 freq[s[j]-'a']++;

                 int maxfreq=0, minfreq=INT_MAX;
                 for(int k=0;k<freq.size();k++){
                    if(freq[k] > 0){
                    maxfreq=max(maxfreq,freq[k]);
                    minfreq=min(minfreq,freq[k]);
                    }
                 }

                 if(maxfreq > minfreq){
                    beauty+=(maxfreq-minfreq);
                 }
            }



        }
        return beauty;
        
    }
};