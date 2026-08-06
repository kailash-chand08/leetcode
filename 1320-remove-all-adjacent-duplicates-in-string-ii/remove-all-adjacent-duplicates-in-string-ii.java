class Solution {
    public String removeDuplicates(String s, int k) {

        Stack<int[]> st = new Stack<>();

        for(char ch : s.toCharArray()) {

            if(!st.isEmpty() && st.peek()[0] == ch) {

                st.peek()[1]++;

                if(st.peek()[1] == k) {
                    st.pop();
                }

            } else {
                st.push(new int[]{ch, 1});
            }
        }

        StringBuilder sb = new StringBuilder();

        while(!st.isEmpty()) {

            int[] p = st.pop();

            for(int i = 0; i < p[1]; i++) {
                sb.append((char)p[0]);
            }
        }

        return sb.reverse().toString();
    }
}