class Solution {
public:
    int maxPower(string s) {
        int l = 0;
        int r = 0;
        int ans = 0;
        while (l < s.size()) {
            int max_h = 0;
            while(r < s.size() && s[l] == s[r]) {
                r++;
                max_h++;
            }
            ans = max(max_h, ans);
            l = r;
        }
        return ans;
    }
};