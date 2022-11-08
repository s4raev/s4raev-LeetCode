class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        while(l < nums.size() && nums[l] != 0) { l++; }
        int r = l;   
        for(; l < nums.size(); l++) {
            if (nums[l] != 0) {
                swap(nums[l], nums[r]);
                r++;
                }
                        
        }
        
    }
};