//78
class Solution {
public:
// since we need to find all possible solutions, we use back_tracking
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> solutions;
      vector<int> partial_solution;
      check_subsets(nums, solutions, partial_solution, 0);
      return solutions;
    }

    void check_subsets(vector<int>& nums, vector<vector<int>>& solutions, 
    vector<int>& partial_solution, int start){
      solutions.push_back(partial_solution);
      for (int i = start; i < nums.size(); i++){
        partial_solution.push_back(nums[i]);
        check_subsets(nums, solutions, partial_solution, i + 1);
        partial_solution.pop_back();
      }
    }
};
