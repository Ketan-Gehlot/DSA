class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n =nums.length;
        int[] prefix = new int[n];
        int[] suffix = new int[n];
        int[] result = new int[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
         prefix[i]=prefix[i-1]*nums[i];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }
        for(int i=1;i<n-1;i++){
            result[i]=prefix[i-1]*suffix[i+1];
        }
        result[0]=suffix[1];
        result[n-1]=prefix[n-2];
        return result;
    }
}
