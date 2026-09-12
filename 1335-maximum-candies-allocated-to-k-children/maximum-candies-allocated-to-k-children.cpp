class Solution {
    bool fun(vector<int>& candies, long long k, long long limit) {
        long long children = 0;

        for(int x : candies) {
            children += x / limit;

            if(children >= k)
                return true;
        }

        return false;
    }

public:
    int maximumCandies(vector<int>& candies, long long k) {

        long long low = 1;
        long long high = *max_element(candies.begin(), candies.end());

        long long res = 0;

        while(low <= high) {

            long long guess = low + (high - low) / 2;

            if(fun(candies, k, guess)) {
                res = guess;
                low = guess + 1;
            }
            else {
                high = guess - 1;
            }
        }

        return res;
    }
};