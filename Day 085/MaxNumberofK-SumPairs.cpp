//1679
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i = 0, j = nums.size() - 1, cnt = 0;
        sort(nums.begin(), nums.end());
        while (i < j) {
            if (nums[i] + nums[j] == k) {
                i++;
                j--;
                cnt++;
            } else if (nums[i] + nums[j] < k) {
                i++;
            } else {
                j--;
            }
        }
        return cnt;
    }
};
