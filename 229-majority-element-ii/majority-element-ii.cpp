class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
             int n=nums.size();
         vector<int>ans;
        unordered_map<int,int>map;
        for(auto it : nums ){
            map[it]+=1;
        }
        for(auto p:map){
            if(p.second > n/3){
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};