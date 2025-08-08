class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>count; /// mapping which is unordered
        int half=nums.size()/2;
        for(int it : nums ){
            count[it]+=1;
        }
        for(auto &it1 : count){   ///using this & in for each loop in seen of unorderred mapping 
            if(it1.second > half ){//is extreamly good as it saves place....BEST PRACTICE
                return it1.first;
            }
        }

      return -1;
        
    }
};