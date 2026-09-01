class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int max_element = INT_MIN;
        

        for(int i = 0; i<arr.size(); i++){
            max_element = max(arr[i], max_element);
        }

for(int i = 0; i < arr.size(); i++){
            if(arr[i] == max_element){
                return i;
            }
        }
   return -1;     
    }
};