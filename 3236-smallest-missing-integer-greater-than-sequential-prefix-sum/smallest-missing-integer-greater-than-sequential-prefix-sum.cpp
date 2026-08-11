class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int count = nums[0];
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i+1] == nums[i]+1){
                count += nums[i+1];
            }else{
                break;
            }
        }

       while(true){
        bool found = false;
        for(auto num: nums){
            if(num == count){
                found = true;
                break;
            }
        }
        if(!found){
            return count;
        }
            count++;
        

       }
    }
};