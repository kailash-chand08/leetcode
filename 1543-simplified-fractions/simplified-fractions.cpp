class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        int i = 1;
        int j = 2;
        vector<string> res;
       for (int j = 2; j <= n; j++) {
            for (int i = 1; i < j; i++) {
                if (gcd(i, j) == 1) {
                    res.push_back(to_string(i) + "/" + to_string(j));
                }
            }
        }
       return res;
    }
};