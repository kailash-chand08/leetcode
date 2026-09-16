class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
      int low = 0;
     int high = matrix.size() * matrix[0].size() - 1;
     int n = matrix[0].size();

    while(low <= high){
        
        int mid = low + (high-low)/2;
        int row = mid / n;
        int column = mid % n;
if(matrix[row][column] == target){
    return true;
}
else if(matrix[row][column] < target){
 low = mid+1;
}else{
    high = mid - 1;
}   
    }
    return false;
    }
};