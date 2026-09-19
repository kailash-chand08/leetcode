class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();

        for(int k = 0; k < nums.length - 2; k++){
            if(k > 0 && nums[k] == nums[k - 1]){
                continue;
            }

            int i = k+1;
            int j = nums.length-1;

            while(i < j){
                int ans = nums[k]+nums[i]+nums[j];

                if(ans > 0){
                    j--;
                }
                else if(ans < 0){
                    i++;
                }
                else{
                res.add(Arrays.asList(nums[k], nums[i], nums[j]));
                i++;
                j--;
                //skipping duplicate of i
                while (i < j && nums[i] == nums[i - 1]) {
        i++;
    }
            // skipping duplicate of j
            while(i<j && nums[j] == nums[j+1]){
                j--;
            }
                }
            }
        }
        return res;
    }
}