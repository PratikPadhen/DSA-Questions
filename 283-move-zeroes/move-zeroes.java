class Solution {
    public void moveZeroes(int[] nums) {
        int n= nums.length;
        int j=-1;
        for(int i=0;i<n;i++){
          if(nums[i]==0){
            j=i;
            break;
          }
        }
        if(j==-1) return ;
        int temp=0;

        for(int i=j+1;i<n;i++){ /*List<Integer> list = Arrays.asList(nums);
                                 Collections.swap(list, i, j);  // Works but needs List wrapper*/
            if(nums[i]!=0){
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }

        
        
    }
}