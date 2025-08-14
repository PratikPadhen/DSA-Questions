class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int x:nums){
            if(x>0) pos.push_back(x);
            else neg.push_back(x);
        }
        vector<int>ans;
        for(int i=0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
// what if pos > neg or neg > pos or vicevers of it
/// Code for such cases...->
//initally creating two seprate vectors storing pos and negative ele
//if(pos.size() > neg.size()){
//     for(int i=0; i<neg.size();i++){
//         ans[2*i]=pos[i];
//         ans[2*i+1]=neg[i];
//     }
//     int index=neg.size()*2;
//     for(int i=neg.size();i<pos.size();i++){
//         ans[index]=pos[i];
//         index++;
//     }
// }
// else{
//     for(int i=0; i<pos.size();i++){
//         ans[2*i]=neg[i];
//         ans[2*i+1]=pos[i];
//     }
//     int index=pos.size()*2;
//     for(int i=pos.size();i<neg.size();i++){
//         ans[index]=neg[i];
//         index++;
//     }

// }
// return ans;