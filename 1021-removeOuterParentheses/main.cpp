class Solution {
public:
    string removeOuterParentheses(string S) {
        for(int i=0;i<S.size();i++){
            if(S[i]=='(') {
                arr.push('(');
                if(arr.size()>1){
                    data+='(';
                }
            }
            if(S[i]==')'){
                arr.pop();
                if(!arr.empty()) {
                    data += ')';
                }
            }
        }

        return data;
    }
private:
    stack<char>arr;
    string data;
};