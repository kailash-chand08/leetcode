class Solution {
public:
    long long fun(vector<int>& piles, int speed) {
        long long hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + speed - 1) / speed;
        }

        return hours;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;

        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }

        int res = high;

        while (low <= high) {
            int guess = low + (high - low) / 2;

            long long hour = fun(piles, guess);

            if (hour > h) {
                low = guess + 1;
            } else {
                res = guess;
                high = guess - 1;
            }
        }

        return res;
    }
};