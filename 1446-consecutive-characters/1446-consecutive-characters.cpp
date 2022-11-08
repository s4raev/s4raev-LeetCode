class Solution {
public:
    int maxPower(string s) {
        int res = 1;
        int co = 1;
        for(int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) co++;
            else {
                res=max(res,co);
                co = 1;
            }
        }
        return max(res,co);
    }
};