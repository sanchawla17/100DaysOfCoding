//34
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        int count = 0;
        ans.push_back(-1);
        ans.push_back(-1); 
        
        for (int i = 0; i < size; i++) {
            if (nums[i] == target) {
                count++;
                ans[1] = i; 
                ans[0] = i - (count - 1);
            }
        }
        
        return ans;
    }
};
