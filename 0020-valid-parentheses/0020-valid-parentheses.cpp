class Solution {
public:
    bool isValid(string s) {
        //create  a stack of character and store the characters in it.
        //if the character is opening brackets, then store it in the stack 
        //and if the character is closing bractet and the top of the stack is opening tag, then pop it 
        //otherwise return false

        stack<char>st;
        for(char ch:s) {
            if(ch=='('  || ch=='{' || ch=='[') {
                st.push(ch);
            }
            else {
                if(st.empty()) {
                    return false;
                }
                if(ch==')' && st.top()=='(') {
                    st.pop();
                }
                else if(ch=='}' && st.top()=='{') {
                    st.pop();
                }
                else if(ch==']' && st.top()=='[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();

        //if the stack is empty then it returns true, 
        //if not , then it returns false
    }
};