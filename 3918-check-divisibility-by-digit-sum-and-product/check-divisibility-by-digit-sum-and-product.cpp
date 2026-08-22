class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int product = 1;

        while(n > 0){
            int m = n % 10;
            sum += m;
            product *= m; 
            n /= 10;
        }

        return original % (sum + product) == 0;
    }
};