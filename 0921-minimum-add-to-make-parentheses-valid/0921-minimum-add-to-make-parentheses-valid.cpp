class Solution {
public:
    int minAddToMakeValid(string s) {
        //SO FOR THIS QUESTION WE HAVE TO CREATE A STACK & STORE ALL THE CHARACTERS AT THE STACK
        //BUT THE CONDITION TELLS THAT IF THE STARTING PARENTHESES & ENDING PARENTHESES ARE COME AFTER ANOTHER , THEN THEY CANCEL 
        //OTHERWISE THEY MARKED AS INCOMPLETE PARENTHESE
        //IF THERE IS NO ENDING TAG AFTER THE STARTING TAG, THAT IS ALSO MARKED AS INCOMPLETE PARENTHESE
        //WE HAVE TO RETURN THAT INCOMPLETE PARENTHESE

        stack<char>st;
        for(int i=0; i<s.length(); i++) 
        {
            if(!st.empty() && st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};