class Solution {

    public boolean ispossible(int[] arr, int days, long mid){
        long currentWeight = 0;
        int daysUsed = 1;

        for(int i: arr){
            if(currentWeight + i <= mid){
                currentWeight += i;
            }else{
                daysUsed ++;
                currentWeight = i;
            }
        }

        return daysUsed <= days;
    }

    public int shipWithinDays(int[] weights, int days) {

        long low = 0;
        long high = 0;
        long ans = -1;

        for(int i=0; i < weights.length; i++){
            low = Math.max(low, weights[i]);
            high += weights[i];
        }

        while(low <= high){

            long mid = (low + high)/2;
        
        if(ispossible(weights, days, mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        }
        return (int)ans;
    }
}