class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans; 
        if(nums.size() == 0) return ans; 
        int first = nums[0]; 
        int last = 0; 
        for(int i = 0; i < nums.size(); i ++){
            last = nums[i]; 
            if( i == nums.size() -1 || last < nums[i+1]-1){
                if(last == first){
                    ans.push_back(to_string(last)); 
                }else{
                    ans.push_back(to_string(first)+ "->"+ to_string(last));
                }
                if(i != nums.size() -1)
                    first = nums[i+1]; 
            }
        }
        return ans; 
    }
};