class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        unordered_set<int>track;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    track.insert(i);
                }
            }
        }
        while(!st.empty()){
            track.insert(st.top());
            st.pop();
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(track.find(i)==track.end()) res+=s[i];
        }
        return res;
    }
};