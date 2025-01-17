class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<string> stck;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == "C") {  // Corrected "c" to "C"
                stck.pop();
            }
            else if(s[i] == "D") {
                int num = stoi(stck.top());
                num = num * 2;
                stck.push(to_string(num));
            }
            else if(s[i] == "+") {
                int num1 = stoi(stck.top());
                stck.pop();
                int num2 = stoi(stck.top());
                stck.push(to_string(num1));  // Push back num1 before the next calculation
                int add = num1 + num2;
                stck.push(to_string(add));
            }
            else {
                stck.push(s[i]);
            }
        }

        int ans = 0;
        while(!stck.empty()) {
            ans += stoi(stck.top());  // Use stck.top() to get the top element
            stck.pop();  // Corrected typo: from stock.pop() to stck.pop()
        }
        return ans;   
    }
};