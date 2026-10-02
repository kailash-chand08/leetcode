class Solution {

    public boolean isPossible(int[] nums, int k, long mid) {

        long sum = 0;
        int subarray = 1;

        for (int i : nums) {

            if (sum + i <= mid) {
                sum += i;
            } 
            else {
                subarray++;
                sum = i;
            }
        }

        return subarray <= k;
    }

    public int splitArray(int[] nums, int k) {

        long low = 0;
        long high = 0;

        
        for (int i : nums) {
            low = Math.max(low, i);
            high += i;
        }

        long answer = -1;

        while (low <= high) {

            long mid = low + (high - low) / 2;

            if (isPossible(nums, k, mid)) {
                answer = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return (int) answer;
    }
}