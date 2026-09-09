class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        long long comma = 1;

        while (start <= n) {
            long long end = start * 1000 - 1;
            long long actualEnd = min(n, end);

            ans += (actualEnd - start + 1) * comma;

            start *= 1000;
            comma++;
        }

        return ans;
    }
};