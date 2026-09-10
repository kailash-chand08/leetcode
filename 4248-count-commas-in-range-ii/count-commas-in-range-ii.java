class Solution {
    public long countCommas(long n) {
        long start = 1000;
        long count = 0;
        long comma = 1;
        while(start <= n){
            long end = start * 1000 - 1;
            long numbers = Math.min(n, end) - start + 1;
            count += numbers*comma;
            start *= 1000;
            comma++;
        }
        return count;
    }
}