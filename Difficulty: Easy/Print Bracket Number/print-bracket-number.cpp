class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        // code here
        vector<int>temp;
        stack<int>st;
        int count=0;
        for(int i=0; i<s.length(); i++) {
           if(s[i]=='(')
            {
                count++;
                st.push(count);
                temp.push_back(count);
                
            }
            else if(s[i]==')')
            {
                temp.push_back(st.top());
                st.pop();
            }
        }
        return temp;
    }
};