class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>stck;
        for(int i=0;i<n;i++){
            if(stck.empty()){
            stck.push(s[i]);
            }
            else if(stck.top()=='('&&s[i]==')'){
                stck.pop();
            }
            else if(stck.top()=='['&&s[i]==']'){
                stck.pop();
  
            }
            else if(stck.top()=='{'&&s[i]=='}'){
                stck.pop();
  
              }
            else{
                stck.push(s[i]);
            }
        }
        if(stck.empty())
        return true;

        else
        return false;
    }    
};