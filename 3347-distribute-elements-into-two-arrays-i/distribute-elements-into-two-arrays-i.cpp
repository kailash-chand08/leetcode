class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr_1;
        vector<int> arr_2;
        vector<int>result;
       
       arr_1.push_back(nums[0]);
       arr_2.push_back(nums[1]);

       int x = 0;
       int y = 0;

for(int i=2; i < nums.size(); i++){
    if(arr_1[x] > arr_2[y]){
        arr_1.push_back(nums[i]);
        x++;
    }else{
        arr_2.push_back(nums[i]);
        y++;
    }
}     
result.insert(result.end(), arr_1.begin(), arr_1.end());
result.insert(result.end(), arr_2.begin(), arr_2.end());
return result;
    }
};