class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
       int answer = 0;

       for(char i:s){
       
        if(i == '('){
            st.push(i);
        }else{
            
            if(st.empty()){
                answer++;
            }else{
                st.pop();
            }
        }
       } 
       answer += st.size();

       return answer;
    }
};