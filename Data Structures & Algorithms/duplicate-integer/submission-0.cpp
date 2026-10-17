class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = 0;

        for (int i = 0; i + 1 < nums.size(); i++){
            if (nums[i] == nums[i + 1]) {
                duplicate++;
            } 
        }
        
        if (duplicate >= 1){
            return true;
        } return false;
    }
};