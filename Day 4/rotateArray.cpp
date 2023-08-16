//189
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> numcpy = nums;
        for(int i=0;i<nums.size();i++) 
            nums[(i+k)%nums.size()]=numcpy[i];
    }
};
