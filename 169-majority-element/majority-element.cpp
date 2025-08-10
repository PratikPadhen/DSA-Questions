class Solution {
public:
    int majorityElement(vector<int>& v) {
        int count=0;
        int ele;
        for(int i=0;i<v.size();i++){
            if(count==0){
                ele=v[i];
                count++;
            }
            else if(v[i]==ele){
                count++;
            }
            else{
                count--;
            }
            
        }
        
        for(int i=0;i<v.size();i++){
            if(v[i]==ele) count++;
        }
        if(count > (v.size() / 2)){
           return ele;
        }
        return -1;
    //     // solving by the Mapping ->
    //     unordered_map<int,int>count;
    //     int half=nums.size()/2;
    //     for(int it : nums ){
    //         count[i]+=1;
    //     }
    //     for(int &it1 : count){
    //         if(it1.second > half ){
    //             return it1.first;
    //         }
    //     }

    //   return -1;
        
    }
};