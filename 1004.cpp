class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                k--;
            }
            
            if (k < 0 && nums[j++] == 0) {
                k++;
            }
        }
        
        return nums.size() - j;
    }
};
