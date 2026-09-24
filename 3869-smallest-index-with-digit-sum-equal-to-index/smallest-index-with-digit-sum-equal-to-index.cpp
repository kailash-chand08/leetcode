class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int count;
        for(int i=0; i<nums.size(); i++){
            int digit = nums[i];
            count = 0;
            while(digit > 0){
                int n = digit % 10;
                count += n;
                digit /= 10;
            }
            if(count == i){
                return i;
            }
        }
        return -1;
    }
};