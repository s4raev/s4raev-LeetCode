class Solution {
public:
    bool isValid(string s) {
    stack<char> ans;
    for (char c : s) {
        if (c == '{' || c == '[' || c == '(') ans.push(c);
        else if (ans.empty() and (c == '}' || c == ']' || c == ')')) return false;
        else {
            if (c - ans.top() == 1) ans.pop();
            else if (c - ans.top() == 2) ans.pop();
            else return false;
        }

    }
    return ans.empty();
}
};