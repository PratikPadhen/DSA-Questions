class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch national flag algoitum
        int low=0,mid=0;
        int high=nums.size()-1;
        while(mid <= high){
            //sort from low -> mid ->high
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){//dont do anyting just go forward
                mid++; 
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        
    }
};
// class Solution {                              Normal brute for by sorting logic
// public:
//     void sortZeroOneTwo(vector<int>& nums) {
//         //sort(nums.begin(),nums.end()); //// direct sorting function;
//         for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             int temp=0;
//             if(nums[i]>nums[j]){
//                 temp=nums[i];
//                 nums[i]=nums[j];
//                 nums[j]=temp;
//             }
            
//         }
//     }
//     }
// };