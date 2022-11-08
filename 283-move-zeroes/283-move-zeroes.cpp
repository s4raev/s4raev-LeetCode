class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int j = i -1;
                while (j >= 0 && nums[j] == 0) {
                    swap(nums[j], nums[j+1]);
                    j--;
                    
                    
                }
            }
            
            
        }
        
    }
};