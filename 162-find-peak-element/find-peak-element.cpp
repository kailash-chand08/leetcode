class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max_element = INT_MIN;
        

        for(int i = 0; i<nums.size(); i++){
            max_element = max(nums[i], max_element);
        }

for(int i = 0; i < nums.size(); i++){
            if(nums[i] == max_element){
                return i;
            }
        }
   return -1;     
    }
};