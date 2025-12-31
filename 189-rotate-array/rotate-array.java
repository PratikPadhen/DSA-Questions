class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;

        // List<Integer>list= new ArrayList<>();

        // for(int num:nums){
        //     list.add(num);
        // }

        // Collections.reverse(list);
        // Collections.reverse(list.subList(0,k));
        // Collections.reverse(list.subList(k,n));

        // for(int i=0;i<n;i++){
        //     nums[i]=list.get(i);
        // }


        reverse(nums,0,n-1);  //It is the part of commented code 
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
    public void reverse(int[] nums,int left,int right){
      int temp=0;
       while(left < right){
      
          temp=nums[left];
          nums[left]=nums[right];
          nums[right]=temp;

          left++;
          right--;  
    }

    }
}