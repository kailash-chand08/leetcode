class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int store = 0;

        while(low <= high){
            
           int mid = low + (high - low)/2;
            long long sq = 1LL * mid * mid;
            if(sq > x){
                high = mid - 1;
            }
            else if(sq < x){
                low = mid + 1;
        store = max(mid,store); 
            }
            else{
                return mid;
            }
        }
        return store;
    }
};