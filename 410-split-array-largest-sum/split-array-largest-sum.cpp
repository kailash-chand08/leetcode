class Solution {
    public:
    bool ispossible(vector<int> nums, int k, long long mid){
        long long sum = 0;
        long long subarray = 1;

        for(auto i: nums){

            if(sum + i <= mid){
                sum += i;
            }else{
                subarray++;
                sum = i;
            }
        }
        return subarray <= k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        
        if(k > nums.size()){
            return -1;
        }

        long long low = *max_element(nums.begin(), nums.end());
        long long high = 0;

        for(int i=0; i< nums.size(); i++){
            high += nums[i];
        } 

        long long answer  = -1;

        while(low <= high){

            long long mid = (low+high)/2;
        
        if(ispossible(nums,k,mid)){
            answer = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        }
        return answer;
    }
};