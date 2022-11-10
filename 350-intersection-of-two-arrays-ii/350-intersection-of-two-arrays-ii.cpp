class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int l = 0;
        int r = 0;
        while(l < a.size() && r < b.size()) {
            if(a[l] == b [r]) {
                ans.push_back(a[l]);
                l++;
                r++;
            } else if(a[l] < b [r]) {
                l++;
            } else { r++; }
        }
        return ans;     
    }
};