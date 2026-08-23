class Solution {
public:
    bool sumGame(string num) {

        int mid = num.length() / 2;

        int left_sum = 0;
        int right_sum = 0;

        int left_q = 0;
        int right_q = 0;

        for(int i = 0; i < mid; i++) {
            if(num[i] == '?') {
                left_q++;
            } else {
                left_sum += num[i] - '0';
            }
        }

        for(int i = mid; i < num.length(); i++) {
            if(num[i] == '?') {
                right_q++;
            } else {
                right_sum += num[i] - '0';
            }
        }

        int sum_diff = left_sum - right_sum;
        int q_diff = left_q - right_q;

        if(q_diff % 2 != 0) {
            return true;
        }

        return sum_diff != -9 * (q_diff / 2);
    }
};