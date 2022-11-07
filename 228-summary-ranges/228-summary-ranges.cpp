class Solution {
public:    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.size() == 0) {
            return ans;
        }
        int a = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if ((i == nums.size() - 1) || (nums[i+1] - 1 != nums[i] )) {   
                if(a == nums[i]) {
                    ans.push_back(to_string(a));
                } else {
                    string s_a = to_string(a);
                    string s_b = to_string(nums[i]); 
                    ans.push_back(s_a + "->" + s_b);
                }
                if (i != nums.size()-1) {
                    a = nums[i+1];
                }
            }
        }
        
       return ans; 
    }
};